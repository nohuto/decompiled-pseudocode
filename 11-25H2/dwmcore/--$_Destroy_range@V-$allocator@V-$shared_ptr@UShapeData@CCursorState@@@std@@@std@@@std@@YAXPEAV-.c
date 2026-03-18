/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UShapeData@CCursorState@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@0@@Z @ 0x1802BA468
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@UShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UShapeData@CCursorState@@@1@QEAV21@AEAV21@@Z @ 0x1802BA4A8 (--$_Emplace_reallocate@AEAV-$shared_ptr@UShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@U.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@YAPEAV?$shared_ptr@UShapeData@CCursorState@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@0@@Z @ 0x1802BB110 (--$_Uninitialized_move@PEAV-$shared_ptr@UShapeData@CCursorState@@@std@@V-$allocator@V-$shared_pt.c)
 *     ??1CCursorState@@UEAA@XZ @ 0x1802BB4EC (--1CCursorState@@UEAA@XZ.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802BC708 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18010363C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  std::_Ref_count_base *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(std::_Ref_count_base **)(v3 + 8);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
