/*
 * XREFs of ??$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU23@$$QEAU23@@Z @ 0x1800AC0DC
 * Callers:
 *     ??$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@$$QEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@@Z @ 0x1800ACAB4 (--$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WINDOW@CCapture.c)
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800B30CC (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18009ABA4 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@0PEAU12@AEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@0@@Z @ 0x1800AC450 (--$_Uninitialized_move@PEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_FILTER.c)
 *     ??$construct@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@U12@@?$_Default_allocator_traits@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@SAXAEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@1@QEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@$$QEAU34@@Z @ 0x1800AC55C (--$construct@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@U12@@-$_Default_allocator_traits@V-$alloc.c)
 *     ?_Change_array@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAXQEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@_K1@Z @ 0x1800B3510 (-_Change_array@-$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_FILTERED.c)
 *     ?_Xlength@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ @ 0x1800B52FC (-_Xlength@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ.c)
 */

char *__fastcall std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Emplace_reallocate<CCaptureManager::CAPTURE_FILTERED_WINDOW>(
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
  unsigned __int64 size_of; // rax
  const struct std::nothrow_t *v13; // rdx
  char *v14; // rax
  char *v15; // r14
  char *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  char *v19; // r8
  __int64 v20; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<CVisualProxy *>::_Xlength();
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
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of, v13);
  v15 = &v14[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v16 = v14;
  std::_Default_allocator_traits<std::allocator<CCaptureManager::CAPTURE_FILTERED_WINDOW>>::construct<CCaptureManager::CAPTURE_FILTERED_WINDOW,CCaptureManager::CAPTURE_FILTERED_WINDOW>(
    v17,
    v15,
    a3);
  v18 = a1[1];
  v19 = v16;
  v20 = *a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<CCaptureManager::CAPTURE_FILTERED_WINDOW *>(v20, a2, v16);
    v18 = a1[1];
    v19 = v15 + 16;
    v20 = a2;
  }
  std::_Uninitialized_move<CCaptureManager::CAPTURE_FILTERED_WINDOW *>(v20, v18, v19);
  std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Change_array(a1, v16, v9, v3);
  return v15;
}
