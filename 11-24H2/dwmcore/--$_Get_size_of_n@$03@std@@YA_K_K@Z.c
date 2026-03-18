/*
 * XREFs of ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180206D1C
 * Callers:
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAPEAMQEAMAEBM@Z @ 0x180206950 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@MV?$allocator@M@std@@@std@@AEAAXAEA_K@Z @ 0x180206AA0 (--$_Reallocate@$0A@@-$vector@MV-$allocator@M@std@@@std@@AEAAXAEA_K@Z.c)
 *     ??$_Insert_counted_range@PEBH@?$vector@HV?$allocator@H@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@H@std@@@std@@@1@PEBH_K@Z @ 0x180206BBC (--$_Insert_counted_range@PEBH@-$vector@HV-$allocator@H@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ??$_Insert_counted_range@PEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@PEBM_K@Z @ 0x18022F824 (--$_Insert_counted_range@PEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x180260AEC (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802461D8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<4>(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 4 * a1;
}
