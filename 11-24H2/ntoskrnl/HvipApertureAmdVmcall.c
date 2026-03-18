/*
 * XREFs of HvipApertureAmdVmcall @ 0x1406B4F10
 * Callers:
 *     HvipApertureDirectHypercall @ 0x140604488 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
