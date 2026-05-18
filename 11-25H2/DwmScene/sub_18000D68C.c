/*
 * XREFs of sub_18000D68C @ 0x18000D68C
 * Callers:
 *     sub_18000EBFC @ 0x18000EBFC (sub_18000EBFC.c)
 * Callees:
 *     sub_18000DC80 @ 0x18000DC80 (sub_18000DC80.c)
 */

__int64 __fastcall sub_18000D68C(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return sub_18000DC80(result);
  return result;
}
