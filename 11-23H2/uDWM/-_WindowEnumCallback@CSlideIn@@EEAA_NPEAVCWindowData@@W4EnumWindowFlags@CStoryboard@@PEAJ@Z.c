/*
 * XREFs of ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E2330
 * Callers:
 *     <none>
 * Callees:
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180003FFC (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180008610 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z @ 0x1800A70B4 (-SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x1800D5E20 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800D5E78 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800DAE64 (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DCF8C (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800DE210 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800DE454 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DE6D4 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800EB870 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 */

char __fastcall CSlideIn::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  int v8; // esi
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  struct tagRECT v19; // xmm0
  HWND v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  CBaseObject *v25; // rsi
  double v26; // xmm8_8
  __int64 v27; // rax
  LONG *TaggedWindow; // rax
  LONG bottom; // edi
  int v30; // edx
  double v31; // xmm6_8
  int v32; // ecx
  __m128i v33; // xmm6
  int v34; // ecx
  struct tagSIZE *v35; // r8
  struct tagPOINT *v36; // rdx
  CBaseObject *v38; // [rsp+38h] [rbp-79h] BYREF
  struct tagPOINT v39; // [rsp+40h] [rbp-71h] BYREF
  struct tagSIZE v40; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v41; // [rsp+50h] [rbp-61h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-51h] BYREF
  RECT rcSrc2; // [rsp+70h] [rbp-41h] BYREF
  RECT rcSrc1; // [rsp+80h] [rbp-31h] BYREF
  RECT v45; // [rsp+90h] [rbp-21h] BYREF

  v4 = 0;
  v38 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_69;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v41);
  v8 = *(_DWORD *)(a2 + 680);
  v9 = v8 & 0xFFF;
  if ( v9 <= 0x2B )
  {
    if ( v9 == 43 )
    {
      v13 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, (unsigned int)v8);
      v14 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(a1, (struct CWindowData *)a2, v13, 1, &v38);
      v4 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x2DDu);
      goto LABEL_67;
    }
    if ( (v8 & 0xFFF) == 0 )
    {
      if ( v8 < 0 )
      {
        v12 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
        v4 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x2D7u);
      }
      goto LABEL_69;
    }
    if ( v9 == 8 )
    {
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
              *(HWND *)(a2 + 40),
              0) )
        goto LABEL_69;
      *(_DWORD *)(a2 + 680) |= 0x200000u;
      v11 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v41, 1, &v38);
      v4 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, 0x286u);
        goto LABEL_67;
      }
      goto LABEL_36;
    }
    if ( v9 != 11 )
    {
      if ( v9 != 24 && v9 != 42 )
        goto LABEL_69;
      goto LABEL_25;
    }
    v8 |= 0x200000u;
    *(_DWORD *)(a2 + 680) = v8;
LABEL_11:
    v10 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v38);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0x294u);
      goto LABEL_67;
    }
    *(_DWORD *)(a2 + 680) = v8;
    if ( (v8 & 0xFFF) != 0x3C )
    {
LABEL_67:
      if ( v38 )
        CBaseObject::Release(v38);
      goto LABEL_69;
    }
    v25 = v38;
    v26 = 0.0;
    v40 = 0LL;
    *(double *)&v39 = 0.0;
    *(_BYTE *)(*((_QWORD *)v38 + 5) + 976LL) = 1;
    v45 = *(RECT *)(*((_QWORD *)v25 + 5) + 856LL);
    v27 = *((_QWORD *)v25 + 5);
    rc = 0LL;
    rcSrc1 = *(RECT *)(v27 + 872);
    rcSrc2 = 0LL;
    TaggedWindow = (LONG *)CStoryboard::GetTaggedWindow();
    bottom = v41.bottom;
    if ( TaggedWindow )
    {
      v30 = 0;
      rcSrc2.left = TaggedWindow[12];
      if ( TaggedWindow[15] - TaggedWindow[13] >= 0 )
        v30 = TaggedWindow[15] - TaggedWindow[13];
      rcSrc2.top = v41.bottom - v30;
      rcSrc2.right = TaggedWindow[14];
      rcSrc2.bottom = v41.bottom;
    }
    v31 = 0.0;
    if ( v45.bottom <= rcSrc1.bottom )
    {
      if ( v45.bottom < rcSrc1.bottom )
      {
        if ( IntersectRect(&rc, &v45, &rcSrc2) && !IsRectEmpty(&rc) )
        {
          v34 = 0;
          if ( rc.bottom - rc.top >= 0 )
            v34 = rc.bottom - rc.top;
          v26 = (double)-v34;
          *(double *)&v39 = v26;
        }
        v33 = _mm_cvtsi32_si128(bottom - rcSrc1.bottom);
        goto LABEL_59;
      }
    }
    else
    {
      v26 = (double)(v41.bottom - v45.bottom);
      *(double *)&v39 = v26;
      if ( IntersectRect(&rc, &rcSrc1, &rcSrc2) && !IsRectEmpty(&rc) )
      {
        v32 = 0;
        if ( rc.bottom - rc.top >= 0 )
          v32 = rc.bottom - rc.top;
        v33 = _mm_cvtsi32_si128(-v32);
LABEL_59:
        *(_QWORD *)&v31 = *(_OWORD *)&_mm_cvtepi32_pd(v33);
        v40 = *(struct tagSIZE *)&v31;
      }
    }
    if ( v31 == 0.0 )
      v35 = 0LL;
    else
      v35 = &v40;
    if ( v26 == 0.0 )
      v36 = 0LL;
    else
      v36 = &v39;
    CAnimatedTransitionVisual::SetChopPosition(
      *((CAnimatedTransitionVisual **)v25 + 5),
      (const double *)v36,
      (const double *)v35);
    goto LABEL_67;
  }
  v15 = v9 - 60;
  if ( !v15 )
    goto LABEL_11;
  v16 = v15 - 9;
  if ( !v16 )
  {
    v24 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v41, 1, &v38);
    v4 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v24, 0x27Cu);
    goto LABEL_67;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v23 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v38);
    v4 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v23, 0x278u);
    goto LABEL_67;
  }
  if ( v17 != 17 )
    goto LABEL_69;
LABEL_25:
  if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
         (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
         *(HWND *)(a2 + 40),
         0)
    || ((v18 = *(_DWORD *)(a2 + 680) & 0xFFF, v18 == 42) || v18 == 87)
    && CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
  {
    v19 = *(struct tagRECT *)(a2 + 48);
    v20 = *(HWND *)(a2 + 40);
    *(double *)&v39 = 0.0;
    v21 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
    v40 = 0LL;
    rc = v19;
    if ( (int)CWindowPropertyTracker::GetWindowEndPosition((CWindowPropertyTracker *)(v21 + 48), v20, &v39) >= 0 )
      OffsetRect(&rc, v39.x - rc.left, v39.y - rc.top);
    if ( (int)CWindowPropertyTracker::GetWindowEndSize(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
                *(HWND *)(a2 + 40),
                &v40) >= 0 )
    {
      rc.right = v40.cx + rc.left;
      rc.bottom = v40.cy + rc.top;
    }
    CTransitionVisualController::GetMonitorRectFromRectImpl(&rc, &v41);
    v22 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v41, 1, (__m128i *)&rc, &v38);
    v4 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v22, 0x272u);
      goto LABEL_67;
    }
LABEL_36:
    *(_BYTE *)(*((_QWORD *)v38 + 5) + 976LL) = 1;
    goto LABEL_67;
  }
LABEL_69:
  *a4 = v4;
  return 1;
}
