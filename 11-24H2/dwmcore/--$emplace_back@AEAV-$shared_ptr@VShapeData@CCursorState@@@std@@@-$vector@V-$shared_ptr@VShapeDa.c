/*
 * XREFs of ??$emplace_back@AEAV?$shared_ptr@VShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@VShapeData@CCursorState@@@1@@Z @ 0x1802B156C
 * Callers:
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802B30A8 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4DXGI_MODE_ROTATION@@_N@Z @ 0x1802B47F4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@VShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VShapeData@CCursorState@@@1@QEAV21@AEAV21@@Z @ 0x1802B099C (--$_Emplace_reallocate@AEAV-$shared_ptr@VShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@V.c)
 *     ??0?$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x1802B16CC (--0-$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z.c)
 */

unsigned __int64 __fastcall std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rcx

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<std::shared_ptr<CCursorState::ShapeData>>::_Emplace_reallocate<std::shared_ptr<CCursorState::ShapeData> &>(
             a1,
             v4,
             a2);
  std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(v4, a2, a3, a1);
  v6 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(v5 + 8) = v6 + 16;
  return v6;
}
