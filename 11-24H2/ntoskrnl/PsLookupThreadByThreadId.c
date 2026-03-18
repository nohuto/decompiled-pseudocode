/*
 * XREFs of PsLookupThreadByThreadId @ 0x14084A4B0
 * Callers:
 *     NtAlertMultipleThreadByThreadId @ 0x14077C170 (NtAlertMultipleThreadByThreadId.c)
 *     PsOpenThread @ 0x14083F680 (PsOpenThread.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     PopManageTransitionRecordRequest @ 0x14094E638 (PopManageTransitionRecordRequest.c)
 *     PopInitSystemSleeperThread @ 0x140A219E8 (PopInitSystemSleeperThread.c)
 *     PsLookupProcessThreadByCid @ 0x140A2C7F0 (PsLookupProcessThreadByCid.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140AB2FAC (PfpServiceMainThreadBoostPrep.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14040EF20 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140418A5C (ExfAcquireReleasePushLockExclusive.c)
 *     ExGetHandlePointer @ 0x1404275E0 (ExGetHandlePointer.c)
 *     IoThreadToProcess @ 0x140441CC0 (IoThreadToProcess.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140445670 (ExSlowReplenishHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14084BF30 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14084DA70 (ExpBlockOnLockedHandleEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  struct _KTHREAD *CurrentThread; // rsi
  PETHREAD *v3; // r15
  _QWORD *v4; // rax
  signed __int64 *v5; // rdi
  __int64 v6; // rbp
  signed __int64 v7; // rax
  signed __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int128 v10; // rt0
  unsigned __int8 v11; // tt
  _BYTE *v12; // rax
  unsigned __int64 HandlePointer; // rbx
  NTSTATUS v14; // ebp
  unsigned __int64 CurrentServerSilo; // rax
  $81B80DCEA5A02D890AB7B2872B48AC01 *v17; // rcx
  __int64 v19; // rbx
  int v20; // r14d
  signed __int64 v21; // r8
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  unsigned __int64 v26; // rax
  signed __int32 v27[8]; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v28[2]; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = Thread;
  if ( ((unsigned __int16)ThreadId & 0x3FC) != 0
    && (v4 = (_QWORD *)ExpLookupHandleTableEntry(PspCidTable, ThreadId), (v5 = v4) != 0LL) )
  {
    v6 = PspCidTable;
    _m_prefetchw(v4);
    v7 = *v4;
LABEL_4:
    v8 = v5[1];
    *(_QWORD *)&v28[0] = v7;
    v9 = v7;
    *((_QWORD *)&v28[0] + 1) = v8;
    do
    {
      if ( (v9 & 0x1FFFE) == 0 )
      {
        v19 = PspCidTable;
        v14 = 0;
        v20 = 0;
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v5);
            v21 = *v5;
            if ( (*v5 & 1) != 0 )
              break;
            if ( !v21 )
              goto LABEL_19;
            ExpBlockOnLockedHandleEntry(v19, v5);
          }
        }
        while ( v21 != _InterlockedCompareExchange64(v5, v21 - 1, v21) );
        HandlePointer = ExGetHandlePointer(v5);
        if ( (*(_BYTE *)HandlePointer & 0x7F) == 6 )
        {
          if ( (*(_DWORD *)(HandlePointer + 1440) & 3) == 2 )
            v20 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v5);
          Thread = (PETHREAD *)(unsigned int)(v20 + 1);
          _m_prefetchw((const void *)(HandlePointer - 48));
          v22 = *(_QWORD *)(HandlePointer - 48);
          while ( v22 )
          {
            v23 = v22;
            v22 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(HandlePointer - 48),
                    v22 + (unsigned int)Thread,
                    v22);
            if ( v23 == v22 )
            {
              ObpTraceObjectReferenceIfActive(HandlePointer - 48);
              goto LABEL_34;
            }
          }
          v26 = *v5 & 0xFFFFFFFFFFFE0001uLL;
          v28[1] = v26;
          *v5 = v26;
        }
        HandlePointer = 0LL;
LABEL_34:
        v24 = PspCidTable;
        _InterlockedIncrement64(v5);
        v25 = (_QWORD *)(v24 + 48);
        _InterlockedOr(v27, 0);
        if ( *v25 )
          ExfUnblockPushLock((__int64)v25, 0LL);
        goto LABEL_13;
      }
      if ( (v9 & 1) == 0 )
      {
        ExpBlockOnLockedHandleEntry(v6, v5);
        _m_prefetchw(v5);
        v7 = *v5;
        goto LABEL_4;
      }
      *(_QWORD *)&v10 = v9;
      *((_QWORD *)&v10 + 1) = v8;
      v11 = _InterlockedCompareExchange128(v5, v8, v9 - 2, (signed __int64 *)&v10);
      Thread = (PETHREAD *)*((_QWORD *)&v10 + 1);
      v9 = v10;
      v28[0] = v10;
      v8 = *((_QWORD *)&v10 + 1);
    }
    while ( !v11 );
    if ( (unsigned __int16)(v9 >> 1) == 16 )
      *(_QWORD *)&v28[0] = v9 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)((v9 >> 1) - 1));
    v12 = (_BYTE *)ExGetHandlePointer((__int64 *)v28);
    HandlePointer = (unsigned __int64)v12;
    if ( (*v12 & 0x7F) != 6 )
    {
      ObfDereferenceObject(v12);
      goto LABEL_19;
    }
    v14 = 0;
LABEL_13:
    if ( !HandlePointer )
      goto LABEL_19;
    if ( IoThreadToProcess((PETHREAD)HandlePointer) == PsIdleProcess )
      goto LABEL_36;
    if ( (*(_DWORD *)(HandlePointer + 1440) & 2) == 0 )
    {
      _InterlockedOr(v27, 0);
      if ( (*(_QWORD *)(HandlePointer + 1424) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(HandlePointer + 1424));
      if ( (*(_DWORD *)(HandlePointer + 1440) & 2) == 0 )
        goto LABEL_36;
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( PsIsProcessInSilo(*(struct _KPROCESS **)(HandlePointer + 544), CurrentServerSilo) )
    {
      *v3 = (PETHREAD)HandlePointer;
    }
    else
    {
LABEL_36:
      v14 = -1073741813;
      ObfDereferenceObject((PVOID)HandlePointer);
    }
  }
  else
  {
LABEL_19:
    v14 = -1073741813;
  }
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v17 = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v17->ApcState.ApcListHead[0].Flink != v17 )
      KiCheckForKernelApcDelivery((__int64)v17, (__int64)Thread);
  }
  return v14;
}
