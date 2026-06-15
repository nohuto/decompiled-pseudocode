/*
 * XREFs of ??$_Emplace_back_with_unused_capacity@UAudioEffectState@CProcessingModeParameters@@@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAAEAUAudioEffectState@CProcessingModeParameters@@$$QEAU23@@Z @ 0x1800C7FBC
 * Callers:
 *     ?FilterSettableEffectsOverride@@YAJAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@AEAV32@@Z @ 0x18009BEC4 (-FilterSettableEffectsOverride@@YAJAEBV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectI.c)
 *     ?UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z @ 0x1800CA7CC (-UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z.c)
 *     ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z @ 0x180149D9C (-RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??$_Construct_in_place@UAudioEffectState@CProcessingModeParameters@@AEBU12@@std@@YAXAEAUAudioEffectState@CProcessingModeParameters@@AEBU12@@Z @ 0x1800C7F70 (--$_Construct_in_place@UAudioEffectState@CProcessingModeParameters@@AEBU12@@std@@YAXAEAUAudioEff.c)
 */

__int64 __fastcall std::vector<CProcessingModeParameters::AudioEffectState>::_Emplace_back_with_unused_capacity<CProcessingModeParameters::AudioEffectState>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  std::_Construct_in_place<CProcessingModeParameters::AudioEffectState,CProcessingModeParameters::AudioEffectState const &>(
    *(_QWORD *)(a1 + 8),
    a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 20;
  return result;
}
