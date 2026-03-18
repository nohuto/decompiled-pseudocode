/*
 * XREFs of ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x18018BD90
 * Callers:
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x1801332EC (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x18020B3AC (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 * Callees:
 *     ??$?RPEAVCInteractionTracker@@@?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@QEBA_KAEBQEAVCInteractionTracker@@@Z @ 0x1800E0CA8 (--$-RPEAVCInteractionTracker@@@-$_Uhash_compare@PEAVCInteractionTracker@@U-$hash@PEAVCInteractio.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@1@V21@@Z @ 0x18018AEF4 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCVisual@@VShadowInterm.c)
 *     ??$_Find@PEAVCVisual@@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@1@AEBQEAVCVisual@@_K@Z @ 0x18018C5D8 (--$_Find@PEAVCVisual@@@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-.c)
 */

void __fastcall CDropShadow::RemoveVisualFromCache(CDropShadow *this, struct CVisual *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r11
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  struct CVisual *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (_QWORD *)((char *)this + 200);
  v3 = std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>::operator()<CInteractionTracker *>(
         (__int64)this,
         (__int64)&v7);
  v4 = std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Find<CVisual *>(
         v2,
         &v7,
         v3);
  if ( v4 != *(_QWORD *)(v5 + 208) )
    std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>,0>(
      v2,
      &v6,
      v4);
}
