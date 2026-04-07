/*
 * XREFs of ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800813C4
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180042C1C (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18004721C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180075058 (--0CStoryboard@@IEAA@_N@Z.c)
 *     ??0CFadeIn@@QEAA@XZ @ 0x18008A898 (--0CFadeIn@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x18008B2E4 (--0CFadeOut@@QEAA@XZ.c)
 *     ??0CLauncherAnimationBase@@IEAA@XZ @ 0x18008B9B4 (--0CLauncherAnimationBase@@IEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x180099A7C (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x18009A624 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ??0CFade@@IEAA@XZ @ 0x18009A658 (--0CFade@@IEAA@XZ.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x1800D1400 (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x1800D1440 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CInputView_SizeOrModeChangeBase@@QEAA@XZ @ 0x1800D14BC (--0CInputView_SizeOrModeChangeBase@@QEAA@XZ.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x1800D14F4 (--0CLaunchSwitchBase@@QEAA@XZ.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x1800D153C (--0CPanelAnimation@@QEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x1800D1570 (--0CSlide@@IEAA@XZ.c)
 *     ??0CSlideIn@@QEAA@XZ @ 0x1800D15AC (--0CSlideIn@@QEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x1800D15E0 (--0CSlideOut@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStoryboardFactory::Create(int a1, struct CStoryboard *a2, struct CStoryboard **a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  CFlyoutPopup *v13; // rax
  CStoryboard *v14; // rbx
  CFlyoutPopup *v15; // rax
  CSlideOut *v16; // rax
  CSlideOut *v17; // rax
  CFadeOut *v18; // rax
  CStoryboard *v19; // rax
  CSlideIn *v20; // rax
  CSlideIn *v21; // rbx
  CFadeOut *v22; // rax
  CFadeIn *v23; // rax
  CSlide *v24; // rax
  CCrossFade *v25; // rax
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  CAppArrangementBase *v34; // rax
  CAppArrangementBase *v35; // rax
  CStoryboard *v36; // rax
  CStoryboard *v37; // rax
  CLaunchSwitchBase *v38; // rax
  unsigned int v39; // ebx
  CLaunchSwitchBase *v40; // rax
  CLauncherAnimationBase *v41; // rax
  CLauncherAnimationBase *v42; // rax
  CStoryboard *v43; // rax
  CStoryboard *v44; // rax
  void **v45; // r10
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  CSlideOut *v54; // rax
  CStoryboard *v55; // rax
  CStoryboard *v56; // rax
  CStoryboard *v57; // rax
  CStoryboard *v58; // rax
  CStoryboard *v59; // rax
  CPanelAnimation *v60; // rax
  CPanelAnimation *v61; // rax
  CStoryboard *v62; // rax
  CStoryboard *v63; // rax
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  int v68; // ecx
  int v69; // ecx
  int v70; // ecx
  int v71; // ecx
  CSlideOut *v72; // rax
  CStoryboard *v73; // rax
  CInputView_SizeOrModeChangeBase *v74; // rax
  CInputView_SizeOrModeChangeBase *v75; // rax
  CInputView_SizeOrModeChangeBase *v76; // rax
  CStoryboard *v77; // rax
  CStoryboard *v78; // rax
  CStoryboard *v79; // rax
  CStoryboard *v80; // rax
  int v81; // eax

  *a3 = 0LL;
  if ( a1 > 69 )
  {
    if ( a1 <= 90 )
    {
      if ( a1 == 90 )
      {
        v63 = (CStoryboard *)operator new[](0xC0uLL, a2);
        v14 = v63;
        if ( v63 )
        {
          CStoryboard::CStoryboard(v63);
          *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
          *(_QWORD *)v14 = &CVirtualDesktopSwitch::`vftable'{for `CBaseObject'};
          CBitmapSourceArray::CBitmapSourceArray((CStoryboard *)((char *)v14 + 128));
          DynArrayImpl<0>::DynArrayImpl<0>((__int64)v14 + 160, 0LL, 0);
          goto LABEL_131;
        }
        goto LABEL_130;
      }
      v46 = a1 - 70;
      if ( !v46 )
      {
        v62 = (CStoryboard *)operator new[](0x80uLL, a2);
        v14 = v62;
        if ( v62 )
        {
          memset_0(v62, 0, 0x80uLL);
          CFade::CFade(v14);
          *(_QWORD *)v14 = &CChangePanel::`vftable'{for `CBaseObject'};
          goto LABEL_16;
        }
        goto LABEL_130;
      }
      v47 = v46 - 1;
      if ( v47 )
      {
        v48 = v47 - 1;
        if ( v48 )
        {
          v49 = v48 - 3;
          if ( v49 )
          {
            v50 = v49 - 2;
            if ( v50 )
            {
              v51 = v50 - 1;
              if ( v51 )
              {
                v52 = v51 - 3;
                if ( v52 )
                {
                  v53 = v52 - 1;
                  if ( v53 )
                  {
                    if ( v53 != 1 )
                      goto LABEL_58;
                    v54 = (CSlideOut *)operator new[](0x90uLL, a2);
                    v14 = v54;
                    if ( v54 )
                    {
                      CSlideOut::CSlideOut(v54);
                      *(_QWORD *)v14 = &CSlideOutCharm::`vftable'{for `CBaseObject'};
                      goto LABEL_21;
                    }
                  }
                  else
                  {
                    v55 = (CStoryboard *)operator new[](0x88uLL, a2);
                    v14 = v55;
                    if ( v55 )
                    {
                      memset_0(v55, 0, 0x88uLL);
                      CSlideIn::CSlideIn(v14);
                      *(_QWORD *)v14 = &CSlideInCharm::`vftable'{for `CBaseObject'};
                      goto LABEL_21;
                    }
                  }
                }
                else
                {
                  v56 = (CStoryboard *)operator new[](0x80uLL, a2);
                  v14 = v56;
                  if ( v56 )
                  {
                    memset_0(v56, 0, 0x80uLL);
                    CFadeOut::CFadeOut(v14);
                    *(_QWORD *)v14 = &CScreenshotFadeOut::`vftable'{for `CBaseObject'};
                    goto LABEL_16;
                  }
                }
              }
              else
              {
                v57 = (CStoryboard *)operator new[](0x88uLL, a2);
                v14 = v57;
                if ( v57 )
                {
                  memset_0(v57, 0, 0x88uLL);
                  CSlideIn::CSlideIn(v14);
                  *(_QWORD *)v14 = &CDialogSwitch::`vftable'{for `CBaseObject'};
                  goto LABEL_21;
                }
              }
            }
            else
            {
              v58 = (CStoryboard *)operator new[](0x80uLL, a2);
              v14 = v58;
              if ( v58 )
              {
                CStoryboard::CStoryboard(v58);
                *(_QWORD *)v14 = &CInplaceResize::`vftable'{for `CBaseObject'};
                goto LABEL_16;
              }
            }
          }
          else
          {
            v59 = (CStoryboard *)operator new[](0x80uLL, a2);
            v14 = v59;
            if ( v59 )
            {
              memset_0(v59, 0, 0x80uLL);
              CCrossFade::CCrossFade(v14);
              *(_QWORD *)v14 = &CSSCrossFade::`vftable'{for `CBaseObject'};
              goto LABEL_16;
            }
          }
          goto LABEL_130;
        }
        v60 = (CPanelAnimation *)operator new[](0xA0uLL, a2);
        v14 = v60;
        if ( !v60 )
          goto LABEL_130;
        CPanelAnimation::CPanelAnimation(v60);
        *(_QWORD *)v14 = &CShrinkPanel::`vftable'{for `CBaseObject'};
      }
      else
      {
        v61 = (CPanelAnimation *)operator new[](0xA0uLL, a2);
        v14 = v61;
        if ( !v61 )
          goto LABEL_130;
        CPanelAnimation::CPanelAnimation(v61);
        *(_QWORD *)v14 = &CGrowPanel::`vftable'{for `CBaseObject'};
      }
      *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
      *((_BYTE *)v14 + 136) = 0;
      *(_QWORD *)((char *)v14 + 140) = 0LL;
      *(_QWORD *)((char *)v14 + 148) = 0LL;
      goto LABEL_131;
    }
    v64 = a1 - 91;
    if ( v64 )
    {
      v65 = v64 - 1;
      if ( v65 )
      {
        v66 = v65 - 1;
        if ( v66 )
        {
          v67 = v66 - 10;
          if ( v67 )
          {
            v68 = v67 - 2;
            if ( v68 )
            {
              v69 = v68 - 1;
              if ( v69 )
              {
                v70 = v69 - 1;
                if ( v70 )
                {
                  v71 = v70 - 3;
                  if ( v71 )
                  {
                    if ( v71 != 1 )
                      goto LABEL_58;
                    v72 = (CSlideOut *)operator new[](0x90uLL, a2);
                    v14 = v72;
                    if ( v72 )
                    {
                      CSlideOut::CSlideOut(v72);
                      *(_QWORD *)v14 = &CSlideOutAppBar::`vftable'{for `CBaseObject'};
                      goto LABEL_21;
                    }
                  }
                  else
                  {
                    v73 = (CStoryboard *)operator new[](0x88uLL, a2);
                    v14 = v73;
                    if ( v73 )
                    {
                      memset_0(v73, 0, 0x88uLL);
                      CSlideIn::CSlideIn(v14);
                      *(_QWORD *)v14 = &CSlideInAppBar::`vftable'{for `CBaseObject'};
                      goto LABEL_21;
                    }
                  }
                }
                else
                {
                  v74 = (CInputView_SizeOrModeChangeBase *)operator new[](0x80uLL, a2);
                  v14 = v74;
                  if ( v74 )
                  {
                    CInputView_SizeOrModeChangeBase::CInputView_SizeOrModeChangeBase(v74);
                    *(_QWORD *)v14 = &CInputView_SizeChangeOnly::`vftable'{for `CBaseObject'};
                    goto LABEL_16;
                  }
                }
              }
              else
              {
                v75 = (CInputView_SizeOrModeChangeBase *)operator new[](0x80uLL, a2);
                v14 = v75;
                if ( v75 )
                {
                  CInputView_SizeOrModeChangeBase::CInputView_SizeOrModeChangeBase(v75);
                  *(_QWORD *)v14 = &CInputView_FloatingToDocked::`vftable'{for `CBaseObject'};
                  goto LABEL_16;
                }
              }
            }
            else
            {
              v76 = (CInputView_SizeOrModeChangeBase *)operator new[](0x80uLL, a2);
              v14 = v76;
              if ( v76 )
              {
                CInputView_SizeOrModeChangeBase::CInputView_SizeOrModeChangeBase(v76);
                *(_QWORD *)v14 = &CInputView_DockedToFloating::`vftable'{for `CBaseObject'};
                goto LABEL_16;
              }
            }
          }
          else
          {
            v77 = (CStoryboard *)operator new[](0x88uLL, a2);
            v14 = v77;
            if ( v77 )
            {
              memset_0(v77, 0, 0x88uLL);
              CSlideIn::CSlideIn(v14);
              *(_QWORD *)v14 = &CInputView::`vftable'{for `CBaseObject'};
              goto LABEL_21;
            }
          }
        }
        else
        {
          v78 = (CStoryboard *)operator new[](0x80uLL, a2);
          v14 = v78;
          if ( v78 )
          {
            CStoryboard::CStoryboard(v78);
            *(_QWORD *)v14 = &CTabSwitch::`vftable'{for `CBaseObject'};
            goto LABEL_16;
          }
        }
      }
      else
      {
        v79 = (CStoryboard *)operator new[](0x88uLL, a2);
        v14 = v79;
        if ( v79 )
        {
          CStoryboard::CStoryboard(v79);
          *((_BYTE *)v14 + 128) = 1;
          *(_QWORD *)v14 = &CPPIWorkAreaResize::`vftable'{for `CBaseObject'};
          goto LABEL_16;
        }
      }
      goto LABEL_130;
    }
    v80 = (CStoryboard *)operator new[](0x88uLL, a2);
    v14 = v80;
    if ( !v80 )
      goto LABEL_130;
    CStoryboard::CStoryboard(v80);
    v45 = &CTabletModeTransition::`vftable'{for `CBaseObject'};
LABEL_129:
    *(_QWORD *)v14 = v45;
    *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
    *((_BYTE *)v14 + 128) = 0;
    goto LABEL_131;
  }
  if ( a1 == 69 )
  {
    v44 = (CStoryboard *)operator new[](0x88uLL, a2);
    v14 = v44;
    if ( !v44 )
      goto LABEL_130;
    CStoryboard::CStoryboard(v44);
    v45 = &CAppLaunchSwitch::`vftable'{for `CBaseObject'};
    goto LABEL_129;
  }
  if ( a1 > 34 )
  {
    v26 = a1 - 50;
    if ( !v26 )
    {
      v43 = (CStoryboard *)operator new[](0x80uLL, a2);
      v14 = v43;
      if ( v43 )
      {
        CStoryboard::CStoryboard(v43);
        *(_QWORD *)v14 = &CWindowClose::`vftable'{for `CBaseObject'};
        goto LABEL_16;
      }
      goto LABEL_130;
    }
    v27 = v26 - 6;
    if ( !v27 )
    {
      v42 = (CLauncherAnimationBase *)operator new[](0x90uLL, a2);
      v14 = v42;
      if ( v42 )
      {
        CLauncherAnimationBase::CLauncherAnimationBase(v42);
        *(_QWORD *)v14 = &CLauncherLaunch::`vftable'{for `CBaseObject'};
        goto LABEL_16;
      }
      goto LABEL_130;
    }
    v28 = v27 - 1;
    if ( !v28 )
    {
      v41 = (CLauncherAnimationBase *)operator new[](0x98uLL, a2);
      v14 = v41;
      if ( v41 )
      {
        CLauncherAnimationBase::CLauncherAnimationBase(v41);
        *((_BYTE *)v14 + 144) = 0;
        *(_QWORD *)v14 = &CLauncherDismiss::`vftable'{for `CBaseObject'};
        *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
        goto LABEL_131;
      }
      goto LABEL_130;
    }
    v29 = v28 - 1;
    if ( !v29 )
    {
      if ( a2 )
      {
        v40 = (CLaunchSwitchBase *)operator new[](0xB0uLL, a2);
        v14 = v40;
        if ( v40 )
        {
          CLaunchSwitchBase::CLaunchSwitchBase(v40);
          *((_BYTE *)v14 + 168) = 0;
          *(_QWORD *)v14 = &CAppLaunch::`vftable'{for `CBaseObject'};
          *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
          goto LABEL_131;
        }
        goto LABEL_130;
      }
      goto LABEL_58;
    }
    v30 = v29 - 1;
    if ( !v30 )
    {
      if ( a2 )
      {
        v38 = (CLaunchSwitchBase *)operator new[](0xB0uLL, a2);
        v14 = v38;
        if ( v38 )
        {
          CLaunchSwitchBase::CLaunchSwitchBase(v38);
          *((_BYTE *)v14 + 168) = 1;
          *(_QWORD *)v14 = &CAppSwitch::`vftable'{for `CBaseObject'};
          *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
          goto LABEL_131;
        }
        goto LABEL_130;
      }
      goto LABEL_58;
    }
    v31 = v30 - 5;
    if ( !v31 )
    {
      v37 = (CStoryboard *)operator new[](0x80uLL, a2);
      v14 = v37;
      if ( v37 )
      {
        CStoryboard::CStoryboard(v37);
        *(_QWORD *)v14 = &CNoAnimation::`vftable'{for `CBaseObject'};
        goto LABEL_16;
      }
      goto LABEL_130;
    }
    v32 = v31 - 2;
    if ( !v32 )
    {
      v36 = (CStoryboard *)operator new[](0x80uLL, a2);
      v14 = v36;
      if ( v36 )
      {
        memset_0(v36, 0, 0x80uLL);
        CFadeIn::CFadeIn(v14);
        *(_QWORD *)v14 = &CTDBN::`vftable'{for `CBaseObject'};
        goto LABEL_16;
      }
      goto LABEL_130;
    }
    v33 = v32 - 1;
    if ( v33 )
    {
      if ( v33 != 1 )
        goto LABEL_58;
      v34 = (CAppArrangementBase *)operator new[](0xC0uLL, a2);
      v14 = v34;
      if ( !v34 )
        goto LABEL_130;
      CAppArrangementBase::CAppArrangementBase(v34, 1);
      *(_QWORD *)v14 = &CAppArrangementDelayed::`vftable'{for `CBaseObject'};
    }
    else
    {
      v35 = (CAppArrangementBase *)operator new[](0xC0uLL, a2);
      v14 = v35;
      if ( !v35 )
        goto LABEL_130;
      CAppArrangementBase::CAppArrangementBase(v35, 0);
      *(_QWORD *)v14 = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
    }
    *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
    *((_QWORD *)v14 + 23) = 0LL;
    goto LABEL_131;
  }
  if ( a1 == 34 )
  {
    v25 = (CCrossFade *)operator new[](0x80uLL, a2);
    if ( !v25 )
      goto LABEL_130;
    v18 = CCrossFade::CCrossFade(v25);
    goto LABEL_24;
  }
  v5 = a1 - 3;
  if ( !v5 )
  {
    v24 = (CSlide *)operator new[](0x88uLL, a2);
    v14 = v24;
    if ( v24 )
    {
      CSlide::CSlide(v24);
      *(_QWORD *)v14 = &CReposition::`vftable'{for `CBaseObject'};
      goto LABEL_16;
    }
    goto LABEL_130;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v23 = (CFadeIn *)operator new[](0x80uLL, a2);
    if ( !v23 )
      goto LABEL_130;
    v18 = CFadeIn::CFadeIn(v23);
    goto LABEL_24;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v22 = (CFadeOut *)operator new[](0x80uLL, a2);
    if ( !v22 )
      goto LABEL_130;
    v18 = CFadeOut::CFadeOut(v22);
    goto LABEL_24;
  }
  v8 = v7 - 9;
  if ( !v8 )
  {
    v20 = (CSlideIn *)operator new[](0x88uLL, a2);
    v21 = v20;
    if ( !v20 )
      goto LABEL_130;
    memset_0(v20, 0, 0x88uLL);
    v18 = CSlideIn::CSlideIn(v21);
    goto LABEL_24;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
        {
          v15 = (CFlyoutPopup *)operator new[](0x80uLL, a2);
          v14 = v15;
          if ( v15 )
          {
            CFlyoutPopup::CFlyoutPopup(v15);
            *(_QWORD *)v14 = &CShowPopup::`vftable'{for `CBaseObject'};
            goto LABEL_16;
          }
          goto LABEL_130;
        }
        if ( v12 == 1 )
        {
          v13 = (CFlyoutPopup *)operator new[](0x80uLL, a2);
          v14 = v13;
          if ( v13 )
          {
            CFlyoutPopup::CFlyoutPopup(v13);
            *(_QWORD *)v14 = &CHidePopup::`vftable'{for `CBaseObject'};
LABEL_16:
            *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
            goto LABEL_131;
          }
          goto LABEL_130;
        }
LABEL_58:
        v39 = -2147024809;
        goto LABEL_137;
      }
      v16 = (CSlideOut *)operator new[](0x90uLL, a2);
      v14 = v16;
      if ( v16 )
      {
        CSlideOut::CSlideOut(v16);
        *(_QWORD *)v14 = &CSlideOutLong::`vftable'{for `CBaseObject'};
LABEL_21:
        *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
        *((_BYTE *)v14 + 68) = 1;
        goto LABEL_131;
      }
      goto LABEL_130;
    }
    v17 = (CSlideOut *)operator new[](0x90uLL, a2);
    if ( !v17 )
      goto LABEL_130;
    v18 = CSlideOut::CSlideOut(v17);
LABEL_24:
    v14 = v18;
    goto LABEL_131;
  }
  v19 = (CStoryboard *)operator new[](0x88uLL, a2);
  v14 = v19;
  if ( v19 )
  {
    memset_0(v19, 0, 0x88uLL);
    CSlideIn::CSlideIn(v14);
    *(_QWORD *)v14 = &CSlideInLong::`vftable'{for `CBaseObject'};
    goto LABEL_21;
  }
LABEL_130:
  v14 = 0LL;
LABEL_131:
  *a3 = v14;
  if ( !v14 )
  {
    v39 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x194Du, 0LL);
    goto LABEL_137;
  }
  v81 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)v14 + 8LL))(v14);
  v39 = v81;
  if ( v81 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v81, 0x194Fu, 0LL);
LABEL_137:
    if ( *a3 )
    {
      CStoryboard::Release(*a3);
      *a3 = 0LL;
    }
    return v39;
  }
  if ( a2 )
    CStoryboard::SetParentStoryboard(*a3, a2);
  return v39;
}
