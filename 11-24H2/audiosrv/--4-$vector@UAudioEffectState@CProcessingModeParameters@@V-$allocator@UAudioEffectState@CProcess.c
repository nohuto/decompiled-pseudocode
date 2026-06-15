/*
 * XREFs of ??4?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180053E5C
 * Callers:
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEBUMODE_PARAMS@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18009D8FC (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 *     ?UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z @ 0x1800CA7CC (-UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAX_K@Z @ 0x18009B988 (-_Clear_and_reserve_geometric@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

char **__fastcall std::vector<CProcessingModeParameters::AudioEffectState>::operator=(char **a1, const void **a2)
{
  char *v3; // rbp
  char *v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r15
  char *v7; // rdx

  if ( a1 != (char **)a2 )
  {
    v3 = (char *)*a2;
    v4 = *a1;
    v5 = 0xCCCCCCCCCCCCCCCDuLL * (((_BYTE *)a2[1] - (_BYTE *)*a2) >> 2);
    if ( v5 > 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 2) )
    {
      std::vector<CProcessingModeParameters::AudioEffectState>::_Clear_and_reserve_geometric(
        a1,
        0xCCCCCCCCCCCCCCCDuLL * (((_BYTE *)a2[1] - (_BYTE *)*a2) >> 2));
      v4 = *a1;
    }
    else
    {
      v6 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - v4) >> 2);
      if ( v5 > v6 )
      {
        memmove_0(v4, *a2, 4 * ((a1[1] - v4) >> 2));
        v4 = a1[1];
        v7 = &v3[20 * v6];
        v5 -= v6;
        goto LABEL_5;
      }
    }
    v7 = v3;
LABEL_5:
    memmove_0(v4, v7, 20 * v5);
    a1[1] = &v4[20 * v5];
  }
  return a1;
}
