/*
 * XREFs of CmSetLastWriteTimeKey @ 0x140962C40
 * Callers:
 *     NtSetInformationKey @ 0x140960DB0 (NtSetInformationKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14047B08C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x14047F6A0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408707C4 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879FC0 (CmpGetKeyNodeForKcb.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14087D698 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x14087EED4 (CmpRundownUnitOfWork.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpCleanupKcbStack @ 0x14090AD10 (CmpCleanupKcbStack.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1409634D8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14096360C (CmpTryAcquireKcbIXLocks.c)
 *     CmpCleanupRollbackPacket @ 0x140964460 (CmpCleanupRollbackPacket.c)
 *     CmpPromoteKey @ 0x1409708BC (CmpPromoteKey.c)
 *     CmAddLogForAction @ 0x140A01858 (CmAddLogForAction.c)
 *     CmpLockIXLockIntent @ 0x140A22FF4 (CmpLockIXLockIntent.c)
 *     CmpAllocateUnitOfWork @ 0x140A230A0 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockExclusive @ 0x140A230F8 (CmpLockIXLockExclusive.c)
 *     CmpAbortRollbackPacket @ 0x140AA17AC (CmpAbortRollbackPacket.c)
 *     CmpRetryBackOff @ 0x140AB45A0 (CmpRetryBackOff.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140BBBA84 (CmpIsShutdownRundownActive.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  ULONG_PTR v6; // rdi
  char v7; // r15
  int started; // ebx
  __int64 v9; // r8
  __int64 v10; // r14
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *UnitOfWork; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-49h] BYREF
  __int128 v22; // [rsp+38h] [rbp-41h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+48h] [rbp-31h]
  int v24; // [rsp+58h] [rbp-21h] BYREF
  __int128 v25; // [rsp+60h] [rbp-19h] BYREF
  __int64 v26; // [rsp+70h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-1h] BYREF

  v21 = 0LL;
  v26 = 0LL;
  v24 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  HvpGetCellContextInitialize(&v21);
  v22 = 0LL;
  WORD1(v22) = -1;
  *(_OWORD *)Privileges = 0LL;
  v25 = 0LL;
  CmpAttachToRegistryProcess(&ApcState);
  while ( !(unsigned __int8)CmpIsShutdownRundownActive(v4) )
  {
    CmpLockRegistry(v5);
    v6 = a1[1];
    v7 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_40;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v22, a1[1]);
    if ( started < 0 )
      goto LABEL_40;
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v22);
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_37;
    if ( *(_BYTE *)(v6 + 65) == 1 )
    {
      started = -1073741790;
      goto LABEL_37;
    }
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v26);
      if ( started < 0 )
        goto LABEL_37;
      v10 = v26;
      started = CmpPerformKeyBodyDeletionCheck(a1, v26);
      if ( started < 0 )
        goto LABEL_37;
      v11 = *(unsigned int *)(*(_QWORD *)(v6 + 32) + 160LL);
      if ( (v11 & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_37;
      }
      if ( v10 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v11);
        v18 = UnitOfWork;
        if ( !UnitOfWork )
        {
          started = -1073741670;
LABEL_37:
          CmpUnlockKcbStack((__int64)&v22);
          goto LABEL_40;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v6);
        started = CmpTransEnlistUowInCmTrans(v18, v10);
        if ( started >= 0 )
        {
          if ( (unsigned __int8)CmpLockIXLockIntent(v6 + 248, v18)
            && (unsigned __int8)CmpLockIXLockExclusive(v6 + 264, v18, 1LL) )
          {
            *((_DWORD *)v18 + 17) = 8;
            v18[11] = *a2;
            started = CmAddLogForAction(v18, 1LL);
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
        CmpRundownUnitOfWork(v18);
        ExFreePoolWithTag(v18, 0x77554D43u);
        goto LABEL_37;
      }
    }
    v12 = CmpTryAcquireKcbIXLocks(v6, 0LL, v9, &v25);
    started = v12;
    if ( v12 == -1073741267 )
    {
      CmpLogTransactionAbortedWithChildName(v6, 0LL, 2LL);
      CmpUnlockKcbStack((__int64)&v22);
      CmpCleanupKcbStack((__int64)&v22);
      v22 = 0LL;
      WORD1(v22) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v13);
      v7 = 0;
      started = CmpAbortRollbackPacket(&v25, 0LL);
      if ( started < 0 )
        goto LABEL_40;
      CmpRetryBackOff(&v24);
      CmpCleanupRollbackPacket(&v25);
      v25 = 0LL;
    }
    else
    {
      if ( v12 < 0 )
        goto LABEL_37;
      if ( *(_DWORD *)(v6 + 40) != -1 )
      {
        HvLockHiveFlusherShared(*(_QWORD *)(v6 + 32));
        started = HvpMarkCellDirty(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40), 0);
        if ( started >= 0 )
        {
          *(_QWORD *)(CmpGetKeyNodeForKcb(v6, (unsigned int *)&v21, 1) + 4) = *a2;
          v15 = *a2;
          v16 = *(_QWORD *)(v6 + 32);
          ++*(_QWORD *)(v6 + 304);
          *(_QWORD *)(v6 + 168) = v15;
          if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v16, (__int64)&v21);
          else
            HvpReleaseCellPaged(v16, (unsigned int *)&v21);
          started = 0;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v6 + 32));
        goto LABEL_37;
      }
      CmpUnlockKcbStack((__int64)&v22);
      started = CmpPromoteKey(&v22, 0LL, 0LL);
      if ( started < 0 )
        goto LABEL_40;
      CmpUnlockRegistry(v14);
      CmpCleanupKcbStack((__int64)&v22);
      v22 = 0LL;
      WORD1(v22) = -1;
      *(_OWORD *)Privileges = 0LL;
    }
  }
  started = -1073741431;
  v7 = 0;
LABEL_40:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket(&v25);
  if ( v7 )
    CmpUnlockRegistry(v19);
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)started;
}
