/*
 * XREFs of HviIsXboxNanovisorPresent @ 0x140657B40
 * Callers:
 *     HalpTscSynchronization @ 0x140546FA0 (HalpTscSynchronization.c)
 *     KeDeepSleepProcessor @ 0x1405B88D4 (KeDeepSleepProcessor.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140C18EEC (KiIntSteerDetermineSteeringEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char HviIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140E0E9C8;
  if ( byte_140E0E9C8 == -1 )
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
    byte_140E0E9C8 = v0;
  }
  return v0;
}
