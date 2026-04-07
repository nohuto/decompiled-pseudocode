/*
 * XREFs of ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800436E8
 * Callers:
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180040A2C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180042A38 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180043588 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180044040 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180086768 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x1800205F4 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180021904 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180032DDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18003DF7C (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180042210 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180047140 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureTransitionVisualRoot(CTransitionVisualController *this)
{
  bool v2; // zf
  unsigned int v3; // ebx
  CMILRefCountBase *v4; // rsi
  CMILRefCountBase *v5; // r14
  int v7; // eax
  int v8; // eax
  CContainerVisual *v9; // rax
  CContainerVisual *v10; // rax
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  int v13; // eax
  struct CContainerVisual *OverlayRootVisualForDesktop; // rax
  unsigned __int64 v15; // rdx
  CMILRefCountBase ***v16; // rbx
  CContainerVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // eax
  int v19; // eax
  CContainerVisual *v20; // rax
  int v21; // eax
  CMILRefCountBase *v22; // [rsp+60h] [rbp+30h] BYREF
  CMILRefCountBase *v23; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp+40h] BYREF

  v2 = *((_QWORD *)this + 12) == -1LL;
  v3 = 0;
  v4 = 0LL;
  v22 = 0LL;
  v5 = 0LL;
  v23 = 0LL;
  if ( !v2 )
    goto LABEL_2;
  v24 = 0LL;
  if ( (unsigned int)GetDesktopID(1LL, &v24) )
  {
    v19 = CTransitionVisualController::_SetDesktopId(this, v24);
    v3 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v19,
        0x260u,
        0LL);
      goto LABEL_14;
    }
LABEL_2:
    if ( *((_QWORD *)this + 1) )
      goto LABEL_3;
    v13 = CContainerVisual::Create(&v22);
    v3 = v13;
    if ( v13 >= 0 )
    {
      OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                      *((_QWORD *)this + 12),
                                      0);
      v15 = *((_QWORD *)this + 12);
      v16 = (CMILRefCountBase ***)OverlayRootVisualForDesktop;
      if ( OverlayRootVisualForDesktop )
      {
        RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                             v15);
        v4 = v22;
        inserted = CContainerVisual::InsertChildBefore(RenderTargetRootVisualForDesktop, (CMILRefCountBase ***)v22, v16);
        v3 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            inserted,
            0x269u,
            0LL);
          goto LABEL_14;
        }
      }
      else
      {
        v20 = CWindowList::GetRenderTargetRootVisualForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                v15);
        v4 = v22;
        v21 = CContainerVisual::AddChild(v20, v22);
        v3 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v21,
            0x26Du,
            0LL);
          goto LABEL_14;
        }
      }
      *((_QWORD *)this + 1) = v4;
      if ( v4 )
        CMILRefCountBase::AddRef(v4);
LABEL_3:
      if ( *((_QWORD *)this + 2) )
        goto LABEL_4;
      v7 = CContainerVisual::Create(&v23);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v7,
          0x274u,
          0LL);
        v5 = v23;
      }
      else
      {
        v5 = v23;
        v8 = CContainerVisual::AddChild(*((CContainerVisual **)this + 1), v23);
        v3 = v8;
        if ( v8 >= 0 )
        {
          *((_QWORD *)this + 2) = v5;
          if ( v5 )
            CMILRefCountBase::AddRef(v5);
          goto LABEL_4;
        }
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v8,
          0x275u,
          0LL);
      }
      goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v13,
      0x265u,
      0LL);
    v4 = v22;
LABEL_14:
    if ( v4 )
    {
      CContainerVisual::RemoveAllChildren(v4);
      v9 = CWindowList::GetRenderTargetRootVisualForDesktop(
             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
             *((_QWORD *)this + 12));
      CContainerVisual::RemoveChild(v9, v4);
    }
    if ( v5 )
    {
      CContainerVisual::RemoveAllChildren(*((CContainerVisual **)this + 1));
      v10 = CWindowList::GetRenderTargetRootVisualForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
              *((_QWORD *)this + 12));
      CContainerVisual::RemoveChild(v10, *((struct CVisual **)this + 1));
    }
    goto LABEL_18;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    -2147467259,
    0x25Du,
    0LL);
LABEL_18:
  v11 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)this + 1) = 0LL;
  }
  v12 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v12 )
  {
    CBaseObject::Release(v12);
    *((_QWORD *)this + 2) = 0LL;
  }
LABEL_4:
  if ( v4 )
    CBaseObject::Release(v4);
  if ( v5 )
    CBaseObject::Release(v5);
  return v3;
}
