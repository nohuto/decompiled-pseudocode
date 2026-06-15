/*
 * XREFs of ??$_Allocate_at_least_helper@V?$allocator@U_tagpropertykey@@@std@@@std@@YAPEAU_tagpropertykey@@AEAV?$allocator@U_tagpropertykey@@@0@AEA_K@Z @ 0x18009F148
 * Callers:
 *     ?_Clear_and_reserve_geometric@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAX_K@Z @ 0x18009F098 (-_Clear_and_reserve_geometric@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator.c)
 *     ??$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAPEAUAudioEffectState@CProcessingModeParameters@@QEAU23@$$QEAU23@@Z @ 0x1800C8B30 (--$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@-$vector@UAudioEffectState@.c)
 *     ??$_Emplace_reallocate@AEBU_tagpropertykey@@@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@AEAAPEAU_tagpropertykey@@QEAU2@AEBU2@@Z @ 0x180140EE4 (--$_Emplace_reallocate@AEBU_tagpropertykey@@@-$vector@U_tagpropertykey@@V-$allocator@U_tagproper.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BE@@std@@YA_K_K@Z @ 0x1800A3A80 (--$_Get_size_of_n@$0BE@@std@@YA_K_K@Z.c)
 */

LPVOID __fastcall std::_Allocate_at_least_helper<std::allocator<_tagpropertykey>>(__int64 a1, _QWORD *a2)
{
  SIZE_T size_of; // rax

  size_of = std::_Get_size_of_n<20>(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
}
