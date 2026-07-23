/*
 * XREFs of HviEnterKernelAperture @ 0x1406018DC
 * Callers:
 *     HviCopyMemoryNonTemporal @ 0x140404F74 (HviCopyMemoryNonTemporal.c)
 *     HviCopyMemory @ 0x14040516C (HviCopyMemory.c)
 * Callees:
 *     HvipApertureDetectParameters @ 0x1406019FC (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x140601AC8 (HvipApertureDirectHypercall.c)
 *     HvipApertureVmfuncSwitchEptp @ 0x1406B5E90 (HvipApertureVmfuncSwitchEptp.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_140E67A8C;
  if ( !byte_140E67A8C )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140E0CD02 )
  {
    if ( byte_140E67A8E )
      return HvipApertureVmfuncSwitchEptp(1LL);
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
