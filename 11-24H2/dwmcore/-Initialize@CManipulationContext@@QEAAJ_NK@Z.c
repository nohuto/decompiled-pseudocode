/*
 * XREFs of ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x18019472C
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190ACC (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x180193408 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x18022CC90 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180024674 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x18008C1D0 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18012BE94 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x180191C90 (--0CInteractionProcessor@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationContext::Initialize(CManipulationContext *this, __int64 a2, __int64 a3)
{
  int v4; // ebx
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  char v8; // al
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  CInteractionRoot *v12; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 26) = 0;
  v4 = a3;
  v5 = a2;
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease((CCachedVisualImage **)this + 14, a2, a3);
  *((_DWORD *)this + 30) = 0;
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease((CCachedVisualImage **)this + 16, v6, v7);
  v8 = *((_BYTE *)this + 28) & 0xFE;
  *((_DWORD *)this + 8) = v4;
  *((_BYTE *)this + 28) = v5 | v8;
  v9 = DefaultHeap::AllocClear(0x568uLL);
  v10 = v9;
  if ( !v9 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v9, 0, 0x568uLL);
  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)v10);
  *v10 = &CInteractionRoot::`vftable';
  v10[2] = 0LL;
  CInteractionProcessor::CInteractionProcessor((CInteractionProcessor *)(v10 + 3));
  if ( *((_QWORD **)this + 17) != v10 )
  {
    (*(void (__fastcall **)(_QWORD *))*v10)(v10);
    v11 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v10;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
  v12 = (CInteractionRoot *)*((_QWORD *)this + 17);
  if ( v12 )
    return CInteractionRoot::Initialize(v12, this, v5);
  else
    return 2147942414LL;
}
