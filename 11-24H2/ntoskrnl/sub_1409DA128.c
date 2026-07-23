/*
 * XREFs of sub_1409DA128 @ 0x1409DA128
 * Callers:
 *     sub_1409D9820 @ 0x1409D9820 (sub_1409D9820.c)
 *     sub_1409D9BE8 @ 0x1409D9BE8 (sub_1409D9BE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409DA128(volatile signed __int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64(a1, 1uLL) )
      return 3221225701LL;
  }
  return result;
}
