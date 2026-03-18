/*
 * XREFs of ?_Change_array@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z @ 0x1801E9A18
 * Callers:
 *     ??$_Insert_counted_range@PEBUD2D_RECT_F@@@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_RECT_F@@@std@@@std@@@1@PEBUD2D_RECT_F@@_K@Z @ 0x180026D40 (--$_Insert_counted_range@PEBUD2D_RECT_F@@@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@.c)
 *     ??$_Emplace_reallocate@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEAU2@@Z @ 0x1801E9AB8 (--$_Emplace_reallocate@AEAUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAP.c)
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1801E9BC4 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAPEAU.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<tagRECT>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  unsigned __int64 v9; // rdx

  v6 = *(_QWORD **)a1;
  if ( v6 )
  {
    v9 = (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v9 >= 0x1000 )
    {
      v9 += 39LL;
      if ( (unsigned __int64)v6 - *(v6 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v6 = (_QWORD *)*(v6 - 1);
    }
    operator delete(v6, v9);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
