/*
 * XREFs of KiInitializeIdealProcessorRebalancer @ 0x1405BDD64
 * Callers:
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1403AE058 (KiInitializeTimer2.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  stru_140E170C8.WorkerRoutine = KiIdealProcessorRebalancerWorker;
  result = (unsigned int)KiCacheAwareScheduling;
  stru_140E170C8.Parameter = 0LL;
  stru_140E170C8.List.Flink = 0LL;
  qword_140E170E8 = 0LL;
  if ( (KiCacheAwareScheduling & 8) != 0 )
  {
    v1[1] = -1LL;
    v1[0] = 0LL;
    return KeSetTimer2((__int64)&KiIdealProcessorRebalancerContext, (LARGE_INTEGER)-10000000LL, 10000000LL, (__int64)v1);
  }
  return result;
}
