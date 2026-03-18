/*
 * XREFs of ?_Change_array@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@AEAAXQEAUCursorVisualData@@_K1@Z @ 0x18025C6A8
 * Callers:
 *     ??$_Emplace_reallocate@UCursorVisualData@@@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@AEAAPEAUCursorVisualData@@QEAU2@$$QEAU2@@Z @ 0x18025977C (--$_Emplace_reallocate@UCursorVisualData@@@-$vector@UCursorVisualData@@V-$allocator@UCursorVisua.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCursorVisualData@@@std@@@std@@YAXPEAUCursorVisualData@@QEAU1@AEAV?$allocator@UCursorVisualData@@@0@@Z @ 0x180259708 (--$_Destroy_range@V-$allocator@UCursorVisualData@@@std@@@std@@YAXPEAUCursorVisualData@@QEAU1@AEA.c)
 */

void __fastcall std::vector<CursorVisualData>::_Change_array(
        CursorVisualData **a1,
        CursorVisualData *a2,
        __int64 a3,
        __int64 a4)
{
  CursorVisualData *v6; // rcx

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CursorVisualData>>(v6, a1[1]);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  *a1 = a2;
  a1[1] = (CursorVisualData *)((char *)a2 + 32 * a3);
  a1[2] = (CursorVisualData *)((char *)a2 + 32 * a4);
}
