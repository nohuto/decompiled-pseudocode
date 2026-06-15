/*
 * XREFs of ??$_Construct_n@AEBQEAUAudioEffectInternal@@AEBQEAU1@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAX_KAEBQEAUAudioEffectInternal@@1@Z @ 0x18009EF2C
 * Callers:
 *     ?IsStreamingEffectsOverrideLooseMatch@CSharedStreamGroupProxy@@IEAA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@3@@Z @ 0x1800613A8 (-IsStreamingEffectsOverrideLooseMatch@CSharedStreamGroupProxy@@IEAA_NAEBV-$vector@UAudioEffectIn.c)
 * Callees:
 *     ??$_Allocate_at_least_helper@V?$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInternal@@AEAV?$allocator@UAudioEffectInternal@@@0@AEA_K@Z @ 0x1800B4B50 (--$_Allocate_at_least_helper@V-$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInt.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5290 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??1?$_Tidy_guard@V?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@std@@QEAA@XZ @ 0x1800F3D80 (--1-$_Tidy_guard@V-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

void __fastcall std::vector<AudioEffectInternal>::_Construct_n<AudioEffectInternal * const &,AudioEffectInternal * const &>(
        _QWORD *a1,
        unsigned __int64 a2,
        const void **a3,
        _QWORD *a4)
{
  char *v8; // rax
  char *v9; // rdi
  signed __int64 v10; // rbx
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0xAAAAAAAAAAAAAAALL )
      std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength(
        a1,
        a2);
    v11 = a2;
    v8 = (char *)std::_Allocate_at_least_helper<std::allocator<AudioEffectInternal>>(a1, &v11);
    *a1 = v8;
    a1[1] = v8;
    v9 = v8;
    a1[2] = &v8[24 * a2];
    v10 = *a4 - (_QWORD)*a3;
    memmove_0(v8, *a3, v10);
    v11 = 0LL;
    a1[1] = &v9[8 * (v10 >> 3)];
    std::_Tidy_guard<std::vector<AudioEffectInternal>>::~_Tidy_guard<std::vector<AudioEffectInternal>>(&v11);
  }
}
