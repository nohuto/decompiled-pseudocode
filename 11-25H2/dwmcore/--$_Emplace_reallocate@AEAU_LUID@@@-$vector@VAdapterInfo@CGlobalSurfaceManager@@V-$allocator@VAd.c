/*
 * XREFs of ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x1800FEBF0
 * Callers:
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800FFA34 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800FED34 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAXQEAVAdapterInfo@CGlobalSurfaceManager@@_K1@Z @ 0x1800FED64 (-_Change_array@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalSur.c)
 *     ??$_Uninitialized_move@PEAVAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV12@0PEAV12@AEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@0@@Z @ 0x1800FEEF4 (--$_Uninitialized_move@PEAVAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalS.c)
 *     ??$construct@VAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@?$_Default_allocator_traits@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@SAXAEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@1@QEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x1800FFC48 (--$construct@VAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@-$_Default_allocator_traits@V-$allo.c)
 */

__int64 __fastcall std::vector<CGlobalSurfaceManager::AdapterInfo>::_Emplace_reallocate<_LUID &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx

  v4 = 0xAAAAAAAAAAAAAAALL;
  v7 = (a2 - *a1) / 24;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<24>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = 3 * v7;
  v15 = v13;
  v16 = v13 + 24 * v7;
  std::_Default_allocator_traits<std::allocator<CGlobalSurfaceManager::AdapterInfo>>::construct<CGlobalSurfaceManager::AdapterInfo,_LUID &>(
    v14,
    v16,
    a3);
  v17 = a1[1];
  v18 = v15;
  v19 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<CGlobalSurfaceManager::AdapterInfo *>(v19, a2, v15);
    v17 = a1[1];
    v18 = v16 + 24;
    v19 = a2;
  }
  std::_Uninitialized_move<CGlobalSurfaceManager::AdapterInfo *>(v19, v17, v18);
  std::vector<CGlobalSurfaceManager::AdapterInfo>::_Change_array(a1, v15, v9, v4);
  return v16;
}
