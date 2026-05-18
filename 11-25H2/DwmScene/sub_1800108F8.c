/*
 * XREFs of sub_1800108F8 @ 0x1800108F8
 * Callers:
 *     sub_180010B10 @ 0x180010B10 (sub_180010B10.c)
 *     sub_180012080 @ 0x180012080 (sub_180012080.c)
 *     sub_1800169B8 @ 0x1800169B8 (sub_1800169B8.c)
 *     sub_180027E78 @ 0x180027E78 (sub_180027E78.c)
 *     sub_18002C378 @ 0x18002C378 (sub_18002C378.c)
 *     sub_18002C724 @ 0x18002C724 (sub_18002C724.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     sub_18002C978 @ 0x18002C978 (sub_18002C978.c)
 *     sub_18002CA64 @ 0x18002CA64 (sub_18002CA64.c)
 *     sub_18002D5E0 @ 0x18002D5E0 (sub_18002D5E0.c)
 *     sub_180038120 @ 0x180038120 (sub_180038120.c)
 *     sub_1800526DC @ 0x1800526DC (sub_1800526DC.c)
 *     sub_1800527B4 @ 0x1800527B4 (sub_1800527B4.c)
 *     sub_180053CCC @ 0x180053CCC (sub_180053CCC.c)
 *     sub_18005A244 @ 0x18005A244 (sub_18005A244.c)
 *     sub_18006A4B8 @ 0x18006A4B8 (sub_18006A4B8.c)
 *     sub_180075760 @ 0x180075760 (sub_180075760.c)
 *     sub_18007D008 @ 0x18007D008 (sub_18007D008.c)
 *     sub_180084E20 @ 0x180084E20 (sub_180084E20.c)
 *     sub_180085030 @ 0x180085030 (sub_180085030.c)
 *     sub_180088FF0 @ 0x180088FF0 (sub_180088FF0.c)
 *     sub_18008A148 @ 0x18008A148 (sub_18008A148.c)
 *     sub_18008C5F4 @ 0x18008C5F4 (sub_18008C5F4.c)
 *     sub_18008D6A0 @ 0x18008D6A0 (sub_18008D6A0.c)
 *     sub_180098AB0 @ 0x180098AB0 (sub_180098AB0.c)
 *     sub_1800BF9CC @ 0x1800BF9CC (sub_1800BF9CC.c)
 *     sub_1800CAE40 @ 0x1800CAE40 (sub_1800CAE40.c)
 *     sub_1800D1EA8 @ 0x1800D1EA8 (sub_1800D1EA8.c)
 * Callees:
 *     sub_180010C50 @ 0x180010C50 (sub_180010C50.c)
 */

__int64 __fastcall sub_1800108F8(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180010C50(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
