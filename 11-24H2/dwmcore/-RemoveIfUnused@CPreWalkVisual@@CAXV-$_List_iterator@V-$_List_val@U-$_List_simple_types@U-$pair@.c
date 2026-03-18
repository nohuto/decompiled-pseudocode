/*
 * XREFs of ?RemoveIfUnused@CPreWalkVisual@@CAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@std@@@std@@@std@@@Z @ 0x18018BFF0
 * Callers:
 *     ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z @ 0x18018BDE8 (-UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z.c)
 *     ?UnregisterTransformParentChild@CPreWalkVisual@@SAXPEAVCVisual@@@Z @ 0x18018C124 (-UnregisterTransformParentChild@CPreWalkVisual@@SAXPEAVCVisual@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1802001D8 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 *     ?RemoveProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18024FD70 (-RemoveProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 * Callees:
 *     ??$?RPEAVCInteractionTracker@@@?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@QEBA_KAEBQEAVCInteractionTracker@@@Z @ 0x1800E0CA8 (--$-RPEAVCInteractionTracker@@@-$_Uhash_compare@PEAVCInteractionTracker@@U-$hash@PEAVCInteractio.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18018C08C (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@s.c)
 */

__int64 __fastcall CPreWalkVisual::RemoveIfUnused(_BYTE *a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  _QWORD *v3; // r10
  _QWORD *v4; // r11
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx

  result = 0LL;
  if ( !a1[48] && !a1[49] && !a1[50] )
  {
    v2 = std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>::operator()<CInteractionTracker *>(
           (__int64)a1,
           (__int64)(a1 + 16));
    v5 = v4[778];
    v6 = 2 * (v4[781] & v2);
    if ( *(_QWORD **)(v5 + 16 * (v4[781] & v2) + 8) == v3 )
    {
      if ( *(_QWORD **)(v5 + 16 * (v4[781] & v2)) == v3 )
      {
        v7 = v4[776];
        *(_QWORD *)(v5 + 8 * v6) = v7;
      }
      else
      {
        v7 = v3[1];
      }
      *(_QWORD *)(v5 + 8 * v6 + 8) = v7;
    }
    else if ( *(_QWORD **)(v5 + 16 * (v4[781] & v2)) == v3 )
    {
      *(_QWORD *)(v5 + 16 * (v4[781] & v2)) = *v3;
    }
    v8 = *v3;
    --v4[777];
    *(_QWORD *)v3[1] = v8;
    *(_QWORD *)(v8 + 8) = v3[1];
    return std::_List_node<std::pair<CVisual * const,CPreWalkVisual>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<CVisual * const,CPreWalkVisual>,void *>>>(
             v8,
             v3);
  }
  return result;
}
