/*
 * XREFs of ??0?$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x1802B16CC
 * Callers:
 *     std::_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x1802B0778 (std--_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a___--operator()_std--shared_ptr_CCursorStat.c)
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@VShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VShapeData@CCursorState@@@1@QEAV21@AEAV21@@Z @ 0x1802B099C (--$_Emplace_reallocate@AEAV-$shared_ptr@VShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@V.c)
 *     ??$emplace_back@AEAV?$shared_ptr@VShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@VShapeData@CCursorState@@@1@@Z @ 0x1802B156C (--$emplace_back@AEAV-$shared_ptr@VShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@VShapeDa.c)
 *     ??4?$shared_ptr@VShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1802B1ADC (--4-$shared_ptr@VShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802B30A8 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
