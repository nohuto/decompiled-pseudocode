/*
 * XREFs of ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x18004D698
 * Callers:
 *     ?IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800563F0 (-IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@.c)
 *     ?GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18005851C (-GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV-$vector@PEBVCDWM.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18004D03C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAPEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCDWMDisplay@@QEAPEBV1@0PEAPEBV1@AEAV?$allocator@PEBVCDWMDisplay@@@0@@Z @ 0x180096650 (--$_Uninitialized_move@PEAPEBVCDWMDisplay@@V-$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCD.c)
 *     ??$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x180096690 (--$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180096728 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Calculate_growth@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x180096CA4 (-_Calculate_growth@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVi.c)
 *     ?_Change_array@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAXQEAPEAUHWND__@@_K1@Z @ 0x180097BFC (-_Change_array@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@AEAAXQEAPEAUHWND__@@_K1.c)
 */

char *__fastcall std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>(
        void **a1,
        _BYTE *a2,
        _QWORD *a3)
{
  _BYTE *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 size_of; // rax
  const struct std::nothrow_t *v11; // rdx
  char *v12; // rdi
  char *v13; // r14
  void *v14; // rcx

  v3 = *a1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)0x1FFFFFFFFFFFFFFFLL);
  v8 = v6 + 1;
  v9 = std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of, v11);
  v13 = &v12[8 * ((a2 - v3) >> 3)];
  *(_QWORD *)v13 = *a3;
  v14 = *a1;
  if ( a2 == a1[1] )
  {
    std::_Copy_memmove<tagRECT *,tagRECT *>(v14);
  }
  else
  {
    std::_Uninitialized_move<CDWMDisplay const * *>(v14, a2, v12);
    std::_Uninitialized_move<CDWMDisplay const * *>(a2, a1[1], v13 + 8);
  }
  std::vector<HWND__ *>::_Change_array(a1, v12, v8, v9);
  return &v12[8 * ((a2 - v3) >> 3)];
}
