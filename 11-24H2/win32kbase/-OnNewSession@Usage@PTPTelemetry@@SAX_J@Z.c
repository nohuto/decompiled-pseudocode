/*
 * XREFs of ?OnNewSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x140128B3C
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1401880E0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PTPTelemetry::Usage::OnNewSession(LARGE_INTEGER a1)
{
  LARGE_INTEGER *v2; // rax
  LARGE_INTEGER *v3; // rdi
  LARGE_INTEGER PerformanceCounter; // rax

  v2 = (LARGE_INTEGER *)((__int64 (__fastcall *)(_QWORD))W32GetUserSessionState)((LARGE_INTEGER)a1.QuadPart);
  v3 = v2;
  if ( v2[1529].QuadPart < a1.QuadPart )
  {
    v2[1529] = KeQueryPerformanceCounter(0LL);
  }
  else
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v3[1534].HighPart = 0;
    v3[1532] = PerformanceCounter;
  }
}
