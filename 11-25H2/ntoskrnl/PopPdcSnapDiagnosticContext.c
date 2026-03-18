/*
 * XREFs of PopPdcSnapDiagnosticContext @ 0x1406EFB90
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1404C0D40 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPdcSnapDiagnosticContext(__int64 a1)
{
  __int64 result; // rax

  result = qword_140E67290;
  if ( qword_140E67290 )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
