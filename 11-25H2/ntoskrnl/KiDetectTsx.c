/*
 * XREFs of KiDetectTsx @ 0x1404D9ECC
 * Callers:
 *     KiInitializeBootStructures @ 0x140B48120 (KiInitializeBootStructures.c)
 *     KeInitSystem @ 0x140C4FA10 (KeInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

_BOOL8 KiDetectTsx()
{
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
    return 0LL;
  _RAX = 7LL;
  __asm { cpuid }
  return (_RBX & 0x800) != 0 || (_RBX & 0x10) != 0;
}
