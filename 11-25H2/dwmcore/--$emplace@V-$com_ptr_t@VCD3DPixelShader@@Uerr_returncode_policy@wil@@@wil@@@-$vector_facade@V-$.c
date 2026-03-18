/*
 * XREFs of ??$emplace@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@1@V?$basic_iterator@$$CBV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@1@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18006D96C
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180148520 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18003082C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1801C6B78 (--$uninitialized_move@V-$move_iterator@PEAV-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1802558A4 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::emplace<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>(
        detail::liberal_expansion_policy *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 *a4)
{
  __int64 *v4; // rbx
  __int64 *v5; // rdi
  __int64 v7; // r15
  unsigned __int64 v8; // r8
  __int64 v10; // rsi
  __int64 v11; // r15
  unsigned __int64 v13; // rsi
  __int64 *v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // r10
  __int64 *v20; // rdx
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 v24; // r11
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  void *v28; // rax
  __int64 v29; // r8
  __int64 *v30; // rdx
  void *v31; // rbx
  __int64 *v32; // rcx
  __int64 *v33; // rcx
  __int128 v34; // [rsp+20h] [rbp-40h] BYREF
  __int64 v35; // [rsp+30h] [rbp-30h]
  __int128 v36; // [rsp+40h] [rbp-20h] BYREF
  __int64 v37; // [rsp+50h] [rbp-10h]
  __int64 v38; // [rsp+90h] [rbp+30h] BYREF

  v7 = *a3 - *(_QWORD *)a1;
  v8 = 1LL;
  v10 = *((_QWORD *)a1 + 1);
  v11 = v7 >> 3;
  if ( !((*((_QWORD *)a1 + 2) - v10) >> 3) )
  {
    v13 = (v10 - *(_QWORD *)a1) >> 3;
    if ( v13 + 1 < v13 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_17;
    }
    v27 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3, v13 + 1);
    v28 = operator new[](saturated_mul(v27, 8uLL));
    v29 = *((_QWORD *)a1 + 1);
    v30 = *(__int64 **)a1;
    *(_QWORD *)&v34 = v28;
    v31 = v28;
    *((_QWORD *)&v34 + 1) = v13;
    v35 = 0LL;
    v37 = 0LL;
    v36 = v34;
    ((void (__fastcall *)(__int128 *, __int64 *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>>)(
      &v34,
      v30,
      v29,
      &v36);
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      *(__int64 **)a1,
      *((__int64 **)a1 + 1));
    v32 = *(__int64 **)a1;
    *(_QWORD *)a1 = v31;
    v38 = 0LL;
    if ( v32 == (__int64 *)((char *)a1 + 24) )
      v32 = 0LL;
    operator delete(v32);
    v33 = *(__int64 **)a1;
    *((_QWORD *)a1 + 1) = *(_QWORD *)a1 + 8 * v13;
    *((_QWORD *)a1 + 2) = &v33[v27];
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v38);
    v8 = 1LL;
  }
  v4 = *(__int64 **)a1;
  v13 = 0LL;
  v14 = (__int64 *)*((_QWORD *)a1 + 1);
  v35 = 0LL;
  v15 = v14 - v4;
  *((_QWORD *)&v34 + 1) = 1LL;
  v16 = v15 - v11;
  v37 = 0LL;
  v5 = &v4[v15];
  *(_QWORD *)&v34 = v5;
  if ( !v5 )
    goto LABEL_14;
  v37 = 1LL;
  v17 = v15 - v11;
  if ( v16 > 1 )
    v17 = 1LL;
  v18 = 8 * v17;
  v19 = &v14[v18 / 0xFFFFFFFFFFFFFFF8uLL];
  v35 = 1LL;
  if ( v14 != &v14[v18 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v24 = v34;
    v25 = v35;
    do
    {
      --v14;
      if ( !v24 )
        goto LABEL_14;
      if ( !v8 )
        goto LABEL_14;
      v8 = v25 - 1;
      v25 = v8;
      if ( v8 >= *((_QWORD *)&v34 + 1) )
        goto LABEL_14;
      v26 = *v14;
      *v14 = 0LL;
      *(_QWORD *)(v24 + 8 * v8) = v26;
    }
    while ( v14 != v19 );
    v13 = 0LL;
  }
  if ( v16 > 1 )
  {
LABEL_17:
    if ( !v15 || v4 && v15 >= 0 )
    {
      *((_QWORD *)&v34 + 1) = v15;
      v35 = v15;
      *(_QWORD *)&v34 = v4;
      ((void (__fastcall *)(__int128 *, __int64 *, __int64 *, __int128 *))std::move_backward<std::move_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>>)(
        &v36,
        &v4[v11],
        &v4[v15 - 1],
        &v34);
      goto LABEL_7;
    }
LABEL_14:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_7:
  v20 = &v4[v11 + 1];
  v21 = &v4[v11];
  if ( v5 < v20 )
    v20 = v5;
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
    v21,
    v20);
  *((_QWORD *)a1 + 1) += 8LL;
  v22 = *a4;
  *a4 = v13;
  *v21 = v22;
  *a2 = *(_QWORD *)a1 + 8 * v11;
  if ( *a4 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)*a4 + 16LL))(*a4);
  return a2;
}
