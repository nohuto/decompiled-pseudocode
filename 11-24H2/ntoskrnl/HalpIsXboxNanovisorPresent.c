/*
 * XREFs of HalpIsXboxNanovisorPresent @ 0x14054AC90
 * Callers:
 *     HalpHvIsFrequencyAvailable @ 0x14054AB84 (HalpHvIsFrequencyAvailable.c)
 *     HalpHvStartVirtualProcessor @ 0x14054B868 (HalpHvStartVirtualProcessor.c)
 *     HalpHvVpStartEnabled @ 0x14054B9C4 (HalpHvVpStartEnabled.c)
 *     HalpApicSetupRegisterAccess @ 0x1405575B8 (HalpApicSetupRegisterAccess.c)
 *     HalpHvStartProcessor @ 0x140558DFC (HalpHvStartProcessor.c)
 *     HaliAcpiMachineStateInit @ 0x140701FB0 (HaliAcpiMachineStateInit.c)
 *     HalpMiscGetParameters @ 0x140C0F650 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char HalpIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140E0A781;
  if ( byte_140E0A781 == -1 )
  {
    v0 = 0;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140E0A781 = v0;
  }
  return v0;
}
