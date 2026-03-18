/*
 * XREFs of ?_Change_array@?$vector@MV?$allocator@M@std@@@std@@AEAAXQEAM_K1@Z @ 0x18021376C
 * Callers:
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAPEAMQEAMAEBM@Z @ 0x180213304 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@MV?$allocator@M@std@@@std@@AEAAXAEA_K@Z @ 0x180213454 (--$_Reallocate@$0A@@-$vector@MV-$allocator@M@std@@@std@@AEAAXAEA_K@Z.c)
 *     ??$_Insert_counted_range@PEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@PEBM_K@Z @ 0x18023BA54 (--$_Insert_counted_range@PEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<float>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  __int64 result; // rax

  v6 = *(_QWORD **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 4 * a3;
  result = a2 + 4 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
