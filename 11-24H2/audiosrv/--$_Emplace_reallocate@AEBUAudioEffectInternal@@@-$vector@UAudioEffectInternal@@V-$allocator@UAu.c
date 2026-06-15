/*
 * XREFs of ??$_Emplace_reallocate@AEBUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAPEAUAudioEffectInternal@@QEAU2@AEBU2@@Z @ 0x1800542A4
 * Callers:
 *     ?CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180060EE4 (-CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProc.c)
 *     ?GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800C8950 (-GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV-$vector@UAudioEffectInternal@@V-$.c)
 *     ?MergeEffectsLists@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@3@0@Z @ 0x1800C8EAC (-MergeEffectsLists@CAudioStream@@AEAAJAEAV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffe.c)
 *     ?GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800F6720 (-GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV-$vector@UAudioEffe.c)
 * Callees:
 *     ??$construct@UAudioEffectInternal@@AEBU1@@?$_Default_allocator_traits@V?$allocator@UAudioEffectInternal@@@std@@@std@@SAXAEAV?$allocator@UAudioEffectInternal@@@1@QEAUAudioEffectInternal@@AEBU3@@Z @ 0x180054454 (--$construct@UAudioEffectInternal@@AEBU1@@-$_Default_allocator_traits@V-$allocator@UAudioEffectI.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180054470 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInternal@@AEAV?$allocator@UAudioEffectInternal@@@0@AEA_K@Z @ 0x1800B4B50 (--$_Allocate_at_least_helper@V-$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInt.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5290 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

char *__fastcall std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  signed __int64 v6; // r9
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  char *v13; // rsi
  __int64 v14; // rcx
  char *v15; // r15
  void *v16; // rax
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  void *v19; // rcx
  size_t v20; // r8
  _BYTE *v21; // rcx
  const struct std::nothrow_t *v22; // rdx
  unsigned __int64 v24; // [rsp+50h] [rbp+8h] BYREF
  void *v25; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2 - (_BYTE *)*a1;
  v7 = v6 / 24;
  v8 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  v9 = 0xAAAAAAAAAAAAAAALL;
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength(
      a1,
      (unsigned __int128)(v6 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64);
  v10 = v8 + 1;
  v11 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  v12 = v11 >> 1;
  if ( v11 <= 0xAAAAAAAAAAAAAAALL - (v11 >> 1) )
  {
    v9 = v12 + v11;
    if ( v12 + v11 < v10 )
      v9 = v10;
  }
  v24 = v9;
  v25 = (void *)v9;
  v13 = (char *)std::_Allocate_at_least_helper<std::allocator<AudioEffectInternal>>(v11, &v25);
  v25 = v13;
  v14 = 3 * v7;
  v15 = &v13[24 * v7];
  v16 = (void *)std::_Default_allocator_traits<std::allocator<AudioEffectInternal>>::construct<AudioEffectInternal,AudioEffectInternal const &>(
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
    v19 = v15 + 24;
    v20 = (_BYTE *)a1[1] - a2;
    v18 = a2;
  }
  memmove_0(v19, v18, v20);
  v21 = *a1;
  if ( *a1 )
  {
    v22 = (const struct std::nothrow_t *)(8 * (((_BYTE *)a1[2] - v21) >> 3));
    v24 = (unsigned __int64)v22;
    v25 = v21;
    if ( (unsigned __int64)v22 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v25, &v24);
      v22 = (const struct std::nothrow_t *)v24;
      v21 = v25;
    }
    operator delete(v21, v22);
  }
  *a1 = v13;
  a1[1] = &v13[24 * v10];
  a1[2] = &v13[24 * v9];
  return v15;
}
