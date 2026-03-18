/*
 * XREFs of ??$_Get_size_of_n@$0FI@@std@@YA_K_K@Z @ 0x180250B1C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@AEAAPEAUPlane@CDDisplayCachedScanout@@QEAU23@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801C6D84 (--$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@UPlane@CDDisplayCachedScano.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180250B48 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<88>(unsigned __int64 a1)
{
  if ( a1 > 0x2E8BA2E8BA2E8BALL )
    std::_Throw_bad_array_new_length();
  return 88 * a1;
}
