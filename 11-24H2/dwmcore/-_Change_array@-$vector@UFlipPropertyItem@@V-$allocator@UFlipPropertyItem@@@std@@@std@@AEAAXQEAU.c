/*
 * XREFs of ?_Change_array@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAXQEAUFlipPropertyItem@@_K1@Z @ 0x1801F6560
 * Callers:
 *     ??$_Emplace_reallocate@UFlipPropertyItem@@@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAPEAUFlipPropertyItem@@QEAU2@$$QEAU2@@Z @ 0x1801F6344 (--$_Emplace_reallocate@UFlipPropertyItem@@@-$vector@UFlipPropertyItem@@V-$allocator@UFlipPropert.c)
 *     ??$_Emplace_reallocate@AEBUFlipPropertyItem@@@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAPEAUFlipPropertyItem@@QEAU2@AEBU2@@Z @ 0x1801F6454 (--$_Emplace_reallocate@AEBUFlipPropertyItem@@@-$vector@UFlipPropertyItem@@V-$allocator@UFlipProp.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<FlipPropertyItem>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx

  v6 = *(_QWORD **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFE0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
}
