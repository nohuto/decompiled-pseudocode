/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800ABFD4
 * Callers:
 *     ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2A88 (-_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_EN.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18004D03C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@0@@Z @ 0x1800AC4D4 (--$_Uninitialized_move@PEAV-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V-$allocator@V-$Co.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@_K1@Z @ 0x1800B35FC (-_Change_array@-$vector@V-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V-$allocator@V-$ComP.c)
 *     ?_Xlength@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ @ 0x1800B52FC (-_Xlength@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ.c)
 */

CMILRefCountBase **__fastcall std::vector<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CProjectionBorderVisual> const &>(
        __int64 *a1,
        __int64 a2,
        CMILRefCountBase **a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  const struct std::nothrow_t *v13; // rdx
  char *v14; // rax
  CMILRefCountBase *v15; // rcx
  char *v16; // rsi
  CMILRefCountBase **v17; // r14
  __int64 v18; // rdx
  _QWORD *v19; // r8
  __int64 v20; // rcx

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<CVisualProxy *>::_Xlength();
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of, v13);
  v15 = *a3;
  v16 = v14;
  v17 = (CMILRefCountBase **)&v14[8 * v5];
  *v17 = *a3;
  if ( v15 )
    CMILRefCountBase::AddRef(v15);
  v18 = a1[1];
  v19 = v16;
  v20 = *a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<CProjectionBorderVisual> *,std::allocator<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>>(
      v20,
      a2,
      v16);
    v18 = a1[1];
    v19 = v17 + 1;
    v20 = a2;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<CProjectionBorderVisual> *,std::allocator<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>>(
    v20,
    v18,
    v19);
  std::vector<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>::_Change_array(a1, v16, v9, v3);
  return v17;
}
