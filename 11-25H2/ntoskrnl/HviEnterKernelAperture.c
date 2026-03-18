/*
 * XREFs of HviEnterKernelAperture @ 0x1405F7F5C
 * Callers:
 *     HviCopyMemoryNonTemporal @ 0x140404F44 (HviCopyMemoryNonTemporal.c)
 *     HviCopyMemory @ 0x14040513C (HviCopyMemory.c)
 * Callees:
 *     HvipApertureDetectParameters @ 0x1405F807C (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x1405F8148 (HvipApertureDirectHypercall.c)
 *     HvipApertureVmfuncSwitchEptp @ 0x1406A9C20 (HvipApertureVmfuncSwitchEptp.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_140E675D1;
  if ( !byte_140E675D1 )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140E0CA22 )
  {
    if ( byte_140E675D2 )
      return HvipApertureVmfuncSwitchEptp(1LL);
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
