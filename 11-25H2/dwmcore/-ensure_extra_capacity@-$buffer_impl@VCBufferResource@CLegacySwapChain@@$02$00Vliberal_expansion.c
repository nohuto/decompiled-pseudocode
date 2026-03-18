/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801C69A0
 * Callers:
 *     ?reserve_region@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCBufferResource@CLegacySwapChain@@_K0@Z @ 0x1801C63F8 (-reserve_region@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResour.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$destruct_range@VCBufferResource@CLegacySwapChain@@@detail@@YAXPEAVCBufferResource@CLegacySwapChain@@0@Z @ 0x1801C68F4 (--$destruct_range@VCBufferResource@CLegacySwapChain@@@detail@@YAXPEAVCBufferResource@CLegacySwap.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@V?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@0@0V12@@Z @ 0x1802D295C (--$uninitialized_move@V-$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@V-$checked_ar.c)
 */

void __fastcall detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        CLegacySwapChain::CBufferResource **a1,
        unsigned __int64 a2)
{
  CLegacySwapChain::CBufferResource *v3; // rcx
  CLegacySwapChain::CBufferResource *v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdi
  CLegacySwapChain::CBufferResource *v8; // rax
  CLegacySwapChain::CBufferResource *v9; // r8
  CLegacySwapChain::CBufferResource *v10; // rdx
  CLegacySwapChain::CBufferResource *v11; // rbx
  CLegacySwapChain::CBufferResource *v12; // rcx
  bool v13; // zf
  __int64 v14; // rdi
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]
  void *v19; // [rsp+80h] [rbp+8h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  if ( (v3 - v4) >> 4 < a2 )
  {
    v5 = (v4 - *a1) >> 4;
    v6 = v5 + a2;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - *a1) >> 4),
           (v3 - *a1) >> 4,
           v6);
    v8 = (CLegacySwapChain::CBufferResource *)operator new[](saturated_mul(v7, 0x10uLL));
    v9 = a1[1];
    v10 = *a1;
    *(_QWORD *)&v15 = v8;
    *((_QWORD *)&v15 + 1) = v5;
    v11 = v8;
    v16 = 0LL;
    v17 = v15;
    v18 = 0LL;
    ((void (__fastcall *)(__int128 *, CLegacySwapChain::CBufferResource *, CLegacySwapChain::CBufferResource *, __int128 *))std::uninitialized_move<std::move_iterator<CLegacySwapChain::CBufferResource *>,stdext::checked_array_iterator<CLegacySwapChain::CBufferResource *>>)(
      &v15,
      v10,
      v9,
      &v17);
    detail::destruct_range<CLegacySwapChain::CBufferResource>(*a1, a1[1]);
    v12 = *a1;
    v13 = *a1 == (CLegacySwapChain::CBufferResource *)(a1 + 3);
    v19 = 0LL;
    *a1 = v11;
    if ( v13 )
      v12 = 0LL;
    operator delete(v12);
    v14 = (__int64)*a1 + 16 * v7;
    a1[1] = (CLegacySwapChain::CBufferResource *)((char *)*a1 + 16 * v5);
    a1[2] = (CLegacySwapChain::CBufferResource *)v14;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v19);
  }
}
