/*
 * XREFs of PspThreadFromTicket @ 0x1408EA5C0
 * Callers:
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x140407120 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14040880C (ExfAcquireReleasePushLockExclusive.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     IoThreadToProcess @ 0x140438740 (IoThreadToProcess.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14043D820 (ExSlowReplenishHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall PspThreadFromTicket(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v2; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  signed __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int128 v11; // rt0
  unsigned __int8 v12; // tt
  _BYTE *v13; // rax
  unsigned __int64 HandlePointer; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  int v16; // edi
  bool v17; // zf
  __int64 v19; // rbx
  int v20; // r14d
  __int64 v21; // r8
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  unsigned __int64 v26; // rax
  signed __int32 v27[8]; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v28[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v29; // [rsp+60h] [rbp+8h]

  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v29 = PspWorkOnBehalfEncodingKey ^ *a1;
  --CurrentThread->SpecialApcDisable;
  if ( (v29 & 0x3FC) != 0
    && (v5 = (unsigned __int64 *)ExpLookupHandleTableEntry((unsigned int *)PspCidTable, (int)v29),
        (v6 = (__int64 *)v5) != 0LL) )
  {
    v7 = PspCidTable;
    _m_prefetchw(v5);
    v8 = *v5;
LABEL_4:
    v9 = v6[1];
    *(_QWORD *)&v28[0] = v8;
    v10 = v8;
    *((_QWORD *)&v28[0] + 1) = v9;
    do
    {
      if ( (v10 & 0x1FFFE) == 0 )
      {
        v19 = PspCidTable;
        v20 = 0;
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v6);
            v21 = *v6;
            if ( (*v6 & 1) != 0 )
              break;
            if ( !v21 )
              goto LABEL_18;
            ExpBlockOnLockedHandleEntry(v19, v6, v21);
          }
        }
        while ( v21 != _InterlockedCompareExchange64(v6, v21 - 1, v21) );
        HandlePointer = ExGetHandlePointer(v6);
        if ( (*(_BYTE *)HandlePointer & 0x7F) == 6 )
        {
          if ( (*(_DWORD *)(HandlePointer + 1440) & 3) == 2 )
            v20 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v6);
          _m_prefetchw((const void *)(HandlePointer - 48));
          v22 = *(_QWORD *)(HandlePointer - 48);
          while ( v22 )
          {
            v23 = v22;
            v22 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(HandlePointer - 48),
                    v22 + (unsigned int)(v20 + 1),
                    v22);
            if ( v23 == v22 )
            {
              ObpTraceObjectReferenceIfActive(HandlePointer - 48);
              goto LABEL_39;
            }
          }
          v26 = *v6 & 0xFFFFFFFFFFFE0001uLL;
          v28[1] = v26;
          *v6 = v26;
        }
        HandlePointer = 0LL;
LABEL_39:
        v24 = PspCidTable;
        _InterlockedIncrement64(v6);
        v25 = (_QWORD *)(v24 + 48);
        _InterlockedOr(v27, 0);
        if ( *v25 )
          ExfUnblockPushLock((__int64)v25, 0LL);
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
      v10 = v11;
      v28[0] = v11;
      v9 = *((_QWORD *)&v11 + 1);
    }
    while ( !v12 );
    if ( (unsigned __int16)(v10 >> 1) == 16 )
      *(_QWORD *)&v28[0] = v10 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)((v10 >> 1) - 1));
    v13 = (_BYTE *)ExGetHandlePointer((__int64 *)v28);
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
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v16 >= 0 )
  {
    if ( (v2[360] & 1) == 0 && v2[304] == HIDWORD(v29) )
    {
      *a2 = v2;
      return 0LL;
    }
    v16 = -1073741275;
  }
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)v16;
}
