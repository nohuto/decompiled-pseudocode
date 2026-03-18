/*
 * XREFs of PsLookupThreadByThreadId @ 0x14084E700
 * Callers:
 *     NtAlertMultipleThreadByThreadId @ 0x14076C5D0 (NtAlertMultipleThreadByThreadId.c)
 *     PsOpenThread @ 0x1408430F0 (PsOpenThread.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     PopManageTransitionRecordRequest @ 0x1409225C8 (PopManageTransitionRecordRequest.c)
 *     PopInitSystemSleeperThread @ 0x140A16CC8 (PopInitSystemSleeperThread.c)
 *     PsLookupProcessThreadByCid @ 0x140A231A0 (PsLookupProcessThreadByCid.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140AADF0C (PfpServiceMainThreadBoostPrep.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14041A2C0 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14041D30C (ExfAcquireReleasePushLockExclusive.c)
 *     ExGetHandlePointer @ 0x140431FD0 (ExGetHandlePointer.c)
 *     IoThreadToProcess @ 0x140442EB0 (IoThreadToProcess.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14044CB0C (ExSlowReplenishHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140850180 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140851898 (ExpBlockOnLockedHandleEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  struct _KTHREAD *CurrentThread; // rsi
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
  bool v16; // zf
  __int64 v18; // rbx
  int v19; // r14d
  signed __int64 v20; // r8
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rax
  signed __int32 v26[8]; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v27[2]; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ((unsigned __int16)ThreadId & 0x3FC) != 0
    && (v4 = (_QWORD *)ExpLookupHandleTableEntry(PspCidTable, ThreadId), (v5 = v4) != 0LL) )
  {
    v6 = PspCidTable;
    _m_prefetchw(v4);
    v7 = *v4;
LABEL_4:
    v8 = v5[1];
    *(_QWORD *)&v27[0] = v7;
    v9 = v7;
    *((_QWORD *)&v27[0] + 1) = v8;
    do
    {
      if ( (v9 & 0x1FFFE) == 0 )
      {
        v18 = PspCidTable;
        v14 = 0;
        v19 = 0;
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v5);
            v20 = *v5;
            if ( (*v5 & 1) != 0 )
              break;
            if ( !v20 )
              goto LABEL_19;
            ExpBlockOnLockedHandleEntry(v18, v5);
          }
        }
        while ( v20 != _InterlockedCompareExchange64(v5, v20 - 1, v20) );
        HandlePointer = ExGetHandlePointer(v5);
        if ( (*(_BYTE *)HandlePointer & 0x7F) == 6 )
        {
          if ( (*(_DWORD *)(HandlePointer + 1440) & 3) == 2 )
            v19 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v5);
          _m_prefetchw((const void *)(HandlePointer - 48));
          v21 = *(_QWORD *)(HandlePointer - 48);
          while ( v21 )
          {
            v22 = v21;
            v21 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(HandlePointer - 48),
                    v21 + (unsigned int)(v19 + 1),
                    v21);
            if ( v22 == v21 )
            {
              ObpTraceObjectReferenceIfActive(HandlePointer - 48);
              goto LABEL_34;
            }
          }
          v25 = *v5 & 0xFFFFFFFFFFFE0001uLL;
          v27[1] = v25;
          *v5 = v25;
        }
        HandlePointer = 0LL;
LABEL_34:
        v23 = PspCidTable;
        _InterlockedIncrement64(v5);
        v24 = (_QWORD *)(v23 + 48);
        _InterlockedOr(v26, 0);
        if ( *v24 )
          ExfUnblockPushLock((__int64)v24, 0LL);
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
      v9 = v10;
      v27[0] = v10;
      v8 = *((_QWORD *)&v10 + 1);
    }
    while ( !v11 );
    if ( (unsigned __int16)(v9 >> 1) == 16 )
      *(_QWORD *)&v27[0] = v9 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)((v9 >> 1) - 1));
    v12 = (_BYTE *)ExGetHandlePointer((__int64 *)v27);
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
      _InterlockedOr(v26, 0);
      if ( (*(_QWORD *)(HandlePointer + 1424) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(HandlePointer + 1424));
      if ( (*(_DWORD *)(HandlePointer + 1440) & 2) == 0 )
        goto LABEL_36;
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( PsIsProcessInSilo(*(struct _KPROCESS **)(HandlePointer + 544), CurrentServerSilo) )
    {
      *Thread = (PETHREAD)HandlePointer;
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
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v14;
}
