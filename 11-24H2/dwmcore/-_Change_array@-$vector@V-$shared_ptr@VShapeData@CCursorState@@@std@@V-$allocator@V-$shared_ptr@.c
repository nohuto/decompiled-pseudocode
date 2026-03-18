/*
 * XREFs of ?_Change_array@?$vector@V?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VShapeData@CCursorState@@@2@_K1@Z @ 0x1802B4AC0
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@VShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VShapeData@CCursorState@@@1@QEAV21@AEAV21@@Z @ 0x1802B099C (--$_Emplace_reallocate@AEAV-$shared_ptr@VShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VShapeData@CCursorState@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@0@@Z @ 0x1802B0918 (--$_Destroy_range@V-$allocator@V-$shared_ptr@VShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV-.c)
 */

void __fastcall std::vector<std::shared_ptr<CCursorState::ShapeData>>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(v6, a1[1]);
    std::_Deallocate<16,0>((_QWORD *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = a2;
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
}
