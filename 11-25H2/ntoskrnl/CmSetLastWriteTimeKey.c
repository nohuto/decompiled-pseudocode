/*
 * XREFs of CmSetLastWriteTimeKey @ 0x1408639C0
 * Callers:
 *     NtSetInformationKey @ 0x140862E30 (NtSetInformationKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14047F774 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404838EC (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140863F7C (CmpLogTransactionAbortedWithChildName.c)
 *     CmpCleanupRollbackPacket @ 0x140865348 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x140865768 (CmpTryAcquireKcbIXLocks.c)
 *     CmAddLogForAction @ 0x140868A1C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14086901C (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140869074 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140869120 (CmpLockIXLockExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14086B298 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140870454 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockKcbStack @ 0x1408713D0 (CmpUnlockKcbStack.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879920 (CmpGetKeyNodeForKcb.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     CmpRundownUnitOfWork @ 0x140885C90 (CmpRundownUnitOfWork.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpPromoteKey @ 0x140972D04 (CmpPromoteKey.c)
 *     CmpCleanupKcbStack @ 0x140975FA0 (CmpCleanupKcbStack.c)
 *     CmpAbortRollbackPacket @ 0x140AA1760 (CmpAbortRollbackPacket.c)
 *     CmpRetryBackOff @ 0x140AB50F4 (CmpRetryBackOff.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140BA9B0C (CmpIsShutdownRundownActive.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(_QWORD *a1, _QWORD *a2)
{
  __int128 v2; // xmm0
  __int64 v5; // rcx
  __int64 v6; // rcx
  ULONG_PTR v7; // rdi
  char v8; // r15
  int started; // ebx
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *UnitOfWork; // rax
  ULONG_PTR v20; // rsi
  __int64 v21; // rcx
  __int64 v23; // [rsp+30h] [rbp-49h] BYREF
  __int128 v24; // [rsp+38h] [rbp-41h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+48h] [rbp-31h]
  int v26; // [rsp+58h] [rbp-21h] BYREF
  __int128 v27; // [rsp+60h] [rbp-19h] BYREF
  __int64 v28; // [rsp+70h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-1h] BYREF

  v23 = 0LL;
  v2 = 0LL;
  v28 = 0LL;
  v26 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  *(double *)&v2 = HvpGetCellContextInitialize(&v23);
  v24 = v2;
  WORD1(v24) = -1;
  *(_OWORD *)Privileges = v2;
  v27 = v2;
  CmpAttachToRegistryProcess(&ApcState);
  while ( !(unsigned __int8)CmpIsShutdownRundownActive(v5) )
  {
    CmpLockRegistry(v6);
    v7 = a1[1];
    v8 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_40;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v24, a1[1]);
    if ( started < 0 )
      goto LABEL_40;
    CmpLockKcbStackTopExclusiveRestShared(&v24);
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_37;
    if ( *(_BYTE *)(v7 + 65) == 1 )
    {
      started = -1073741790;
      goto LABEL_37;
    }
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v28);
      if ( started < 0 )
        goto LABEL_37;
      v11 = v28;
      started = CmpPerformKeyBodyDeletionCheck(a1, v28);
      if ( started < 0 )
        goto LABEL_37;
      v12 = *(unsigned int *)(*(_QWORD *)(v7 + 32) + 160LL);
      if ( (v12 & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_37;
      }
      if ( v11 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v12);
        v20 = (ULONG_PTR)UnitOfWork;
        if ( !UnitOfWork )
        {
          started = -1073741670;
LABEL_37:
          CmpUnlockKcbStack(&v24);
          goto LABEL_40;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v7);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v20, v11);
        if ( started >= 0 )
        {
          if ( (unsigned __int8)CmpLockIXLockIntent(v7 + 248, v20)
            && (unsigned __int8)CmpLockIXLockExclusive(v7 + 264, v20, 1LL) )
          {
            *(_DWORD *)(v20 + 68) = 8;
            *(_QWORD *)(v20 + 88) = *a2;
            started = CmAddLogForAction(v20, 1LL);
            if ( started >= 0 )
            {
              started = 0;
              goto LABEL_37;
            }
          }
          else
          {
            started = -1072103423;
          }
        }
        CmpRundownUnitOfWork(v20);
        ExFreePoolWithTag((PVOID)v20, 0x77554D43u);
        goto LABEL_37;
      }
    }
    v13 = CmpTryAcquireKcbIXLocks(v7, 0LL, v10, &v27);
    started = v13;
    if ( v13 == -1073741267 )
    {
      CmpLogTransactionAbortedWithChildName(v7, 0LL, 2LL);
      CmpUnlockKcbStack(&v24);
      CmpCleanupKcbStack(&v24);
      v24 = 0LL;
      WORD1(v24) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v14);
      v8 = 0;
      started = CmpAbortRollbackPacket(&v27, 0LL);
      if ( started < 0 )
        goto LABEL_40;
      CmpRetryBackOff(&v26);
      CmpCleanupRollbackPacket(&v27);
      v27 = 0LL;
    }
    else
    {
      if ( v13 < 0 )
        goto LABEL_37;
      if ( *(_DWORD *)(v7 + 40) != -1 )
      {
        HvLockHiveFlusherShared(*(_QWORD *)(v7 + 32));
        started = HvpMarkCellDirty(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40));
        if ( started >= 0 )
        {
          LOBYTE(v16) = 1;
          *(_QWORD *)(CmpGetKeyNodeForKcb(v7, &v23, v16) + 4) = *a2;
          v17 = *a2;
          v18 = *(_QWORD *)(v7 + 32);
          ++*(_QWORD *)(v7 + 304);
          *(_QWORD *)(v7 + 168) = v17;
          if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v18, &v23);
          else
            HvpReleaseCellPaged(v18, &v23);
          started = 0;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v7 + 32));
        goto LABEL_37;
      }
      CmpUnlockKcbStack(&v24);
      started = CmpPromoteKey(&v24, 0LL, 0LL);
      if ( started < 0 )
        goto LABEL_40;
      CmpUnlockRegistry(v15);
      CmpCleanupKcbStack(&v24);
      v24 = 0LL;
      WORD1(v24) = -1;
      *(_OWORD *)Privileges = 0LL;
    }
  }
  started = -1073741431;
  v8 = 0;
LABEL_40:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket(&v27);
  if ( v8 )
    CmpUnlockRegistry(v21);
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)started;
}
