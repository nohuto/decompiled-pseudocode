/*
 * XREFs of KiBugcheckUnloadDebugSymbols @ 0x1405AF7D4
 * Callers:
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     ExRebootSystemForRecovery @ 0x140647A6C (ExRebootSystemForRecovery.c)
 * Callees:
 *     DbgUnLoadImageSymbols @ 0x1404BBC28 (DbgUnLoadImageSymbols.c)
 */

__int64 KiBugcheckUnloadDebugSymbols()
{
  __int64 result; // rax

  if ( !KiHypervisorInitiatedCrashDump )
    return DbgUnLoadImageSymbols(0LL, -1LL, 0LL);
  return result;
}
