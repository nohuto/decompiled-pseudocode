/*
 * XREFs of ??$emplace@AEBQEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@@std@@_N@1@AEBQEAVCBaseExpression@@@Z @ 0x180293348
 * Callers:
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x180220F3C (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800E008C (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknown.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E0134 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@V-$unordered_map@PEAVCInteracti.c)
 *     ??$?RPEAVCInteractionTracker@@@?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@QEBA_KAEBQEAVCInteractionTracker@@@Z @ 0x1800E0CA8 (--$-RPEAVCInteractionTracker@@@-$_Uhash_compare@PEAVCInteractionTracker@@U-$hash@PEAVCInteractio.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1800E0D48 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTa.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1801585E8 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1801B9FD0 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_U.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBII@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18021BF84 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@$$CBII@std@@PEAX@std@@@std@@@std@@Q.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::emplace<CBaseExpression * const &>(
        float *a1,
        __int64 a2,
        __int64 *a3)
{
  SIZE_T size_of; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rbp
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  float v15; // xmm0_4
  __int64 v16; // rcx
  float v17; // xmm1_4
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  _QWORD *v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+28h] [rbp-20h]
  __int128 v23; // [rsp+30h] [rbp-18h] BYREF

  v21 = a1 + 2;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v8 = *a3;
  v9 = (_QWORD *)v7;
  v22 = v7;
  v10 = (_QWORD *)(v7 + 16);
  *(_QWORD *)(v7 + 16) = v8;
  v12 = std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>::operator()<CInteractionTracker *>(
          v11,
          v7 + 16);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Find_last<unsigned __int64>(
    a1,
    &v23,
    v10,
    v12);
  if ( *((_QWORD *)&v23 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v23 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    v13 = *((_QWORD *)a1 + 2);
    if ( v13 == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("unordered_map/set too long");
    v14 = v13 + 1;
    if ( v14 < 0 )
      v15 = (float)(v14 & 1 | (unsigned int)((unsigned __int64)v14 >> 1))
          + (float)(v14 & 1 | (unsigned int)((unsigned __int64)v14 >> 1));
    else
      v15 = (float)(int)v14;
    v16 = *((_QWORD *)a1 + 7);
    if ( v16 < 0 )
    {
      v18 = *((_QWORD *)a1 + 7) & 1LL | (*((_QWORD *)a1 + 7) >> 1);
      v17 = (float)(int)v18 + (float)(int)v18;
    }
    else
    {
      v17 = (float)(int)v16;
    }
    if ( (float)(v15 / v17) > *a1 )
    {
      v19 = std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v14);
      std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::_Forced_rehash(
        a1,
        v19);
      v23 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Find_last<unsigned __int64>(
                         a1,
                         &v23,
                         v10,
                         v12);
    }
    v22 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Insert_new_node_before(
                      a1,
                      v12,
                      v23,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,unsigned int>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,unsigned int>,void *>>>((__int64)&v21);
  return a2;
}
