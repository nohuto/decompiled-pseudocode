/*
 * XREFs of HvipApertureIntelVmcall @ 0x1406B5EA0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x140601AC8 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
