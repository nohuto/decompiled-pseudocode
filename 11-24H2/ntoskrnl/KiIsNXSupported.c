/*
 * XREFs of KiIsNXSupported @ 0x140B56858
 * Callers:
 *     KiInitializeNxSupportDiscard @ 0x140C296B8 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KiGetCpuVendor @ 0x140B6D9F4 (KiGetCpuVendor.c)
 */

char KiIsNXSupported()
{
  char v5; // bl
  bool v6; // zf
  char result; // al

  _RAX = 2147483649LL;
  __asm { cpuid }
  if ( (_RDX & 0x100000) != 0 )
    return 1;
  v5 = 0;
  v6 = (unsigned int)KiGetCpuVendor(_RCX) == 1;
  result = 1;
  if ( v6 )
    return result;
  return v5;
}
