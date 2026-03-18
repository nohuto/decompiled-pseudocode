/*
 * XREFs of HalpMceInitializeRecovery @ 0x140551FD4
 * Callers:
 *     HalpInitializeMce @ 0x140B3BBE4 (HalpInitializeMce.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 HalpMceInitializeRecovery()
{
  __int64 result; // rax

  _RAX = 0x80000000LL;
  __asm { cpuid }
  if ( (unsigned int)result >= 0x80000008 )
  {
    _RAX = 2147483656LL;
    __asm { cpuid }
    result = (1LL << _RAX) - 1;
    HalpMcaPhysicalAddressMask = result;
  }
  return result;
}
