/*
 * XREFs of sub_180049B78 @ 0x180049B78
 * Callers:
 *     sub_1800480A0 @ 0x1800480A0 (sub_1800480A0.c)
 *     sub_180048690 @ 0x180048690 (sub_180048690.c)
 *     sub_1800487F8 @ 0x1800487F8 (sub_1800487F8.c)
 *     sub_1800488EC @ 0x1800488EC (sub_1800488EC.c)
 *     sub_1800489BC @ 0x1800489BC (sub_1800489BC.c)
 *     sub_1800497C4 @ 0x1800497C4 (sub_1800497C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180049B78(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - *a1) >> 3) <= a2 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  return v2 + 88 * a2;
}
