/*
 * XREFs of ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800154D4
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800139EC (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180014CF4 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800153C0 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180015CF0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18001671C (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800EB3E8 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 * Callees:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180015A38 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18004F93C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureStagingVisualRoot(CTransitionVisualController *this)
{
  struct tagPOINT v1; // rbx
  int inserted; // edi
  int v5; // eax
  CVisual *v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rcx
  bool v9; // [rsp+20h] [rbp-18h]
  struct tagPOINT v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  inserted = 0;
  v10 = 0LL;
  if ( *((_QWORD *)this + 18) )
    return (unsigned int)inserted;
  inserted = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  if ( inserted < 0 )
  {
    v7 = 661;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      inserted,
      v7,
      0LL);
    if ( !*(_QWORD *)&v1 )
      return (unsigned int)inserted;
    v8 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(*(_QWORD *)&v1 + 24LL) == v8 )
      VisualCollection::Remove((VisualCollection *)(v8 + 32), *(struct CVisual **)&v1);
    goto LABEL_9;
  }
  v5 = CVisual::Create((struct CVisual **)&v10);
  v1 = v10;
  inserted = v5;
  if ( v5 < 0 )
  {
    v7 = 662;
    goto LABEL_15;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 1) + 32LL),
               *(struct CVisual **)&v10,
               0LL,
               1,
               v9);
  if ( inserted < 0 )
  {
    v7 = 665;
    goto LABEL_15;
  }
  *((struct tagPOINT *)this + 18) = v1;
  if ( v1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&v1 + 8LL));
    v1 = v10;
  }
  v6 = (CVisual *)*((_QWORD *)this + 18);
  v10.x = -32000;
  v10.y = -32000;
  CVisual::SetOffset(v6, &v10);
  inserted = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 64LL))(*((_QWORD *)this + 18));
  if ( inserted < 0 )
  {
    v7 = 677;
    goto LABEL_15;
  }
LABEL_9:
  if ( v1 )
    CBaseObject::Release(*(CBaseObject **)&v1);
  return (unsigned int)inserted;
}
