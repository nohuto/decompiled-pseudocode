/*
 * XREFs of IoRevertFromDemotedDumpType @ 0x14058E6B0
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C13E4 (KiAttemptBugcheckRecovery.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405C1AD0 (KiBugCheckRecoveryPrepareForCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IoRevertFromDemotedDumpType()
{
  __int64 result; // rax

  result = qword_140E65CA0;
  if ( qword_140E65CA0 )
    return guard_dispatch_icall_no_overrides(8LL);
  return result;
}
