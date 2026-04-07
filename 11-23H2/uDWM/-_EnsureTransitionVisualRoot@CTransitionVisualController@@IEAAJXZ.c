/*
 * XREFs of ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180015A38
 * Callers:
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180014CF4 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180014E94 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800153C0 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800154D4 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180015CF0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800EB3E8 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 * Callees:
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180015BDC (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800177D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002D59C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18004F93C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180053CA0 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureTransitionVisualRoot(CTransitionVisualController *this)
{
  volatile signed __int32 *v1; // rsi
  volatile signed __int32 *v2; // r14
  int v3; // edi
  bool v4; // zf
  struct CVisual **v6; // rbx
  int v8; // eax
  int v9; // eax
  struct CVisual *OverlayRootVisualForDesktop; // rax
  unsigned __int64 v11; // rdx
  struct CVisual *v12; // rdi
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // eax
  int v15; // eax
  int v16; // eax
  struct CVisual *v17; // rax
  int v18; // eax
  struct CVisual *v19; // rax
  struct CVisual *v20; // rax
  CBaseObject *v21; // rcx
  bool v22; // [rsp+20h] [rbp-10h]
  struct CVisual *v23; // [rsp+60h] [rbp+30h] BYREF
  struct CVisual *v24; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp+40h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0;
  v23 = 0LL;
  v4 = *((_QWORD *)this + 12) == -1LL;
  v24 = 0LL;
  if ( !v4 )
    goto LABEL_2;
  if ( (unsigned int)GetDesktopID(1LL, &v25) )
  {
    v8 = CTransitionVisualController::_SetDesktopId(this, v25);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v8,
        0x260u,
        0LL);
      v6 = (struct CVisual **)((char *)this + 8);
      goto LABEL_29;
    }
LABEL_2:
    v6 = (struct CVisual **)((char *)this + 8);
    if ( !*((_QWORD *)this + 1) )
    {
      v9 = CVisual::Create(&v23);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v9,
          0x265u,
          0LL);
        v1 = (volatile signed __int32 *)v23;
        goto LABEL_29;
      }
      OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                      *((_QWORD *)this + 12),
                                      0);
      v11 = *((_QWORD *)this + 12);
      v12 = OverlayRootVisualForDesktop;
      if ( OverlayRootVisualForDesktop )
      {
        RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                             v11);
        v1 = (volatile signed __int32 *)v23;
        inserted = VisualCollection::InsertRelative(
                     (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                     v23,
                     v12,
                     0,
                     v22);
        v3 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            inserted,
            0x269u,
            0LL);
          goto LABEL_29;
        }
      }
      else
      {
        v17 = CWindowList::GetRenderTargetRootVisualForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                v11);
        v1 = (volatile signed __int32 *)v23;
        v18 = VisualCollection::InsertRelative((struct CVisual *)((char *)v17 + 32), v23, 0LL, 0, v22);
        v3 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v18,
            0x26Du,
            0LL);
          goto LABEL_29;
        }
      }
      *v6 = (struct CVisual *)v1;
      if ( v1 )
      {
        _InterlockedIncrement(v1 + 2);
        v1 = (volatile signed __int32 *)v23;
        v2 = (volatile signed __int32 *)v24;
      }
    }
    if ( *((_QWORD *)this + 2) )
    {
LABEL_4:
      if ( v3 >= 0 )
        goto LABEL_5;
      goto LABEL_29;
    }
    v15 = CVisual::Create(&v24);
    v3 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v15,
        0x274u,
        0LL);
      v2 = (volatile signed __int32 *)v24;
    }
    else
    {
      v2 = (volatile signed __int32 *)v24;
      v16 = VisualCollection::InsertRelative((struct CVisual *)((char *)*v6 + 32), v24, 0LL, 0, v22);
      v3 = v16;
      if ( v16 >= 0 )
      {
        *((_QWORD *)this + 2) = v2;
        if ( v2 )
        {
          _InterlockedIncrement(v2 + 2);
          v1 = (volatile signed __int32 *)v23;
          v2 = (volatile signed __int32 *)v24;
          goto LABEL_5;
        }
        goto LABEL_4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v16,
        0x275u,
        0LL);
    }
LABEL_29:
    if ( v1 )
    {
      VisualCollection::RemoveAll((VisualCollection *)(v1 + 8));
      v19 = CWindowList::GetRenderTargetRootVisualForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
              *((_QWORD *)this + 12));
      VisualCollection::Remove((struct CVisual *)((char *)v19 + 32), (struct CVisual *)v1);
    }
    if ( v2 )
    {
      VisualCollection::RemoveAll((struct CVisual *)((char *)*v6 + 32));
      v20 = CWindowList::GetRenderTargetRootVisualForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
              *((_QWORD *)this + 12));
      VisualCollection::Remove((struct CVisual *)((char *)v20 + 32), *v6);
    }
    goto LABEL_33;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    -2147467259,
    0x25Du,
    0LL);
  v6 = (struct CVisual **)((char *)this + 8);
LABEL_33:
  if ( *v6 )
  {
    CBaseObject::Release(*v6);
    *v6 = 0LL;
  }
  v21 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v21 )
  {
    CBaseObject::Release(v21);
    *((_QWORD *)this + 2) = 0LL;
  }
LABEL_5:
  if ( v1 )
    CBaseObject::Release((CBaseObject *)v1);
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  return (unsigned int)v3;
}
