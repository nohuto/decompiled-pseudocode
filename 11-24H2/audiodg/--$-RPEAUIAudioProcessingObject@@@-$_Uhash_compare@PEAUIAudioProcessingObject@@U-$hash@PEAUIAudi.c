/*
 * XREFs of ??$?RPEAUIAudioProcessingObject@@@?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@QEBA_KAEBQEAUIAudioProcessingObject@@@Z @ 0x140018224
 * Callers:
 *     ??$_Erase@PEAUIAudioProcessingObject@@@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAA_KAEBQEAUIAudioProcessingObject@@@Z @ 0x140018170 (--$_Erase@PEAUIAudioProcessingObject@@@-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V-$co.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x14005685C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V-$com_ptr_t@VCAPOProcessing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>::operator()<IAudioProcessingObject *>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 i; // r8
  __int64 v4; // rax

  v2 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v4 = *(unsigned __int8 *)(i + a2);
    v2 = 0x100000001B3LL * (v4 ^ v2);
  }
  return v2;
}
