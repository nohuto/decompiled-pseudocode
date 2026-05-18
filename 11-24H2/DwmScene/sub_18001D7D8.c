/*
 * XREFs of sub_18001D7D8 @ 0x18001D7D8
 * Callers:
 *     sub_180025EF4 @ 0x180025EF4 (sub_180025EF4.c)
 *     sub_180050D78 @ 0x180050D78 (sub_180050D78.c)
 *     sub_180052750 @ 0x180052750 (sub_180052750.c)
 *     sub_180054654 @ 0x180054654 (sub_180054654.c)
 *     sub_1800C637C @ 0x1800C637C (sub_1800C637C.c)
 *     sub_1800CF404 @ 0x1800CF404 (sub_1800CF404.c)
 * Callees:
 *     sub_18001D934 @ 0x18001D934 (sub_18001D934.c)
 */

__int64 __fastcall sub_18001D7D8(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_18001D934(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
