/*
 * XREFs of sub_18005889C @ 0x18005889C
 * Callers:
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_180067964 @ 0x180067964 (sub_180067964.c)
 *     sub_180084120 @ 0x180084120 (sub_180084120.c)
 * Callees:
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 */

__int64 __fastcall sub_18005889C(__int64 a1, float a2)
{
  __int64 result; // rax

  if ( a2 != *(float *)(a1 + 324) )
  {
    *(float *)(a1 + 324) = a2;
    return sub_180058950(a1, 2LL);
  }
  return result;
}
