/*
 * XREFs of DefaultInitializeProfilingEnhanced @ 0x140B4EA88
 * Callers:
 *     DefaultInitializeProfiling @ 0x140B4EA60 (DefaultInitializeProfiling.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     InitCounterGroupAps @ 0x140B4EC38 (InitCounterGroupAps.c)
 *     InitCounterGroupBspEnhanced @ 0x140B4ECE8 (InitCounterGroupBspEnhanced.c)
 */

__int64 DefaultInitializeProfilingEnhanced()
{
  unsigned int Number; // ebx

  Number = KeGetPcr()->Prcb.Number;
  if ( Number )
  {
    InitCounterGroupAps(1LL, Number);
    InitCounterGroupAps(0LL, Number);
    InitCounterGroupAps(100LL, Number);
    InitCounterGroupAps(101LL, Number);
  }
  else
  {
    HalpProfileSourceDescriptorListLock = 0LL;
    HalpProfileIntervalLimits = (__int64)DefaultProfileIntervalLimits;
    HalpProfileSourceDescriptorCount = 1;
    qword_140E03B48 = (__int64)&HalpProfileSourceDescriptorListHead;
    qword_140E03B50 = (__int64)&HalpProfileSourceDescriptorListHead;
    HalpProfileSourceDescriptorListHead = (__int64)&qword_140E03B48;
    qword_140FC20E8 = (__int64)&qword_140E03B48;
    InitCounterGroupBspEnhanced(1LL, 1LL);
    InitCounterGroupBspEnhanced(0LL, 0LL);
    InitCounterGroupBspEnhanced(100LL, 0LL);
    InitCounterGroupBspEnhanced(101LL, 0LL);
  }
  return KeAddProcessorAffinityEx(word_140E03B60, Number);
}
