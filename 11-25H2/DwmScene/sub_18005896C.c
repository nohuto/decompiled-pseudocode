/*
 * XREFs of sub_18005896C @ 0x18005896C
 * Callers:
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_180067964 @ 0x180067964 (sub_180067964.c)
 *     sub_180084120 @ 0x180084120 (sub_180084120.c)
 * Callees:
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 */

void __fastcall sub_18005896C(__int64 a1, float a2)
{
  if ( a2 != *(float *)(a1 + 320) )
  {
    *(float *)(a1 + 320) = a2;
    sub_180058950(a1, 2);
  }
}
