/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18022EBD0
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18008C510 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1800692D4 (--$uninitialized_move@V-$move_iterator@PEAV-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 */

void __fastcall detail::buffer_impl<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdi
  LPVOID v8; // rax
  __int64 *v9; // r8
  __int64 *v10; // rdx
  LPVOID v11; // rbx
  __int64 *v12; // rcx
  bool v13; // zf
  __int64 *v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]
  void *v19; // [rsp+80h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  if ( (v3 - v4) >> 3 < a2 )
  {
    v5 = (v4 - *(_QWORD *)a1) >> 3;
    v6 = v5 + a2;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - *(_QWORD *)a1) >> 3),
           (v3 - *(_QWORD *)a1) >> 3,
           v6);
    v8 = operator new[](saturated_mul(v7, 8uLL));
    v9 = *(__int64 **)(a1 + 8);
    v10 = *(__int64 **)a1;
    *(_QWORD *)&v15 = v8;
    *((_QWORD *)&v15 + 1) = v5;
    v11 = v8;
    v16 = 0LL;
    v17 = v15;
    v18 = 0LL;
    std::uninitialized_move<std::move_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>>(
      (__int64)&v15,
      v10,
      v9,
      &v17);
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8));
    v12 = *(__int64 **)a1;
    v13 = *(_QWORD *)a1 == a1 + 24;
    v19 = 0LL;
    *(_QWORD *)a1 = v11;
    if ( v13 )
      v12 = 0LL;
    operator delete(v12);
    v14 = *(__int64 **)a1;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1 + 8 * v5;
    *(_QWORD *)(a1 + 16) = &v14[v7];
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v19);
  }
}
