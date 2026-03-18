/*
 * XREFs of ?_Change_array@?$vector@UMilGradientStop@@V?$allocator@UMilGradientStop@@@std@@@std@@AEAAXQEAUMilGradientStop@@_K1@Z @ 0x18022CA30
 * Callers:
 *     ??$_Insert_counted_range@PEBUMilGradientStop@@@?$vector@UMilGradientStop@@V?$allocator@UMilGradientStop@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilGradientStop@@@std@@@std@@@1@PEBUMilGradientStop@@_K@Z @ 0x180224CF4 (--$_Insert_counted_range@PEBUMilGradientStop@@@-$vector@UMilGradientStop@@V-$allocator@UMilGradi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<MilGradientStop>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  __int64 result; // rax

  v6 = *(_QWORD **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 24 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 24 * a4;
  return result;
}
