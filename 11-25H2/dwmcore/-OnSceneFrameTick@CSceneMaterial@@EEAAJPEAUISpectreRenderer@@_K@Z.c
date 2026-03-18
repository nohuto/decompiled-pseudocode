/*
 * XREFs of ?OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1802AE650
 * Callers:
 *     <none>
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800301EC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z @ 0x1802AE57C (-ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z.c)
 *     ?AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z @ 0x1802B684C (-AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneMaterial::OnSceneFrameTick(CSceneMaterial *this, struct ISpectreRenderer *a2)
{
  struct CSceneObject *v2; // rsi
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(struct ISpectreRenderer *, __int64); // rdi
  int v9; // eax
  struct CSceneMeshRendererComponent *v10; // rdx
  int v11; // eax
  char v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v2 = (CSceneMaterial *)((char *)this - 72);
  v5 = 0;
  v6 = **((_QWORD **)this + 1);
  v14 = v6;
  while ( v6 != *((_QWORD *)this + 1) )
  {
    if ( !*(_QWORD *)(v6 + 40) )
    {
      v7 = *(_QWORD *)a2;
      v13 = 0;
      v8 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, __int64))(v7 + 64);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(v6 + 40));
      v9 = v8(a2, v6 + 40);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x63u, 0LL);
        return v5;
      }
      (*(void (__fastcall **)(struct CSceneObject *, _QWORD, char *))(*(_QWORD *)v2 + 192LL))(
        v2,
        *(_QWORD *)(v6 + 40),
        &v13);
      if ( v13 )
        CSceneComponent::AddDirtySceneObject(*(CSceneComponent **)(v6 + 32), v2);
      (*(void (__fastcall **)(struct CSceneObject *, _QWORD, _QWORD))(*(_QWORD *)v2 + 80LL))(v2, 0LL, 0LL);
    }
    v10 = *(struct CSceneMeshRendererComponent **)(v6 + 32);
    if ( *((_BYTE *)v10 + 120) )
    {
      v11 = CSceneMaterial::ApplyTexCoordsToSpectreResource(v2, v10);
      v5 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x70u, 0LL);
        return v5;
      }
      *(_BYTE *)(*(_QWORD *)(v6 + 32) + 120LL) = 0;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v14);
    v6 = v14;
  }
  return v5;
}
