/*
 * XREFs of HvipApertureIntelVmcall @ 0x1406A9C30
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1405F8148 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
