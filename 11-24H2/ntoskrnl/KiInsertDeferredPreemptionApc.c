/*
 * XREFs of KiInsertDeferredPreemptionApc @ 0x1402DB968
 * Callers:
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D7384 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402D9F5C (KiGroupSchedulingQuantumEnd.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x1402DAC90 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402DB6B0 (KiBeginThreadAccountingPeriod.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSignalThreadForApc @ 0x1402DD8B0 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1402DF8C0 (KiInsertQueueApc.c)
 */

void __fastcall KiInsertDeferredPreemptionApc(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // r8

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
    LOBYTE(v7) = 2;
    KiSignalThreadForApc(a1, v6, v7, 0LL);
  }
  *(_QWORD *)(a2 + 64) = 0LL;
}
