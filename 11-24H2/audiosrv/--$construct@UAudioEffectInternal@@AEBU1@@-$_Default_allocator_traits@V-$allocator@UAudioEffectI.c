/*
 * XREFs of ??$construct@UAudioEffectInternal@@AEBU1@@?$_Default_allocator_traits@V?$allocator@UAudioEffectInternal@@@std@@@std@@SAXAEAV?$allocator@UAudioEffectInternal@@@1@QEAUAudioEffectInternal@@AEBU3@@Z @ 0x180054454
 * Callers:
 *     ??$_Emplace_reallocate@AEBUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAPEAUAudioEffectInternal@@QEAU2@AEBU2@@Z @ 0x1800542A4 (--$_Emplace_reallocate@AEBUAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAu.c)
 *     ??$_Emplace_reallocate@UAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAPEAUAudioEffectInternal@@QEAU2@$$QEAU2@@Z @ 0x1800B4BB0 (--$_Emplace_reallocate@UAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAudio.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Default_allocator_traits<std::allocator<AudioEffectInternal>>::construct<AudioEffectInternal,AudioEffectInternal const &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a3 + 16);
}
