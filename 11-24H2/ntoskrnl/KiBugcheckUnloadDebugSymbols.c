/*
 * XREFs of KiBugcheckUnloadDebugSymbols @ 0x1405B00D4
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     ExRebootSystemForRecovery @ 0x1406520CC (ExRebootSystemForRecovery.c)
 * Callees:
 *     DbgUnLoadImageSymbols @ 0x1404B5F18 (DbgUnLoadImageSymbols.c)
 */

__int64 KiBugcheckUnloadDebugSymbols()
{
  __int64 result; // rax

  if ( !KiHypervisorInitiatedCrashDump )
    return DbgUnLoadImageSymbols(0LL, -1LL, 0LL);
  return result;
}
