/*
 * XREFs of ?clear_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18003FF40
 * Callers:
 *     ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@_N@Z @ 0x18003FC5C (-InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInf.c)
 *     ??1?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180221B50 (--1-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CBlurredBackdro.c)
 *     ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@PEBX@Z @ 0x18024D260 (-InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@PEBX@Z.c)
 * Callees:
 *     ??_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z @ 0x180040034 (--_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z.c)
 *     ??$move@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x18007D750 (--$move@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_array_iterator@P.c)
 */

void *__fastcall detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  CBlurredBackdropCache::CachedBlur *v3; // rdi
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // r10
  __int64 v10; // rsi
  CBlurredBackdropCache::CachedBlur *i; // rbx
  void *result; // rax
  _QWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-28h] BYREF

  v5 = a2;
  v6 = *a1;
  v7 = a3 + a2;
  v9 = (a1[1] - v6) >> 7;
  if ( v7 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_14;
  }
  v3 = (CBlurredBackdropCache::CachedBlur *)(v6 + (v9 << 7));
  if ( v7 != v9 )
  {
    if ( !v5 )
      goto LABEL_11;
    if ( !v6 )
      goto LABEL_12;
    if ( v5 >= 0 )
    {
      if ( v9 < v5 )
LABEL_12:
        _invalid_parameter_noinfo_noreturn();
LABEL_11:
      v13[0] = v6;
      v13[2] = v5;
      v13[1] = v9;
      result = (void *)((__int64 (__fastcall *)(_BYTE *, unsigned __int64, CBlurredBackdropCache::CachedBlur *, _QWORD *))std::move<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>>)(
                         v14,
                         v6 + (v7 << 7),
                         v3,
                         v13);
      goto LABEL_3;
    }
LABEL_14:
    if ( v5 )
      goto LABEL_12;
    goto LABEL_11;
  }
LABEL_3:
  v10 = a3 << 7;
  for ( i = (CBlurredBackdropCache::CachedBlur *)((char *)v3 - v10);
        i != v3;
        i = (CBlurredBackdropCache::CachedBlur *)((char *)i + 128) )
  {
    result = CBlurredBackdropCache::CachedBlur::`scalar deleting destructor'(i, v7);
  }
  a1[1] -= v10;
  return result;
}
