/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x140584F94
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405C35A0 (KiBugCheckRecoveryPrepareForCrashDump.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     HvlQueryVsmConnection @ 0x14044B190 (HvlQueryVsmConnection.c)
 *     HvlNotifyRootCrashdump @ 0x140584F08 (HvlNotifyRootCrashdump.c)
 *     VslPrepareForCrashdump @ 0x14058AD24 (VslPrepareForCrashdump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlPrepareForRootCrashdump(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx

  if ( (HvlpFlags & 2) != 0 )
  {
    HvlNotifyRootCrashdump(1);
    KeStallExecutionProcessor(0xC350u);
  }
  if ( HvlQueryVsmConnection(0LL) )
  {
    LOBYTE(v3) = a1;
    VslPrepareForCrashdump(v3);
    if ( (HvlpFlags & 2) != 0 )
    {
      if ( a1 )
        PoAllProcIntrDisabled = 1;
    }
  }
  if ( (HvlpFlags & 2) != 0 )
    HvlNotifyRootCrashdump(2);
  LOBYTE(v3) = 1;
  guard_dispatch_icall_no_overrides(v3, v2);
  return guard_dispatch_icall_no_overrides(1LL, v4);
}
