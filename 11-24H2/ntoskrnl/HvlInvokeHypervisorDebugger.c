/*
 * XREFs of HvlInvokeHypervisorDebugger @ 0x14044782C
 * Callers:
 *     KeAccumulateTicks @ 0x14029C3C0 (KeAccumulateTicks.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403AF710 (HvcallInitiateHypercall.c)
 */

__int64 HvlInvokeHypervisorDebugger()
{
  __int64 result; // rax

  result = HvlpFlags;
  if ( (HvlpFlags & 2) == 0 || (result = HvlpRootFlags, (HvlpRootFlags & 1) != 0) )
  {
    if ( HvlHypervisorConnected )
      return HvcallInitiateHypercall(65546);
  }
  return result;
}
