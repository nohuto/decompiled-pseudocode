/*
 * XREFs of sub_18007D560 @ 0x18007D560
 * Callers:
 *     sub_18007CF18 @ 0x18007CF18 (sub_18007CF18.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_10 @ 0x1800DA9F1 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_10.c)
 * Callees:
 *     sub_180075918 @ 0x180075918 (sub_180075918.c)
 */

__int64 __fastcall sub_18007D560(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180075918(v1);
  return result;
}
