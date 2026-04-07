/*
 * XREFs of ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180040A2C
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180004E74 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180042A38 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180043588 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180044548 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180086768 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18002576C (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18003DF7C (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800436E8 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureStagingVisualRoot(CTransitionVisualController *this)
{
  struct CVisual *v1; // rbx
  int inserted; // edi
  int v5; // eax
  struct tagPOINT *v6; // rcx
  unsigned int v7; // eax
  CContainerVisual *v8; // rcx
  struct tagPOINT v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  inserted = 0;
  v9 = 0LL;
  if ( *((_QWORD *)this + 18) )
    return (unsigned int)inserted;
  inserted = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  if ( inserted < 0 )
  {
    v7 = 661;
    goto LABEL_15;
  }
  v5 = CContainerVisual::Create((struct CContainerVisual **)&v9);
  v1 = (struct CVisual *)v9;
  inserted = v5;
  if ( v5 < 0 )
  {
    v7 = 662;
    goto LABEL_15;
  }
  inserted = CContainerVisual::InsertChildAfter(*((CContainerVisual **)this + 1), *(struct CVisual **)&v9, 0LL);
  if ( inserted < 0 )
  {
    v7 = 665;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      inserted,
      v7,
      0LL);
    if ( !v1 )
      return (unsigned int)inserted;
    v8 = (CContainerVisual *)*((_QWORD *)this + 1);
    if ( *((CContainerVisual **)v1 + 3) == v8 )
      CContainerVisual::RemoveChild(v8, v1);
    goto LABEL_9;
  }
  *((_QWORD *)this + 18) = v1;
  if ( v1 )
    CMILRefCountBase::AddRef(v1);
  v6 = (struct tagPOINT *)*((_QWORD *)this + 18);
  v9.x = -32000;
  v9.y = -32000;
  CVisual::SetOffset(v6, &v9);
  inserted = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 48LL))(*((_QWORD *)this + 18));
  if ( inserted < 0 )
  {
    v7 = 677;
    goto LABEL_15;
  }
LABEL_9:
  if ( v1 )
    CBaseObject::Release(v1);
  return (unsigned int)inserted;
}
