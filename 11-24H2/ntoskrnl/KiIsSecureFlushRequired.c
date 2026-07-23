/*
 * XREFs of KiIsSecureFlushRequired @ 0x1403FC6BC
 * Callers:
 *     KeFlushSingleCurrentTb @ 0x1405B9F1C (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405BA104 (KeFlushSingleTb.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402313D4 (VslGetNestedPageProtectionFlags.c)
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
