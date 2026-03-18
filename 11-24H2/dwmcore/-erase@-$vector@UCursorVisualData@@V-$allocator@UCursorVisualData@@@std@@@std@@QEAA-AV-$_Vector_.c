/*
 * XREFs of ?erase@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@@Z @ 0x18025C968
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180061A30 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800992D8 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18019E044 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18019E0EC (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x180282460 (-ForEachCursorVisual@CComposition@@QEAAJV-$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@.c)
 *     ?GetCursorVisuals@CComposition@@QEAA?BV?$span@$$CBUCursorVisualData@@$0?0@gsl@@XZ @ 0x180295DF4 (-GetCursorVisuals@CComposition@@QEAA-BV-$span@$$CBUCursorVisualData@@$0-0@gsl@@XZ.c)
 * Callees:
 *     ??$_Move_unchecked@PEAUCursorVisualData@@PEAU1@@std@@YAPEAUCursorVisualData@@PEAU1@00@Z @ 0x180259954 (--$_Move_unchecked@PEAUCursorVisualData@@PEAU1@@std@@YAPEAUCursorVisualData@@PEAU1@00@Z.c)
 *     ??1CursorVisualData@@QEAA@XZ @ 0x18025A508 (--1CursorVisualData@@QEAA@XZ.c)
 */

__int64 *__fastcall std::vector<CursorVisualData>::erase(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *result; // rax

  std::_Move_unchecked<CursorVisualData *,CursorVisualData *>(a3 + 32, *(_QWORD *)(a1 + 8), a3);
  CursorVisualData::~CursorVisualData((CursorVisualData *)(*(_QWORD *)(a1 + 8) - 32LL));
  *(_QWORD *)(a1 + 8) -= 32LL;
  result = a2;
  *a2 = a3;
  return result;
}
