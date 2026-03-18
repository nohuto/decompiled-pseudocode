/*
 * XREFs of HvipApertureDirectHypercall @ 0x140604488
 * Callers:
 *     HviEnterKernelAperture @ 0x14060429C (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x140604370 (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x1406B4F00 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x1406B4F10 (HvipApertureAmdVmcall.c)
 */

__int64 __fastcall HvipApertureDirectHypercall(__int64 a1, __int64 a2)
{
  if ( byte_140E678E0 )
    return HvipApertureIntelVmcall(a1, a2, 0LL);
  else
    return HvipApertureAmdVmcall(a1, a2, 0LL);
}
