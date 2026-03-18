/*
 * XREFs of ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x1800F7B24
 * Callers:
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1800F4B14 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@1@AEBQEAVCInteractionTracker@@@Z @ 0x1800F5C44 (--$find@X@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@.c)
 *     ??$emplace@AEAPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTracker@@$$QEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1800F72BC (--$emplace@AEAPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@-$_Hash@V-$_Umap_t.c)
 *     ??1?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800F846C (--1-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-$al.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1800F8C2C (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800F8EC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@1@@Z @ 0x1800F9698 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@-$_Tree_val@.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801022BC (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

void __fastcall CInteractionTrackerBindingManager::GetConnectedTrackersAndUpdatedAxes(
        int a1,
        int a2,
        char a3,
        _QWORD *a4)
{
  int v5; // r12d
  char v8; // bl
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 j; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int64 i; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  SIZE_T size_of; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // [rsp+30h] [rbp-40h] BYREF
  __int64 v38; // [rsp+38h] [rbp-38h]
  __int64 v39; // [rsp+40h] [rbp-30h] BYREF
  __int64 v40; // [rsp+48h] [rbp-28h] BYREF
  _QWORD *v41[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v42[2]; // [rsp+60h] [rbp-10h] BYREF

  v41[1] = 0LL;
  v5 = a3 & 4;
  v8 = a3 & 1;
  v9 = a3 & 2;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *(_QWORD *)v10 = v10;
  *(_QWORD *)(v10 + 8) = v10;
  *(_QWORD *)(v10 + 16) = v10;
  *(_WORD *)(v10 + 24) = 257;
  v41[0] = (_QWORD *)v10;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 7, (unsigned int)v41, 0LL);
  v11 = *v41[0];
  v39 = *v41[0];
  while ( !*(_BYTE *)(v11 + 25) )
  {
    v40 = *(_QWORD *)(v11 + 32);
    LODWORD(v37) = 0;
    std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::emplace<CInteractionTracker * &,enum InteractionTrackerBindingModeFlags>(
      a4,
      (__int64)v42,
      &v40,
      &v37);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v39);
    v11 = v39;
  }
  if ( v8 )
  {
    v38 = 0LL;
    v22 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)v22 = v22;
    *(_QWORD *)(v22 + 8) = v22;
    *(_QWORD *)(v22 + 16) = v22;
    *(_WORD *)(v22 + 24) = 257;
    v37 = (_QWORD *)v22;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 1, (unsigned int)&v37, 0LL);
    v23 = 0xCBF29CE484222325uLL;
    v24 = 0x100000001B3LL;
    v25 = *v37;
    v39 = *v37;
    while ( !*(_BYTE *)(v25 + 25) )
    {
      v26 = *(_QWORD *)(v25 + 32);
      v27 = v23;
      v40 = v26;
      for ( i = 0LL; i < 8; ++i )
      {
        v29 = *((unsigned __int8 *)&v41[-1] + i);
        v27 = v24 * (v29 ^ v27);
      }
      v30 = v27 & a4[6];
      v31 = a4[3];
      v32 = 2 * v30;
      v33 = *(_QWORD *)(v31 + 8 * v32 + 8);
      if ( v33 == a4[1] )
      {
LABEL_27:
        v33 = 0LL;
      }
      else
      {
        while ( v26 != *(_QWORD *)(v33 + 16) )
        {
          if ( v33 == *(_QWORD *)(v31 + 8 * v32) )
            goto LABEL_27;
          v33 = *(_QWORD *)(v33 + 8);
        }
      }
      if ( !v33 )
        v33 = a4[1];
      *(_DWORD *)(v33 + 24) |= 1u;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v39);
      v25 = v39;
    }
    std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
      &v37,
      &v37,
      v37[1]);
    std::_Deallocate<16,0>(v37, 0x28uLL);
  }
  if ( v9 )
  {
    v38 = 0LL;
    v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)v12 = v12;
    *(_QWORD *)(v12 + 8) = v12;
    *(_QWORD *)(v12 + 16) = v12;
    *(_WORD *)(v12 + 24) = 257;
    v37 = (_QWORD *)v12;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 2, (unsigned int)&v37, 0LL);
    v13 = *v37;
    v39 = *v37;
    while ( !*(_BYTE *)(v13 + 25) )
    {
      v14 = *(_QWORD *)(v13 + 32);
      v15 = 0xCBF29CE484222325uLL;
      v40 = v14;
      for ( j = 0LL; j < 8; ++j )
      {
        v17 = *((unsigned __int8 *)&v41[-1] + j);
        v15 = 0x100000001B3LL * (v17 ^ v15);
      }
      v18 = v15 & a4[6];
      v19 = a4[3];
      v20 = 2 * v18;
      v21 = *(_QWORD *)(v19 + 8 * v20 + 8);
      if ( v21 == a4[1] )
      {
LABEL_16:
        v21 = 0LL;
      }
      else
      {
        while ( v14 != *(_QWORD *)(v21 + 16) )
        {
          if ( v21 == *(_QWORD *)(v19 + 8 * v20) )
            goto LABEL_16;
          v21 = *(_QWORD *)(v21 + 8);
        }
      }
      if ( !v21 )
        v21 = a4[1];
      *(_DWORD *)(v21 + 24) |= 2u;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v39);
      v13 = v39;
    }
    std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
      &v37,
      &v37,
      v37[1]);
    std::_Deallocate<16,0>(v37, 0x28uLL);
  }
  if ( v5 )
  {
    v42[1] = 0LL;
    size_of = std::_Get_size_of_n<40>(1LL);
    v35 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *(_QWORD *)v35 = v35;
    *(_QWORD *)(v35 + 8) = v35;
    *(_QWORD *)(v35 + 16) = v35;
    *(_WORD *)(v35 + 24) = 257;
    v42[0] = v35;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 4, (unsigned int)v42, 0LL);
    v36 = *(_QWORD *)v42[0];
    v39 = *(_QWORD *)v42[0];
    while ( !*(_BYTE *)(v36 + 25) )
    {
      v40 = *(_QWORD *)(v36 + 32);
      std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
        a4,
        &v37,
        &v40);
      *((_DWORD *)v37 + 6) |= 4u;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v39);
      v36 = v39;
    }
    std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::~_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>(v42);
  }
  std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
    v41,
    v41,
    v41[0][1]);
  std::_Deallocate<16,0>(v41[0], 0x28uLL);
}
