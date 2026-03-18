/*
 * XREFs of ?_Change_array@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@AEAAXQEAUCursorVisualData@CComposition@@_K1@Z @ 0x18026667C
 * Callers:
 *     ??$_Emplace_reallocate@UCursorVisualData@CComposition@@@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@AEAAPEAUCursorVisualData@CComposition@@QEAU23@$$QEAU23@@Z @ 0x1802646BC (--$_Emplace_reallocate@UCursorVisualData@CComposition@@@-$vector@UCursorVisualData@CComposition@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@YAXPEAUCursorVisualData@CComposition@@QEAU12@AEAV?$allocator@UCursorVisualData@CComposition@@@0@@Z @ 0x180264648 (--$_Destroy_range@V-$allocator@UCursorVisualData@CComposition@@@std@@@std@@YAXPEAUCursorVisualDa.c)
 */

void __fastcall std::vector<CComposition::CursorVisualData>::_Change_array(
        CComposition::CursorVisualData **a1,
        CComposition::CursorVisualData *a2,
        __int64 a3,
        __int64 a4)
{
  CComposition::CursorVisualData *v6; // rcx

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CComposition::CursorVisualData>>(v6, a1[1]);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  *a1 = a2;
  a1[1] = (CComposition::CursorVisualData *)((char *)a2 + 32 * a3);
  a1[2] = (CComposition::CursorVisualData *)((char *)a2 + 32 * a4);
}
