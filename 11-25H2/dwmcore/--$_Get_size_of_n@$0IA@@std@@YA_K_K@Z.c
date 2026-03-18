/*
 * XREFs of ??$_Get_size_of_n@$0IA@@std@@YA_K_K@Z @ 0x1801EC758
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAPEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@QEAU2@AEBU2@@Z @ 0x1801EC59C (--$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@UDWM_PRESENT_MULTIPLANE_OVE.c)
 *     ??$_Emplace_reallocate@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@AEAAPEAUMonitorData@CCursorState@@QEAU23@$$QEAU23@@Z @ 0x1802BA5E0 (--$_Emplace_reallocate@UMonitorData@CCursorState@@@-$vector@UMonitorData@CCursorState@@V-$alloca.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180250B48 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 __fastcall std::_Get_size_of_n<128>(unsigned __int64 a1)
{
  if ( a1 > 0x1FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return a1 << 7;
}
