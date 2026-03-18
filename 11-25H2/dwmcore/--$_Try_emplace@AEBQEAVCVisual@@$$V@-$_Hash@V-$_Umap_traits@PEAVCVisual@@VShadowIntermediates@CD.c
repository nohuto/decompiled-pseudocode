/*
 * XREFs of ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x18011A050
 * Callers:
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180119DE8 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800F6730 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknown.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1800F6E50 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTa.c)
 *     ??$_Find_last@PEAVCVisual@@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@1@AEBQEAVCVisual@@_K@Z @ 0x1801FB73C (--$_Find_last@PEAVCVisual@@@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShado.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCVisual@@@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCVisual@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802338CC (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCVisual@@@1@V-$tuple@$$V@1@@-$_List_node_emp.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1802A3BA4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uhash.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Try_emplace<CVisual * const &,>(
        float *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 *inserted; // rax
  __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  _QWORD *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[8]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-20h]
  _QWORD *v21; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  do
  {
    v7 = *((unsigned __int8 *)a3 + v5++);
    v6 = 0x100000001B3LL * (v7 ^ v6);
  }
  while ( v5 < 8 );
  v8 = *((_QWORD *)a1 + 3);
  v9 = *((_QWORD *)a1 + 1);
  inserted = *(__int64 **)(v8 + 16 * (v6 & *((_QWORD *)a1 + 6)) + 8);
  if ( inserted == (__int64 *)v9 )
    goto LABEL_11;
  while ( 1 )
  {
    if ( *a3 == inserted[2] )
    {
      v9 = *inserted;
      goto LABEL_6;
    }
    if ( inserted == *(__int64 **)(v8 + 16 * (v6 & *((_QWORD *)a1 + 6))) )
      break;
    inserted = (__int64 *)inserted[1];
  }
  v9 = (__int64)inserted;
  inserted = 0LL;
LABEL_6:
  if ( !inserted )
  {
LABEL_11:
    if ( *((_QWORD *)a1 + 2) == 0x2AAAAAAAAAAAAAALL )
      std::_Xlength_error("unordered_map/set too long");
    v21 = a3;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>>>(
      v19,
      a1 + 2,
      a3,
      &v21);
    v12 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v12 < 0 )
      v13 = (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1))
          + (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1));
    else
      v13 = (float)(int)v12;
    v14 = *((_QWORD *)a1 + 7);
    if ( v14 < 0 )
    {
      v18 = *((_QWORD *)a1 + 7) & 1LL | (*((_QWORD *)a1 + 7) >> 1);
      v15 = (float)(int)v18 + (float)(int)v18;
    }
    else
    {
      v15 = (float)(int)v14;
    }
    v16 = v20;
    if ( (float)(v13 / v15) > *a1 )
    {
      v17 = std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v12);
      std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Forced_rehash(
        a1,
        v17);
      v9 = *(_QWORD *)std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Find_last<CVisual *>(
                        a1,
                        v19,
                        v16 + 2,
                        v6);
    }
    inserted = std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Insert_new_node_before(
                 a1,
                 v6,
                 v9,
                 v16);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_BYTE *)(a2 + 8) = 0;
  }
  *(_QWORD *)a2 = inserted;
  return a2;
}
