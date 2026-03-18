/*
 * XREFs of ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1802AF3E0
 * Callers:
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1802AF3E0 (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x1802AF7D4 (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 *     ?OnSceneReady@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1802B4ED0 (-OnSceneReady@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ @ 0x1802AF23C (-ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1802AF3E0 (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x1802B6930 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneNode::HydrateSpectreResources(CSceneNode *this, struct CSceneWorld *a2)
{
  __int64 v4; // rdi
  __int64 *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  CSceneComponent **v12; // rdi
  CSceneComponent **i; // rbx
  CSceneNode **v14; // rdi
  CSceneNode **j; // rbx

  if ( !*((_QWORD *)this + 16) )
  {
    v4 = *((_QWORD *)this + 17);
    v5 = (__int64 *)((char *)this + 144);
    *((_QWORD *)this + 16) = a2;
    if ( v4 )
    {
      v8 = *(_QWORD *)(v4 + 144);
      v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 18);
      v10 = v9(v8, v5);
      v11 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xD0u, 0LL);
        return v11;
      }
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 11) + 32LL))(*((_QWORD *)a2 + 11));
      v7 = *v5;
      *v5 = v6;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    CSceneNode::ApplyTransformToSpectreResources(this);
    v12 = (CSceneComponent **)*((_QWORD *)this + 14);
    for ( i = (CSceneComponent **)*((_QWORD *)this + 13); i != v12; ++i )
      CSceneComponent::HydrateSpectreResources(*i, this);
    v14 = (CSceneNode **)*((_QWORD *)this + 11);
    for ( j = (CSceneNode **)*((_QWORD *)this + 10); j != v14; ++j )
    {
      if ( *((CSceneNode **)*j + 17) == this )
        CSceneNode::HydrateSpectreResources(*j, a2);
    }
  }
  return 0;
}
