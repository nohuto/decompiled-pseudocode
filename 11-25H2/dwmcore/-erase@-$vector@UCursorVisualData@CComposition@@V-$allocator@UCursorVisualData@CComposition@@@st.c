/*
 * XREFs of ?erase@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@@Z @ 0x180266908
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800764D0 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800C717C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1801986F8 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?FindCursorVisual@CComposition@@QEAAPEAVCExcludeVisualReference@@PEBVCVisual@@@Z @ 0x18023C5DC (-FindCursorVisual@CComposition@@QEAAPEAVCExcludeVisualReference@@PEBVCVisual@@@Z.c)
 *     ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x18028D618 (-ForEachCursorVisual@CComposition@@QEAAJV-$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@.c)
 * Callees:
 *     ??$_Move_unchecked@PEAUCursorVisualData@CComposition@@PEAU12@@std@@YAPEAUCursorVisualData@CComposition@@PEAU12@00@Z @ 0x180264894 (--$_Move_unchecked@PEAUCursorVisualData@CComposition@@PEAU12@@std@@YAPEAUCursorVisualData@CCompo.c)
 *     ??1CursorVisualData@CComposition@@QEAA@XZ @ 0x18026547C (--1CursorVisualData@CComposition@@QEAA@XZ.c)
 */

__int64 *__fastcall std::vector<CComposition::CursorVisualData>::erase(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *result; // rax

  std::_Move_unchecked<CComposition::CursorVisualData *,CComposition::CursorVisualData *>(
    a3 + 32,
    *(_QWORD *)(a1 + 8),
    a3);
  CComposition::CursorVisualData::~CursorVisualData((CComposition::CursorVisualData *)(*(_QWORD *)(a1 + 8) - 32LL));
  *(_QWORD *)(a1 + 8) -= 32LL;
  result = a2;
  *a2 = a3;
  return result;
}
