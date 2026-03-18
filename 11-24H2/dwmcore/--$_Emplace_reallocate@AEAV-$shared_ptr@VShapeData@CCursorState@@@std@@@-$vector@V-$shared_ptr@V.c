/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$shared_ptr@VShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VShapeData@CCursorState@@@1@QEAV21@AEAV21@@Z @ 0x1802B099C
 * Callers:
 *     ??$emplace_back@AEAV?$shared_ptr@VShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@VShapeData@CCursorState@@@1@@Z @ 0x1802B156C (--$emplace_back@AEAV-$shared_ptr@VShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@VShapeDa.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180041D70 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18024E37C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@YAPEAV?$shared_ptr@VShapeData@CCursorState@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@0@@Z @ 0x1802B14C4 (--$_Uninitialized_move@PEAV-$shared_ptr@VShapeData@CCursorState@@@std@@V-$allocator@V-$shared_pt.c)
 *     ??0?$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x1802B16CC (--0-$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VShapeData@CCursorState@@@2@_K1@Z @ 0x1802B4AC0 (-_Change_array@-$vector@V-$shared_ptr@VShapeData@CCursorState@@@std@@V-$allocator@V-$shared_ptr@.c)
 */

unsigned __int64 __fastcall std::vector<std::shared_ptr<CCursorState::ShapeData>>::_Emplace_reallocate<std::shared_ptr<CCursorState::ShapeData> &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength();
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
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
  std::vector<std::shared_ptr<CCursorState::ShapeData>>::_Change_array(a1, v15, v9, v3);
  return v14;
}
