/*
 * XREFs of KiIsSecureFlushRequired @ 0x14040213C
 * Callers:
 *     KeFlushSingleCurrentTb @ 0x1405BC8EC (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405BCAD4 (KeFlushSingleTb.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14027BE44 (VslGetNestedPageProtectionFlags.c)
 */

__int64 __fastcall KiIsSecureFlushRequired(unsigned __int64 a1, int a2, int a3)
{
  if ( a2 == 1 )
  {
    if ( a1 <= 0x7FFFFFFEFFFFLL )
      return KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle != 0;
    return 0LL;
  }
  if ( a2 || (a3 & 0x80000009) != 0x80000001 )
    return 0LL;
  return ((unsigned int)VslGetNestedPageProtectionFlags(0LL) >> 13) & 2;
}
