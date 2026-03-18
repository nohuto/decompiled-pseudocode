/*
 * XREFs of HvlGetReferenceTime @ 0x1403ED194
 * Callers:
 *     PpmUpdatePerformanceFeedback @ 0x14031C3F0 (PpmUpdatePerformanceFeedback.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1403AFD80 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x1403ECC24 (PpmHvSnapPerformanceAccumulation.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x1403ED1D0 (HvlGetReferenceTimeUsingTscPage.c)
 */

__int64 HvlGetReferenceTime()
{
  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage(0LL);
  else
    return __readmsr(0x40000020u);
}
