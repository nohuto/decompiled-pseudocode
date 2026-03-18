/*
 * XREFs of KiFastReadyThread @ 0x1402F12A8
 * Callers:
 *     KeReadyThread @ 0x1402F1904 (KeReadyThread.c)
 *     KeSwapProcessOrStack @ 0x1405C0540 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     EtwTraceReadyThread @ 0x140288F70 (EtwTraceReadyThread.c)
 *     KiEnterDeferredReadyState @ 0x1402F0680 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadyThread @ 0x1402F13A0 (KiDeferredReadyThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1);
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
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
