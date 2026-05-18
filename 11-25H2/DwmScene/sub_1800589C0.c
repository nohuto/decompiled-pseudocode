/*
 * XREFs of sub_1800589C0 @ 0x1800589C0
 * Callers:
 *     sub_180067964 @ 0x180067964 (sub_180067964.c)
 * Callees:
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 */

void __fastcall sub_1800589C0(__int64 a1, float a2)
{
  if ( a2 != *(float *)(a1 + 340) )
  {
    *(float *)(a1 + 340) = a2;
    sub_180058950(a1, 2);
  }
}
