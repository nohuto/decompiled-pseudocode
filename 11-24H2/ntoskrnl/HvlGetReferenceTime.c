/*
 * XREFs of HvlGetReferenceTime @ 0x14036FFB8
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1402AF8B0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmUpdatePerformanceFeedback @ 0x14036EAB0 (PpmUpdatePerformanceFeedback.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x140440784 (PpmHvSnapPerformanceAccumulation.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x14036FFF0 (HvlGetReferenceTimeUsingTscPage.c)
 */

__int64 HvlGetReferenceTime()
{
  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage(0LL);
  else
    return __readmsr(0x40000020u);
}
