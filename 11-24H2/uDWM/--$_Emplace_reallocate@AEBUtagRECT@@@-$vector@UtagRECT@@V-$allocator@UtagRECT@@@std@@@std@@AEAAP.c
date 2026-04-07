/*
 * XREFs of ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x1800C00EC
 * Callers:
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800C046C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ??$emplace_back@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?A_TAEBUtagRECT@@@Z @ 0x1800D13C0 (--$emplace_back@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-A_TAEBU.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180096728 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18009ABA4 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@YAPEAUtagRECT@@QEAU1@0PEAU1@AEAV?$allocator@UtagRECT@@@0@@Z @ 0x1800C01D4 (--$_Uninitialized_move@PEAUtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@YAPEAUtagRECT@@QEAU1@0PEA.c)
 *     ?_Calculate_growth@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z @ 0x1800C0B5C (-_Calculate_growth@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z @ 0x1800C0B98 (-_Change_array@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z.c)
 */

char *__fastcall std::vector<tagRECT>::_Emplace_reallocate<tagRECT const &>(__int64 *a1, __int64 a2, _OWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 size_of; // rax
  const struct std::nothrow_t *v11; // rdx
  char *v12; // rax
  char *v13; // rdi
  _OWORD *v14; // r8
  char *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)0xFFFFFFFFFFFFFFFLL);
  v8 = v6 + 1;
  v9 = std::vector<tagRECT>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of, v11);
  v13 = v12;
  v14 = v12;
  v15 = &v12[(a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL];
  *(_OWORD *)v15 = *a3;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<tagRECT *>(v17, a2, v12);
    v16 = a1[1];
    v14 = v15 + 16;
    v17 = a2;
  }
  std::_Uninitialized_move<tagRECT *>(v17, v16, v14);
  std::vector<tagRECT>::_Change_array(a1, v13, v8, v9);
  return v15;
}
