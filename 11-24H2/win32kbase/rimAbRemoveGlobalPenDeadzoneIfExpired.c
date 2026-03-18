/*
 * XREFs of rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x140057E30
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x140057B0C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1401D9C70 (rimAbRemoveGlobalPenDeadzone.c)
 */

_UNKNOWN **__fastcall rimAbRemoveGlobalPenDeadzoneIfExpired(__int64 a1)
{
  _UNKNOWN **result; // rax
  char v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  result = (_UNKNOWN **)W32GetUserSessionState(a1);
  if ( !*((_DWORD *)result + 61) )
    result = (_UNKNOWN **)MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 145LL);
  if ( *(_DWORD *)(a1 + 492) )
  {
    result = (_UNKNOWN **)MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= *(_DWORD *)(a1 + 704) )
    {
      rimAbRemoveGlobalPenDeadzone(a1);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v3 = 0;
      }
      result = &WPP_RECORDER_INITIALIZED;
      v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v6) = v4;
        LOBYTE(v7) = v3;
        return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                              *((_QWORD *)WPP_GLOBAL_Control + 3),
                              v7,
                              v6,
                              *(_QWORD *)(UserSessionState + 19392),
                              4,
                              1,
                              11,
                              (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
      }
    }
  }
  return result;
}
