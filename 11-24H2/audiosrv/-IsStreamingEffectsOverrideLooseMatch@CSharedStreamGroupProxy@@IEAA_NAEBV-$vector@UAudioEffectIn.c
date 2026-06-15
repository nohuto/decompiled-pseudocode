/*
 * XREFs of ?IsStreamingEffectsOverrideLooseMatch@CSharedStreamGroupProxy@@IEAA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@3@@Z @ 0x1800613A8
 * Callers:
 *     ?CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180060EE4 (-CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProc.c)
 * Callees:
 *     ??$_Construct_n@AEBQEAUAudioEffectInternal@@AEBQEAU1@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAX_KAEBQEAUAudioEffectInternal@@1@Z @ 0x18009EF2C (--$_Construct_n@AEBQEAUAudioEffectInternal@@AEBQEAU1@@-$vector@UAudioEffectInternal@@V-$allocato.c)
 *     ?_Tidy@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ @ 0x1800A2F28 (-_Tidy@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ.c)
 *     ?GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800F6720 (-GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV-$vector@UAudioEffe.c)
 */

char __fastcall CSharedStreamGroupProxy::IsStreamingEffectsOverrideLooseMatch(__int64 a1, _QWORD *a2, __int64 *a3)
{
  char v5; // bl
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  __int64 i; // rcx
  __int64 j; // rax
  __int64 v10; // rdx
  __int64 k; // rdx
  __int64 m; // rcx
  __int64 v13; // rax
  bool v14; // zf
  __int128 v16; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+30h] [rbp-20h]
  __int128 v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h]

  v5 = 0;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2[1] - *a2) >> 3);
  v16 = 0LL;
  v17 = 0LL;
  std::vector<AudioEffectInternal>::_Construct_n<AudioEffectInternal * const &,AudioEffectInternal * const &>(&v16, v6);
  v7 = *((_QWORD *)&v16 + 1);
  for ( i = v16; i != v7; i += 24LL )
  {
    for ( j = *a3; j != a3[1]; j += 20LL )
    {
      v10 = *(_QWORD *)j - *(_QWORD *)i;
      if ( *(_QWORD *)j == *(_QWORD *)i )
        v10 = *(_QWORD *)(j + 8) - *(_QWORD *)(i + 8);
      if ( !v10 )
        break;
    }
    if ( j != a3[1] )
      *(_DWORD *)(i + 20) = *(_DWORD *)(j + 16);
  }
  v19 = 0LL;
  v18 = 0LL;
  CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForStreaming(a1 + 8, &v18);
  for ( k = v16; k != *((_QWORD *)&v16 + 1); k += 24LL )
  {
    for ( m = v18; m != *((_QWORD *)&v18 + 1); m += 24LL )
    {
      v13 = *(_QWORD *)m - *(_QWORD *)k;
      if ( *(_QWORD *)m == *(_QWORD *)k )
        v13 = *(_QWORD *)(m + 8) - *(_QWORD *)(k + 8);
      if ( !v13 )
        break;
    }
    if ( m == *((_QWORD *)&v18 + 1) )
      v14 = *(_DWORD *)(k + 20) == 0;
    else
      v14 = *(_DWORD *)(m + 20) == *(_DWORD *)(k + 20);
    if ( !v14 )
      goto LABEL_26;
  }
  v5 = 1;
LABEL_26:
  std::vector<AudioEffectInternal>::_Tidy(&v18);
  std::vector<AudioEffectInternal>::_Tidy(&v16);
  return v5;
}
