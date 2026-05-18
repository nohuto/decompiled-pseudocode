/*
 * XREFs of sub_18004DF48 @ 0x18004DF48
 * Callers:
 *     sub_18004DFD4 @ 0x18004DFD4 (sub_18004DFD4.c)
 *     sub_180085C64 @ 0x180085C64 (sub_180085C64.c)
 *     sub_180085E20 @ 0x180085E20 (sub_180085E20.c)
 *     sub_1800862C0 @ 0x1800862C0 (sub_1800862C0.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_12 @ 0x1800DB0B5 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_12.c)
 *     sub_1800DB0D9 @ 0x1800DB0D9 (sub_1800DB0D9.c)
 *     sub_1800DB0EB @ 0x1800DB0EB (sub_1800DB0EB.c)
 * Callees:
 *     sub_18004DC50 @ 0x18004DC50 (sub_18004DC50.c)
 */

__int64 __fastcall sub_18004DF48(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 144;
  sub_18004DC50(a1 + 144);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
