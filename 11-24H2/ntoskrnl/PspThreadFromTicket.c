/*
 * XREFs of PspThreadFromTicket @ 0x140912E70
 * Callers:
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
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

__int64 __fastcall PspThreadFromTicket(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v2; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 *v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int128 v12; // rt0
  unsigned __int8 v13; // tt
  unsigned __int8 *v14; // rax
  unsigned __int64 HandlePointer; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  int v17; // edi
  bool v18; // zf
  __int64 v20; // rbx
  int v21; // r14d
  __int64 v22; // r8
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  signed __int32 v27[8]; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v28[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v29; // [rsp+60h] [rbp+8h]

  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v29 = PspWorkOnBehalfEncodingKey ^ *a1;
  v5 = (int)v29;
  --CurrentThread->SpecialApcDisable;
  v6 = PspCidTable;
  if ( (v29 & 0x3FC) != 0
    && (v7 = (unsigned __int64 *)ExpLookupHandleTableEntry((unsigned int *)PspCidTable, (int)v29),
        (v8 = (__int64 *)v7) != 0LL) )
  {
    v9 = PspCidTable;
    _m_prefetchw(v7);
    v10 = *v7;
LABEL_4:
    v6 = v8[1];
    *(_QWORD *)&v28[0] = v10;
    v11 = v10;
    *((_QWORD *)&v28[0] + 1) = v6;
    do
    {
      if ( (v11 & 0x1FFFE) == 0 )
      {
        v20 = PspCidTable;
        v21 = 0;
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v8);
            v22 = *v8;
            if ( (*v8 & 1) != 0 )
              break;
            if ( !v22 )
              goto LABEL_18;
            ExpBlockOnLockedHandleEntry(v20, v8, v22);
          }
          v6 = v22 - 1;
        }
        while ( v22 != _InterlockedCompareExchange64(v8, v22 - 1, v22) );
        HandlePointer = ExGetHandlePointer(v8);
        if ( (*(_BYTE *)HandlePointer & 0x7F) == 6 )
        {
          if ( (*(_DWORD *)(HandlePointer + 1440) & 3) == 2 )
            v21 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v8);
          v5 = (unsigned int)(v21 + 1);
          _m_prefetchw((const void *)(HandlePointer - 48));
          v23 = *(_QWORD *)(HandlePointer - 48);
          while ( v23 )
          {
            v24 = v23;
            v23 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(HandlePointer - 48),
                    v23 + (unsigned int)v5,
                    v23);
            if ( v24 == v23 )
            {
              ObpTraceObjectReferenceIfActive(HandlePointer - 48);
              goto LABEL_39;
            }
          }
          v26 = *v8 & 0xFFFFFFFFFFFE0001uLL;
          v28[1] = v26;
          *v8 = v26;
        }
        HandlePointer = 0LL;
LABEL_39:
        v25 = PspCidTable;
        _InterlockedIncrement64(v8);
        v6 = v25 + 48;
        _InterlockedOr(v27, 0);
        if ( *(_QWORD *)v6 )
          ExfUnblockPushLock(v6, 0LL);
        goto LABEL_12;
      }
      if ( (v11 & 1) == 0 )
      {
        ExpBlockOnLockedHandleEntry(v9, v8, v11);
        _m_prefetchw(v8);
        v10 = *v8;
        goto LABEL_4;
      }
      *(_QWORD *)&v12 = v11;
      *((_QWORD *)&v12 + 1) = v6;
      v13 = _InterlockedCompareExchange128(v8, v6, v11 - 2, (signed __int64 *)&v12);
      v5 = *((_QWORD *)&v12 + 1);
      v11 = v12;
      v28[0] = v12;
      v6 = *((_QWORD *)&v12 + 1);
    }
    while ( !v13 );
    if ( (unsigned __int16)(v11 >> 1) == 16 )
      *(_QWORD *)&v28[0] = v11 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)((v11 >> 1) - 1));
    v14 = (unsigned __int8 *)ExGetHandlePointer((__int64 *)v28);
    HandlePointer = (unsigned __int64)v14;
    v6 = *v14;
    LOBYTE(v6) = v6 & 0x7F;
    if ( (_BYTE)v6 != 6 )
    {
      ObfDereferenceObject(v14);
      goto LABEL_18;
    }
LABEL_12:
    if ( !HandlePointer )
      goto LABEL_18;
    if ( IoThreadToProcess((PETHREAD)HandlePointer) == PsIdleProcess )
      goto LABEL_41;
    if ( (*(_DWORD *)(HandlePointer + 1440) & 2) == 0 )
    {
      _InterlockedOr(v27, 0);
      if ( (*(_QWORD *)(HandlePointer + 1424) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(HandlePointer + 1424));
      if ( (*(_DWORD *)(HandlePointer + 1440) & 2) == 0 )
        goto LABEL_41;
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( PsIsProcessInSilo(*(struct _KPROCESS **)(HandlePointer + 544), CurrentServerSilo) )
    {
      v2 = (_DWORD *)HandlePointer;
      v17 = 0;
    }
    else
    {
LABEL_41:
      v17 = -1073741813;
      ObfDereferenceObject((PVOID)HandlePointer);
    }
  }
  else
  {
LABEL_18:
    v17 = -1073741813;
  }
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v6, v5);
  if ( v17 >= 0 )
  {
    if ( (v2[360] & 1) == 0 && v2[304] == HIDWORD(v29) )
    {
      *a2 = v2;
      return 0LL;
    }
    v17 = -1073741275;
  }
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)v17;
}
