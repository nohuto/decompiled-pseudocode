/*
 * XREFs of ??$_Try_emplace@AEBQEBVCVisualTree@@$$V@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@_N@1@AEBQEBVCVisualTree@@@Z @ 0x18003BB3C
 * Callers:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x18003AF7C (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180152D28 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCSceneMeshRendererComponent@@V-$com_.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAPEBVCVisualTree@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAPEBVCVisualTree@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180247FE4 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAPEBVCVisualTree@@@1@V-$tuple@$$V@1@@-$_Tree_te.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802501B0 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@QEBVCVisualTree@@UVisualPropertyData@CPr.c)
 *     ?_Check_grow_by_1@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x180250394 (-_Check_grow_by_1@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowC.c)
 */

__int64 __fastcall std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::_Try_emplace<CVisualTree const * const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v3; // r9
  __int64 *v7; // rax
  unsigned __int64 v8; // rcx
  __int64 *v10; // r8
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rbx
  _BYTE v14[16]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 *v16; // [rsp+70h] [rbp+10h] BYREF

  v3 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8);
  v15 = (unsigned __int64)v7;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v8 = *a3;
    do
    {
      *(_QWORD *)&v15 = v7;
      if ( v7[4] >= v8 )
      {
        v3 = v7;
        DWORD2(v15) = 1;
        v7 = (__int64 *)*v7;
      }
      else
      {
        DWORD2(v15) = 0;
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v3 + 25) || *a3 < v3[4] )
  {
    std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Check_grow_by_1(a1);
    v10 = (__int64 *)*a1;
    v16 = a3;
    v12 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>(
            (unsigned int)v14,
            (_DWORD)a1,
            (_DWORD)v10,
            v11,
            (__int64)&v16);
    v13 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>(v14);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>::_Insert_node(
                      a1,
                      &v15,
                      v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
