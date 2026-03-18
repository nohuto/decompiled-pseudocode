/*
 * XREFs of ??1?$vector@V?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@QEAA@XZ @ 0x1802B1930
 * Callers:
 *     ??1CCursorState@@UEAA@XZ @ 0x1802B19D8 (--1CCursorState@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VShapeData@CCursorState@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@0@@Z @ 0x1802B0918 (--$_Destroy_range@V-$allocator@V-$shared_ptr@VShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV-.c)
 */

void __fastcall std::vector<std::shared_ptr<CCursorState::ShapeData>>::~vector<std::shared_ptr<CCursorState::ShapeData>>(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(v2, a1[1]);
    std::_Deallocate<16,0>((_QWORD *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
