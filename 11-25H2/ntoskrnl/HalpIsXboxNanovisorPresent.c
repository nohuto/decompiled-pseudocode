/*
 * XREFs of HalpIsXboxNanovisorPresent @ 0x1405483A0
 * Callers:
 *     HalpHvIsFrequencyAvailable @ 0x140548294 (HalpHvIsFrequencyAvailable.c)
 *     HalpHvStartVirtualProcessor @ 0x140548F78 (HalpHvStartVirtualProcessor.c)
 *     HalpHvVpStartEnabled @ 0x1405490D4 (HalpHvVpStartEnabled.c)
 *     HalpApicSetupRegisterAccess @ 0x140554CB8 (HalpApicSetupRegisterAccess.c)
 *     HalpHvStartProcessor @ 0x1405564FC (HalpHvStartProcessor.c)
 *     HaliAcpiMachineStateInit @ 0x1406F61C0 (HaliAcpiMachineStateInit.c)
 *     HalpMiscGetParameters @ 0x140BFE650 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char HalpIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140E0A641;
  if ( byte_140E0A641 == -1 )
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
    byte_140E0A641 = v0;
  }
  return v0;
}
