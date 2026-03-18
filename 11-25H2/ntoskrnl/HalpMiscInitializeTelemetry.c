/*
 * XREFs of HalpMiscInitializeTelemetry @ 0x1406F2894
 * Callers:
 *     HalpMiscInitSystem @ 0x140B3D290 (HalpMiscInitSystem.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x1408B7480 (EtwRegister.c)
 */

__int64 HalpMiscInitializeTelemetry()
{
  if ( EtwRegister(&HAL_ETW_PROVIDER, 0LL, 0LL, &HalpDiagnosticEventHandle) >= 0 )
    HalpDiagnosticEventsRegistered = 1;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E03B08, 0LL, 0LL);
  return 0LL;
}
