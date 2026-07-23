/*
 * XREFs of HvipApertureDirectHypercall @ 0x140601AC8
 * Callers:
 *     HviEnterKernelAperture @ 0x1406018DC (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1406019B0 (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x1406B5EA0 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x1406B5EB0 (HvipApertureAmdVmcall.c)
 */

__int64 __fastcall HvipApertureDirectHypercall(__int64 a1, __int64 a2)
{
  if ( byte_140E67A8D )
    return HvipApertureIntelVmcall(a1, a2, 0LL);
  else
    return HvipApertureAmdVmcall(a1, a2, 0LL);
}
