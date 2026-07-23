/*
 * XREFs of HvlResumeFromRootCrashdump @ 0x1405853A8
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405C31FC (KiBugCheckRecoveryCleanupFromCrashDump.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14044B190 (HvlQueryVsmConnection.c)
 *     HvlNotifyRootCrashdump @ 0x140584F08 (HvlNotifyRootCrashdump.c)
 *     VslResumeFromCrashdump @ 0x14058B56C (VslResumeFromCrashdump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HvlResumeFromRootCrashdump(char a1)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( VslVsmEnabled )
    HvlpForceAllPages = (unsigned int)HvlpForceAllPages >> 1;
  result = HvlQueryVsmConnection(0LL);
  if ( !result || a1 )
  {
    if ( (HvlpFlags & 2) != 0 )
      HvlNotifyRootCrashdump(3);
    if ( HvlQueryVsmConnection(0LL) )
    {
      if ( a1 )
        VslResumeFromCrashdump();
    }
    HvlEnlightenments = HvlpEnlightenments;
    return guard_dispatch_icall_no_overrides(v4, v3);
  }
  return result;
}
