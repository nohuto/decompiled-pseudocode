/*
 * XREFs of ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x1801F5CA4
 * Callers:
 *     ??$_Emplace_reallocate@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAPEAUKernelTap@@QEAU2@AEAM$$QEAM1@Z @ 0x1801F5550 (--$_Emplace_reallocate@AEAMMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAP.c)
 *     ??$_Reallocate@$0A@@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAXAEA_K@Z @ 0x1801F59B0 (--$_Reallocate@$0A@@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAXAEA_K@Z.c)
 *     ??$_Insert_counted_range@PEBUD2D_POINT_3F@@@?$vector@UD2D_POINT_3F@@V?$allocator@UD2D_POINT_3F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_POINT_3F@@@std@@@std@@@1@PEBUD2D_POINT_3F@@_K@Z @ 0x1801F5AB4 (--$_Insert_counted_range@PEBUD2D_POINT_3F@@@-$vector@UD2D_POINT_3F@@V-$allocator@UD2D_POINT_3F@@.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802461D8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<12>(unsigned __int64 a1)
{
  if ( a1 > 0x1555555555555555LL )
    std::_Throw_bad_array_new_length();
  return 12 * a1;
}
