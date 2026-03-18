/*
 * XREFs of ??1?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@QEAA@XZ @ 0x180259D30
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCursorVisualData@@@std@@@std@@YAXPEAUCursorVisualData@@QEAU1@AEAV?$allocator@UCursorVisualData@@@0@@Z @ 0x180259708 (--$_Destroy_range@V-$allocator@UCursorVisualData@@@std@@@std@@YAXPEAUCursorVisualData@@QEAU1@AEA.c)
 */

void __fastcall std::vector<CursorVisualData>::~vector<CursorVisualData>(CursorVisualData **a1)
{
  CursorVisualData *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CursorVisualData>>(v2, a1[1]);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
