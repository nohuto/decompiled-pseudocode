/*
 * XREFs of ??$emplace@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@1@V?$basic_iterator@$$CBV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@1@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180043CEC
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010C8E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1800692D4 (--$uninitialized_move@V-$move_iterator@PEAV-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18024A554 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::emplace<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>(
        detail::liberal_expansion_policy *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 *a4)
{
  _BYTE *v4; // rbx
  __int64 v6; // r15
  unsigned __int64 v7; // r8
  __int64 v9; // rsi
  __int64 v10; // r15
  unsigned __int64 v12; // rsi
  char *v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // r10
  unsigned __int64 *v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v22; // r11
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rdi
  void *v26; // rax
  __int64 v27; // r8
  void *v28; // rdx
  void *v29; // rbx
  _QWORD *v30; // rcx
  char *v31; // rcx
  __int128 v32; // [rsp+20h] [rbp-40h] BYREF
  __int64 v33; // [rsp+30h] [rbp-30h]
  __int128 v34; // [rsp+40h] [rbp-20h] BYREF
  __int64 v35; // [rsp+50h] [rbp-10h]
  __int64 v36; // [rsp+90h] [rbp+30h] BYREF

  v6 = *a3 - *(_QWORD *)a1;
  v7 = 1LL;
  v9 = *((_QWORD *)a1 + 1);
  v10 = v6 >> 3;
  if ( !((*((_QWORD *)a1 + 2) - v9) >> 3) )
  {
    v12 = (v9 - *(_QWORD *)a1) >> 3;
    if ( v12 + 1 < v12 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_15;
    }
    v25 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3, v12 + 1);
    v26 = operator new[](saturated_mul(v25, 8uLL));
    v27 = *((_QWORD *)a1 + 1);
    v28 = *(void **)a1;
    *(_QWORD *)&v32 = v26;
    v29 = v26;
    *((_QWORD *)&v32 + 1) = v12;
    v33 = 0LL;
    v35 = 0LL;
    v34 = v32;
    ((void (__fastcall *)(__int128 *, void *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>>)(
      &v32,
      v28,
      v27,
      &v34);
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(*(void **)a1);
    v30 = *(_QWORD **)a1;
    *(_QWORD *)a1 = v29;
    v36 = 0LL;
    if ( v30 == (_QWORD *)((char *)a1 + 24) )
      v30 = 0LL;
    operator delete(v30);
    v31 = *(char **)a1;
    *((_QWORD *)a1 + 1) = *(_QWORD *)a1 + 8 * v12;
    *((_QWORD *)a1 + 2) = &v31[8 * v25];
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v36);
    v7 = 1LL;
  }
  v4 = *(_BYTE **)a1;
  v12 = 0LL;
  v13 = (char *)*((_QWORD *)a1 + 1);
  v33 = 0LL;
  v14 = (v13 - v4) >> 3;
  *((_QWORD *)&v32 + 1) = 1LL;
  v15 = v14 - v10;
  v35 = 0LL;
  *(_QWORD *)&v32 = &v4[8 * v14];
  if ( !(_QWORD)v32 )
    goto LABEL_12;
  v35 = 1LL;
  v16 = v14 - v10;
  if ( v15 > 1 )
    v16 = 1LL;
  v17 = 8 * v16;
  v18 = &v13[-v17];
  v33 = 1LL;
  if ( v13 != &v13[-v17] )
  {
    v22 = v32;
    v23 = v33;
    do
    {
      v13 -= 8;
      if ( !v7 )
        goto LABEL_12;
      v7 = v23 - 1;
      v23 = v7;
      if ( v7 >= *((_QWORD *)&v32 + 1) )
        goto LABEL_12;
      v24 = *(_QWORD *)v13;
      *(_QWORD *)v13 = 0LL;
      *(_QWORD *)(v22 + 8 * v7) = v24;
    }
    while ( v13 != v18 );
    v12 = 0LL;
  }
  if ( v15 > 1 )
  {
LABEL_15:
    if ( !v14 || v4 && v14 >= 0 )
    {
      *((_QWORD *)&v32 + 1) = v14;
      v33 = v14;
      *(_QWORD *)&v32 = v4;
      ((void (__fastcall *)(__int128 *, _BYTE *, _BYTE *, __int128 *))std::move_backward<std::move_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>>)(
        &v34,
        &v4[8 * v10],
        &v4[8 * v14 - 8],
        &v32);
      goto LABEL_7;
    }
LABEL_12:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_7:
  v19 = (unsigned __int64 *)&v4[8 * v10];
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(v19);
  *((_QWORD *)a1 + 1) += 8LL;
  v20 = *a4;
  *a4 = v12;
  *v19 = v20;
  *a2 = *(_QWORD *)a1 + 8 * v10;
  if ( *a4 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)*a4 + 16LL))(*a4);
  return a2;
}
