/*
 * XREFs of sub_1800588CC @ 0x1800588CC
 * Callers:
 *     sub_180061B10 @ 0x180061B10 (sub_180061B10.c)
 *     sub_1800632D4 @ 0x1800632D4 (sub_1800632D4.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_180067964 @ 0x180067964 (sub_180067964.c)
 * Callees:
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 */

__int64 __fastcall sub_1800588CC(__int64 a1, float a2)
{
  __int64 result; // rax

  if ( a2 != *(float *)(a1 + 328) )
  {
    *(float *)(a1 + 328) = a2;
    return sub_180058950(a1, 2LL);
  }
  return result;
}
