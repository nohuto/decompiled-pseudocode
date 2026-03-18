/*
 * XREFs of KiEndCounterAccumulation @ 0x14034C52C
 * Callers:
 *     KiRetireDpcList @ 0x140251EB0 (KiRetireDpcList.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14034AEC0 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x14034B700 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiEndThreadAccountingPeriodEx @ 0x14034C1B0 (KiEndThreadAccountingPeriodEx.c)
 *     KiEndIdleCycleAccumulation @ 0x14034C5A0 (KiEndIdleCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x14034D120 (KiEndThreadCycleAccumulation.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14034DCD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14034F060 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403EBDD0 (KeQueryTotalCycleTimeThread.c)
 * Callees:
 *     <none>
 */

void __fastcall KiEndCounterAccumulation(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r11
  __int64 v3; // r9
  unsigned int *v4; // r10
  __int64 v5; // r8
  __int64 v6; // rbx
  unsigned __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 360);
  v2 = *(_QWORD *)(v1 + 32);
  if ( v2 )
  {
    v3 = 1LL;
    if ( KiHwCountersCount )
    {
      v4 = (unsigned int *)&KiHwCounters;
      v5 = v1 + 48;
      v6 = (unsigned int)KiHwCountersCount;
      do
      {
        if ( (v2 & v3) != 0 )
        {
          v7 = __readpmc(*v4);
          *(_QWORD *)(v5 + 8) += (unsigned int)(v7 - *(_DWORD *)v5);
          *(_QWORD *)v5 = v7;
        }
        v3 *= 2LL;
        ++v4;
        v5 += 24LL;
        --v6;
      }
      while ( v6 );
    }
  }
}
