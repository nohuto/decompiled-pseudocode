/*
 * XREFs of sub_180010254 @ 0x180010254
 * Callers:
 *     sub_180010080 @ 0x180010080 (sub_180010080.c)
 *     sub_180014644 @ 0x180014644 (sub_180014644.c)
 *     sub_180016018 @ 0x180016018 (sub_180016018.c)
 *     sub_18001613C @ 0x18001613C (sub_18001613C.c)
 *     sub_180016260 @ 0x180016260 (sub_180016260.c)
 *     sub_180016350 @ 0x180016350 (sub_180016350.c)
 *     sub_18001641C @ 0x18001641C (sub_18001641C.c)
 *     sub_1800164E8 @ 0x1800164E8 (sub_1800164E8.c)
 *     sub_1800D503F @ 0x1800D503F (sub_1800D503F.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_1 @ 0x1800D5ABB (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_1.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_1 @ 0x1800D5ADF (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_1.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

__int64 __fastcall sub_180010254(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000B77C(v1);
  return result;
}
