/*
 * XREFs of HvlGetReferenceTime @ 0x1403527D4
 * Callers:
 *     PpmUpdatePerformanceFeedback @ 0x1403505D0 (PpmUpdatePerformanceFeedback.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140351B20 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x140448064 (PpmHvSnapPerformanceAccumulation.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x140352810 (HvlGetReferenceTimeUsingTscPage.c)
 */

__int64 HvlGetReferenceTime()
{
  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage(0LL);
  else
    return __readmsr(0x40000020u);
}
