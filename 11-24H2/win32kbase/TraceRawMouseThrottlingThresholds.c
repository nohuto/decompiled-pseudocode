/*
 * XREFs of TraceRawMouseThrottlingThresholds @ 0x14021363C
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B3FE0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     ?RawMouseThrottlingThresholds@Mouse@InputTraceLogging@@SAXU0@@Z @ 0x140210E04 (-RawMouseThrottlingThresholds@Mouse@InputTraceLogging@@SAXU0@@Z.c)
 */

void __fastcall TraceRawMouseThrottlingThresholds(__int64 a1)
{
  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 3144) )
    InputTraceLogging::Mouse::RawMouseThrottlingThresholds();
}
