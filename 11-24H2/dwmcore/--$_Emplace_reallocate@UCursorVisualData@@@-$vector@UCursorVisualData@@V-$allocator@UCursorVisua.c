/*
 * XREFs of ??$_Emplace_reallocate@UCursorVisualData@@@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@AEAAPEAUCursorVisualData@@QEAU2@$$QEAU2@@Z @ 0x18025977C
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18019E0EC (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1801F65D0 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18024E37C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     ??$_Uninitialized_move@PEAUCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@YAPEAUCursorVisualData@@QEAU1@0PEAU1@AEAV?$allocator@UCursorVisualData@@@0@@Z @ 0x180259A04 (--$_Uninitialized_move@PEAUCursorVisualData@@V-$allocator@UCursorVisualData@@@std@@@std@@YAPEAUC.c)
 *     ??0CursorVisualData@@QEAA@$$QEAU0@@Z @ 0x180259BA0 (--0CursorVisualData@@QEAA@$$QEAU0@@Z.c)
 *     ?_Change_array@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@AEAAXQEAUCursorVisualData@@_K1@Z @ 0x18025C6A8 (-_Change_array@-$vector@UCursorVisualData@@V-$allocator@UCursorVisualData@@@std@@@std@@AEAAXQEAU.c)
 */

unsigned __int64 __fastcall std::vector<CursorVisualData>::_Emplace_reallocate<CursorVisualData>(
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx

  v3 = 0x7FFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength();
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<32>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13 + (v4 & 0xFFFFFFFFFFFFFFE0uLL);
  v15 = v13;
  CursorVisualData::CursorVisualData(v14, a3);
  v16 = a1[1];
  v17 = v15;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<CursorVisualData *>(v18, a2, v15);
    v16 = a1[1];
    v17 = v14 + 32;
    v18 = a2;
  }
  std::_Uninitialized_move<CursorVisualData *>(v18, v16, v17);
  std::vector<CursorVisualData>::_Change_array(a1, v15, v9, v3);
  return v14;
}
