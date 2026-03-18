/*
 * XREFs of ?SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z @ 0x1802A4514
 * Callers:
 *     ?ProcessSetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMATERIAL@@@Z @ 0x1802A4310 (-ProcessSetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMES.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??$_Try_emplace@AEBQEAVCSceneMeshRendererComponent@@$$V@?$map@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCSceneMeshRendererComponent@@@Z @ 0x1801E2034 (--$_Try_emplace@AEBQEAVCSceneMeshRendererComponent@@$$V@-$map@PEAVCSceneMeshRendererComponent@@V.c)
 *     ?ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ @ 0x1802A413C (-ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1802A4D04 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V-$com_ptr_t@UISpectreMaterial@.c)
 *     ?AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z @ 0x1802ACC5C (-AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::SetMaterial(
        CSceneMeshRendererComponent *this,
        struct CSceneMaterial *a2)
{
  struct CSceneMaterial *v2; // rax
  _QWORD *v5; // r9
  __int64 *v6; // r8
  __int64 *v7; // rdx
  __int64 *v8; // rax
  __int64 *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v13; // rax
  int v14[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CSceneComponent *v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct CSceneMaterial *)*((_QWORD *)this + 11);
  if ( a2 != v2 )
  {
    if ( v2 )
    {
      v5 = (_QWORD *)((char *)v2 + 80);
      v6 = (__int64 *)*((_QWORD *)v2 + 10);
      v7 = v6;
      v8 = (__int64 *)v6[1];
      v9 = v8;
      while ( !*((_BYTE *)v9 + 25) )
      {
        if ( v9[4] >= (unsigned __int64)this )
        {
          if ( *((_BYTE *)v7 + 25) && (unsigned __int64)this < v9[4] )
            v7 = v9;
          v6 = v9;
          v9 = (__int64 *)*v9;
        }
        else
        {
          v9 = (__int64 *)v9[2];
        }
      }
      if ( !*((_BYTE *)v7 + 25) )
        v8 = (__int64 *)*v7;
      while ( !*((_BYTE *)v8 + 25) )
      {
        if ( (unsigned __int64)this >= v8[4] )
        {
          v8 = (__int64 *)v8[2];
        }
        else
        {
          v7 = v8;
          v8 = (__int64 *)*v8;
        }
      }
      v15 = v7;
      *(_QWORD *)v14 = v6;
      std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::_Erase(
        v5,
        v14);
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
      *((_QWORD *)this + 11) = 0LL;
    }
    if ( a2 )
    {
      v10 = CResource::RegisterNotifier(this, a2);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB7,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scenemeshrenderercomponent.cpp",
          (const char *)(unsigned int)v10);
        return v11;
      }
      v17 = this;
      v13 = std::map<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>::_Try_emplace<CSceneMeshRendererComponent * const &,>(
              (_QWORD *)a2 + 10,
              (__int64)v14,
              (unsigned __int64 *)&v17);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)v13 + 40LL));
      CSceneComponent::AddDirtySceneObject(v17, a2);
      *((_QWORD *)this + 11) = a2;
    }
    CSceneMeshRendererComponent::ApplyMaterialToSpectreResources(this);
  }
  return 0LL;
}
