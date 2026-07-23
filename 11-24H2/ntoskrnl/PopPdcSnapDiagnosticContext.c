/*
 * XREFs of PopPdcSnapDiagnosticContext @ 0x1406F9640
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1404BA980 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPdcSnapDiagnosticContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E676E0;
  if ( qword_140E676E0 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
