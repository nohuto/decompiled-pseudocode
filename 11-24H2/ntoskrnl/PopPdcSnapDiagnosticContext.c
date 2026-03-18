/*
 * XREFs of PopPdcSnapDiagnosticContext @ 0x1406FBA00
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1404BF450 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPdcSnapDiagnosticContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = qword_140E67570;
  if ( qword_140E67570 )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  return result;
}
