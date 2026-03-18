/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x1802AB380
 * Callers:
 *     ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x1801E37F4 (-reserve_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CB.c)
 * Callees:
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x1801369CC (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@_J@Z @ 0x180220398 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>>(
        __int64 a1,
        char *a2,
        char *a3,
        _QWORD *a4)
{
  char *v7; // rbx
  _QWORD *v8; // rsi
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v7 = a3;
  v8 = (_QWORD *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *> &,__int64>(
                   a4,
                   -((a3 - a2) >> 7));
  while ( a2 != v7 )
  {
    v8 -= 16;
    v7 -= 128;
    *v8 = *(_QWORD *)v7;
    v8[1] = *((_QWORD *)v7 + 1);
    EffectInput::operator=((__int64)(v8 + 2), (__int64)(v7 + 16), v9);
  }
  result = a1;
  a4[2] = ((__int64)v8 - *a4) >> 7;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
