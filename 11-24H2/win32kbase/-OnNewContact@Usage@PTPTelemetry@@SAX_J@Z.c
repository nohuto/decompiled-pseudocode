/*
 * XREFs of ?OnNewContact@Usage@PTPTelemetry@@SAX_J@Z @ 0x14012BAB8
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1401880E0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PTPTelemetry::Usage::OnNewContact(__int64 a1)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rcx

  UserSessionState = W32GetUserSessionState(a1);
  if ( *(_QWORD *)(UserSessionState + 12240) < *(_QWORD *)(W32GetUserSessionState(v3) + 3312) )
    *(_QWORD *)(UserSessionState + 12240) = a1;
}
