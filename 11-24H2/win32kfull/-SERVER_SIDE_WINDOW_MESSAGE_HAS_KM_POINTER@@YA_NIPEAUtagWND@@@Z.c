/*
 * XREFs of ?SERVER_SIDE_WINDOW_MESSAGE_HAS_KM_POINTER@@YA_NIPEAUtagWND@@@Z @ 0x1402B16CC
 * Callers:
 *     ?ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z @ 0x14011B890 (-ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall SERVER_SIDE_WINDOW_MESSAGE_HAS_KM_POINTER(int a1, struct tagWND *a2)
{
  if ( a1 != 60 || !a2 )
    return 0;
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 18LL) & 4) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 81);
  return (*(_BYTE *)(*((_QWORD *)a2 + 5) + 18LL) & 4) != 0;
}
