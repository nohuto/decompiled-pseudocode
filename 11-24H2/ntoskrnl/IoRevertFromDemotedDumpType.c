/*
 * XREFs of IoRevertFromDemotedDumpType @ 0x140591EE0
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C5784 (KiAttemptBugcheckRecovery.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405C5E70 (KiBugCheckRecoveryPrepareForCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoRevertFromDemotedDumpType(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = qword_140E65F00;
  if ( qword_140E65F00 )
    return guard_dispatch_icall_no_overrides(8LL, 0LL, 0LL, a4);
  return result;
}
