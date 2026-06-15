/*
 * XREFs of ??$_Construct_in_place@UAudioEffectState@CProcessingModeParameters@@AEBU12@@std@@YAXAEAUAudioEffectState@CProcessingModeParameters@@AEBU12@@Z @ 0x1800C7F70
 * Callers:
 *     ??$_Emplace_back_with_unused_capacity@UAudioEffectState@CProcessingModeParameters@@@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAAEAUAudioEffectState@CProcessingModeParameters@@$$QEAU23@@Z @ 0x1800C7FBC (--$_Emplace_back_with_unused_capacity@UAudioEffectState@CProcessingModeParameters@@@-$vector@UAu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Construct_in_place<CProcessingModeParameters::AudioEffectState,CProcessingModeParameters::AudioEffectState const &>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  result = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a1 + 16) = result;
  return result;
}
