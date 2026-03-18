/*
 * XREFs of ??$_Find@PEAVCVisual@@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@1@AEBQEAVCVisual@@_K@Z @ 0x1800C18CC
 * Callers:
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x1800C0ED8 (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Find<CVisual *>(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx

  v3 = a1[3];
  v4 = a3 & a1[6];
  v5 = a1[1];
  v6 = 2 * v4;
  v7 = *(_QWORD *)(v3 + 8 * v6 + 8);
  if ( v7 == v5 )
  {
LABEL_7:
    v7 = 0LL;
  }
  else
  {
    v8 = *a2;
    while ( v8 != *(_QWORD *)(v7 + 16) )
    {
      if ( v7 == *(_QWORD *)(v3 + 8 * v6) )
        goto LABEL_7;
      v7 = *(_QWORD *)(v7 + 8);
    }
  }
  if ( v7 )
    return v7;
  return v5;
}
