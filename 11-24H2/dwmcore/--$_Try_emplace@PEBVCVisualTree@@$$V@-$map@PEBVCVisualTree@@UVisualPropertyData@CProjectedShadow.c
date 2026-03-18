/*
 * XREFs of ??$_Try_emplace@PEBVCVisualTree@@$$V@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@_N@1@$$QEAPEBVCVisualTree@@@Z @ 0x1801E54FC
 * Callers:
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x18028F2E8 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180152D28 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCSceneMeshRendererComponent@@V-$com_.c)
 *     ??$_Find_lower_bound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@1@AEBQEBVCVisualTree@@@Z @ 0x1801E55D4 (--$_Find_lower_bound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyD.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAPEBVCVisualTree@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAPEBVCVisualTree@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180247FE4 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAPEBVCVisualTree@@@1@V-$tuple@$$V@1@@-$_Tree_te.c)
 *     ?_Check_grow_by_1@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x180250394 (-_Check_grow_by_1@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowC.c)
 */

__int64 __fastcall std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::_Try_emplace<CVisualTree const *,>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // r8
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // rsi
  char v12; // [rsp+30h] [rbp-38h] BYREF
  CEffectIntermediateProducer **v13; // [rsp+38h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find_lower_bound<CVisualTree const *>(
    a1,
    &v14);
  if ( *(_BYTE *)(v15 + 25) || *v6 < *(_QWORD *)(v15 + 32) )
  {
    std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Check_grow_by_1(a1);
    v7 = *a1;
    v16 = a3;
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>(
           (unsigned int)&v12,
           (_DWORD)a1,
           v7,
           v8,
           (__int64)&v16);
    v10 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = 0LL;
    if ( v13 )
    {
      Microsoft::WRL::ComPtr<CShadowMaskProducer>::InternalRelease(v13 + 10);
      if ( v13 )
        std::_Deallocate<16,0>(v13, 0x58uLL);
    }
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>::_Insert_node(
                      a1,
                      (__int64)&v14,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v15;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
