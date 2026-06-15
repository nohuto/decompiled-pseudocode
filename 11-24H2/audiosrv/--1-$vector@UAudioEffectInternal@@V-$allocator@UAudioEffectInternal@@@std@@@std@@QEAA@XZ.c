/*
 * XREFs of ??1?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAA@XZ @ 0x1800A35F0
 * Callers:
 *     _CSharedStreamGroupProxy::CompareStreamingEffectsOverrideProcessingModeParameters_::_1_::dtor$0 @ 0x18016BCE2 (_CSharedStreamGroupProxy--CompareStreamingEffectsOverrideProcessingModeParameters_--_1_--dtor$0.c)
 *     _CSharedStreamGroupProxy::CompareStreamingEffectsOverrideProcessingModeParameters_::_1_::dtor$1 @ 0x18016BCF4 (_CSharedStreamGroupProxy--CompareStreamingEffectsOverrideProcessingModeParameters_--_1_--dtor$1.c)
 *     _CAudioStream::SetAudioEffect_::_1_::dtor$2 @ 0x18016C443 (_CAudioStream--SetAudioEffect_--_1_--dtor$2.c)
 *     _CAudioStream::GetAudioEffects_::_1_::dtor$2 @ 0x18016C467 (_CAudioStream--GetAudioEffects_--_1_--dtor$2.c)
 *     _CAudioStream::GetControllableEffects_::_1_::dtor$2 @ 0x18016C479 (_CAudioStream--GetControllableEffects_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<AudioEffectInternal>::~vector<AudioEffectInternal>(__int64 a1)
{
  std::vector<AudioEffectInternal>::_Tidy(a1);
}
