/*
 * XREFs of KiBugcheckUnloadDebugSymbols @ 0x1405B3164
 * Callers:
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     ExRebootSystemForRecovery @ 0x14065396C (ExRebootSystemForRecovery.c)
 * Callees:
 *     DbgUnLoadImageSymbols @ 0x1404BB078 (DbgUnLoadImageSymbols.c)
 */

__int64 KiBugcheckUnloadDebugSymbols()
{
  __int64 result; // rax

  if ( !KiHypervisorInitiatedCrashDump )
    return DbgUnLoadImageSymbols(0LL, -1LL, 0LL);
  return result;
}
