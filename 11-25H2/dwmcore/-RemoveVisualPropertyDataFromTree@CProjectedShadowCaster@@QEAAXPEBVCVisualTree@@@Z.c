/*
 * XREFs of ?RemoveVisualPropertyDataFromTree@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x18029B998
 * Callers:
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x180107850 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x180107914 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 * Callees:
 *     ??$_Find@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x180217370 (--$_Find@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProject.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x18029BBE8 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$.c)
 */

void __fastcall CProjectedShadowCaster::RemoveVisualPropertyDataFromTree(__int64 **this, const struct CVisualTree *a2)
{
  char *v2; // rdi
  __int64 *v4; // rax
  __int64 *v5; // r11
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  const struct CVisualTree *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (char *)(this + 11);
  v4 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find<CVisualTree const *>(
         this + 11,
         &v10);
  if ( v4 != v5 )
  {
    v6 = v5[1];
    v7 = v6;
    v8 = v5;
    while ( !*(_BYTE *)(v7 + 25) )
    {
      if ( *(_QWORD *)(v7 + 32) >= (unsigned __int64)a2 )
      {
        if ( *((_BYTE *)v8 + 25) && (unsigned __int64)a2 < *(_QWORD *)(v7 + 32) )
          v8 = (__int64 *)v7;
        v5 = (__int64 *)v7;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    if ( !*((_BYTE *)v8 + 25) )
      v6 = *v8;
    while ( !*(_BYTE *)(v6 + 25) )
    {
      if ( (unsigned __int64)a2 >= *(_QWORD *)(v6 + 32) )
      {
        v6 = *(_QWORD *)(v6 + 16);
      }
      else
      {
        v8 = (__int64 *)v6;
        v6 = *(_QWORD *)v6;
      }
    }
    v9[1] = v8;
    v9[0] = v5;
    std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Erase(
      v2,
      v9);
  }
}
