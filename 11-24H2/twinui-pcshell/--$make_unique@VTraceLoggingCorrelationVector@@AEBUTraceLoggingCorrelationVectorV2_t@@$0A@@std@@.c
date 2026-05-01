/*
 * XREFs of ??$make_unique@VTraceLoggingCorrelationVector@@AEBUTraceLoggingCorrelationVectorV2_t@@$0A@@std@@YA?AV?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@0@AEBUTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1802BE4E8
 * Callers:
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x1803374F0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 * Callees:
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1802BE51C (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<TraceLoggingCorrelationVector,TraceLoggingCorrelationVectorV2_t const &,0>(
        _QWORD *a1)
{
  void *v3; // [rsp+48h] [rbp+10h]

  v3 = operator new(0x90uLL);
  *a1 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector(v3);
  return a1;
}
