/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAVCVisualProxy@@@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@AEAAPEAPEAVCVisualProxy@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800ABDC8
 * Callers:
 *     ?BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1800AD5A0 (-BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV-$vector@PEAUHWND__@@V-$all.c)
 *     ?push_back@?$vector@UDWM_CAPTURE_TOKEN@@V?$allocator@UDWM_CAPTURE_TOKEN@@@std@@@std@@QEAAX$$QEAUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B5740 (-push_back@-$vector@UDWM_CAPTURE_TOKEN@@V-$allocator@UDWM_CAPTURE_TOKEN@@@std@@@std@@QEAAX$$QEAU.c)
 *     ?BuildCaptureWindowVisualExclusionList@CProjectionBorderManager@@UEAAJPEAXAEBV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1800CB8B0 (-BuildCaptureWindowVisualExclusionList@CProjectionBorderManager@@UEAAJPEAXAEBV-$vector@PEAUHWND_.c)
 *     ?GetCaptureWindowExclusionList@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_BUILDCAPTUREWINDOWVISUALEXCLUSIONLIST@@AEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1800EFF2C (-GetCaptureWindowExclusionList@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_BUILDCAPTUREWINDOWVI.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18004D03C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAPEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCDWMDisplay@@QEAPEBV1@0PEAPEBV1@AEAV?$allocator@PEBVCDWMDisplay@@@0@@Z @ 0x180096650 (--$_Uninitialized_move@PEAPEBVCDWMDisplay@@V-$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCD.c)
 *     ?_Change_array@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAXQEAPEAUHWND__@@_K1@Z @ 0x180097BFC (-_Change_array@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@AEAAXQEAPEAUHWND__@@_K1.c)
 *     ?_Xlength@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ @ 0x1800B52FC (-_Xlength@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ.c)
 */

char *__fastcall std::vector<CVisualProxy *>::_Emplace_reallocate<CVisualProxy * const &>(
        void **a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  const struct std::nothrow_t *v13; // rdx
  char *v14; // rsi
  __int64 v15; // r8
  char *v16; // r14
  __int64 v17; // rdx
  void *v18; // rcx

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - (__int64)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<CVisualProxy *>::_Xlength();
  v9 = v7 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of, v13);
  v15 = (__int64)v14;
  v16 = &v14[8 * v5];
  *(_QWORD *)v16 = *a3;
  v17 = (__int64)a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<CDWMDisplay const * *>(v18, a2, (__int64)v14);
    v17 = (__int64)a1[1];
    v15 = (__int64)(v16 + 8);
    v18 = (void *)a2;
  }
  std::_Uninitialized_move<CDWMDisplay const * *>(v18, v17, v15);
  std::vector<HWND__ *>::_Change_array((__int64)a1, (__int64)v14, v9, v3);
  return v16;
}
