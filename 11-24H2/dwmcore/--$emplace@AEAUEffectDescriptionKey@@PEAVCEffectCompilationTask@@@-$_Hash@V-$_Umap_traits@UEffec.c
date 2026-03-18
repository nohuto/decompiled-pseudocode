/*
 * XREFs of ??$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x1801DCC5C
 * Callers:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x180156004 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800E008C (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknown.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1800E0D48 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTa.c)
 *     ??$_Find_last@UEffectDescriptionKey@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@std@@@1@AEBUEffectDescriptionKey@@_K@Z @ 0x180155F74 (--$_Find_last@UEffectDescriptionKey@@@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffect.c)
 *     ??8EffectDescriptionKey@@QEBA_NAEBU0@@Z @ 0x180156430 (--8EffectDescriptionKey@@QEBA_NAEBU0@@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801DCE1C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_U.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::emplace<EffectDescriptionKey &,CEffectCompilationTask *>(
        float *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v4; // r15
  __int64 *inserted; // rax
  __int64 v10; // r13
  __int64 v11; // rdx
  float v12; // xmm0_4
  __int64 v13; // rcx
  float v14; // xmm1_4
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 *v17; // rbx
  __int64 *v18; // rbp
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v22; // [rsp+28h] [rbp-20h]

  v4 = *a3;
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Find_last<EffectDescriptionKey>(
    a1,
    &v21,
    (__int64)a3,
    *a3);
  inserted = v22;
  if ( v22 )
  {
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_OWORD *)(v10 + 16) = *(_OWORD *)a3;
    *(_QWORD *)(v10 + 32) = *a4;
    v11 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v11 < 0 )
      v12 = (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
          + (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1));
    else
      v12 = (float)(int)v11;
    v13 = *((_QWORD *)a1 + 7);
    if ( v13 < 0 )
    {
      v20 = *((_QWORD *)a1 + 7) & 1LL | (*((_QWORD *)a1 + 7) >> 1);
      v14 = (float)(int)v20 + (float)(int)v20;
    }
    else
    {
      v14 = (float)(int)v13;
    }
    if ( (float)(v12 / v14) > *a1 )
    {
      v15 = std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v11);
      std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Forced_rehash(
        a1,
        v15);
      v16 = *((_QWORD *)a1 + 3);
      v17 = *(__int64 **)(v16 + 16 * (v4 & *((_QWORD *)a1 + 6)) + 8);
      if ( v17 == *((__int64 **)a1 + 1) )
      {
        v21 = *((_QWORD *)a1 + 1);
      }
      else
      {
        v18 = *(__int64 **)(v16 + 16 * (v4 & *((_QWORD *)a1 + 6)));
        while ( 1 )
        {
          if ( EffectDescriptionKey::operator==(v10 + 16, v17 + 2) )
          {
            v21 = *v17;
            v22 = v17;
            goto LABEL_15;
          }
          if ( v17 == v18 )
            break;
          v17 = (__int64 *)v17[1];
        }
        v21 = (__int64)v17;
      }
      v22 = 0LL;
    }
LABEL_15:
    inserted = std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Insert_new_node_before(
                 a1,
                 v4,
                 v21,
                 (_QWORD *)v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  *(_QWORD *)a2 = inserted;
  return a2;
}
