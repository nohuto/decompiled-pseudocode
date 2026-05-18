/*
 * XREFs of sub_18006981C @ 0x18006981C
 * Callers:
 *     sub_1800693BC @ 0x1800693BC (sub_1800693BC.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_4 @ 0x1800D9CBC (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_4.c)
 * Callees:
 *     sub_180069C18 @ 0x180069C18 (sub_180069C18.c)
 */

__int64 __fastcall sub_18006981C(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return sub_180069C18();
  return result;
}
