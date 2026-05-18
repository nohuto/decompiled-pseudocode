/*
 * XREFs of sub_1800786A8 @ 0x1800786A8
 * Callers:
 *     sub_1800788D0 @ 0x1800788D0 (sub_1800788D0.c)
 *     sub_18007CB14 @ 0x18007CB14 (sub_18007CB14.c)
 * Callees:
 *     sub_18002768C @ 0x18002768C (sub_18002768C.c)
 */

__int64 __fastcall sub_1800786A8(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_18002768C(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
