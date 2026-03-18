/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$shared_ptr@UShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UShapeData@CCursorState@@@1@QEAV21@AEAV21@@Z @ 0x1802BA4A8
 * Callers:
 *     ??$emplace_back@AEAV?$shared_ptr@UShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@UShapeData@CCursorState@@@1@@Z @ 0x1802BB170 (--$emplace_back@AEAV-$shared_ptr@UShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@UShapeDa.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18006BBB0 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UShapeData@CCursorState@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@0@@Z @ 0x1802BA468 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV-.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@YAPEAV?$shared_ptr@UShapeData@CCursorState@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@0@@Z @ 0x1802BB110 (--$_Uninitialized_move@PEAV-$shared_ptr@UShapeData@CCursorState@@@std@@V-$allocator@V-$shared_pt.c)
 *     ??0?$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x1802BB2BC (--0-$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z.c)
 */

unsigned __int64 __fastcall std::vector<std::shared_ptr<CCursorState::ShapeData>>::_Emplace_reallocate<std::shared_ptr<CCursorState::ShapeData> &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 result; // rax

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v9;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  v15 = v13;
  std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(v14, a3, v16, v17);
  v18 = a1[1];
  v19 = v15;
  v20 = *a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<std::shared_ptr<CCursorState::ShapeData> *,std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(
      v20,
      a2,
      v15);
    v18 = a1[1];
    v19 = v14 + 16;
    v20 = a2;
  }
  std::_Uninitialized_move<std::shared_ptr<CCursorState::ShapeData> *,std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(
    v20,
    v18,
    v19);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(*a1, a1[1]);
    std::_Deallocate<16,0>((_QWORD *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = v15;
  result = v14;
  a1[1] = v15 + 16 * v9;
  a1[2] = v15 + 16 * v3;
  return result;
}
