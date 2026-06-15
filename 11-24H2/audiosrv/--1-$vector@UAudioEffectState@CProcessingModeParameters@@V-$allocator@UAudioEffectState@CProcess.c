/*
 * XREFs of ??1?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@QEAA@XZ @ 0x180064EB8
 * Callers:
 *     _HasSameOverrideWithDifferentStates_::_1_::dtor$0 @ 0x18016C5EF (_HasSameOverrideWithDifferentStates_--_1_--dtor$0.c)
 *     _HasSameOverrideWithDifferentStates_::_1_::dtor$1 @ 0x18016C601 (_HasSameOverrideWithDifferentStates_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CProcessingModeParameters::AudioEffectState>::~vector<CProcessingModeParameters::AudioEffectState>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 2)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
