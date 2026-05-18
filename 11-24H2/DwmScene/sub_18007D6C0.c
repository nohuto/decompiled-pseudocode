/*
 * XREFs of sub_18007D6C0 @ 0x18007D6C0
 * Callers:
 *     sub_18007D078 @ 0x18007D078 (sub_18007D078.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_10 @ 0x1800DAB51 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_10.c)
 * Callees:
 *     sub_180075A78 @ 0x180075A78 (sub_180075A78.c)
 */

__int64 __fastcall sub_18007D6C0(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180075A78(v1);
  return result;
}
