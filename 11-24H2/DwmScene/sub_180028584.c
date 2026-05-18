/*
 * XREFs of sub_180028584 @ 0x180028584
 * Callers:
 *     sub_1800287FC @ 0x1800287FC (sub_1800287FC.c)
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_1800326D0 @ 0x1800326D0 (sub_1800326D0.c)
 *     sub_180032718 @ 0x180032718 (sub_180032718.c)
 *     sub_180032794 @ 0x180032794 (sub_180032794.c)
 *     sub_1800328FC @ 0x1800328FC (sub_1800328FC.c)
 *     sub_180033C18 @ 0x180033C18 (sub_180033C18.c)
 *     sub_180034808 @ 0x180034808 (sub_180034808.c)
 *     sub_180034854 @ 0x180034854 (sub_180034854.c)
 *     sub_180034C28 @ 0x180034C28 (sub_180034C28.c)
 *     sub_180053688 @ 0x180053688 (sub_180053688.c)
 *     sub_18005BF40 @ 0x18005BF40 (sub_18005BF40.c)
 *     ?dtor$0@?0??GetBitSet@SchedulerBase@details@Concurrency@@QEAA?AVQuickBitSet@23@PEBVlocation@3@@Z@4HA_0 @ 0x1800D65E6 (-dtor$0@-0--GetBitSet@SchedulerBase@details@Concurrency@@QEAA-AVQuickBitSet@23@PEBV_ea_1800D65E6.c)
 *     sub_1800D723F @ 0x1800D723F (sub_1800D723F.c)
 *     sub_1800D7305 @ 0x1800D7305 (sub_1800D7305.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_15 @ 0x1800D7317 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D7317.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_6 @ 0x1800D735F (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_6.c)
 *     sub_1800D7509 @ 0x1800D7509 (sub_1800D7509.c)
 *     sub_1800D75F3 @ 0x1800D75F3 (sub_1800D75F3.c)
 *     sub_1800D765D @ 0x1800D765D (sub_1800D765D.c)
 *     ?dtor$4@?0??_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z@4HA_0 @ 0x1800D915D (-dtor$4@-0--_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@st_ea_1800D915D.c)
 * Callees:
 *     sub_18002838C @ 0x18002838C (sub_18002838C.c)
 */

__int64 __fastcall sub_180028584(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return sub_18002838C(*(_QWORD *)a1);
  return result;
}
