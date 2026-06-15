/*
 * XREFs of ??$_Construct_in_place@UAudioEffectInternal@@AEBU1@@std@@YAXAEAUAudioEffectInternal@@AEBU1@@Z @ 0x1800B4B70
 * Callers:
 *     ??$_Emplace_back_with_unused_capacity@UAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAAEAUAudioEffectInternal@@$$QEAU2@@Z @ 0x1800B4B88 (--$_Emplace_back_with_unused_capacity@UAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$a.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Construct_in_place<AudioEffectInternal,AudioEffectInternal const &>(__int64 a1, __int64 a2)
{
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
}
