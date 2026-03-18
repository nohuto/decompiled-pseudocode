/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800404D0
 * Callers:
 *     ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x18003FDE4 (-reserve_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CB.c)
 * Callees:
 *     ??$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdropCache@@0@Z @ 0x18003FDAC (--$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdrop.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x18025541C (--$uninitialized_move@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_ar.c)
 */

void __fastcall detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        CBlurredBackdropCache::CachedBlur **a1,
        unsigned __int64 a2)
{
  CBlurredBackdropCache::CachedBlur *v3; // rcx
  CBlurredBackdropCache::CachedBlur *v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  CBlurredBackdropCache::CachedBlur *v7; // rax
  CBlurredBackdropCache::CachedBlur *v8; // r8
  CBlurredBackdropCache::CachedBlur *v9; // rdx
  CBlurredBackdropCache::CachedBlur *v10; // rbx
  CBlurredBackdropCache::CachedBlur *v11; // rcx
  bool v12; // zf
  unsigned __int64 v13; // rsi
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v3 = a1[2];
  v4 = a1[1];
  if ( (v3 - v4) >> 7 < a2 )
  {
    v5 = (v4 - *a1) >> 7;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1800405F1LL);
    }
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - *a1) >> 7),
           (v3 - *a1) >> 7,
           v5 + a2);
    v7 = (CBlurredBackdropCache::CachedBlur *)operator new[](saturated_mul(v6, 0x80uLL));
    v8 = a1[1];
    v9 = *a1;
    *(_QWORD *)&v14 = v7;
    *((_QWORD *)&v14 + 1) = v5;
    v10 = v7;
    v15 = 0LL;
    v16 = v14;
    v17 = 0LL;
    ((void (__fastcall *)(__int128 *, CBlurredBackdropCache::CachedBlur *, CBlurredBackdropCache::CachedBlur *, __int128 *))std::uninitialized_move<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>>)(
      &v14,
      v9,
      v8,
      &v16);
    detail::destruct_range<CBlurredBackdropCache::CachedBlur>(*a1, a1[1]);
    v11 = *a1;
    v12 = *a1 == (CBlurredBackdropCache::CachedBlur *)(a1 + 3);
    *a1 = v10;
    if ( v12 )
      v11 = 0LL;
    operator delete(v11);
    v13 = (unsigned __int64)*a1 + 128 * v5;
    a1[2] = (CBlurredBackdropCache::CachedBlur *)((char *)*a1 + 128 * v6);
    a1[1] = (CBlurredBackdropCache::CachedBlur *)v13;
  }
}
