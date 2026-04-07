/*
 * XREFs of ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D88F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x18001C2F4 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180042808 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800434E0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180051BE8 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18005214C (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ @ 0x18005218C (-_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180053D00 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180054100 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x18008667C (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?SetOverrideMorphedBeginAlpha@CAnimatedTransitionVisual@@QEAAX_N@Z @ 0x1800A4E90 (-SetOverrideMorphedBeginAlpha@CAnimatedTransitionVisual@@QEAAX_N@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800D55A8 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800D5794 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSlideOut::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v7; // ebx
  struct CAnimationComponent *v8; // rsi
  int v9; // r15d
  CStoryboard *v10; // rcx
  CWindowPropertyTracker *v11; // rax
  int v12; // eax
  __int64 v13; // rax
  HWND v14; // rdx
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *v16; // r15
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  CBaseObject *v25; // r14
  int v26; // eax
  CWindowPropertyTracker *WPT; // rax
  int v28; // eax
  int v29; // eax
  struct CAnimationComponent *v31; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT v32; // [rsp+38h] [rbp-18h] BYREF
  CBaseObject *v33; // [rsp+98h] [rbp+48h] BYREF

  v33 = 0LL;
  v31 = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_58;
  v32 = 0LL;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v32);
  v9 = *(_DWORD *)(a2 + 744);
  if ( (v9 & 0xFFF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 744) & 0xFFF) == 8 )
    {
      WPT = CStoryboard::_GetWPT((CStoryboard *)((*(_DWORD *)(a2 + 744) & 0xFFFu) - 8));
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(WPT, *(HWND *)(a2 + 40), 1) )
        goto LABEL_58;
      *(_DWORD *)(a2 + 744) |= 0x200000u;
      v28 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v32, 0, &v33);
      v7 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v28,
          0x39Fu,
          0LL);
      else
        *(_BYTE *)(*((_QWORD *)v33 + 5) + 928LL) = 1;
      goto LABEL_51;
    }
    if ( (*(_DWORD *)(a2 + 744) & 0xFFF) == 0xB )
    {
      *(_DWORD *)(a2 + 744) = v9 | 0x200000;
      v26 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
      v7 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v26,
          0x3AAu,
          0LL);
      else
        *(_DWORD *)(a2 + 744) = v9;
      goto LABEL_58;
    }
    v10 = (CStoryboard *)((*(_DWORD *)(a2 + 744) & 0xFFFu) - 24);
    if ( (*(_DWORD *)(a2 + 744) & 0xFFF) != 0x18 )
    {
      v10 = (CStoryboard *)((*(_DWORD *)(a2 + 744) & 0xFFFu) - 42);
      if ( (*(_DWORD *)(a2 + 744) & 0xFFF) != 0x2A )
      {
        if ( (*(_DWORD *)(a2 + 744) & 0xFFF) == 0x45 )
        {
          v21 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v32, 0, &v33);
          v7 = v21;
          if ( v21 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v21,
              0x3B8u,
              0LL);
          goto LABEL_51;
        }
        v10 = (CStoryboard *)((*(_DWORD *)(a2 + 744) & 0xFFFu) - 70);
        if ( (*(_DWORD *)(a2 + 744) & 0xFFF) == 0x46 )
        {
          if ( (v9 & 0x1800000) == 0 )
            goto LABEL_58;
          v20 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v33);
          v7 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v20,
              0x3B3u,
              0LL);
          goto LABEL_51;
        }
        if ( (*(_DWORD *)(a2 + 744) & 0xFFF) != 0x57 )
        {
LABEL_53:
          if ( v8 )
            CBaseObject::Release(v8);
          goto LABEL_58;
        }
      }
    }
    v11 = CStoryboard::_GetWPT(v10);
    if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(v11, *(HWND *)(a2 + 40), 1)
      || ((v12 = *(_DWORD *)(a2 + 744) & 0xFFF, v12 == 42) || v12 == 87)
      && !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
    {
      v13 = *((_QWORD *)a1 + 17);
      if ( !v13 )
        goto LABEL_34;
      v14 = *(HWND *)(v13 + 16);
      if ( v14 == *(HWND *)(a2 + 40) )
        goto LABEL_58;
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           v14);
      v16 = WindowDataByHwnd;
      if ( WindowDataByHwnd )
      {
        *((_DWORD *)WindowDataByHwnd + 186) = *(_DWORD *)(a2 + 744) & 0xEBFFF000 | 0x1400002A;
        if ( *(float *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 40LL) + 696LL) == 1.0 )
        {
          v17 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, *(unsigned int *)(a2 + 744));
          v18 = CStoryboard::_CreateAndAddNullComponentWithWindow(a1, (struct CWindowData *)a2, v17, &v33);
          v7 = v18;
          if ( v18 >= 0 )
          {
            v19 = CSlide::_SlideWindowHorizontally(a1, v16, &v32, 0, 0LL, (struct tagPOINT ***)&v31);
            v7 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1LL,
                v19,
                0x36Du,
                0LL);
LABEL_21:
              v8 = v31;
              goto LABEL_51;
            }
            v8 = v31;
            goto LABEL_37;
          }
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v18,
            0x36Cu,
            0LL);
        }
        else
        {
          v22 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v32, 0, 0LL, (struct tagPOINT ***)&v33);
          v7 = v22;
          if ( v22 >= 0 )
          {
            v23 = CSlide::_SlideWindowHorizontally(a1, v16, &v32, 0, 0LL, (struct tagPOINT ***)&v31);
            v7 = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1LL,
                v23,
                0x376u,
                0LL);
              goto LABEL_21;
            }
            v8 = v31;
            *((_DWORD *)v31 + 14) = *((_DWORD *)v33 + 14) + 1;
LABEL_37:
            if ( v33 && *((_DWORD *)v33 + 17) != 2 )
              *((_DWORD *)v33 + 17) = 3;
            if ( v8 && *((_DWORD *)v8 + 17) != 2 )
              *((_DWORD *)v8 + 17) = 3;
            goto LABEL_51;
          }
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v22,
            0x375u,
            0LL);
        }
      }
      else
      {
LABEL_34:
        v24 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v32, 0, 0LL, (struct tagPOINT ***)&v33);
        v7 = v24;
        if ( v24 >= 0 )
        {
          v25 = v33;
          CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v33 + 5), 1.0);
          CAnimatedTransitionVisual::SetOverrideMorphedBeginAlpha(*((CAnimatedTransitionVisual **)v25 + 5));
          if ( (*(_DWORD *)(a2 + 744) & 0xFFF) == 0x18 )
            *(_BYTE *)(*((_QWORD *)v25 + 5) + 928LL) = 1;
          goto LABEL_37;
        }
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v24,
          0x380u,
          0LL);
      }
LABEL_51:
      if ( v33 )
        CBaseObject::Release(v33);
      goto LABEL_53;
    }
  }
  else if ( v9 < 0 )
  {
    CTransitionVisualController::RemoveTLWClone(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
      *(const struct CTopLevelWindow **)(a2 + 440),
      1,
      1);
    v29 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v7 = v29;
    if ( v29 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v29, 0x3C1u, 0LL);
  }
LABEL_58:
  *a4 = v7;
  return 1;
}
