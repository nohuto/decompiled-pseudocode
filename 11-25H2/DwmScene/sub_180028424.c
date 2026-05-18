/*
 * XREFs of sub_180028424 @ 0x180028424
 * Callers:
 *     sub_18002869C @ 0x18002869C (sub_18002869C.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_1800324D4 @ 0x1800324D4 (sub_1800324D4.c)
 *     sub_180032570 @ 0x180032570 (sub_180032570.c)
 *     sub_1800325B8 @ 0x1800325B8 (sub_1800325B8.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_18003279C @ 0x18003279C (sub_18003279C.c)
 *     sub_180033AB8 @ 0x180033AB8 (sub_180033AB8.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_1800346F4 @ 0x1800346F4 (sub_1800346F4.c)
 *     sub_180034AC8 @ 0x180034AC8 (sub_180034AC8.c)
 *     sub_180053528 @ 0x180053528 (sub_180053528.c)
 *     sub_18005BDE0 @ 0x18005BDE0 (sub_18005BDE0.c)
 *     ?dtor$0@?0??GetBitSet@SchedulerBase@details@Concurrency@@QEAA?AVQuickBitSet@23@PEBVlocation@3@@Z@4HA_0 @ 0x1800D6486 (-dtor$0@-0--GetBitSet@SchedulerBase@details@Concurrency@@QEAA-AVQuickBitSet@23@PEBV_ea_1800D6486.c)
 *     sub_1800D70DF @ 0x1800D70DF (sub_1800D70DF.c)
 *     sub_1800D71A5 @ 0x1800D71A5 (sub_1800D71A5.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_15 @ 0x1800D71B7 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D71B7.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_6 @ 0x1800D71FF (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_6.c)
 *     sub_1800D73A9 @ 0x1800D73A9 (sub_1800D73A9.c)
 *     sub_1800D7493 @ 0x1800D7493 (sub_1800D7493.c)
 *     sub_1800D74FD @ 0x1800D74FD (sub_1800D74FD.c)
 *     ?dtor$4@?0??_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z@4HA_0 @ 0x1800D8FFD (-dtor$4@-0--_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@st_ea_1800D8FFD.c)
 * Callees:
 *     sub_18002822C @ 0x18002822C (sub_18002822C.c)
 */

__int64 __fastcall sub_180028424(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return sub_18002822C(*(_QWORD *)a1);
  return result;
}
