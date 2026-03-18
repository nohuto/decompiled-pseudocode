/*
 * XREFs of ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x1800FB438
 * Callers:
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1800F9EF4 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801AEC44 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180238940 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D70 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1800FBB64 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F774 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1801AFFBC (--0CInteractionProcessor@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationContext::Initialize(CManipulationContext *this, bool a2, int a3)
{
  char v6; // al
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  CInteractionRoot *v10; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 26) = 0;
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease((char *)this + 112);
  *((_DWORD *)this + 30) = 0;
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease((char *)this + 128);
  v6 = *((_BYTE *)this + 28) & 0xFE;
  *((_DWORD *)this + 8) = a3;
  *((_BYTE *)this + 28) = a2 | v6;
  v7 = DefaultHeap::AllocClear(0x568uLL);
  v8 = v7;
  if ( !v7 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v7, 0, 0x568uLL);
  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)v8);
  *v8 = &CInteractionRoot::`vftable';
  v8[2] = 0LL;
  CInteractionProcessor::CInteractionProcessor((CInteractionProcessor *)(v8 + 3));
  if ( *((_QWORD **)this + 17) != v8 )
  {
    (*(void (__fastcall **)(_QWORD *))*v8)(v8);
    v9 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v10 = (CInteractionRoot *)*((_QWORD *)this + 17);
  if ( v10 )
    return CInteractionRoot::Initialize(v10, this, a2);
  else
    return 2147942414LL;
}
