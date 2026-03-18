/*
 * XREFs of ?clear@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@QEAAXXZ @ 0x18025C834
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UCursorVisualData@@@std@@@std@@YAXPEAUCursorVisualData@@QEAU1@AEAV?$allocator@UCursorVisualData@@@0@@Z @ 0x180259708 (--$_Destroy_range@V-$allocator@UCursorVisualData@@@std@@@std@@YAXPEAUCursorVisualData@@QEAU1@AEA.c)
 */

CursorVisualData *__fastcall std::vector<CursorVisualData>::clear(CursorVisualData **a1)
{
  CursorVisualData *v1; // rdx
  CursorVisualData *result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    std::_Destroy_range<std::allocator<CursorVisualData>>(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
