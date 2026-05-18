/*
 * XREFs of sub_1800542A0 @ 0x1800542A0
 * Callers:
 *     sub_18005453C @ 0x18005453C (sub_18005453C.c)
 *     sub_1800547B0 @ 0x1800547B0 (sub_1800547B0.c)
 *     sub_18007EBCC @ 0x18007EBCC (sub_18007EBCC.c)
 * Callees:
 *     sub_18002D710 @ 0x18002D710 (sub_18002D710.c)
 */

__int64 __fastcall sub_1800542A0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_18002D710(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
