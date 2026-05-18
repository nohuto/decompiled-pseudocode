/*
 * XREFs of sub_1800131E0 @ 0x1800131E0
 * Callers:
 *     sub_180012540 @ 0x180012540 (sub_180012540.c)
 *     sub_180012A40 @ 0x180012A40 (sub_180012A40.c)
 *     sub_1800269B8 @ 0x1800269B8 (sub_1800269B8.c)
 *     sub_18002FBFC @ 0x18002FBFC (sub_18002FBFC.c)
 *     sub_18003017C @ 0x18003017C (sub_18003017C.c)
 *     sub_180032804 @ 0x180032804 (sub_180032804.c)
 *     sub_180034044 @ 0x180034044 (sub_180034044.c)
 *     sub_180039518 @ 0x180039518 (sub_180039518.c)
 *     sub_18004BC6C @ 0x18004BC6C (sub_18004BC6C.c)
 *     sub_1800508B0 @ 0x1800508B0 (sub_1800508B0.c)
 *     sub_180050AB0 @ 0x180050AB0 (sub_180050AB0.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 *     sub_180068F70 @ 0x180068F70 (sub_180068F70.c)
 *     sub_180075340 @ 0x180075340 (sub_180075340.c)
 *     sub_180077E60 @ 0x180077E60 (sub_180077E60.c)
 *     sub_1800782A0 @ 0x1800782A0 (sub_1800782A0.c)
 *     sub_18007F020 @ 0x18007F020 (sub_18007F020.c)
 *     sub_18007F7E0 @ 0x18007F7E0 (sub_18007F7E0.c)
 *     sub_1800814EC @ 0x1800814EC (sub_1800814EC.c)
 *     sub_180082480 @ 0x180082480 (sub_180082480.c)
 *     sub_180085630 @ 0x180085630 (sub_180085630.c)
 *     sub_18008CAC0 @ 0x18008CAC0 (sub_18008CAC0.c)
 *     sub_18008CC38 @ 0x18008CC38 (sub_18008CC38.c)
 *     sub_180099188 @ 0x180099188 (sub_180099188.c)
 *     sub_1800D6333 @ 0x1800D6333 (sub_1800D6333.c)
 *     sub_1800D6D06 @ 0x1800D6D06 (sub_1800D6D06.c)
 *     sub_1800D7009 @ 0x1800D7009 (sub_1800D7009.c)
 *     unknown_libname_109 @ 0x1800D794E (unknown_libname_109.c)
 *     sub_1800D937A @ 0x1800D937A (sub_1800D937A.c)
 *     ?dtor$0@?0??_Current_exception@exception_ptr@std@@SA?AV12@XZ@4HA_0 @ 0x1800D9F6B (-dtor$0@-0--_Current_exception@exception_ptr@std@@SA-AV12@XZ@4HA_0.c)
 *     ?dtor$0@?0???1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_0 @ 0x1800D9FBC (-dtor$0@-0---1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_0.c)
 *     unknown_libname_49 @ 0x1800DA05F (unknown_libname_49.c)
 *     sub_1800DA0B3 @ 0x1800DA0B3 (sub_1800DA0B3.c)
 *     ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_2 @ 0x1800E2350 (-dtor$0@-0--do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@s_ea_1800E2350.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_18 @ 0x1800E2899 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_18.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 */

__int64 __fastcall sub_1800131E0(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180012140((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010234(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
