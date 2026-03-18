/*
 * XREFs of KiReadyOutSwappedThreads @ 0x140336F68
 * Callers:
 *     KiInSwapProcesses @ 0x1403389A4 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x14042D320 (KiOutSwapProcesses.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceReadyThread @ 0x1403207B0 (EtwTraceReadyThread.c)
 *     KiEnterDeferredReadyState @ 0x140337910 (KiEnterDeferredReadyState.c)
 *     KiRequestProcessInSwap @ 0x140338230 (KiRequestProcessInSwap.c)
 */

char __fastcall KiReadyOutSwappedThreads(_QWORD *a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v5; // r14
  unsigned __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  int v9; // eax
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  char v11; // di
  __int64 v12; // rdx
  volatile signed __int32 *v14; // rdi
  signed __int64 *v15; // rbx
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  struct _SINGLE_LIST_ENTRY v18; // [rsp+40h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = a1;
  do
  {
    v6 = (unsigned __int64)(v5 - 27);
    v7 = 0;
    v5 = (_QWORD *)*v5;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 64), 0LL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
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
      v18.Next = 0LL;
      KiDeferredReadySingleThread(CurrentPrcb, v6, &v18, 0LL);
      Next = v18.Next;
      v11 = 1;
      if ( v18.Next )
      {
        v18.Next = v18.Next->Next;
        do
        {
          KiDeferredReadySingleThread(CurrentPrcb, (unsigned __int64)&Next[-27], &v18, 0LL);
          Next = v18.Next;
          ++v11;
          if ( v18.Next )
            v18.Next = v18.Next->Next;
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
        v17 = v16;
        v16 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v15, v16);
      }
      while ( v16 != v17 );
      if ( !v16 )
        KeSetEvent(&KiSwapEvent, 10, 0);
    }
  }
  while ( v5 != a1 );
  LOBYTE(v12) = a2;
  return KiCheckForThreadDispatch(CurrentPrcb, v12);
}
