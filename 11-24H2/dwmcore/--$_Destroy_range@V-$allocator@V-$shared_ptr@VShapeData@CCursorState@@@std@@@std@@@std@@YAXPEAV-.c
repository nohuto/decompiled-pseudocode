/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VShapeData@CCursorState@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@0@@Z @ 0x1802B0918
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@YAPEAV?$shared_ptr@VShapeData@CCursorState@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@0@@Z @ 0x1802B14C4 (--$_Uninitialized_move@PEAV-$shared_ptr@VShapeData@CCursorState@@@std@@V-$allocator@V-$shared_pt.c)
 *     ??1?$vector@V?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@QEAA@XZ @ 0x1802B1930 (--1-$vector@V-$shared_ptr@VShapeData@CCursorState@@@std@@V-$allocator@V-$shared_ptr@VShapeData@C.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802B30A8 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VShapeData@CCursorState@@@2@_K1@Z @ 0x1802B4AC0 (-_Change_array@-$vector@V-$shared_ptr@VShapeData@CCursorState@@@std@@V-$allocator@V-$shared_ptr@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
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
