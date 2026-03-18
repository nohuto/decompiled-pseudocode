/*
 * XREFs of HvipApertureAmdVmcall @ 0x1406A9C40
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1405F8148 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
