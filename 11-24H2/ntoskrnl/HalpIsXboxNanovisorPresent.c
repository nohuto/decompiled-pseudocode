/*
 * XREFs of HalpIsXboxNanovisorPresent @ 0x140548550
 * Callers:
 *     HalpHvIsFrequencyAvailable @ 0x140548444 (HalpHvIsFrequencyAvailable.c)
 *     HalpHvStartVirtualProcessor @ 0x140549128 (HalpHvStartVirtualProcessor.c)
 *     HalpHvVpStartEnabled @ 0x140549284 (HalpHvVpStartEnabled.c)
 *     HalpApicSetupRegisterAccess @ 0x140554EF8 (HalpApicSetupRegisterAccess.c)
 *     HalpHvStartProcessor @ 0x14055673C (HalpHvStartProcessor.c)
 *     HaliAcpiMachineStateInit @ 0x1406FFBF0 (HaliAcpiMachineStateInit.c)
 *     HalpMiscGetParameters @ 0x140C11650 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char HalpIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140E0A801;
  if ( byte_140E0A801 == -1 )
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
    byte_140E0A801 = v0;
  }
  return v0;
}
