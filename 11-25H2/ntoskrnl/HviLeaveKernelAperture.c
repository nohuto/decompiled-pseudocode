/*
 * XREFs of HviLeaveKernelAperture @ 0x1405F8030
 * Callers:
 *     HviCopyMemoryNonTemporal @ 0x140404F44 (HviCopyMemoryNonTemporal.c)
 *     HviCopyMemory @ 0x14040513C (HviCopyMemory.c)
 * Callees:
 *     HvipApertureDirectHypercall @ 0x1405F8148 (HvipApertureDirectHypercall.c)
 *     HvipApertureVmfuncSwitchEptp @ 0x1406A9C20 (HvipApertureVmfuncSwitchEptp.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140E0CA22 )
  {
    if ( byte_140E675D2 )
      result = HvipApertureVmfuncSwitchEptp(0LL);
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
