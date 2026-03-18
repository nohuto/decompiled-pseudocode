/*
 * XREFs of KiInsertDeferredPreemptionApc @ 0x140351CBC
 * Callers:
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403509D0 (KiGroupSchedulingQuantumEnd.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140350FB0 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KiBeginThreadAccountingPeriod @ 0x1403519E0 (KiBeginThreadAccountingPeriod.c)
 * Callees:
 *     KiInsertQueueApc @ 0x1402F0510 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x1402F1D40 (KiSignalThreadForApc.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall KiInsertDeferredPreemptionApc(__int64 a1, __int64 a2, char a3)
{
  int v5; // edi
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
        HvlNotifyLongSpinWait();
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
