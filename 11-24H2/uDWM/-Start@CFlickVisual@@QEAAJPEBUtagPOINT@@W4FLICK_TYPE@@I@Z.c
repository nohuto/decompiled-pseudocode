/*
 * XREFs of ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800945D0
 * Callers:
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x1800B7124 (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 * Callees:
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000D3F8 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18000F80C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18000F87C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x18000F994 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18001066C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180015024 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180015BD0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001B720 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x180094A30 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094FF0 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800950D4 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180098BEC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800B75B4 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall CFlickVisual::Start(__int64 a1, POINT *a2, __int64 a3, int a4)
{
  int v4; // r15d
  CTimelineBase *v7; // rcx
  CBaseObject *v8; // rax
  _QWORD *v9; // rax
  int v10; // eax
  int BitmapFromAtlas; // esi
  int v12; // esi
  __int64 v13; // rcx
  int *v14; // rax
  unsigned int v15; // eax
  CBaseObject **v16; // r15
  void *Theme; // rax
  int v18; // r9d
  _DWORD *v19; // r13
  LONG left; // r12d
  LONG top; // r15d
  HMONITOR v22; // rax
  int v23; // ecx
  int v24; // eax
  CDesktopManager *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned int v29; // [rsp+20h] [rbp-E0h]
  unsigned int nNumerator; // [rsp+30h] [rbp-D0h]
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+60h] [rbp-A0h]
  _DWORD v33[43]; // [rsp+64h] [rbp-9Ch] BYREF

  *(POINT *)(a1 + 264) = *a2;
  v4 = a3;
  *(_DWORD *)(a1 + 260) = a3;
  *(_DWORD *)(a1 + 256) = a4;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(a1, &UdwmFlickVisual_Start, a3);
  v7 = *(CTimelineBase **)(a1 + 312);
  if ( v7 )
    CTimelineBase::Release(v7);
  v8 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  if ( !v8 )
  {
    *(_QWORD *)(a1 + 312) = 0LL;
    goto LABEL_33;
  }
  v9 = CTimeline<float>::CTimeline<float>(v8, *(float *)(a1 + 308), 0.0, 1.0, 0);
  *(_QWORD *)(a1 + 312) = v9;
  if ( !v9 )
  {
LABEL_33:
    BitmapFromAtlas = -2147024882;
    v15 = 64;
    goto LABEL_34;
  }
  v10 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  BitmapFromAtlas = v10;
  if ( v10 < 0 )
  {
    v18 = v10;
    v15 = 66;
    goto LABEL_35;
  }
  v32 = 0;
  v33[0] = 6;
  v12 = 0;
  v33[11] = 6;
  v33[1] = 1;
  v33[3] = 2;
  v33[2] = 7;
  v33[13] = 7;
  v33[6] = 9;
  v33[17] = 9;
  v33[10] = 11;
  v33[14] = 13;
  v33[25] = 13;
  v33[21] = 11;
  v33[8] = 10;
  v33[19] = 10;
  v33[18] = 15;
  v33[29] = 15;
  v13 = 21LL;
  v33[26] = 19;
  v33[37] = 19;
  v14 = v33;
  v33[30] = 21;
  v33[32] = 21;
  v33[38] = 21;
  v33[4] = 8;
  v33[5] = 3;
  v33[7] = 4;
  v33[9] = 5;
  v33[12] = 12;
  v33[15] = 8;
  v33[16] = 14;
  v33[20] = 16;
  v33[22] = 17;
  v33[23] = 12;
  v33[24] = 18;
  v33[27] = 14;
  v33[28] = 20;
  v33[31] = 16;
  v33[33] = 17;
  v33[34] = 22;
  v33[35] = 18;
  v33[36] = 23;
  v33[39] = 20;
  v33[40] = 24;
  do
  {
    if ( *(v14 - 1) == v4 )
      v12 = *v14;
    v14 += 2;
    --v13;
  }
  while ( v13 );
  if ( !v12 )
  {
    BitmapFromAtlas = -2147467259;
    v15 = 110;
LABEL_34:
    v18 = BitmapFromAtlas;
    goto LABEL_35;
  }
  v16 = (CBaseObject **)(a1 + 280);
  if ( *(_QWORD *)(a1 + 280) )
    CBaseObject::Release(*v16);
  Theme = (void *)CDesktopManager::GetTheme(2);
  BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, v12, 0LL, (struct CBitmapSource **)(a1 + 280));
  v18 = BitmapFromAtlas;
  if ( BitmapFromAtlas < 0 )
  {
    v15 = 117;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, v15, 0LL);
    CFlickVisual::Stop((CFlickVisual *)a1);
    return (unsigned int)BitmapFromAtlas;
  }
  v19 = (_DWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 296) = *((_QWORD *)*v16 + 3);
  nNumerator = CDesktopManager::MonitorDpiFromPoint(*a2);
  if ( nNumerator < 0x90 )
  {
    *v19 = 32;
    *(_DWORD *)(a1 + 300) = 32;
  }
  CVisual::SetSize(*(CVisual **)(a1 + 288), (const struct tagSIZE *)(a1 + 296));
  left = *(_DWORD *)(a1 + 264) - *v19 / 2;
  top = *(_DWORD *)(a1 + 268) - *(_DWORD *)(a1 + 300) / 2;
  v22 = MonitorFromPoint(*(POINT *)(a1 + 264), 0);
  if ( v22 )
  {
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v22, &mi) )
    {
      if ( left >= mi.rcMonitor.left )
      {
        if ( *v19 + left > mi.rcMonitor.right )
          left = mi.rcMonitor.right - *v19;
      }
      else
      {
        left = mi.rcMonitor.left;
      }
      if ( top >= mi.rcMonitor.top )
      {
        v23 = *(_DWORD *)(a1 + 300);
        if ( v23 + top > mi.rcMonitor.bottom )
          top = mi.rcMonitor.bottom - v23;
      }
      else
      {
        top = mi.rcMonitor.top;
      }
    }
  }
  CVisual::SetInsetFromParentLeft(*(CVisual **)(a1 + 288), left);
  CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 288), top);
  CImage::SetBitmapSource(*(CImage **)(a1 + 288), *(struct CBitmapSource **)(a1 + 280));
  CVisual::SetOpacity((CVisual *)a1, 1.0);
  *(_DWORD *)(a1 + 272) = left + *(_DWORD *)(a1 + 296) / 2;
  v24 = MulDiv(20, nNumerator, 96);
  v25 = CDesktopManager::s_pDesktopManagerInstance;
  v26 = *(unsigned int *)(a1 + 260);
  v27 = *(unsigned int *)(a1 + 256);
  *(_DWORD *)(a1 + 276) = top + *(_DWORD *)(a1 + 300) + v24;
  LOBYTE(v29) = 1;
  CContactManager::PostFlickFeedbackUpdate(*((_QWORD *)v25 + 20), v27, v26, a1 + 272, v29);
  return (unsigned int)BitmapFromAtlas;
}
