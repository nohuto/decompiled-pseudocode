/*
 * XREFs of ?AreEffectsOverrideEqual@@YA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@1@Z @ 0x1800F4B14
 * Callers:
 *     ?CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180060EE4 (-CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProc.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?FilterSettableEffectsOverride@@YAJAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@AEAV32@@Z @ 0x18009BEC4 (-FilterSettableEffectsOverride@@YAJAEBV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectI.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall AreEffectsOverrideEqual(_QWORD **a1, __int128 **a2, __int128 **a3, const char *a4)
{
  const char *v6; // r9
  char *v7; // rbx
  __int128 *i; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+30h] [rbp-40h]
  __int128 v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]
  __int128 v16; // [rsp+50h] [rbp-20h]

  v12 = 0LL;
  v13 = 0LL;
  FilterSettableEffectsOverride(a1, a2, (__int64)&v12, a4);
  v14 = 0LL;
  v15 = 0LL;
  FilterSettableEffectsOverride(a1, a3, (__int64)&v14, v6);
  v7 = (char *)v12;
  if ( *((_QWORD *)&v12 + 1) - (_QWORD)v12 == *((_QWORD *)&v14 + 1) - (_QWORD)v14 )
  {
    for ( i = (__int128 *)v12; i != *((__int128 **)&v12 + 1); i = (__int128 *)((char *)i + 20) )
    {
      v16 = *i;
      if ( (_QWORD)v14 == *((_QWORD *)&v14 + 1) )
        goto LABEL_13;
      v9 = v14;
      do
      {
        v10 = v16 - *(_QWORD *)v9;
        if ( (_QWORD)v16 == *(_QWORD *)v9 )
          v10 = *((_QWORD *)&v16 + 1) - *(_QWORD *)(v9 + 8);
        if ( !v10 && *((_DWORD *)i + 4) == *(_DWORD *)(v9 + 16) )
          break;
        v9 += 20LL;
      }
      while ( v9 != *((_QWORD *)&v14 + 1) );
      if ( v9 == *((_QWORD *)&v14 + 1) )
        goto LABEL_13;
    }
    if ( (_QWORD)v14 )
      std::_Deallocate<16,0>((char *)v14, (const struct std::nothrow_t *)(4 * ((v15 - (__int64)v14) >> 2)));
    if ( v7 )
      std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)(4 * ((v13 - (__int64)v7) >> 2)));
    return 1;
  }
  else
  {
LABEL_13:
    if ( (_QWORD)v14 )
      std::_Deallocate<16,0>((char *)v14, (const struct std::nothrow_t *)(4 * ((v15 - (__int64)v14) >> 2)));
    if ( v7 )
      std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)(4 * ((v13 - (__int64)v7) >> 2)));
    return 0;
  }
}
