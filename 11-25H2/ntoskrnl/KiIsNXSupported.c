/*
 * XREFs of KiIsNXSupported @ 0x140B468B4
 * Callers:
 *     KiInitializeNxSupportDiscard @ 0x140C185A8 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KiGetCpuVendor @ 0x140B5E944 (KiGetCpuVendor.c)
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
