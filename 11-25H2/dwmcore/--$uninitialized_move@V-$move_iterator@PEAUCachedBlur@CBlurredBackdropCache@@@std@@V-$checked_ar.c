/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x18025541C
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800404D0 (-ensure_extra_capacity@-$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion.c)
 * Callees:
 *     ??$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z @ 0x18007E01C (--$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@_J@Z @ 0x18022B408 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>>(
        __int64 a1,
        char *a2,
        char *a3,
        _QWORD *a4)
{
  char *v4; // rbx
  _QWORD *v8; // rsi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a2;
  v8 = (_QWORD *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *> &,__int64>(
                   a4,
                   (a3 - a2) >> 7);
  while ( v4 != a3 )
  {
    *v8 = *(_QWORD *)v4;
    v8[1] = *((_QWORD *)v4 + 1);
    detail::construct<EffectInput,EffectInput>((__int64)(v8 + 2), (__int64)(v4 + 16));
    v8 += 16;
    v4 += 128;
  }
  result = a1;
  a4[2] = ((__int64)v8 - *a4) >> 7;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
