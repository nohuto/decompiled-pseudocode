/*
 * XREFs of IsHypervisorLpiCapable @ 0x14004A708
 * Callers:
 *     AcpiRootIsFeatureSupported @ 0x140067A80 (AcpiRootIsFeatureSupported.c)
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

bool IsHypervisorLpiCapable()
{
  char v0; // cl
  bool result; // al
  __int128 SystemInformation; // [rsp+20h] [rbp-28h] BYREF

  v0 = AcpiRootLpiCapableHypervisor;
  SystemInformation = 0LL;
  if ( AcpiRootLpiCapableHypervisor == 2 )
  {
    if ( ZwQuerySystemInformation(SystemHypervisorInformation, &SystemInformation, 0x10u, 0LL) >= 0
      && (*((_QWORD *)&SystemInformation + 1) & 0x40000LL) != 0 )
    {
      result = 1;
      AcpiRootLpiCapableHypervisor = 1;
      return result;
    }
    v0 = 0;
    AcpiRootLpiCapableHypervisor = 0;
  }
  return v0 == 1;
}
