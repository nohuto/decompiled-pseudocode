/*
 * XREFs of ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x180043818
 * Callers:
 *     ?GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1800433D0 (-GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z.c)
 *     ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18010EFA0 (-GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCom.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180043C18 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@detail@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@detail@@YAXV?$basic_iterator@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@0@0V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@Z @ 0x180043F1C (--$move_backward_uninitialized@V-$basic_iterator@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18024A554 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+50h] BYREF

  v17 = a3;
  detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v13 = 0LL;
  v5 = *a1;
  v6 = a1[1];
  v7 = v6 - *a1;
  *((_QWORD *)&v12 + 1) = 1LL;
  v8 = v7 >> 3;
  v13 = 0LL;
  v9 = v8 - a2;
  *(_QWORD *)&v12 = v5 + 8 * v8;
  if ( !(_QWORD)v12 )
    goto LABEL_6;
  v17 = v6;
  v13 = 1LL;
  v10 = v8 - a2;
  v14 = v12;
  if ( v9 > 1 )
    v10 = 1LL;
  v15 = 1LL;
  v16 = v6 - 8 * v10;
  detail::move_backward_uninitialized<detail::basic_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>>,stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>>(
    &v16,
    &v17,
    &v14);
  if ( v9 > 1 )
  {
    if ( !v8 || v5 && v8 >= 0 )
    {
      *(_QWORD *)&v12 = v5;
      *((_QWORD *)&v12 + 1) = v8;
      v13 = v8;
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>>)(
        &v14,
        v5 + 8 * a2,
        v5 - 8 + 8 * v8,
        &v12);
      goto LABEL_5;
    }
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_5:
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>((void *)(v5 + 8 * a2));
  a1[1] += 8LL;
  return v5 + 8 * a2;
}
