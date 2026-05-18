/*
 * XREFs of sub_18000D76C @ 0x18000D76C
 * Callers:
 *     sub_18000ECFC @ 0x18000ECFC (sub_18000ECFC.c)
 * Callees:
 *     sub_18000DD60 @ 0x18000DD60 (sub_18000DD60.c)
 */

__int64 __fastcall sub_18000D76C(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return sub_18000DD60(result);
  return result;
}
