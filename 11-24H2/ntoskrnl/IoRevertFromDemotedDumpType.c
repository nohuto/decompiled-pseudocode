/*
 * XREFs of IoRevertFromDemotedDumpType @ 0x14058EF04
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C2EB4 (KiAttemptBugcheckRecovery.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405C35A0 (KiBugCheckRecoveryPrepareForCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IoRevertFromDemotedDumpType()
{
  __int64 result; // rax

  result = qword_140E66040;
  if ( qword_140E66040 )
    return guard_dispatch_icall_no_overrides(8LL, 0LL);
  return result;
}
