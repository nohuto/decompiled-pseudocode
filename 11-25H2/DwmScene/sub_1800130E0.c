/*
 * XREFs of sub_1800130E0 @ 0x1800130E0
 * Callers:
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180012940 @ 0x180012940 (sub_180012940.c)
 *     sub_180026858 @ 0x180026858 (sub_180026858.c)
 *     sub_18002FA9C @ 0x18002FA9C (sub_18002FA9C.c)
 *     sub_18003001C @ 0x18003001C (sub_18003001C.c)
 *     sub_1800326A4 @ 0x1800326A4 (sub_1800326A4.c)
 *     sub_180033EE4 @ 0x180033EE4 (sub_180033EE4.c)
 *     sub_1800393B8 @ 0x1800393B8 (sub_1800393B8.c)
 *     sub_18004BB0C @ 0x18004BB0C (sub_18004BB0C.c)
 *     sub_180050750 @ 0x180050750 (sub_180050750.c)
 *     sub_180050950 @ 0x180050950 (sub_180050950.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     sub_1800751E0 @ 0x1800751E0 (sub_1800751E0.c)
 *     sub_180077D00 @ 0x180077D00 (sub_180077D00.c)
 *     sub_180078140 @ 0x180078140 (sub_180078140.c)
 *     sub_18007EEC0 @ 0x18007EEC0 (sub_18007EEC0.c)
 *     sub_18007F680 @ 0x18007F680 (sub_18007F680.c)
 *     sub_18008138C @ 0x18008138C (sub_18008138C.c)
 *     sub_180082320 @ 0x180082320 (sub_180082320.c)
 *     sub_1800854D0 @ 0x1800854D0 (sub_1800854D0.c)
 *     sub_18008C960 @ 0x18008C960 (sub_18008C960.c)
 *     sub_18008CAD8 @ 0x18008CAD8 (sub_18008CAD8.c)
 *     sub_180099028 @ 0x180099028 (sub_180099028.c)
 *     sub_1800D61D3 @ 0x1800D61D3 (sub_1800D61D3.c)
 *     sub_1800D6BA6 @ 0x1800D6BA6 (sub_1800D6BA6.c)
 *     sub_1800D6EA9 @ 0x1800D6EA9 (sub_1800D6EA9.c)
 *     unknown_libname_109 @ 0x1800D77EE (unknown_libname_109.c)
 *     sub_1800D921A @ 0x1800D921A (sub_1800D921A.c)
 *     ?dtor$0@?0??_Current_exception@exception_ptr@std@@SA?AV12@XZ@4HA_0 @ 0x1800D9E0B (-dtor$0@-0--_Current_exception@exception_ptr@std@@SA-AV12@XZ@4HA_0.c)
 *     ?dtor$0@?0???1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_0 @ 0x1800D9E5C (-dtor$0@-0---1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_0.c)
 *     unknown_libname_49 @ 0x1800D9EFF (unknown_libname_49.c)
 *     sub_1800D9F53 @ 0x1800D9F53 (sub_1800D9F53.c)
 *     ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_2 @ 0x1800E21F0 (-dtor$0@-0--do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@s_ea_1800E21F0.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_18 @ 0x1800E2739 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_18.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 */

__int64 __fastcall sub_1800130E0(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180012040((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010134(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
