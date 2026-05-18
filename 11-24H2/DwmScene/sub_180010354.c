/*
 * XREFs of sub_180010354 @ 0x180010354
 * Callers:
 *     sub_180010180 @ 0x180010180 (sub_180010180.c)
 *     sub_180014744 @ 0x180014744 (sub_180014744.c)
 *     sub_180016118 @ 0x180016118 (sub_180016118.c)
 *     sub_18001623C @ 0x18001623C (sub_18001623C.c)
 *     sub_180016360 @ 0x180016360 (sub_180016360.c)
 *     sub_180016450 @ 0x180016450 (sub_180016450.c)
 *     sub_18001651C @ 0x18001651C (sub_18001651C.c)
 *     sub_1800165E8 @ 0x1800165E8 (sub_1800165E8.c)
 *     sub_1800D519F @ 0x1800D519F (sub_1800D519F.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_1 @ 0x1800D5C1B (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_1.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_1 @ 0x1800D5C3F (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_1.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

__int64 __fastcall sub_180010354(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000BB4C(v1);
  return result;
}
