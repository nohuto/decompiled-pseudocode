/*
 * XREFs of ??$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAPEAU_DWMCaptureWindowInformation@@QEAU2@AEBU2@@Z @ 0x1800ABEC8
 * Callers:
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800B30CC (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800952E8 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAU_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@YAPEAU_DWMCaptureWindowInformation@@QEAU1@0PEAU1@AEAV?$allocator@U_DWMCaptureWindowInformation@@@0@@Z @ 0x1800AC494 (--$_Uninitialized_move@PEAU_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformat.c)
 *     ?_Change_array@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAXQEAU_DWMCaptureWindowInformation@@_K1@Z @ 0x1800B358C (-_Change_array@-$vector@U_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformatio.c)
 *     ?_Xlength@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ @ 0x1800B52FC (-_Xlength@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ.c)
 */

char *__fastcall std::vector<_DWMCaptureWindowInformation>::_Emplace_reallocate<_DWMCaptureWindowInformation const &>(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  const struct std::nothrow_t *v13; // rdx
  char *v14; // rax
  char *v15; // rsi
  char *v16; // r14
  _OWORD *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx

  v3 = 0x7FFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<CVisualProxy *>::_Xlength();
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
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of, v13);
  v15 = v14;
  v16 = &v14[v4 & 0xFFFFFFFFFFFFFFE0uLL];
  v17 = v14;
  *(_OWORD *)v16 = *a3;
  *((_OWORD *)v16 + 1) = a3[1];
  v18 = a1[1];
  v19 = *a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<_DWMCaptureWindowInformation *>(v19, a2, v14);
    v18 = a1[1];
    v17 = v16 + 32;
    v19 = a2;
  }
  std::_Uninitialized_move<_DWMCaptureWindowInformation *>(v19, v18, v17);
  std::vector<_DWMCaptureWindowInformation>::_Change_array(a1, v15, v9, v3);
  return v16;
}
