/*
 * XREFs of ?HasSameOverrideWithDifferentStates@@YA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@1@Z @ 0x18009F454
 * Callers:
 *     ?CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x18006FE24 (-CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProc.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?FilterSettableEffectsOverride@@YAJAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@AEAV32@@Z @ 0x18009F5C4 (-FilterSettableEffectsOverride@@YAJAEBV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectI.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall HasSameOverrideWithDifferentStates(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // rdi
  __int128 *i; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+30h] [rbp-40h]
  __int128 v12; // [rsp+38h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h]
  __int128 v14; // [rsp+50h] [rbp-20h]

  v12 = 0LL;
  v13 = 0LL;
  FilterSettableEffectsOverride(a1, a2, &v12);
  v10 = 0LL;
  v11 = 0LL;
  FilterSettableEffectsOverride(a1, a3, &v10);
  v5 = (char *)v12;
  for ( i = (__int128 *)v12; i != *((__int128 **)&v12 + 1); i = (__int128 *)((char *)i + 20) )
  {
    v14 = *i;
    if ( (_QWORD)v10 != *((_QWORD *)&v10 + 1) )
    {
      v7 = v10;
      do
      {
        v8 = v14 - *(_QWORD *)v7;
        if ( (_QWORD)v14 == *(_QWORD *)v7 )
          v8 = *((_QWORD *)&v14 + 1) - *(_QWORD *)(v7 + 8);
        if ( !v8 && *((_DWORD *)i + 4) != *(_DWORD *)(v7 + 16) )
          break;
        v7 += 20LL;
      }
      while ( v7 != *((_QWORD *)&v10 + 1) );
      if ( v7 != *((_QWORD *)&v10 + 1) )
      {
        if ( (_QWORD)v10 )
          std::_Deallocate<16,0>((char *)v10, (const struct std::nothrow_t *)(4 * ((v11 - (__int64)v10) >> 2)));
        if ( v5 )
          std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)(4 * ((v13 - (__int64)v5) >> 2)));
        return 1;
      }
    }
  }
  if ( (_QWORD)v10 )
    std::_Deallocate<16,0>((char *)v10, (const struct std::nothrow_t *)(4 * ((v11 - (__int64)v10) >> 2)));
  if ( v5 )
    std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)(4 * ((v13 - (__int64)v5) >> 2)));
  return 0;
}
