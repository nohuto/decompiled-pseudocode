/*
 * XREFs of ??$_Uninitialized_move@PEAUCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@YAPEAUCursorVisualData@@QEAU1@0PEAU1@AEAV?$allocator@UCursorVisualData@@@0@@Z @ 0x180259A04
 * Callers:
 *     ??$_Emplace_reallocate@UCursorVisualData@@@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@AEAAPEAUCursorVisualData@@QEAU2@$$QEAU2@@Z @ 0x18025977C (--$_Emplace_reallocate@UCursorVisualData@@@-$vector@UCursorVisualData@@V-$allocator@UCursorVisua.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UCursorVisualData@@@std@@@std@@YAXPEAUCursorVisualData@@QEAU1@AEAV?$allocator@UCursorVisualData@@@0@@Z @ 0x180259708 (--$_Destroy_range@V-$allocator@UCursorVisualData@@@std@@@std@@YAXPEAUCursorVisualData@@QEAU1@AEA.c)
 *     ??0CursorVisualData@@QEAA@$$QEAU0@@Z @ 0x180259BA0 (--0CursorVisualData@@QEAA@$$QEAU0@@Z.c)
 */

CursorVisualData *__fastcall std::_Uninitialized_move<CursorVisualData *>(__int64 a1, __int64 a2, CursorVisualData *a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 32LL )
  {
    CursorVisualData::CursorVisualData(a3, i);
    a3 = (CursorVisualData *)((char *)a3 + 32);
  }
  std::_Destroy_range<std::allocator<CursorVisualData>>(a3, a3);
  return a3;
}
