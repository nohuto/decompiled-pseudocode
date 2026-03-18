/*
 * XREFs of HvipApertureIntelVmcall @ 0x1406B4F00
 * Callers:
 *     HvipApertureDirectHypercall @ 0x140604488 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
