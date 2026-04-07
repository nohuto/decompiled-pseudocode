/*
 * XREFs of ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EA690
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180015CF0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800DB9B0 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DCCA8 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 * Callees:
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x180005904 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x180005EBC (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18000B620 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180010B48 (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     McTemplateU0pddddddd_EtwEventWriteTransfer @ 0x1800155CC (McTemplateU0pddddddd_EtwEventWriteTransfer.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180015BDC (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800164E0 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001C934 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180055584 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180055AB4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualImageProxy@@@Z @ 0x1800A7040 (-SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualIma.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B6238 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800B62B8 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800EB870 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateDesktopAnimationComponent(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        int a3,
        const struct tagRECT *a4,
        bool a5,
        bool a6,
        struct CStoryboard *a7,
        struct CAnimationComponent **a8)
{
  int v10; // edi
  CBaseObject *v13; // r14
  CAnimatedTransitionVisual *v14; // rsi
  unsigned int v15; // edi
  __int64 v16; // rax
  char v17; // al
  unsigned int v18; // ebx
  int v19; // eax
  HWND ShellWindowForDesktop; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  int DesktopThumbnail; // eax
  CDesktopThumbnailBase *v24; // rcx
  int updated; // eax
  int PerMonitorDesktopThumbnail; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  struct CStoryboard *v31; // r14
  __m128i *v32; // rsi
  RECT v33; // xmm0
  int v34; // r9d
  int v35; // r10d
  int v36; // edx
  int v37; // esi
  int v38; // eax
  int v39; // edx
  __int32 v40; // esi
  CAnimatedTransitionVisual *v41; // rsi
  int v42; // eax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int128 v46; // xmm0
  unsigned int v48; // [rsp+20h] [rbp-E0h]
  char v49; // [rsp+50h] [rbp-B0h]
  __int64 v51; // [rsp+58h] [rbp-A8h]
  CAnimatedTransitionVisual *v52; // [rsp+60h] [rbp-A0h] BYREF
  CBaseObject *v53; // [rsp+68h] [rbp-98h] BYREF
  CBaseObject *v54; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h]
  struct tagRECT v56; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v57; // [rsp+90h] [rbp-70h] BYREF
  struct CStoryboard *v58; // [rsp+98h] [rbp-68h]
  CBaseObject *v59; // [rsp+A0h] [rbp-60h] BYREF
  CBaseObject *v60; // [rsp+A8h] [rbp-58h] BYREF
  struct CAnimationComponent **v61; // [rsp+B0h] [rbp-50h]
  struct tagRECT v62; // [rsp+B8h] [rbp-48h] BYREF
  struct tagRECT v63; // [rsp+D0h] [rbp-30h] BYREF
  RECT rc2; // [rsp+E0h] [rbp-20h] BYREF
  __m128i v65; // [rsp+F0h] [rbp-10h]

  v10 = *((_DWORD *)a2 + 170);
  v61 = a8;
  v13 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v14 = 0LL;
  v52 = 0LL;
  v15 = v10 & 0xFFF;
  v59 = 0LL;
  v60 = 0LL;
  v16 = *(_QWORD *)a7;
  v58 = a7;
  v17 = (*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(v16 + 120))(a7, v15);
  rc2 = *a4;
  if ( (v17 & 0x10) != 0 )
  {
    CTransitionVisualController::GetMonitorRectFromRectImpl(a4, &rc2);
    v49 = 1;
  }
  else
  {
    v49 = 0;
  }
  if ( !(unsigned int)GetDesktopID(1LL, &v57) )
  {
    v48 = 1327;
LABEL_6:
    v18 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147467259,
      v48);
    return v18;
  }
  v19 = CTransitionVisualController::_SetDesktopId(this, v57);
  v18 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v19,
      0x533u);
    return v18;
  }
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                            v57);
  if ( !ShellWindowForDesktop )
  {
    v48 = 1336;
    goto LABEL_6;
  }
  v21 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          160LL);
  v55 = v21;
  if ( !v21
    || (v22 = CAnimationComponent::CAnimationComponent(v21, (__int64)ShellWindowForDesktop, v15, a3, (__int64)v58)) == 0 )
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x53Cu);
    goto LABEL_76;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v53);
  v18 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      DesktopThumbnail,
      0x53Eu);
LABEL_69:
    v13 = v53;
    goto LABEL_70;
  }
  v13 = v53;
  v24 = v53;
  *((_QWORD *)v53 + 35) = v57;
  updated = CDesktopThumbnailBase::UpdateWindowClones(v24);
  v18 = updated;
  if ( updated >= 0 )
  {
    v63 = rc2;
    PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v13, &v63, &v54);
    v18 = PerMonitorDesktopThumbnail;
    if ( PerMonitorDesktopThumbnail < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        PerMonitorDesktopThumbnail,
        0x540u);
      goto LABEL_70;
    }
    v27 = CAnimatedTransitionVisual::Create(&v52);
    v18 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v27,
        0x542u);
LABEL_21:
      v14 = v52;
      goto LABEL_70;
    }
    if ( a5 )
      *(_BYTE *)(v22 + 67) = 1;
    if ( !a6 || CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
    {
      v29 = CDesktopThumbnailCVI::CreateBrush(v54, &v59, &v60, 0LL, &rc2);
      v18 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v29,
          0x54Fu);
        goto LABEL_21;
      }
      v14 = v52;
      v30 = CAnimatedTransitionVisual::SetCVIBrush(v52, v59, v60);
      v18 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v30,
          0x550u);
        goto LABEL_70;
      }
    }
    else
    {
      v14 = v52;
      v28 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v52, v13, 1, &rc2);
      v18 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v28,
          0x54Bu);
        goto LABEL_70;
      }
    }
    v31 = v58;
    *((_DWORD *)v14 + 184) = *((_DWORD *)v58 + 18);
    *((_DWORD *)v14 + 185) = a3;
    *((_BYTE *)v14 + 972) = CStoryboard::IsRTL();
    *(_QWORD *)(v22 + 40) = v14;
    _InterlockedIncrement((volatile signed __int32 *)v14 + 4);
    v32 = (__m128i *)v54;
    *(_QWORD *)(v22 + 48) = v54;
    if ( v32 )
    {
      _InterlockedIncrement(&v32->m128i_i32[2]);
      v32 = (__m128i *)v54;
    }
    if ( (*((_DWORD *)a2 + 170) & 0x1000000) != 0 && EqualRect((const RECT *)((char *)a2 + 684), &rc2)
      || (*((_DWORD *)a2 + 170) & 0x800000) != 0 && EqualRect((const RECT *)((char *)a2 + 716), &rc2) )
    {
      v33 = rc2;
      v56 = rc2;
    }
    else
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, &v56);
      v33 = v56;
    }
    *(RECT *)(v22 + 88) = v33;
    if ( a6 )
    {
      v34 = 0;
      v35 = 0;
      if ( rc2.right - rc2.left >= 0 )
        v34 = rc2.right - rc2.left;
      v55 = 0LL;
      if ( rc2.bottom - rc2.top >= 0 )
        v35 = rc2.bottom - rc2.top;
    }
    else
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, &v62);
      v34 = 0;
      LODWORD(v55) = v56.left - v62.left;
      HIDWORD(v55) = v56.top - v62.top;
      if ( v56.right - v56.left >= 0 )
        v34 = v56.right - v56.left;
      v35 = v56.bottom - v56.top;
      if ( v56.bottom - v56.top < 0 )
      {
        v35 = 0;
        HIDWORD(v51) = 0;
        goto LABEL_46;
      }
    }
    HIDWORD(v51) = v35;
LABEL_46:
    v36 = 0;
    LODWORD(v51) = v34;
    v65 = v32[2];
    v37 = _mm_cvtsi128_si32(_mm_srli_si128(v65, 8)) - _mm_cvtsi128_si32(v65);
    if ( v37 >= 0 )
      v36 = v37;
    if ( v34 > v36 )
    {
      v38 = MulDiv(v35, v36, v34);
      v34 = v37;
      v35 = v38;
      HIDWORD(v51) = v38;
      if ( v37 < 0 )
        v34 = 0;
      LODWORD(v51) = v34;
    }
    v39 = 0;
    v40 = v65.m128i_i32[3] - v65.m128i_i32[1];
    if ( v65.m128i_i32[3] - v65.m128i_i32[1] >= 0 )
      v39 = v65.m128i_i32[3] - v65.m128i_i32[1];
    if ( v35 > v39 )
    {
      LODWORD(v51) = MulDiv(v34, v39, v35);
      if ( v40 < 0 )
        v40 = 0;
      HIDWORD(v51) = v40;
    }
    v41 = v52;
    *((_QWORD *)v52 + 118) = v55;
    *((_QWORD *)v41 + 119) = v51;
    if ( v49 )
    {
      *(_OWORD *)((char *)v41 + 888) = *(_OWORD *)((char *)a2 + 684);
      *(_OWORD *)((char *)v41 + 824) = *(_OWORD *)((char *)a2 + 684);
      v42 = *((_DWORD *)v41 + 24);
      if ( (v42 & 0x1000) == 0 )
      {
        *((_DWORD *)v41 + 24) = v42 | 0x1000;
        CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)v41 + 8));
      }
      *(_OWORD *)((char *)v41 + 904) = *(_OWORD *)((char *)a2 + 716);
      v43 = *((_DWORD *)v41 + 24);
      if ( (v43 & 0x1000) == 0 )
      {
        *((_DWORD *)v41 + 24) = v43 | 0x1000;
        CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)v41 + 8));
      }
      *((_BYTE *)v41 + 986) = 1;
    }
    if ( !IsRectEmpty((const RECT *)((char *)a2 + 748)) )
    {
      v46 = *(_OWORD *)((char *)a2 + 748);
      *(_DWORD *)(v22 + 68) = 2;
      *(_OWORD *)(v22 + 104) = v46;
    }
    *v61 = (struct CAnimationComponent *)v22;
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pddddddd_EtwEventWriteTransfer(
        v45,
        v44,
        *((_QWORD *)a2 + 5),
        *((_DWORD *)v31 + 18),
        *((_DWORD *)a2 + 170),
        1,
        a4->left,
        a4->top,
        a4->bottom,
        a4->right);
    v14 = v52;
    goto LABEL_69;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    updated,
    0x53Fu);
LABEL_70:
  CBaseObject::Release((CBaseObject *)v22);
LABEL_76:
  if ( v13 )
    CBaseObject::Release(v13);
  if ( v54 )
    CBaseObject::Release(v54);
  if ( v14 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v14 + 8));
  if ( v59 )
    CBaseObject::Release(v59);
  if ( v60 )
    CBaseObject::Release(v60);
  return v18;
}
