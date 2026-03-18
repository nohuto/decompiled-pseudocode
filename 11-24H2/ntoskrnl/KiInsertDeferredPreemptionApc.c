/*
 * XREFs of KiInsertDeferredPreemptionApc @ 0x14030C908
 * Callers:
 *     KiSwapThread @ 0x1402A6990 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14030AEFC (KiGroupSchedulingQuantumEnd.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x14030BC30 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KiBeginThreadAccountingPeriod @ 0x14030C650 (KiBeginThreadAccountingPeriod.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14030F980 (KiDeferGroupSchedulingPreemption.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSignalThreadForApc @ 0x140296870 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1403377A0 (KiInsertQueueApc.c)
 */

void __fastcall KiInsertDeferredPreemptionApc(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // edi
  __int64 v6; // rsi

  if ( a3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xBu);
  }
  else if ( (*(_DWORD *)(a2 + 120) & 0x400) != 0 )
  {
    return;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xAu);
  v5 = 0;
  v6 = a2 + 648;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a2 + 64) );
  }
  if ( (*(_DWORD *)(a2 + 116) & 0x4000) != 0 && !*(_BYTE *)(v6 + 82) )
  {
    *(_BYTE *)(v6 + 82) = 1;
    KiInsertQueueApc(v6);
    KiSignalThreadForApc(a1, v6, 2, 0);
  }
  *(_QWORD *)(a2 + 64) = 0LL;
}
