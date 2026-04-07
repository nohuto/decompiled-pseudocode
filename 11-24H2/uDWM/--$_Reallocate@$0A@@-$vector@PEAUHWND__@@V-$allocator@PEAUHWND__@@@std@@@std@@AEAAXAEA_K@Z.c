/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800ED450
 * Callers:
 *     ?GetCaptureWindowExclusionList@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_BUILDCAPTUREWINDOWVISUALEXCLUSIONLIST@@AEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1800EFF2C (-GetCaptureWindowExclusionList@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_BUILDCAPTUREWINDOWVI.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18004D03C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAPEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCDWMDisplay@@QEAPEBV1@0PEAPEBV1@AEAV?$allocator@PEBVCDWMDisplay@@@0@@Z @ 0x180096650 (--$_Uninitialized_move@PEAPEBVCDWMDisplay@@V-$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCD.c)
 */

__int64 __fastcall std::vector<HWND__ *>::_Reallocate<0>(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 size_of; // rax
  const struct std::nothrow_t *v6; // rdx
  void *v7; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  size_of = std::_Get_size_of_n<8>(*a2);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of, v6);
  std::_Uninitialized_move<CDWMDisplay const * *>(*(void **)a1, *(_QWORD *)(a1 + 8), (__int64)v7);
  return std::vector<HWND__ *>::_Change_array(a1, (__int64)v7, v4, *a2);
}
