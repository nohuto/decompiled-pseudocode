/*
 * XREFs of KeSupportedPhysicalAddressBits @ 0x140C15AE0
 * Callers:
 *     MmInitSystem @ 0x140BCD2E8 (MmInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char KeSupportedPhysicalAddressBits()
{
  _RAX = 0x80000000LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 0x80000008 )
    return 36;
  _RAX = 2147483656LL;
  __asm { cpuid }
  return _RAX;
}
