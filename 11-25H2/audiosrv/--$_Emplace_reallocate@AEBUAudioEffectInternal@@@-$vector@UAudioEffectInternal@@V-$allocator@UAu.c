/*
 * XREFs of ??$_Emplace_reallocate@AEBUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAPEAUAudioEffectInternal@@QEAU2@AEBU2@@Z @ 0x180022B80
 * Callers:
 *     ?CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x18006FE24 (-CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProc.c)
 *     ?GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800C92CC (-GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV-$vector@UAudioEffectInternal@@V-$.c)
 *     ?MergeEffectsLists@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@3@0@Z @ 0x1800C97E0 (-MergeEffectsLists@CAudioStream@@AEAAJAEAV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffe.c)
 *     ?GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800F16F0 (-GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV-$vector@UAudioEffe.c)
 * Callees:
 *     ??$construct@UAudioEffectInternal@@AEBU1@@?$_Default_allocator_traits@V?$allocator@UAudioEffectInternal@@@std@@@std@@SAXAEAV?$allocator@UAudioEffectInternal@@@1@QEAUAudioEffectInternal@@AEBU3@@Z @ 0x180022D30 (--$construct@UAudioEffectInternal@@AEBU1@@-$_Default_allocator_traits@V-$allocator@UAudioEffectI.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180022D4C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInternal@@AEAV?$allocator@UAudioEffectInternal@@@0@AEA_K@Z @ 0x1800B5760 (--$_Allocate_at_least_helper@V-$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInt.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5E90 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 */

char *__fastcall std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  char *v12; // rsi
  __int64 v13; // rcx
  char *v14; // r15
  void *v15; // rax
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  _BYTE *v20; // rcx
  const struct std::nothrow_t *v21; // rdx
  unsigned __int64 v23; // [rsp+50h] [rbp+8h] BYREF
  void *v24; // [rsp+58h] [rbp+10h] BYREF

  v6 = (a2 - (_BYTE *)*a1) / 24;
  v7 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  v8 = 0xAAAAAAAAAAAAAAALL;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v9 = v7 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  v23 = v8;
  v24 = (void *)v8;
  v12 = (char *)std::_Allocate_at_least_helper<std::allocator<AudioEffectInternal>>(v10, &v24);
  v24 = v12;
  v13 = 3 * v6;
  v14 = &v12[24 * v6];
  v15 = (void *)std::_Default_allocator_traits<std::allocator<AudioEffectInternal>>::construct<AudioEffectInternal,AudioEffectInternal const &>(
                  v13,
                  v14,
                  a3);
  v16 = a1[1];
  v17 = *a1;
  v18 = v15;
  if ( a2 == v16 )
  {
    v19 = v16 - v17;
  }
  else
  {
    memmove_0(v15, v17, a2 - (_BYTE *)*a1);
    v18 = v14 + 24;
    v19 = (_BYTE *)a1[1] - a2;
    v17 = a2;
  }
  memmove_0(v18, v17, v19);
  v20 = *a1;
  if ( *a1 )
  {
    v21 = (const struct std::nothrow_t *)(8 * (((_BYTE *)a1[2] - v20) >> 3));
    v23 = (unsigned __int64)v21;
    v24 = v20;
    if ( (unsigned __int64)v21 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v24, &v23);
      v21 = (const struct std::nothrow_t *)v23;
      v20 = v24;
    }
    operator delete(v20, v21);
  }
  *a1 = v12;
  a1[1] = &v12[24 * v9];
  a1[2] = &v12[24 * v8];
  return v14;
}
