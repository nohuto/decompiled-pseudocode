/*
 * XREFs of ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800B2710
 * Callers:
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800B2300 (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 * Callees:
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18000DB8C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800279CC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800354E0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180037F44 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180051BE4 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x1800537F4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18005398C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800539C8 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x1800548C0 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006EA9E (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x1800B2BE0 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CContactStationaryVisual::Start(__int64 a1, int a2, struct tagPOINT *a3, _DWORD *a4, char a5)
{
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  int v11; // eax
  int v12; // ecx
  void *Theme; // rax
  struct CBitmapSource ***v14; // r14
  int BitmapsFromAtlasImageStrip; // eax
  int v16; // ebp
  double v17; // xmm6_8
  int v18; // r9d
  unsigned int v19; // eax
  float v20; // xmm0_4
  __int64 v21; // rax
  bool v22; // zf
  bool v23; // al
  __int64 v24; // rcx
  __int64 v25; // rax
  double v26; // xmm7_8
  _QWORD *v27; // r8
  __int64 v28; // rax
  _QWORD *v29; // r8
  struct tagPOINT v30; // r8
  CContactManager *v31; // rcx
  struct tagSIZE *v32; // rbx
  float v33; // xmm1_4
  int v34; // ecx
  float v35; // xmm0_4
  int v36; // eax
  int v37; // edx
  int BoundedContactWidth; // eax
  __int64 cx; // kr00_8
  int v40; // ebx
  struct CBitmapSource **v41; // rax
  struct CBitmapSource *v42; // rdx

  *(_DWORD *)(a1 + 424) = a2;
  v8 = 44LL * a2;
  v9 = *(_OWORD *)((char *)&csadAnimData + v8 + 16);
  *(_OWORD *)(a1 + 316) = *(_OWORD *)((char *)&csadAnimData + v8);
  v10 = *(_QWORD *)((char *)&csadAnimData + v8 + 32);
  v11 = *(_DWORD *)((char *)&csadAnimData + v8 + 40);
  *(_OWORD *)(a1 + 332) = v9;
  *(_QWORD *)(a1 + 348) = v10;
  *(_DWORD *)(a1 + 356) = v11;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v8, (int)&UdwmContactStationaryVisual_Start, a2);
  v12 = *(_DWORD *)(a1 + 316);
  if ( v12 == 1
    && *(_DWORD *)(a1 + 320) == 2
    && *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20) + 324LL) )
  {
    *(_DWORD *)(a1 + 320) = 7;
    *(_DWORD *)(a1 + 328) = 1;
  }
  Theme = (void *)CDesktopManager::GetTheme(v12);
  v14 = (struct CBitmapSource ***)(a1 + 392);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 *(_DWORD *)(a1 + 320),
                                 *(_DWORD *)(a1 + 328),
                                 0LL,
                                 a1 + 392);
  v16 = BitmapsFromAtlasImageStrip;
  v17 = 0.0;
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v18 = BitmapsFromAtlasImageStrip;
    v19 = 99;
LABEL_56:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, v19);
    CContactStationaryVisual::StopTimer((CContactStationaryVisual *)a1);
    goto LABEL_57;
  }
  if ( a5 )
    v20 = FLOAT_0_050000001;
  else
    v20 = 0.0;
  v21 = *(_QWORD *)(a1 + 360);
  *(float *)(a1 + 428) = v20;
  if ( v21 )
  {
    v22 = (*(_DWORD *)(v21 + 8))-- == 1;
    v23 = CDesktopManager::s_fTimelineDirty;
    if ( v22 )
      v23 = 1;
    *(_QWORD *)(a1 + 360) = 0LL;
    CDesktopManager::s_fTimelineDirty = v23;
  }
  else
  {
    v23 = CDesktopManager::s_fTimelineDirty;
  }
  v24 = *(_QWORD *)(a1 + 368);
  if ( v24 )
  {
    v22 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v22 )
      v23 = 1;
    *(_QWORD *)(a1 + 368) = 0LL;
    CDesktopManager::s_fTimelineDirty = v23;
  }
  if ( !a5 )
  {
    v28 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            120LL);
    if ( v28 )
    {
      v26 = DOUBLE_1_0;
      CTimelineBase::CTimelineBase(v28, *(float *)(a1 + 324), 0.0, 1.0, *(_DWORD *)(a1 + 352));
      *v29 = &CTimeline<float>::`vftable';
      *(_QWORD *)(a1 + 360) = v29;
      if ( v29 )
        goto LABEL_29;
    }
    else
    {
      *(_QWORD *)(a1 + 360) = 0LL;
    }
    v19 = 122;
    goto LABEL_55;
  }
  v25 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          120LL);
  if ( !v25 )
  {
    *(_QWORD *)(a1 + 368) = 0LL;
LABEL_26:
    v19 = 117;
LABEL_55:
    v18 = -2147024882;
    v16 = -2147024882;
    goto LABEL_56;
  }
  v26 = DOUBLE_1_0;
  CTimelineBase::CTimelineBase(v25, *(float *)(a1 + 428), 0.0, 1.0, 0);
  *v27 = &CTimeline<float>::`vftable';
  *(_QWORD *)(a1 + 368) = v27;
  if ( !v27 )
    goto LABEL_26;
LABEL_29:
  v16 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v18 = v16;
  if ( v16 < 0 )
  {
    v19 = 125;
    goto LABEL_56;
  }
  v30 = *a3;
  v31 = (CContactManager *)*(unsigned int *)(a1 + 356);
  *(struct tagPOINT *)(a1 + 304) = *a3;
  if ( ((unsigned __int8)v31 & 8) != 0 )
  {
    v32 = (struct tagSIZE *)(a1 + 384);
    v33 = *(float *)(a1 + 344);
    *(_QWORD *)(a1 + 384) = *((_QWORD *)**v14 + 3);
    v34 = (int)(float)((float)*(int *)(a1 + 384) * v33);
    v35 = (float)*(int *)(a1 + 388);
    if ( v34 < 1 )
      v34 = 1;
    v32->cx = v34;
    v36 = (int)(float)(v35 * v33);
    if ( v36 < 1 )
      v36 = 1;
  }
  else
  {
    if ( ((unsigned __int8)v31 & 4) == 0 )
    {
      v32 = (struct tagSIZE *)(a1 + 384);
      *(_QWORD *)(a1 + 384) = *((_QWORD *)**v14 + 3);
      goto LABEL_46;
    }
    if ( !a4 )
    {
      v16 = -2147024809;
      v19 = 149;
      v18 = -2147024809;
      goto LABEL_56;
    }
    v37 = a4[3] - a4[1];
    if ( a4[2] - *a4 <= v37 )
      v37 = a4[2] - *a4;
    BoundedContactWidth = CContactManager::GetBoundedContactWidth(v31, v37, v30);
    *(_DWORD *)(a1 + 312) = BoundedContactWidth;
    v32 = (struct tagSIZE *)(a1 + 384);
    v36 = (int)(float)((float)BoundedContactWidth * *(float *)(a1 + 344));
    *(_DWORD *)(a1 + 384) = v36;
    if ( v36 < 1 )
    {
      v32->cx = 1;
      v36 = 1;
    }
  }
  *(_DWORD *)(a1 + 388) = v36;
LABEL_46:
  CVisual::SetSize(*(CVisual **)(a1 + 376), v32);
  cx = v32->cx;
  v40 = a3->y - *(_DWORD *)(a1 + 388) / 2;
  CVisual::SetInsetFromParentLeft(*(CVisual **)(a1 + 376), a3->x - cx / 2);
  CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 376), v40);
  v41 = *v14;
  if ( (*(_DWORD *)(a1 + 356) & 1) != 0 )
    v42 = *v41;
  else
    v42 = v41[*(unsigned int *)(a1 + 332)];
  CImage::SetBitmapSource(*(CImage **)(a1 + 376), v42);
  if ( !a5 )
  {
    if ( (*(_DWORD *)(a1 + 356) & 2) != 0 )
      v17 = *(float *)(a1 + 336);
    else
      v17 = v26;
  }
LABEL_57:
  CVisual::SetOpacity((CVisual *)a1, v17);
  return (unsigned int)v16;
}
