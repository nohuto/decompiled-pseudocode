/*
 * XREFs of sub_180025EE0 @ 0x180025EE0
 * Callers:
 *     sub_1800250E0 @ 0x1800250E0 (sub_1800250E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180025EE0(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( (a1[1] - *a1) >> 4 <= a2 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  return v2 + 16 * a2;
}
