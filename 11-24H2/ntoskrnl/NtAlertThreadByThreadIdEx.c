/*
 * XREFs of NtAlertThreadByThreadIdEx @ 0x1409A5CD0
 * Callers:
 *     NtAlertThreadByThreadId @ 0x1409A5CB0 (NtAlertThreadByThreadId.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeAlertThreadByThreadIdEx @ 0x140338518 (KeAlertThreadByThreadIdEx.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14040EF20 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140418A5C (ExfAcquireReleasePushLockExclusive.c)
 *     ExGetHandlePointer @ 0x1404275E0 (ExGetHandlePointer.c)
 *     KeAbIsValidUserModeLockAddress @ 0x140429550 (KeAbIsValidUserModeLockAddress.c)
 *     IoThreadToProcess @ 0x140441CC0 (IoThreadToProcess.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140445670 (ExSlowReplenishHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14084BF30 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14084DA70 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall NtAlertThreadByThreadIdEx(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _KTHREAD *v3; // rsi
  __int64 v4; // r14
  unsigned __int64 *v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  signed __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int128 v11; // rt0
  unsigned __int8 v12; // tt
  _BYTE *v13; // rax
  unsigned __int64 HandlePointer; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  int v16; // edi
  $81B80DCEA5A02D890AB7B2872B48AC01 *v18; // rcx
  __int64 v20; // rbx
  int v21; // r13d
  __int64 v22; // r8
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  __int64 v25; // rcx
  _QWORD *v26; // rcx
  unsigned __int64 v27; // rax
  signed __int32 v28[8]; // [rsp+0h] [rbp-68h] BYREF
  _OWORD v29[2]; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = a2;
  --CurrentThread->SpecialApcDisable;
  if ( (a1 & 0x3FC) != 0
    && (v5 = (unsigned __int64 *)ExpLookupHandleTableEntry((unsigned int *)PspCidTable, a1), (v6 = (__int64 *)v5) != 0LL) )
  {
    v7 = PspCidTable;
    _m_prefetchw(v5);
    v8 = *v5;
LABEL_4:
    v9 = v6[1];
    *(_QWORD *)&v29[0] = v8;
    v10 = v8;
    *((_QWORD *)&v29[0] + 1) = v9;
    do
    {
      if ( (v10 & 0x1FFFE) == 0 )
      {
        v20 = PspCidTable;
        v21 = 0;
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v6);
            v22 = *v6;
            if ( (*v6 & 1) != 0 )
              break;
            if ( !v22 )
              goto LABEL_18;
            ExpBlockOnLockedHandleEntry(v20, v6, v22);
          }
        }
        while ( v22 != _InterlockedCompareExchange64(v6, v22 - 1, v22) );
        HandlePointer = ExGetHandlePointer(v6);
        if ( (*(_BYTE *)HandlePointer & 0x7F) == 6 )
        {
          if ( (*(_DWORD *)(HandlePointer + 1440) & 3) == 2 )
            v21 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v6);
          a2 = (unsigned int)(v21 + 1);
          _m_prefetchw((const void *)(HandlePointer - 48));
          v23 = *(_QWORD *)(HandlePointer - 48);
          while ( v23 )
          {
            v24 = v23;
            v23 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(HandlePointer - 48),
                    v23 + (unsigned int)a2,
                    v23);
            if ( v24 == v23 )
            {
              ObpTraceObjectReferenceIfActive(HandlePointer - 48);
              goto LABEL_39;
            }
          }
          v27 = *v6 & 0xFFFFFFFFFFFE0001uLL;
          v29[1] = v27;
          *v6 = v27;
        }
        HandlePointer = 0LL;
LABEL_39:
        v25 = PspCidTable;
        _InterlockedIncrement64(v6);
        v26 = (_QWORD *)(v25 + 48);
        _InterlockedOr(v28, 0);
        if ( *v26 )
          ExfUnblockPushLock((__int64)v26, 0LL);
        goto LABEL_12;
      }
      if ( (v10 & 1) == 0 )
      {
        ExpBlockOnLockedHandleEntry(v7, v6, v10);
        _m_prefetchw(v6);
        v8 = *v6;
        goto LABEL_4;
      }
      *(_QWORD *)&v11 = v10;
      *((_QWORD *)&v11 + 1) = v9;
      v12 = _InterlockedCompareExchange128(v6, v9, v10 - 2, (signed __int64 *)&v11);
      a2 = *((_QWORD *)&v11 + 1);
      v10 = v11;
      v29[0] = v11;
      v9 = *((_QWORD *)&v11 + 1);
    }
    while ( !v12 );
    if ( (unsigned __int16)(v10 >> 1) == 16 )
      *(_QWORD *)&v29[0] = v10 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)((v10 >> 1) - 1));
    v13 = (_BYTE *)ExGetHandlePointer((__int64 *)v29);
    HandlePointer = (unsigned __int64)v13;
    if ( (*v13 & 0x7F) != 6 )
    {
      ObfDereferenceObject(v13);
      goto LABEL_18;
    }
LABEL_12:
    if ( !HandlePointer )
      goto LABEL_18;
    if ( IoThreadToProcess((PETHREAD)HandlePointer) == PsIdleProcess )
      goto LABEL_41;
    if ( (*(_DWORD *)(HandlePointer + 1440) & 2) == 0 )
    {
      _InterlockedOr(v28, 0);
      if ( (*(_QWORD *)(HandlePointer + 1424) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(HandlePointer + 1424));
      if ( (*(_DWORD *)(HandlePointer + 1440) & 2) == 0 )
        goto LABEL_41;
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( PsIsProcessInSilo(*(struct _KPROCESS **)(HandlePointer + 544), CurrentServerSilo) )
    {
      v3 = (struct _KTHREAD *)HandlePointer;
      v16 = 0;
    }
    else
    {
LABEL_41:
      v16 = -1073741813;
      ObfDereferenceObject((PVOID)HandlePointer);
    }
  }
  else
  {
LABEL_18:
    v16 = -1073741813;
  }
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v18 = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v18->ApcState.ApcListHead[0].Flink != v18 )
      KiCheckForKernelApcDelivery((__int64)v18, a2);
  }
  if ( v16 < 0 )
    return (unsigned int)v16;
  if ( v3->Process == CurrentThread->Process )
  {
    if ( CurrentThread == v3 || !KeAbIsValidUserModeLockAddress(v4) )
      v4 = 0LL;
    KeAlertThreadByThreadIdEx((__int64)v3, v4);
    ObfDereferenceObject(v3);
    return 0LL;
  }
  else
  {
    ObfDereferenceObject(v3);
    return 3221225506LL;
  }
}
