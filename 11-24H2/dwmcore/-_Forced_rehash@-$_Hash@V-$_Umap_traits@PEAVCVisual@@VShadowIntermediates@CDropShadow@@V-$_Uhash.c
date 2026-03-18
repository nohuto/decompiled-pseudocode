/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x180299DE4
 * Callers:
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x18014EC30 (--$_Try_emplace@AEBQEAVCVisual@@$$V@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CD.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800DE74C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??$?RPEAVCInteractionTracker@@@?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@QEBA_KAEBQEAVCInteractionTracker@@@Z @ 0x1800E0CA8 (--$-RPEAVCInteractionTracker@@@-$_Uhash_compare@PEAVCInteractionTracker@@U-$hash@PEAVCInteractio.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180299BB8 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uhash.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 **v7; // rcx
  __int64 i; // r10
  __int64 v9; // rax
  __int64 ***v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 *v16; // rdi
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 **v19; // rdi
  __int64 *v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  __int64 *v24; // rax
  __int64 v26; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v26) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v26) = 0;
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
    a1 + 3,
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  for ( i = *(_QWORD *)a1[1]; i != v4; i = v12 )
  {
    v9 = std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>::operator()<CInteractionTracker *>(
           (__int64)v7,
           i + 16);
    v13 = a1[3];
    v14 = 2 * (a1[6] & v9);
    if ( *(_QWORD *)(v13 + 16 * (a1[6] & v9)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (a1[6] & v9)) = v11;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v11;
      continue;
    }
    v15 = *(__int64 **)(v13 + 16 * (a1[6] & v9) + 8);
    v7 = *v10;
    if ( *v10 == (__int64 **)v15[2] )
    {
      v16 = (__int64 *)*v15;
      if ( *v15 != v11 )
      {
        v17 = *(_QWORD **)(v11 + 8);
        *v17 = v12;
        v7 = *(__int64 ***)(v12 + 8);
        *v7 = v16;
        v18 = (_QWORD *)v16[1];
        *v18 = v11;
        v16[1] = (__int64)v7;
        *(_QWORD *)(v12 + 8) = v17;
        *(_QWORD *)(v11 + 8) = v18;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v19 = (__int64 **)(v15 + 1);
      if ( *(__int64 **)(v13 + 8 * v14) == v15 )
        break;
      v15 = *v19;
      if ( v7 == (__int64 **)(*v19)[2] )
      {
        v20 = (__int64 *)*v15;
        v21 = *(_QWORD **)(v11 + 8);
        *v21 = v12;
        v7 = *(__int64 ***)(v12 + 8);
        *v7 = v20;
        v22 = (_QWORD *)v20[1];
        *v22 = v11;
        v20[1] = (__int64)v7;
        *(_QWORD *)(v12 + 8) = v21;
        *(_QWORD *)(v11 + 8) = v22;
        goto LABEL_15;
      }
    }
    v23 = *(_QWORD **)(v11 + 8);
    *v23 = v12;
    v7 = *(__int64 ***)(v12 + 8);
    *v7 = v15;
    v24 = *v19;
    *v24 = v11;
    *v19 = (__int64 *)v7;
    *(_QWORD *)(v12 + 8) = v23;
    *(_QWORD *)(v11 + 8) = v24;
    *(_QWORD *)(v13 + 8 * v14) = v11;
LABEL_15:
    ;
  }
  v26 = 0LL;
  return std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Clear_guard::~_Clear_guard(&v26);
}
