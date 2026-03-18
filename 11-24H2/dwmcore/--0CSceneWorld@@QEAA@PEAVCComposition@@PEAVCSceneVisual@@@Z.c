/*
 * XREFs of ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x1802AAD88
 * Callers:
 *     ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x18028E460 (-OnRootChanged@CSceneVisual@@QEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ??2CSceneNode@@SAPEAX_K@Z @ 0x18020DA04 (--2CSceneNode@@SAPEAX_K@Z.c)
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x18021CCA0 (--0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18025F8AC (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CSceneWorld *__fastcall CSceneWorld::CSceneWorld(CSceneWorld *this, struct CComposition *a2, struct CSceneVisual *a3)
{
  unsigned __int64 v3; // r14
  __int64 *v4; // r15
  _DWORD *v7; // rax
  _DWORD *v8; // rcx
  __int64 v9; // rdi
  CCompositionLight *v10; // rcx
  __int64 v11; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (unsigned __int64)this + 72;
  *((_DWORD *)this + 2) = 0;
  v4 = (__int64 *)((char *)this + 152);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CSceneWorld::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CSceneWorld::`vftable'{for `ISceneNotificationListener'};
  *((_QWORD *)this + 10) = a3;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_BYTE *)this + 160) = 0;
  v7 = CSceneNode::operator new();
  v8 = v7;
  if ( v7 )
  {
    v7[2] = 0;
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 3) = a2;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 6) = 0LL;
    v7[10] = 0;
    *((_QWORD *)v7 + 10) = 0LL;
    *((_QWORD *)v7 + 11) = 0LL;
    *((_QWORD *)v7 + 12) = 0LL;
    *((_QWORD *)v7 + 13) = 0LL;
    *((_QWORD *)v7 + 14) = 0LL;
    *((_QWORD *)v7 + 15) = 0LL;
    *(_QWORD *)v7 = &CSceneNode::`vftable';
    *((_QWORD *)v7 + 18) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = v8;
  if ( v8 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = (CCompositionLight *)DefaultHeap::AllocClear(0x170uLL);
  if ( !v10 )
    ModuleFailFastForHRESULT(0x8007000E, retaddr);
  CCompositionLight::CCompositionLight(v10, a2, 1);
  *(_DWORD *)(v11 + 256) = 1065353216;
  *(_QWORD *)(v11 + 80) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)v11 = &CCompositionEnvironmentLight::`vftable'{for `CPropertyChangeResource'};
  *(_OWORD *)(v11 + 260) = xmmword_1803BCB30;
  *(_OWORD *)(v11 + 276) = xmmword_1803BCB40;
  *(_OWORD *)(v11 + 292) = xmmword_1803BCB50;
  *(_OWORD *)(v11 + 308) = xmmword_1803BCB60;
  *(_OWORD *)(v11 + 324) = xmmword_1803BCB70;
  *(_OWORD *)(v11 + 340) = xmmword_1803BCB80;
  *(_QWORD *)(v11 + 356) = 0xBF3B531EBD893965uLL;
  *(_DWORD *)(v11 + 364) = 1059333266;
  wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=(v4, v11);
  CSceneResourceManager::RegisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 3) + 680LL),
    (struct ISceneNotificationListener *)(v3 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  return this;
}
