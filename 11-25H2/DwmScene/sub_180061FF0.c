/*
 * XREFs of sub_180061FF0 @ 0x180061FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_180040290 @ 0x180040290 (sub_180040290.c)
 *     sub_1800632D4 @ 0x1800632D4 (sub_1800632D4.c)
 *     sub_180064748 @ 0x180064748 (sub_180064748.c)
 *     sub_180065264 @ 0x180065264 (sub_180065264.c)
 *     sub_1800659B4 @ 0x1800659B4 (sub_1800659B4.c)
 *     sub_180067964 @ 0x180067964 (sub_180067964.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180061FF0(__int64 a1, __int64 a2)
{
  sub_180064748();
  if ( sub_180040290(a1 + 1416) )
  {
    sub_180065264(a1, a2);
    sub_180067964(a1, a2);
  }
  sub_180011B30(a1 + 1504);
  sub_1800632D4(a1, a2, a1 + 1440);
  Mtx_unlock((_Mtx_t)(a1 + 1504));
  if ( sub_180040290(a1 + 1417) )
    sub_1800659B4(a1, a2, 0LL);
  return sub_180064FB4(a1, a2, a1 + 200);
}
