/*
 * XREFs of KiInitializeIdealProcessorRebalancer @ 0x1405C0790
 * Callers:
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1403BF498 (KiInitializeTimer2.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 KiInitializeIdealProcessorRebalancer()
{
  __int64 result; // rax
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  memset_0(&KiIdealProcessorRebalancerContext, 0, 0xB8uLL);
  KiInitializeTimer2(
    (unsigned __int64)&KiIdealProcessorRebalancerContext,
    (__int64)KiIdealProcessorRebalancerTimerCallback,
    0LL,
    8);
  stru_140E16F88.WorkerRoutine = KiIdealProcessorRebalancerWorker;
  result = (unsigned int)KiCacheAwareScheduling;
  stru_140E16F88.Parameter = 0LL;
  stru_140E16F88.List.Flink = 0LL;
  qword_140E16FA8 = 0LL;
  if ( (KiCacheAwareScheduling & 8) != 0 )
  {
    v1[1] = -1LL;
    v1[0] = 0LL;
    return KeSetTimer2((__int64)&KiIdealProcessorRebalancerContext, -10000000LL, 10000000LL, (__int64)v1);
  }
  return result;
}
