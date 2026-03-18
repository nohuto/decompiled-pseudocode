/*
 * XREFs of DefaultInitializeProfilingOriginal @ 0x140B3CB10
 * Callers:
 *     DefaultInitializeProfiling @ 0x140B3CA20 (DefaultInitializeProfiling.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     InitCounterGroupAps @ 0x140B3CBF8 (InitCounterGroupAps.c)
 *     InitCounterGroupBspOriginal @ 0x140B3CD8C (InitCounterGroupBspOriginal.c)
 */

__int64 DefaultInitializeProfilingOriginal()
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
    qword_140FC16E8 = (__int64)&qword_140E03B48;
    InitCounterGroupBspOriginal(1LL, 1LL);
    InitCounterGroupBspOriginal(0LL, 0LL);
    InitCounterGroupBspOriginal(100LL, 0LL);
    InitCounterGroupBspOriginal(101LL, 0LL);
  }
  return KeAddProcessorAffinityEx(word_140E03B60, Number);
}
