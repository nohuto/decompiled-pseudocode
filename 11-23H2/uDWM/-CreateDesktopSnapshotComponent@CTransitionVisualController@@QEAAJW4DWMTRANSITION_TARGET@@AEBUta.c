/*
 * XREFs of ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EAD60
 * Callers:
 *     ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x1800DB240 (-OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ.c)
 * Callees:
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18000B620 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180015BDC (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800164E0 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001DF78 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180054C9C (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180055584 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180055AB4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTransitionVisualController::CreateDesktopSnapshotComponent(
        CTransitionVisualController *a1,
        __int64 a2,
        const struct tagRECT *a3,
        _DWORD *a4,
        __int64 *a5)
{
  CAnimatedTransitionVisual *v8; // rsi
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // r14
  unsigned int v18; // edi
  struct CVisual *RootVisualForDesktop; // rbx
  int v20; // r9d
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rbx
  int v25; // eax
  unsigned int v27; // [rsp+20h] [rbp-30h]
  CAnimatedTransitionVisual *v28; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-10h] BYREF
  __int64 v31; // [rsp+48h] [rbp-8h]
  int v32; // [rsp+98h] [rbp+48h]
  int v33; // [rsp+A0h] [rbp+50h]

  v8 = 0LL;
  v28 = 0LL;
  v9 = a3->right - a3->left;
  v10 = v9;
  if ( v9 < 0 )
    v10 = 0;
  LODWORD(v31) = v10;
  v11 = 0;
  if ( v9 >= 0 )
    v11 = v9;
  v32 = v11;
  v12 = a3->bottom - a3->top;
  v13 = v12;
  if ( v12 < 0 )
    v13 = 0;
  HIDWORD(v31) = v13;
  v14 = 0;
  if ( v12 >= 0 )
    v14 = v12;
  v33 = v14;
  v29 = 0LL;
  v15 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          160LL);
  v30 = v15;
  if ( v15 )
  {
    v16 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a4 + 112LL))(a4, 10LL);
    v17 = CAnimationComponent::CAnimationComponent(v15, -1LL, 10, v16, (__int64)a4);
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x4E1u);
    return v18;
  }
  *(_DWORD *)(v17 + 60) = 0x7FFFFFFF;
  GetDesktopID(1LL, &v29);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           v29);
  if ( !RootVisualForDesktop )
  {
    v27 = 1255;
LABEL_16:
    v20 = -2147024882;
    v18 = -2147024882;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v20,
      v27);
    goto LABEL_37;
  }
  v21 = CTransitionVisualController::_SetDesktopId(a1, v29);
  v18 = v21;
  if ( v21 < 0 )
  {
    v27 = 1258;
LABEL_20:
    v20 = v21;
    goto LABEL_17;
  }
  v22 = CAnimatedTransitionVisual::Create(&v28);
  v18 = v22;
  if ( v22 >= 0 )
  {
    v8 = v28;
    if ( !v28 )
    {
      v27 = 1262;
      goto LABEL_16;
    }
    v21 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v28, RootVisualForDesktop, 1, a3);
    v18 = v21;
    if ( v21 < 0 )
    {
      v27 = 1265;
      goto LABEL_20;
    }
    v21 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual((CCachedVisualImageProxy **)v8, RootVisualForDesktop, a3);
    v18 = v21;
    if ( v21 < 0 )
    {
      v27 = 1268;
      goto LABEL_20;
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                          + 24LL)
                                            + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 6)
                                                               + 24LL));
    v18 = v21;
    if ( v21 < 0 )
    {
      v27 = 1269;
      goto LABEL_20;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v8, a3);
    *(struct tagRECT *)((char *)v8 + 872) = *a3;
    v23 = *((_DWORD *)v8 + 24);
    if ( (v23 & 0x1000) == 0 )
    {
      *((_DWORD *)v8 + 24) = v23 | 0x1000;
      CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)v8 + 8));
    }
    v30 = __PAIR64__(v33, v32);
    (*(void (__fastcall **)(__int64, unsigned __int64 *))(*((_QWORD *)v8 + 1) + 104LL))((__int64)v8 + 8, &v30);
    v24 = v31;
    *((_QWORD *)v8 + 119) = v31;
    CVisual::SetInterpolationMode((unsigned int *)v8 + 2, 1u);
    v25 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a4 + 112LL))(a4, 10LL);
    *((_DWORD *)v8 + 184) = a4[18];
    *((_DWORD *)v8 + 185) = v25;
    *((_BYTE *)v8 + 972) = CStoryboard::IsRTL();
    *(_QWORD *)(v17 + 40) = v8;
    _InterlockedIncrement((volatile signed __int32 *)v8 + 4);
    *(struct tagRECT *)(v17 + 88) = *a3;
    if ( *(_DWORD *)(v17 + 68) != 2 )
      *(_DWORD *)(v17 + 68) = 1;
    *((_QWORD *)v28 + 118) = 0LL;
    *((_QWORD *)v8 + 119) = v24;
    *a5 = v17;
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v22,
      0x4EDu);
  }
  v8 = v28;
LABEL_37:
  CBaseObject::Release((CBaseObject *)v17);
  if ( v8 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v8 + 8));
  return v18;
}
