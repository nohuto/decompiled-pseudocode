/*
 * XREFs of ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x14013DA30
 * Callers:
 *     ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1401132B0 (-OnEndSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1401880E0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x14013DAA4 (-TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z.c)
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x14013DD00 (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall PTPTelemetry::Usage::HandlePTPTelemetry(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rbx

  UserSessionState = W32GetUserSessionState(a1);
  v2 = UserSessionState + 12080;
  if ( *(_DWORD *)(UserSessionState + 12180) )
  {
    TraceLoggingPTPGestureUsageEvent((const struct tagTPTELEMSTATE *)(UserSessionState + 12080));
    if ( *(__int64 *)(v2 + 104) > 0 || *(__int64 *)(v2 + 128) > 0 || *(_DWORD *)(v2 + 16) || *(_DWORD *)(v2 + 24) )
      TraceLoggingPTPUsageDetailsEvent((const struct tagTPTELEMSTATE *)v2, gliQpcFreq.QuadPart);
    memset((void *)v2, 0, 0x98uLL);
  }
}
