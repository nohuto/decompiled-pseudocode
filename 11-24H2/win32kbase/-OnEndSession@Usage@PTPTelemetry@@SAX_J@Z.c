/*
 * XREFs of ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1401132B0
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1401880E0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x14013DA30 (-HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ.c)
 */

void __fastcall PTPTelemetry::Usage::OnEndSession(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  LARGE_INTEGER *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbx
  LARGE_INTEGER PerformanceCounter; // rax

  UserSessionState = W32GetUserSessionState(a1);
  v4 = (LARGE_INTEGER *)UserSessionState;
  if ( *(__int64 *)(UserSessionState + 12240) > 0 )
  {
    if ( *(_QWORD *)(UserSessionState + 12248) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    }
    else
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v4[1531] = PerformanceCounter;
    }
    v4[1533] = PerformanceCounter;
  }
  v5 = 1000 * a1 / gliQpcFreq.QuadPart;
  v6 = W32GetUserSessionState(v3);
  if ( (unsigned __int64)(v5 - *(_QWORD *)(v6 + 12072)) > 0xEA60 )
  {
    PTPTelemetry::Usage::HandlePTPTelemetry();
    *(_QWORD *)(v6 + 12072) = v5;
  }
}
