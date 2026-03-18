/*
 * XREFs of HvipApertureDirectHypercall @ 0x1405F8148
 * Callers:
 *     HviEnterKernelAperture @ 0x1405F7F5C (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1405F8030 (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x1406A9C30 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x1406A9C40 (HvipApertureAmdVmcall.c)
 */

__int64 __fastcall HvipApertureDirectHypercall(__int64 a1, __int64 a2)
{
  if ( byte_140E675D0 )
    return HvipApertureIntelVmcall(a1, a2, 0LL);
  else
    return HvipApertureAmdVmcall(a1, a2, 0LL);
}
