/*
 * XREFs of ?_Change_array@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAXQEAUAudioEffectState@CProcessingModeParameters@@_K1@Z @ 0x1800CA888
 * Callers:
 *     ??$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAPEAUAudioEffectState@CProcessingModeParameters@@QEAU23@$$QEAU23@@Z @ 0x1800C8118 (--$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@-$vector@UAudioEffectState@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CProcessingModeParameters::AudioEffectState>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v6; // rcx
  __int64 result; // rax

  v6 = *(char **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 2)));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 20 * a3;
  result = 5 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 20 * a4;
  return result;
}
