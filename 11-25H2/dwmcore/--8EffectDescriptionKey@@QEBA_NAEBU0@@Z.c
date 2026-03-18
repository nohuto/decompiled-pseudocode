/*
 * XREFs of ??8EffectDescriptionKey@@QEBA_NAEBU0@@Z @ 0x18013BE98
 * Callers:
 *     ??$_Find_last@UEffectDescriptionKey@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@std@@@1@AEBUEffectDescriptionKey@@_K@Z @ 0x18013B9DC (--$_Find_last@UEffectDescriptionKey@@@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffect.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x18013BA6C (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18013C97C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_U.c)
 *     ??$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x18013CB9C (--$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@-$_Hash@V-$_Umap_traits@UEffec.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18023B330 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectHash@@@details@wil@@QEAA_NXZ @ 0x18024A934 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectHash@@@details@wil@@QEAA_NX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall EffectDescriptionKey::operator==(__int64 a1, __int64 *a2)
{
  char IsEnabled; // al
  __int64 v5; // r8
  char v6; // bl
  char v7; // di

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_EffectHash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EffectHash>::GetImpl'::`2'::impl);
  v5 = *a2;
  v6 = 0;
  if ( IsEnabled )
  {
    v7 = 0;
    if ( *(_QWORD *)a1 == v5 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 96LL))(*(_QWORD *)(a1 + 8), a2[1]);
      if ( !v7 )
        MicrosoftTelemetryAssertTriggeredNoArgs();
    }
    return v7;
  }
  else
  {
    if ( *(_QWORD *)a1 == v5 )
      return (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 96LL))(
               *(_QWORD *)(a1 + 8),
               a2[1]) != 0;
    return v6;
  }
}
