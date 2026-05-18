/*
 * XREFs of sub_1800246B0 @ 0x1800246B0
 * Callers:
 *     sub_18004E270 @ 0x18004E270 (sub_18004E270.c)
 *     sub_180051210 @ 0x180051210 (sub_180051210.c)
 *     sub_18005128C @ 0x18005128C (sub_18005128C.c)
 *     sub_1800515E4 @ 0x1800515E4 (sub_1800515E4.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 *     sub_1800CABE8 @ 0x1800CABE8 (sub_1800CABE8.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_8 @ 0x1800D8E19 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_8.c)
 *     sub_1800D8E89 @ 0x1800D8E89 (sub_1800D8E89.c)
 *     unknown_libname_71 @ 0x1800E2121 (unknown_libname_71.c)
 *     sub_1800E2133 @ 0x1800E2133 (sub_1800E2133.c)
 *     sub_1800E22B6 @ 0x1800E22B6 (sub_1800E22B6.c)
 * Callees:
 *     sub_18001B258 @ 0x18001B258 (sub_18001B258.c)
 */

void __fastcall sub_1800246B0(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    sub_18001B258(v1);
}
