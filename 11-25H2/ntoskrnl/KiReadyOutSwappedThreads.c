/*
 * XREFs of KiReadyOutSwappedThreads @ 0x1402F06E0
 * Callers:
 *     KiInSwapProcesses @ 0x1402F1450 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x1402F1A54 (KiOutSwapProcesses.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceReadyThread @ 0x140288F70 (EtwTraceReadyThread.c)
 *     KiEnterDeferredReadyState @ 0x1402F0680 (KiEnterDeferredReadyState.c)
 *     KiRequestProcessInSwap @ 0x1402F0FC0 (KiRequestProcessInSwap.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall KiReadyOutSwappedThreads(_QWORD *a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v4; // rbp
  _QWORD *v5; // r14
  ULONG_PTR v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  int v9; // eax
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  char v11; // di
  __int64 v12; // rdx
  volatile signed __int32 *v14; // rdi
  signed __int64 *v15; // rbx
  signed __int64 v16; // rax
  struct _SINGLE_LIST_ENTRY v17; // [rsp+40h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = a1;
  v5 = a1;
  do
  {
    v6 = (ULONG_PTR)(v5 - 27);
    v7 = 0;
    v5 = (_QWORD *)*v5;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 64), 0LL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v6 + 64) );
    }
    KiEnterDeferredReadyState(v6);
    *(_QWORD *)(v6 + 64) = 0LL;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v8, *(_BYTE *)(v6 + 566), *(_BYTE *)(v6 + 567), 0);
    v9 = *(_DWORD *)(v6 + 120);
    if ( (v9 & 0x20000) != 0 )
    {
      if ( (v9 & 0x100000) != 0 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(v6 + 120), 0x14u);
        if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v6 + 184) + 264LL), 8u) & 7) != 0 )
        {
          v14 = *(volatile signed __int32 **)(v6 + 184);
          KiAcquireKobjectLockSafe(v14);
          if ( (v14[66] & 7) != 0 )
          {
LABEL_23:
            KiRequestProcessInSwap(v6, v14);
            continue;
          }
          _InterlockedAnd(v14, 0xFFFFFF7F);
        }
      }
      v17.Next = 0LL;
      KiDeferredReadySingleThread(CurrentPrcb, v6, &v17, 0LL);
      Next = v17.Next;
      v11 = 1;
      if ( v17.Next )
      {
        v17.Next = v17.Next->Next;
        do
        {
          KiDeferredReadySingleThread(CurrentPrcb, (ULONG_PTR)&Next[-27], &v17, 0LL);
          Next = v17.Next;
          ++v11;
          if ( v17.Next )
            v17.Next = v17.Next->Next;
          if ( (v11 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
        }
        while ( Next );
      }
      KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
    }
    else
    {
      v14 = *(volatile signed __int32 **)(v6 + 184);
      KiAcquireKobjectLockSafe(v14);
      if ( (v14[66] & 7) != 0 )
        goto LABEL_23;
      _InterlockedAdd(v14 + 66, 8u);
      _InterlockedAnd(v14, 0xFFFFFF7F);
      _interlockedbittestandreset((volatile signed __int32 *)(v6 + 120), 0x14u);
      *(_BYTE *)(v6 + 388) = 6;
      v15 = (signed __int64 *)(v6 + 216);
      _m_prefetchw(&KiStackInSwapListHead);
      v16 = KiStackInSwapListHead;
      do
      {
        *v15 = v16;
        a1 = (_QWORD *)v16;
        v16 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v15, v16);
      }
      while ( (_QWORD *)v16 != a1 );
      if ( !v16 )
        KeSetEvent(&KiSwapEvent, 10, 0);
    }
  }
  while ( v5 != v4 );
  LOBYTE(v12) = a2;
  return KiCheckForThreadDispatch(CurrentPrcb, v12);
}
