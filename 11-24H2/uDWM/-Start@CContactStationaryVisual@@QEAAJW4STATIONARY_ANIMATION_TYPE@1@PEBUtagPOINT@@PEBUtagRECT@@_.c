/*
 * XREFs of ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x180012E64
 * Callers:
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800126CC (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 * Callees:
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18000F80C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x18000F838 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18000F87C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18001066C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x180012E40 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180015024 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180015BD0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001B720 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180024118 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094FF0 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800950D4 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180098BEC (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CContactStationaryVisual::Start(
        __int64 a1,
        unsigned int a2,
        struct tagPOINT *a3,
        _DWORD *a4,
        char a5)
{
  __int64 v6; // rax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  __int64 v11; // rcx
  void *Theme; // rax
  struct CBitmapSource ***v13; // r14
  int BitmapsFromAtlasImageStrip; // eax
  int v15; // ebp
  int v16; // r9d
  unsigned int v17; // eax
  float v19; // xmm0_4
  CTimelineBase *v20; // rcx
  CTimelineBase *v21; // rcx
  void *v22; // rax
  int v23; // edx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  struct tagPOINT v27; // r8
  CContactManager *v28; // rcx
  signed int v29; // edx
  int BoundedContactWidth; // eax
  struct tagSIZE *v31; // rbx
  int v32; // eax
  __int64 cx; // kr00_8
  int v34; // ebx
  struct CBitmapSource **v35; // rax
  struct CBitmapSource *v36; // rdx
  double v37; // xmm1_8
  __int64 v38; // rax
  float v39; // xmm1_4
  int v40; // eax
  __m128i v41; // xmm0
  int v42; // ecx

  *(_DWORD *)(a1 + 376) = a2;
  v6 = 44LL * (int)a2;
  v9 = *(_OWORD *)((char *)&csadAnimData + v6 + 16);
  *(_OWORD *)(a1 + 268) = *(_OWORD *)((char *)&csadAnimData + v6);
  v10 = *(_QWORD *)((char *)&csadAnimData + v6 + 32);
  LODWORD(v6) = *(_DWORD *)((char *)&csadAnimData + v6 + 40);
  *(_OWORD *)(a1 + 284) = v9;
  *(_QWORD *)(a1 + 300) = v10;
  *(_DWORD *)(a1 + 308) = v6;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(&csadAnimData, &UdwmContactStationaryVisual_Start, a2);
  v11 = *(unsigned int *)(a1 + 268);
  if ( *(_QWORD *)(a1 + 268) == 0x200000001LL
    && *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20) + 324LL) )
  {
    *(_DWORD *)(a1 + 272) = 7;
    *(_DWORD *)(a1 + 280) = 1;
  }
  Theme = (void *)CDesktopManager::GetTheme(v11);
  v13 = (struct CBitmapSource ***)(a1 + 344);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 *(_DWORD *)(a1 + 272),
                                 *(_DWORD *)(a1 + 280),
                                 0LL,
                                 a1 + 344);
  v15 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v16 = BitmapsFromAtlasImageStrip;
    v17 = 99;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v17, 0LL);
    CContactStationaryVisual::Stop((CTimelineBase **)a1);
    return (unsigned int)v15;
  }
  if ( a5 )
    v19 = FLOAT_0_050000001;
  else
    v19 = 0.0;
  v20 = *(CTimelineBase **)(a1 + 312);
  *(float *)(a1 + 380) = v19;
  if ( v20 )
  {
    CTimelineBase::Release(v20);
    *(_QWORD *)(a1 + 312) = 0LL;
  }
  v21 = *(CTimelineBase **)(a1 + 320);
  if ( v21 )
  {
    CTimelineBase::Release(v21);
    *(_QWORD *)(a1 + 320) = 0LL;
  }
  v22 = DefaultHeap::AllocClear(0x78uLL);
  if ( !a5 )
  {
    if ( v22 )
    {
      v26 = CTimeline<float>::CTimeline<float>((_DWORD)v22, v23, v24, v25, *(_DWORD *)(a1 + 304));
      *(_QWORD *)(a1 + 312) = v26;
      if ( v26 )
        goto LABEL_19;
    }
    else
    {
      *(_QWORD *)(a1 + 312) = 0LL;
    }
    v16 = -2147024882;
    v17 = 122;
    v15 = -2147024882;
    goto LABEL_8;
  }
  if ( !v22 )
  {
    *(_QWORD *)(a1 + 320) = 0LL;
LABEL_39:
    v16 = -2147024882;
    v17 = 117;
    v15 = -2147024882;
    goto LABEL_8;
  }
  v38 = CTimeline<float>::CTimeline<float>((_DWORD)v22, v23, v24, v25, 0);
  *(_QWORD *)(a1 + 320) = v38;
  if ( !v38 )
    goto LABEL_39;
LABEL_19:
  v15 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v16 = v15;
  if ( v15 < 0 )
  {
    v17 = 125;
    goto LABEL_8;
  }
  v27 = *a3;
  v28 = (CContactManager *)*(unsigned int *)(a1 + 308);
  *(struct tagPOINT *)(a1 + 256) = *a3;
  if ( ((unsigned __int8)v28 & 8) != 0 )
  {
    v31 = (struct tagSIZE *)(a1 + 336);
    v39 = *(float *)(a1 + 296);
    *(_QWORD *)(a1 + 336) = *((_QWORD *)**v13 + 3);
    v40 = (int)(float)((float)*(int *)(a1 + 336) * v39);
    v41 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 340));
    *(_DWORD *)(a1 + 336) = v40;
    v42 = (int)(float)(_mm_cvtepi32_ps(v41).m128_f32[0] * v39);
    *(_DWORD *)(a1 + 340) = v42;
    if ( v40 < 1 )
      v31->cx = 1;
    if ( v42 < 1 )
      *(_DWORD *)(a1 + 340) = 1;
  }
  else if ( ((unsigned __int8)v28 & 4) != 0 )
  {
    if ( !a4 )
    {
      v15 = -2147024809;
      v17 = 149;
      v16 = -2147024809;
      goto LABEL_8;
    }
    v29 = a4[3] - a4[1];
    if ( a4[2] - *a4 <= v29 )
      v29 = a4[2] - *a4;
    BoundedContactWidth = CContactManager::GetBoundedContactWidth(v28, v29, v27);
    *(_DWORD *)(a1 + 264) = BoundedContactWidth;
    v31 = (struct tagSIZE *)(a1 + 336);
    v32 = (int)(float)((float)BoundedContactWidth * *(float *)(a1 + 296));
    *(_DWORD *)(a1 + 336) = v32;
    if ( v32 < 1 )
    {
      v31->cx = 1;
      v32 = 1;
    }
    *(_DWORD *)(a1 + 340) = v32;
  }
  else
  {
    v31 = (struct tagSIZE *)(a1 + 336);
    *(_QWORD *)(a1 + 336) = *((_QWORD *)**v13 + 3);
  }
  CVisual::SetSize(*(CVisual **)(a1 + 328), v31);
  cx = v31->cx;
  v34 = a3->y - *(_DWORD *)(a1 + 340) / 2;
  CVisual::SetInsetFromParentLeft(*(CVisual **)(a1 + 328), a3->x - cx / 2);
  CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 328), v34);
  v35 = *v13;
  if ( (*(_DWORD *)(a1 + 308) & 1) != 0 )
    v36 = *v35;
  else
    v36 = v35[*(unsigned int *)(a1 + 284)];
  CImage::SetBitmapSource(*(CImage **)(a1 + 328), v36);
  if ( a5 )
  {
    v37 = 0.0;
  }
  else if ( (*(_DWORD *)(a1 + 308) & 2) != 0 )
  {
    v37 = *(float *)(a1 + 288);
  }
  else
  {
    v37 = DOUBLE_1_0;
  }
  CVisual::SetOpacity((CVisual *)a1, v37);
  return (unsigned int)v15;
}
