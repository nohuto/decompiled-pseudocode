/*
 * XREFs of ?OnSceneReady@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1802AB2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1802A58A0 (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneWorld::OnSceneReady(CSceneWorld *this, struct ISpectreRenderer *a2)
{
  __int64 (__fastcall *v4)(struct ISpectreRenderer *, char *); // rdi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax

  v4 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, char *))(*(_QWORD *)a2 + 48LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  v5 = v4(a2, (char *)this + 16);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x42u, 0LL);
  }
  else
  {
    v7 = CSceneNode::HydrateSpectreResources(*((CSceneNode **)this + 3), (CSceneWorld *)((char *)this - 72));
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x43u, 0LL);
  }
  return v6;
}
