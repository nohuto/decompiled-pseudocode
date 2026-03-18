/*
 * XREFs of UserActivateMITInputProcessingHelper @ 0x140215040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     InitializeInputSensorsOnSharedThread @ 0x1402129C0 (InitializeInputSensorsOnSharedThread.c)
 */

_BOOL8 UserActivateMITInputProcessingHelper()
{
  CTouchProcessor *v0; // rcx
  char v1; // di
  char v2; // dl
  char v3; // r8
  __int64 v4; // rcx
  int v5; // ebx
  char v6; // dl

  v0 = WPP_GLOBAL_Control;
  v1 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v3 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v3 = 0;
  }
  if ( v2 || v3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v2,
      v3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      17,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  if ( !*(_QWORD *)(W32GetUserSessionState(v0) + 19272) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 154);
  v5 = InitializeInputSensorsOnSharedThread(v4);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v6 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v1 = 0;
  if ( v6 || v1 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v1,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      18,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  return v5 >= 0;
}
