/*
 * XREFs of ??$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAPEAUAudioEffectState@CProcessingModeParameters@@QEAU23@$$QEAU23@@Z @ 0x1800C8118
 * Callers:
 *     ?FilterSettableEffectsOverride@@YAJAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@AEAV32@@Z @ 0x18009BEC4 (-FilterSettableEffectsOverride@@YAJAEBV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectI.c)
 *     ?UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z @ 0x1800CA7CC (-UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z.c)
 * Callees:
 *     ??$construct@UAudioEffectState@CProcessingModeParameters@@AEBU12@@?$_Default_allocator_traits@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@SAXAEAV?$allocator@UAudioEffectState@CProcessingModeParameters@@@1@QEAUAudioEffectState@CProcessingModeParameters@@AEBU34@@Z @ 0x18002AAEC (--$construct@UAudioEffectState@CProcessingModeParameters@@AEBU12@@-$_Default_allocator_traits@V-.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@U_tagpropertykey@@@std@@@std@@YAPEAU_tagpropertykey@@AEAV?$allocator@U_tagpropertykey@@@0@AEA_K@Z @ 0x18009BA38 (--$_Allocate_at_least_helper@V-$allocator@U_tagpropertykey@@@std@@@std@@YAPEAU_tagpropertykey@@A.c)
 *     ?_Calculate_growth@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEBA_K_K@Z @ 0x1800A0380 (-_Calculate_growth@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator@UAudioEffe.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5290 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ?_Change_array@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAXQEAUAudioEffectState@CProcessingModeParameters@@_K1@Z @ 0x1800CA888 (-_Change_array@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator@UAudioEffectSt.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

__int64 __fastcall std::vector<CProcessingModeParameters::AudioEffectState>::_Emplace_reallocate<CProcessingModeParameters::AudioEffectState>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  char *v11; // rax
  char *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rsi
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  char *v17; // rcx
  size_t v18; // r8
  __int64 result; // rax
  unsigned __int64 v20; // [rsp+50h] [rbp+8h] BYREF
  char *v21; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) / 20;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  if ( v7 == 0xCCCCCCCCCCCCCCCLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<CProcessingModeParameters::AudioEffectState>::_Calculate_growth(a1, v7 + 1);
  v20 = v9;
  v11 = (char *)std::_Allocate_at_least_helper<std::allocator<_tagpropertykey>>(v10, &v20);
  v12 = v11;
  v21 = v11;
  try
  {
    v13 = 5 * v6;
    v14 = (__int64)&v11[20 * v6];
    std::_Default_allocator_traits<std::allocator<CProcessingModeParameters::AudioEffectState>>::construct<CProcessingModeParameters::AudioEffectState,CProcessingModeParameters::AudioEffectState const &>(
      v13,
      v14,
      a3);
    v15 = a1[1];
    v16 = *a1;
    v17 = v12;
    if ( a2 == v15 )
    {
      v18 = v15 - v16;
    }
    else
    {
      memmove_0(v12, v16, a2 - (_BYTE *)*a1);
      v17 = (char *)(v14 + 20);
      v18 = (_BYTE *)a1[1] - a2;
      v16 = a2;
    }
    memmove_0(v17, v16, v18);
    std::vector<CProcessingModeParameters::AudioEffectState>::_Change_array(a1, v12, v8, v9);
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(20 * v20));
    throw;
  }
  return result;
}
