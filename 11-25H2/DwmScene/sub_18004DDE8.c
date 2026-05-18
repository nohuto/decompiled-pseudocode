/*
 * XREFs of sub_18004DDE8 @ 0x18004DDE8
 * Callers:
 *     sub_18004DE74 @ 0x18004DE74 (sub_18004DE74.c)
 *     sub_180085B04 @ 0x180085B04 (sub_180085B04.c)
 *     sub_180085CC0 @ 0x180085CC0 (sub_180085CC0.c)
 *     sub_180086160 @ 0x180086160 (sub_180086160.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_12 @ 0x1800DAF55 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_12.c)
 *     sub_1800DAF79 @ 0x1800DAF79 (sub_1800DAF79.c)
 *     sub_1800DAF8B @ 0x1800DAF8B (sub_1800DAF8B.c)
 * Callees:
 *     sub_18004DAF0 @ 0x18004DAF0 (sub_18004DAF0.c)
 */

__int64 __fastcall sub_18004DDE8(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 144;
  sub_18004DAF0(a1 + 144);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
