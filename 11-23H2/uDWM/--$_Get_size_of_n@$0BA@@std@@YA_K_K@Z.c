/*
 * XREFs of ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800BB6BC
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800BB5C8 (--$_Emplace_reallocate@AEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniq.c)
 *     ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x1800D8D70 (--$_Emplace_reallocate@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAP.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800B8754 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<16>(unsigned __int64 a1)
{
  if ( a1 > 0xFFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 16 * a1;
}
