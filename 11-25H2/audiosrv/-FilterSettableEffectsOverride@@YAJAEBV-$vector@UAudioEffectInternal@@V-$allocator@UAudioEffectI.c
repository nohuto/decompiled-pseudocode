/*
 * XREFs of ?FilterSettableEffectsOverride@@YAJAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@AEAV32@@Z @ 0x18009F5C4
 * Callers:
 *     ?HasSameOverrideWithDifferentStates@@YA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@1@Z @ 0x18009F454 (-HasSameOverrideWithDifferentStates@@YA_NAEBV-$vector@UAudioEffectInternal@@V-$allocator@UAudioE.c)
 *     ?AreEffectsOverrideEqual@@YA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@1@Z @ 0x1800EFAE4 (-AreEffectsOverrideEqual@@YA_NAEBV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectIntern.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??$_Emplace_back_with_unused_capacity@UAudioEffectState@CProcessingModeParameters@@@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAAEAUAudioEffectState@CProcessingModeParameters@@$$QEAU23@@Z @ 0x1800C89D4 (--$_Emplace_back_with_unused_capacity@UAudioEffectState@CProcessingModeParameters@@@-$vector@UAu.c)
 *     ??$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAPEAUAudioEffectState@CProcessingModeParameters@@QEAU23@$$QEAU23@@Z @ 0x1800C8B30 (--$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@-$vector@UAudioEffectState@.c)
 */

__int64 __fastcall FilterSettableEffectsOverride(_QWORD **a1, __int128 **a2, __int64 a3, const char *a4)
{
  __int128 *v6; // rbx
  __int128 *v7; // rsi
  _QWORD *i; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  __int128 v12; // [rsp+28h] [rbp-30h] BYREF
  int v13; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = *a2;
  v7 = a2[1];
  try
  {
    while ( v6 != v7 )
    {
      v12 = *v6;
      v13 = *((_DWORD *)v6 + 4);
      for ( i = *a1; i != a1[1]; i += 3 )
      {
        v9 = v12 - *i;
        if ( (_QWORD)v12 == *i )
          v9 = *((_QWORD *)&v12 + 1) - i[1];
        if ( !v9 )
          break;
      }
      if ( i != a1[1] )
      {
        v10 = *(_QWORD *)(a3 + 8);
        if ( v10 == *(_QWORD *)(a3 + 16) )
          std::vector<CProcessingModeParameters::AudioEffectState>::_Emplace_reallocate<CProcessingModeParameters::AudioEffectState>(
            a3,
            v10,
            &v12);
        else
          std::vector<CProcessingModeParameters::AudioEffectState>::_Emplace_back_with_unused_capacity<CProcessingModeParameters::AudioEffectState>(
            a3,
            &v12);
      }
      v6 = (__int128 *)((char *)v6 + 20);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x72D,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           a4);
  }
  return result;
}
