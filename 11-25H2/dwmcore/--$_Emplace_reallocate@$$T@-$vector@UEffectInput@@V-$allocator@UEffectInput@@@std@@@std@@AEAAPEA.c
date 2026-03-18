/*
 * XREFs of ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x1801EE49C
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18007CC64 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18012AB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAA?A_T$$QEA$$T@Z @ 0x1801EE454 (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAA-A_T$$QEA$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@YAPEAUEffectInput@@QEAU1@0PEAU1@AEAV?$allocator@UEffectInput@@@0@@Z @ 0x18007E0D0 (--$_Uninitialized_move@PEAUEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@YAPEAUEffectInput.c)
 *     ?_Change_array@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInput@@_K1@Z @ 0x1801EE5E4 (-_Change_array@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInpu.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180250B48 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::vector<EffectInput>::_Emplace_reallocate<std::nullptr_t>(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx

  v3 = (unsigned __int128)((a2 - *a1) * (__int128)0x4924924924924925LL) >> 64;
  v5 = ((unsigned __int64)v3 >> 63) + (v3 >> 5);
  v6 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 4);
  if ( v6 == 0x249249249249249LL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 4);
  v9 = v8 >> 1;
  if ( v8 <= 0x249249249249249LL - (v8 >> 1) )
  {
    v10 = v7;
    if ( v9 + v8 >= v7 )
      v10 = v9 + v8;
    if ( v10 > 0x249249249249249LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v10 = 0x249249249249249LL;
  }
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(112 * v10);
  v12 = v11 + 112 * v5;
  *(_QWORD *)v12 = 0LL;
  *(_QWORD *)(v12 + 8) = 0LL;
  *(_BYTE *)(v12 + 16) = 0;
  *(_OWORD *)(v12 + 48) = 0LL;
  v13 = a1[1];
  v14 = *a1;
  if ( a2 == v13 )
  {
    std::_Uninitialized_move<EffectInput *>(v14, v13, v11);
  }
  else
  {
    std::_Uninitialized_move<EffectInput *>(v14, a2, v11);
    std::_Uninitialized_move<EffectInput *>(a2, a1[1], v12 + 112);
  }
  std::vector<EffectInput>::_Change_array(a1, v11, v7, v10);
  return v12;
}
