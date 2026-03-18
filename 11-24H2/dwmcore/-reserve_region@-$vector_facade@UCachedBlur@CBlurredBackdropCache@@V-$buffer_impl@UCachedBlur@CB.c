/*
 * XREFs of ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x1801E37F4
 * Callers:
 *     ??$emplace_back@PEAVCBackdropVisualImage@@PEBXUEffectInput@@@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCBackdropVisualImage@@PEBXUEffectInput@@@Z @ 0x180243FC8 (--$emplace_back@PEAVCBackdropVisualImage@@PEBXUEffectInput@@@-$vector_facade@UCachedBlur@CBlurre.c)
 * Callees:
 *     ??$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z @ 0x1801371EC (--$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z.c)
 *     ??_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z @ 0x1801E3A44 (--_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801E3A68 (-ensure_extra_capacity@-$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion.c)
 *     ??$move_backward@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x1802AB380 (--$move_backward@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_array_i.c)
 */

CBlurredBackdropCache::CachedBlur *__fastcall detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  unsigned int v4; // edx
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  CBlurredBackdropCache::CachedBlur *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  CBlurredBackdropCache::CachedBlur *v12; // rdi
  CBlurredBackdropCache::CachedBlur *v13; // rsi
  CBlurredBackdropCache::CachedBlur *i; // rbx
  unsigned __int64 v16; // r15
  __int64 v17; // r14
  __int128 v18; // [rsp+20h] [rbp-60h]
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  char v21[16]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v22; // [rsp+70h] [rbp-10h]
  _QWORD *v23; // [rsp+D0h] [rbp+50h]

  detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v5 = *a1;
  v6 = (_QWORD *)a1[1];
  v7 = ((__int64)v6 - *a1) >> 7;
  *((_QWORD *)&v18 + 1) = 1LL;
  v22 = 0LL;
  v8 = (CBlurredBackdropCache::CachedBlur *)(v5 + (v7 << 7));
  *(_QWORD *)&v18 = v8;
  if ( !v8 )
    goto LABEL_12;
  v22 = 1LL;
  v9 = v7 - a2;
  if ( (unsigned __int64)(v7 - a2) > 1 )
    v9 = 1LL;
  v19 = v18;
  v10 = v9 << 7;
  v20 = 1LL;
  v23 = (_QWORD *)((char *)v6 - v10);
  if ( v6 != (_QWORD *)((char *)v6 - v10) )
  {
    v16 = v20;
    v17 = (__int64)v8 + 144;
    do
    {
      v6 -= 16;
      if ( !(_QWORD)v19 )
        goto LABEL_12;
      if ( !v16 )
        goto LABEL_12;
      --v16;
      v17 -= 128LL;
      if ( v16 >= *((_QWORD *)&v19 + 1) )
        goto LABEL_12;
      *(_QWORD *)(v17 - 16) = *v6;
      *(_QWORD *)(v17 - 8) = v6[1];
      detail::construct<EffectInput,EffectInput>(v17, (__int64)(v6 + 2));
    }
    while ( v6 != v23 );
    v8 = (CBlurredBackdropCache::CachedBlur *)(v5 + (v7 << 7));
  }
  if ( (unsigned __int64)(v7 - a2) <= 1 )
  {
    v11 = a2 << 7;
    goto LABEL_7;
  }
  if ( v7 && (!v5 || v7 < 0) )
LABEL_12:
    _invalid_parameter_noinfo_noreturn();
  *((_QWORD *)&v19 + 1) = v7;
  v20 = v7;
  *(_QWORD *)&v19 = v5;
  v11 = a2 << 7;
  std::move_backward<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>>(
    v21,
    (a2 << 7) + v5,
    (v7 << 7) + v5 - 128,
    &v19);
LABEL_7:
  v12 = (CBlurredBackdropCache::CachedBlur *)(v5 + ((a2 + 1) << 7));
  if ( v8 < v12 )
    v12 = v8;
  v13 = (CBlurredBackdropCache::CachedBlur *)(v11 + v5);
  for ( i = v13; i != v12; i = (CBlurredBackdropCache::CachedBlur *)((char *)i + 128) )
    CBlurredBackdropCache::CachedBlur::`scalar deleting destructor'(i, v4);
  a1[1] += 128LL;
  return v13;
}
