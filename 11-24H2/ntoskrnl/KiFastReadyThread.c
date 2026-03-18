/*
 * XREFs of KiFastReadyThread @ 0x1403385A4
 * Callers:
 *     KeReadyThread @ 0x140338E58 (KeReadyThread.c)
 *     KeSwapProcessOrStack @ 0x1405C4890 (KeSwapProcessOrStack.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     EtwTraceReadyThread @ 0x1403207B0 (EtwTraceReadyThread.c)
 *     KiEnterDeferredReadyState @ 0x140337910 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadyThread @ 0x1403386A0 (KiDeferredReadyThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KiFastReadyThread(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v4; // edi
  __int64 v5; // rdx

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread(v1, *(_BYTE *)(v1 + 566), *(_BYTE *)(v1 + 567), 0);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 64), 0LL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v1 + 64) );
  }
  KiEnterDeferredReadyState(v1);
  *(_QWORD *)(v1 + 64) = 0LL;
  KiDeferredReadyThread(CurrentPrcb, v1, 0LL);
  LOBYTE(v5) = CurrentIrql;
  return KiCheckForThreadDispatch(CurrentPrcb, v5);
}
