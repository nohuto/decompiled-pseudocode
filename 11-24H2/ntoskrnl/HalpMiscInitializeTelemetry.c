/*
 * XREFs of HalpMiscInitializeTelemetry @ 0x1406FE684
 * Callers:
 *     HalpMiscInitSystem @ 0x140B4D290 (HalpMiscInitSystem.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 */

__int64 HalpMiscInitializeTelemetry()
{
  if ( EtwRegister(&HAL_ETW_PROVIDER, 0LL, 0LL, &HalpDiagnosticEventHandle) >= 0 )
    HalpDiagnosticEventsRegistered = 1;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E03B08, 0LL, 0LL);
  return 0LL;
}
