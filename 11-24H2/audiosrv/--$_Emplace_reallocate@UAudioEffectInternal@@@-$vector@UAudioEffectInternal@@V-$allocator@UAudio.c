/*
 * XREFs of ??$_Emplace_reallocate@UAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAPEAUAudioEffectInternal@@QEAU2@$$QEAU2@@Z @ 0x1800B4BB0
 * Callers:
 *     ?GetControllableDiscoveryMFXEffects@AudioModeEffectsWatcher@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x18006F970 (-GetControllableDiscoveryMFXEffects@AudioModeEffectsWatcher@@UEAAJAEAV-$vector@UAudioEffectInter.c)
 * Callees:
 *     ?_Change_array@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXQEAUAudioEffectInternal@@_K1@Z @ 0x180053F3C (-_Change_array@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@AEA.c)
 *     ??$construct@UAudioEffectInternal@@AEBU1@@?$_Default_allocator_traits@V?$allocator@UAudioEffectInternal@@@std@@@std@@SAXAEAV?$allocator@UAudioEffectInternal@@@1@QEAUAudioEffectInternal@@AEBU3@@Z @ 0x180054454 (--$construct@UAudioEffectInternal@@AEBU1@@-$_Default_allocator_traits@V-$allocator@UAudioEffectI.c)
 *     ?_Calculate_growth@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBA_K_K@Z @ 0x18009E334 (-_Calculate_growth@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInternal@@AEAV?$allocator@UAudioEffectInternal@@@0@AEA_K@Z @ 0x1800B4B50 (--$_Allocate_at_least_helper@V-$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInt.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5290 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

__int64 __fastcall std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  signed __int64 v6; // r9
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  char *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rsi
  void *v16; // rax
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  void *v19; // rcx
  size_t v20; // r8
  __int64 result; // rax
  unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  char *v23; // [rsp+58h] [rbp+10h]

  v6 = a2 - (_BYTE *)*a1;
  v7 = v6 / 24;
  v8 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength(
      0xAAAAAAAAAAAAAAALL,
      (unsigned __int128)(v6 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64);
  v9 = v8 + 1;
  v10 = std::vector<AudioEffectInternal>::_Calculate_growth(a1, v8 + 1);
  v22 = v10;
  v12 = (char *)std::_Allocate_at_least_helper<std::allocator<AudioEffectInternal>>(v11, &v22);
  v13 = (__int64)v12;
  v23 = v12;
  try
  {
    v14 = 3 * v7;
    v15 = (__int64)&v12[24 * v7];
    std::_Default_allocator_traits<std::allocator<AudioEffectInternal>>::construct<AudioEffectInternal,AudioEffectInternal const &>(
      v14,
      v15,
      a3);
    v17 = a1[1];
    v18 = *a1;
    v19 = v16;
    if ( a2 == v17 )
    {
      v20 = v17 - v18;
    }
    else
    {
      memmove_0(v16, v18, a2 - (_BYTE *)*a1);
      v19 = (void *)(v15 + 24);
      v20 = (_BYTE *)a1[1] - a2;
      v18 = a2;
    }
    memmove_0(v19, v18, v20);
    std::vector<AudioEffectInternal>::_Change_array((__int64)a1, v13, v9, v10);
    result = v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v23, (const struct std::nothrow_t *)(24 * v22));
    throw;
  }
  return result;
}
