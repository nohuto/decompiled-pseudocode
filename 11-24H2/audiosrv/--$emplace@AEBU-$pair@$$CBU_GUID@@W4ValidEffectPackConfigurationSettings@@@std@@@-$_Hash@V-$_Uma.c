/*
 * XREFs of ??$emplace@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@1@@Z @ 0x180143520
 * Callers:
 *     _dynamic_initializer_for__s_validSettingsForSchema__ @ 0x180008A90 (_dynamic_initializer_for__s_validSettingsForSchema__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$construct@UAudioEffectState@CProcessingModeParameters@@AEBU12@@?$_Default_allocator_traits@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@SAXAEAV?$allocator@UAudioEffectState@CProcessingModeParameters@@@1@QEAUAudioEffectState@CProcessingModeParameters@@AEBU34@@Z @ 0x18002AAEC (--$construct@UAudioEffectState@CProcessingModeParameters@@AEBU12@@-$_Default_allocator_traits@V-.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18009BBF0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A1FD4 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@$$CBU_GUID@@W4ValidEffectPackConfig.c)
 *     ??$_Find_last@U_GUID@@@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@@1@AEBU_GUID@@_K@Z @ 0x180142BEC (--$_Find_last@U_GUID@@@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180148038 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettin.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180148704 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V-$_Uhas.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x180148AE4 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::emplace<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings> const &>(
        __int64 a1,
        __int64 a2,
        unsigned int *a3)
{
  unsigned __int64 v5; // rdi
  SIZE_T size_of; // rax
  _QWORD *v7; // rbp
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a3 ^ a3[1] ^ a3[2] ^ (unsigned __int64)a3[3];
  std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Find_last<_GUID>(
    a1,
    &v18,
    a3,
    v5);
  if ( *((_QWORD *)&v18 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v18 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( qword_1801DCF50 == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v17[0] = &qword_1801DCF48;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v17[1] = v7;
    std::_Default_allocator_traits<std::allocator<CProcessingModeParameters::AudioEffectState>>::construct<CProcessingModeParameters::AudioEffectState,CProcessingModeParameters::AudioEffectState const &>(
      v8,
      (__int64)(v7 + 2),
      (__int64)a3);
    v9 = qword_1801DCF50 + 1;
    if ( qword_1801DCF50 + 1 < 0 )
      v10 = (float)(int)(v9 & 1 | (v9 >> 1)) + (float)(int)(v9 & 1 | (v9 >> 1));
    else
      v10 = (float)(int)v9;
    v11 = qword_1801DCF78;
    if ( qword_1801DCF78 < 0 )
    {
      v11 = qword_1801DCF78 & 1;
      v12 = (float)(int)(v11 | ((unsigned __int64)qword_1801DCF78 >> 1))
          + (float)(int)(v11 | ((unsigned __int64)qword_1801DCF78 >> 1));
    }
    else
    {
      v12 = (float)(int)qword_1801DCF78;
    }
    if ( (float)(v10 / v12) > *(float *)&dword_1801DCF40 )
    {
      v13 = std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Desired_grow_bucket_count(
              v11,
              v9);
      std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Forced_rehash(
        v14,
        v13);
      v18 = *(_OWORD *)std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Find_last<_GUID>(
                         v15,
                         &v18,
                         v7 + 2,
                         v5);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Insert_new_node_before(
                      v11,
                      v5,
                      v18,
                      v7,
                      v17[0],
                      0LL);
    *(_BYTE *)(a2 + 8) = 1;
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>,void *>>>((__int64)v17);
  }
  return a2;
}
