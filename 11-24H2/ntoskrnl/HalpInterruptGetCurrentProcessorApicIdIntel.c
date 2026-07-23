/*
 * XREFs of HalpInterruptGetCurrentProcessorApicIdIntel @ 0x140556DC4
 * Callers:
 *     HalpInterruptCheckProcessorCacheDomainSharing @ 0x140556B80 (HalpInterruptCheckProcessorCacheDomainSharing.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 HalpInterruptGetCurrentProcessorApicIdIntel()
{
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 0x1F )
  {
    if ( (unsigned int)_RAX < 0xB )
      goto LABEL_7;
  }
  else
  {
    _RAX = 31LL;
    __asm { cpuid }
    if ( (_RCX & 0xFF00) != 0 )
      return (unsigned int)_RDX;
  }
  _RAX = 11LL;
  __asm { cpuid }
  if ( (_RCX & 0xFF00) != 0 )
    return (unsigned int)_RDX;
LABEL_7:
  _RAX = 1LL;
  __asm { cpuid }
  return BYTE3(_RBX);
}
