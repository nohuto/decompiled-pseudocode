/*
 * XREFs of sub_180049CD8 @ 0x180049CD8
 * Callers:
 *     sub_180048200 @ 0x180048200 (sub_180048200.c)
 *     sub_1800487F0 @ 0x1800487F0 (sub_1800487F0.c)
 *     sub_180048958 @ 0x180048958 (sub_180048958.c)
 *     sub_180048A4C @ 0x180048A4C (sub_180048A4C.c)
 *     sub_180048B1C @ 0x180048B1C (sub_180048B1C.c)
 *     sub_180049924 @ 0x180049924 (sub_180049924.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180049CD8(__int64 *a1, unsigned __int64 a2)
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
