/*
 * XREFs of HvlInvokeHypervisorDebugger @ 0x14044A224
 * Callers:
 *     KeAccumulateTicks @ 0x140273800 (KeAccumulateTicks.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
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
