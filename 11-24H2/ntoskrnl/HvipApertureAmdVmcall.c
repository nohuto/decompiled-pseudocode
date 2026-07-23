/*
 * XREFs of HvipApertureAmdVmcall @ 0x1406B5EB0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x140601AC8 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
