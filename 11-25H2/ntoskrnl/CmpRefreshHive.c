/*
 * XREFs of CmpRefreshHive @ 0x1407BF2D8
 * Callers:
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407C8754 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407C87E4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpSwapHiveStorage @ 0x1407CEEA4 (CmpSwapHiveStorage.c)
 *     CmpCleanUpKCBCacheTable @ 0x140865674 (CmpCleanUpKCBCacheTable.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086DF70 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     HvLockHiveWriter @ 0x140880B44 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140880F30 (HvUnlockHiveWriter.c)
 *     CmpRebuildKcbCache @ 0x140885EF0 (CmpRebuildKcbCache.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 *     CmpDestroyHive @ 0x1409F4BE0 (CmpDestroyHive.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A5691C (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     HvpGetBinContextInitialize @ 0x140BA99C0 (HvpGetBinContextInitialize.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BA9B58 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BA9B98 (CmpReleaseHiveLoadUnloadRundown.c)
 */

__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  char v2; // si
  char v3; // r15
  struct _PRIVILEGE_SET *Pool; // r12
  unsigned int v5; // edx
  ULONG_PTR v6; // r13
  ULONG_PTR v7; // rdi
  int Hive; // ebx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // r9d
  __int64 v12; // rcx
  ULONG_PTR v14; // rdx
  __int64 CellFlat; // rax
  __int64 v16; // r14
  __int64 CellPaged; // rax
  __int64 v18; // r15
  int v19; // eax
  int v20; // [rsp+20h] [rbp-79h]
  __int64 v21; // [rsp+70h] [rbp-29h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-21h] BYREF
  __int128 v23; // [rsp+80h] [rbp-19h] BYREF
  _OWORD v24[6]; // [rsp+90h] [rbp-9h] BYREF
  BOOLEAN v25; // [rsp+108h] [rbp+6Fh]
  char UnloadRundown; // [rsp+110h] [rbp+77h]
  __int64 v27; // [rsp+118h] [rbp+7Fh] BYREF

  v25 = 0;
  v27 = 0xFFFFFFFFLL;
  memset(v24, 0, 32);
  v2 = 0;
  v3 = 0;
  BugCheckParameter3 = 0LL;
  Pool = 0LL;
  v23 = 0LL;
  HvpGetBinContextInitialize((char *)&v27 + 4);
  v21 = v5;
  HvpGetBinContextInitialize((char *)&v21 + 4);
  CmpInitializeDelayDerefContext(&v23);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(v6 + 32);
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
    Hive = -1073741431;
    goto LABEL_28;
  }
  v25 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v7 + 1640));
  if ( !v25 )
  {
    Hive = -1073740763;
    goto LABEL_28;
  }
  CmpBecomeActiveFlusherAndReconciler(v7);
  v2 = 1;
  CmpLockRegistry();
  v3 = 1;
  CmpLockKcbShared(v6);
  Hive = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( Hive < 0 )
    goto LABEL_8;
  if ( *(_BYTE *)(v7 + 2944) == 1 )
  {
    Hive = -1073741431;
LABEL_8:
    CmpUnlockKcb(v6);
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(v7 + 160) & 2) == 0 )
    goto LABEL_13;
  HvLockHiveFlusherShared(v7);
  HvLockHiveWriter(v7);
  if ( *(_DWORD *)(v7 + 912) )
  {
    Hive = -1073741823;
    HvUnlockHiveWriter(v7);
    HvUnlockHiveFlusherShared(v7);
    goto LABEL_8;
  }
  HvUnlockHiveWriter(v7);
  HvUnlockHiveFlusherShared(v7);
  if ( (*(_DWORD *)(v6 + 184) & 0x40000) == 0 )
  {
LABEL_13:
    Hive = -1073741811;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v7 + 2920) )
  {
    Hive = -1073741823;
    goto LABEL_8;
  }
  CmpUnlockKcb(v6);
  CmpUnlockRegistry(v9);
  v3 = 0;
  Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
  if ( !Pool )
  {
    Hive = -1073741670;
    goto LABEL_28;
  }
  memset((char *)v24 + 8, 0, 24);
  *(_QWORD *)&v24[0] = *(_QWORD *)(v7 + 1544);
  v10 = *(_DWORD *)(v7 + 168);
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v11 = 1;
      *((_QWORD *)&v24[0] + 1) = *(_QWORD *)(v7 + 1552);
    }
    else
    {
      v11 = 2;
      *(_OWORD *)((char *)v24 + 8) = *(_OWORD *)(v7 + 1576);
    }
  }
  else
  {
    v11 = 0;
  }
  Hive = CmpCreateHive(
           (unsigned int)&BugCheckParameter3,
           2,
           *(_DWORD *)(v7 + 160) & 0xFFFEFFFF,
           v11,
           0LL,
           (__int64)v24,
           0LL,
           (*(_DWORD *)(v7 + 4112) & 0x10000) != 0 ? 18415650 : 18415682,
           0LL,
           0LL,
           0LL,
           0LL,
           (__int64)Pool);
  if ( Hive >= 0 )
  {
    CmpLockRegistryExclusive();
    Hive = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( Hive < 0 )
    {
LABEL_27:
      v3 = 1;
      goto LABEL_28;
    }
    if ( *(_BYTE *)(v7 + 2944) == 1 )
    {
      Hive = -1073741431;
      goto LABEL_27;
    }
    if ( (*(_DWORD *)(v7 + 160) & 2) == 0 )
    {
LABEL_42:
      Hive = -1073741811;
      goto LABEL_27;
    }
    if ( !*(_DWORD *)(v7 + 912) )
    {
      if ( (*(_DWORD *)(v6 + 184) & 0x40000) == 0 )
        goto LABEL_42;
      if ( !*(_DWORD *)(v7 + 2920) )
      {
        v14 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
        if ( (_DWORD)v14 == *(_DWORD *)(*(_QWORD *)(v7 + 64) + 36LL) )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(BugCheckParameter3, v14);
          else
            CellFlat = HvpGetCellPaged(BugCheckParameter3);
          v16 = CellFlat;
          if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
            CellPaged = HvpGetCellFlat(v7, *(unsigned int *)(*(_QWORD *)(v7 + 64) + 36LL));
          else
            CellPaged = HvpGetCellPaged(v7);
          v18 = CellPaged;
          Hive = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL));
          if ( Hive < 0 )
          {
            if ( v18 )
            {
              if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v7, &v27);
              else
                HvpReleaseCellPaged(v7, &v27);
            }
            if ( v16 )
            {
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, &v21);
              else
                HvpReleaseCellPaged(BugCheckParameter3, &v21);
            }
          }
          else
          {
            v19 = *(_DWORD *)(v18 + 16);
            *(_WORD *)(v16 + 2) |= 0xCu;
            *(_DWORD *)(v16 + 16) = v19;
            if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v7, &v27);
            else
              HvpReleaseCellPaged(v7, &v27);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, &v21);
            else
              HvpReleaseCellPaged(BugCheckParameter3, &v21);
            CmpCleanUpKCBCacheTable(v7);
            LOBYTE(v20) = 1;
            CmpSearchKeyControlBlockTreeEx(CmpRefreshWorkerRoutine, v7, &v23, 0LL, v20);
            CmpFlushNotifiesOnKeyBodyList(v6, 0LL, &v23);
            CmpSwapHiveStorage(v7, BugCheckParameter3);
            CmpRebuildKcbCache(v6);
            ++*(_DWORD *)(v7 + 212);
            Hive = 0;
          }
          goto LABEL_27;
        }
        goto LABEL_42;
      }
    }
    Hive = -1073741823;
    goto LABEL_27;
  }
LABEL_28:
  CmpDrainDelayDerefContext((_QWORD **)&v23);
  if ( v3 )
    CmpUnlockRegistry(v12);
  if ( v2 )
    CmpFinishBeingActiveFlusherAndReconciler(v7);
  if ( v25 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v7 + 1640));
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( BugCheckParameter3 )
    CmpDestroyHive(BugCheckParameter3);
  if ( Pool )
    CmSiFreeMemory(Pool);
  return (unsigned int)Hive;
}
