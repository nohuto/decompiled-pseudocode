/*
 * XREFs of HviIsXboxNanovisorPresent @ 0x1406626F0
 * Callers:
 *     HalpTscSynchronization @ 0x140547150 (HalpTscSynchronization.c)
 *     KeDeepSleepProcessor @ 0x1405B9DA4 (KeDeepSleepProcessor.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140C2C11C (KiIntSteerDetermineSteeringEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char HviIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140E0ECA0;
  if ( byte_140E0ECA0 == -1 )
  {
    _RAX = 1LL;
    v0 = 0;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140E0ECA0 = v0;
  }
  return v0;
}
