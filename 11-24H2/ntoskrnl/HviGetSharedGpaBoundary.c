/*
 * XREFs of HviGetSharedGpaBoundary @ 0x1406625B4
 * Callers:
 *     HalpDmaInitializeCvmSupport @ 0x140C12AE4 (HalpDmaInitializeCvmSupport.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140662638 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HviGetSharedGpaBoundary(__int64 a1, __int64 a2)
{
  if ( !(unsigned __int8)HviIsHypervisorMicrosoftCompatible(a1, a2) )
    return 0LL;
  _RAX = 1073741827LL;
  __asm { cpuid }
  if ( (__PAIR64__(_RBX, _RAX) & 0x40000000000000LL) == 0 )
    return 0LL;
  _RAX = 1073741836LL;
  __asm { cpuid }
  if ( (_RBX & 0x20) != 0 )
    return 1LL << (((unsigned int)_RBX >> 6) & 0x3F);
  else
    return 0LL;
}
