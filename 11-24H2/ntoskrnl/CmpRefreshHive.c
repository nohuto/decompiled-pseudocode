/*
 * XREFs of CmpRefreshHive @ 0x1407CEFE0
 * Callers:
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D8440 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407D84D0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpSwapHiveStorage @ 0x1407DECCC (CmpSwapHiveStorage.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086D654 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpRebuildKcbCache @ 0x14087F358 (CmpRebuildKcbCache.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     CmpCleanUpKCBCacheTable @ 0x14096478C (CmpCleanUpKCBCacheTable.c)
 *     CmpDestroyHive @ 0x14096495C (CmpDestroyHive.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A46048 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BBBAD0 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BBBB10 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  char v2; // si
  char v3; // r15
  struct _PRIVILEGE_SET *Pool; // r12
  ULONG_PTR v5; // r13
  ULONG_PTR v6; // rdi
  int Hive; // ebx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // r9d
  __int64 v11; // rcx
  ULONG_PTR v13; // rdx
  __int64 CellFlat; // rax
  __int64 v15; // r14
  __int64 CellPaged; // rax
  __int64 v17; // r15
  int v18; // eax
  int v19; // [rsp+20h] [rbp-79h]
  __int64 v20; // [rsp+70h] [rbp-29h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-21h] BYREF
  __int128 v22; // [rsp+80h] [rbp-19h] BYREF
  _OWORD v23[6]; // [rsp+90h] [rbp-9h] BYREF
  BOOLEAN v24; // [rsp+108h] [rbp+6Fh]
  char UnloadRundown; // [rsp+110h] [rbp+77h]
  __int64 v26; // [rsp+118h] [rbp+7Fh] BYREF

  v26 = 0LL;
  v20 = 0LL;
  memset(v23, 0, 32);
  v24 = 0;
  v2 = 0;
  v3 = 0;
  BugCheckParameter3 = 0LL;
  v22 = 0LL;
  Pool = 0LL;
  HvpGetCellContextInitialize(&v26);
  HvpGetCellContextInitialize(&v20);
  CmpInitializeDelayDerefContext(&v22);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 32);
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
    Hive = -1073741431;
    goto LABEL_28;
  }
  v24 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 1640));
  if ( !v24 )
  {
    Hive = -1073740763;
    goto LABEL_28;
  }
  CmpBecomeActiveFlusherAndReconciler(v6);
  v2 = 1;
  CmpLockRegistry();
  v3 = 1;
  CmpLockKcbShared(v5);
  Hive = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( Hive < 0 )
    goto LABEL_8;
  if ( *(_BYTE *)(v6 + 2944) == 1 )
  {
    Hive = -1073741431;
LABEL_8:
    CmpUnlockKcb(v5);
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(v6 + 160) & 2) == 0 )
    goto LABEL_13;
  HvLockHiveFlusherShared(v6);
  HvLockHiveWriter(v6);
  if ( *(_DWORD *)(v6 + 912) )
  {
    Hive = -1073741823;
    HvUnlockHiveWriter(v6);
    HvUnlockHiveFlusherShared(v6);
    goto LABEL_8;
  }
  HvUnlockHiveWriter(v6);
  HvUnlockHiveFlusherShared(v6);
  if ( (*(_DWORD *)(v5 + 184) & 0x40000) == 0 )
  {
LABEL_13:
    Hive = -1073741811;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v6 + 2920) )
  {
    Hive = -1073741823;
    goto LABEL_8;
  }
  CmpUnlockKcb(v5);
  CmpUnlockRegistry(v8);
  v3 = 0;
  Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL, 0x1B0uLL, 0x33394D43u);
  if ( !Pool )
  {
    Hive = -1073741670;
    goto LABEL_28;
  }
  memset((char *)v23 + 8, 0, 24);
  *(_QWORD *)&v23[0] = *(_QWORD *)(v6 + 1544);
  v9 = *(_DWORD *)(v6 + 168);
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v10 = 1;
      *((_QWORD *)&v23[0] + 1) = *(_QWORD *)(v6 + 1552);
    }
    else
    {
      v10 = 2;
      *(_OWORD *)((char *)v23 + 8) = *(_OWORD *)(v6 + 1576);
    }
  }
  else
  {
    v10 = 0;
  }
  Hive = CmpCreateHive(
           (unsigned int)&BugCheckParameter3,
           2,
           *(_DWORD *)(v6 + 160) & 0xFFFEFFFF,
           v10,
           0LL,
           (__int64)v23,
           0LL,
           (*(_DWORD *)(v6 + 4112) & 0x10000) != 0 ? 18415650 : 18415682,
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
    if ( *(_BYTE *)(v6 + 2944) == 1 )
    {
      Hive = -1073741431;
      goto LABEL_27;
    }
    if ( (*(_DWORD *)(v6 + 160) & 2) == 0 )
    {
LABEL_42:
      Hive = -1073741811;
      goto LABEL_27;
    }
    if ( !*(_DWORD *)(v6 + 912) )
    {
      if ( (*(_DWORD *)(v5 + 184) & 0x40000) == 0 )
        goto LABEL_42;
      if ( !*(_DWORD *)(v6 + 2920) )
      {
        v13 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
        if ( (_DWORD)v13 == *(_DWORD *)(*(_QWORD *)(v6 + 64) + 36LL) )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(BugCheckParameter3, v13);
          else
            CellFlat = HvpGetCellPaged(BugCheckParameter3);
          v15 = CellFlat;
          if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
            CellPaged = HvpGetCellFlat(v6, *(unsigned int *)(*(_QWORD *)(v6 + 64) + 36LL));
          else
            CellPaged = HvpGetCellPaged(v6);
          v17 = CellPaged;
          Hive = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL));
          if ( Hive < 0 )
          {
            if ( v17 )
            {
              if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v6, &v26);
              else
                HvpReleaseCellPaged(v6, &v26);
            }
            if ( v15 )
            {
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, &v20);
              else
                HvpReleaseCellPaged(BugCheckParameter3, &v20);
            }
          }
          else
          {
            v18 = *(_DWORD *)(v17 + 16);
            *(_WORD *)(v15 + 2) |= 0xCu;
            *(_DWORD *)(v15 + 16) = v18;
            if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v6, &v26);
            else
              HvpReleaseCellPaged(v6, &v26);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, &v20);
            else
              HvpReleaseCellPaged(BugCheckParameter3, &v20);
            CmpCleanUpKCBCacheTable(v6);
            LOBYTE(v19) = 1;
            CmpSearchKeyControlBlockTreeEx(CmpRefreshWorkerRoutine, v6, &v22, 0LL, v19);
            CmpFlushNotifiesOnKeyBodyList(v5, 0LL, &v22);
            CmpSwapHiveStorage(v6, BugCheckParameter3);
            CmpRebuildKcbCache(v5);
            ++*(_DWORD *)(v6 + 212);
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
  CmpDrainDelayDerefContext((_QWORD **)&v22);
  if ( v3 )
    CmpUnlockRegistry(v11);
  if ( v2 )
    CmpFinishBeingActiveFlusherAndReconciler(v6);
  if ( v24 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 1640));
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( BugCheckParameter3 )
    CmpDestroyHive(BugCheckParameter3);
  if ( Pool )
    CmSiFreeMemory(Pool);
  return (unsigned int)Hive;
}
