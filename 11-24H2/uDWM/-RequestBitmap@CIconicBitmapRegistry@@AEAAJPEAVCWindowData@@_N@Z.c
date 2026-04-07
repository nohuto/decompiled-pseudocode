/*
 * XREFs of ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001D3F4
 * Callers:
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x180007C94 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800088D8 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18001B2DC (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001C3C0 (-WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x180047D1C (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x180077678 (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800C561C (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 * Callees:
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x1800039BC (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180004CB4 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18000627C (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180007DE8 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ @ 0x18000917C (-UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001C5C4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?FindWindowDataIndex@CIconicBitmapRegistry@@AEAAIPEAVCWindowData@@@Z @ 0x18001D804 (-FindWindowDataIndex@CIconicBitmapRegistry@@AEAAIPEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetGlobalTime@CDesktopManager@@SANXZ @ 0x180027CA4 (-GetGlobalTime@CDesktopManager@@SANXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800434E0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180046894 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18007DBF8 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180097FD4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RequestBitmap(CIconicBitmapRegistry *this, HWND *a2, char a3)
{
  unsigned int v6; // edi
  char v7; // r15
  unsigned int WindowDataIndex; // eax
  int v10; // eax
  bool v11; // al
  __int64 v12; // rcx
  HWND v13; // r14
  LPARAM v14; // r9
  UINT v15; // edx
  WPARAM v16; // r8
  double GlobalTime; // xmm0_8
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // r14d
  unsigned int v21; // eax
  int v22; // r9d
  __int64 WindowDpiAwarenessContext; // rax
  int AwarenessFromDpiAwarenessContext; // eax
  HWND v25; // rdx
  LPARAM v26; // rsi
  CDesktopManager *v27; // rcx
  int started; // eax
  CWindowData *WindowDataByHwnd; // rax
  HMONITOR v30; // rax
  LONG v31; // eax
  int v32; // r8d
  int v33; // edx
  unsigned int v34; // [rsp+20h] [rbp-20h]
  struct tagRECT v35; // [rsp+30h] [rbp-10h] BYREF
  int v36; // [rsp+88h] [rbp+48h] BYREF
  int nNumerator; // [rsp+90h] [rbp+50h] BYREF
  struct tagSIZE v38; // [rsp+98h] [rbp+58h] BYREF

  v6 = 0;
  v7 = 0;
  if ( a2 != (HWND *)-2LL )
  {
    WindowDataIndex = CIconicBitmapRegistry::FindWindowDataIndex(this, (struct CWindowData *)a2);
    if ( WindowDataIndex < *((_DWORD *)this + 18) )
    {
      v7 = 1;
      v10 = DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 48, WindowDataIndex);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x15Fu, 0LL);
    }
  }
  if ( !a3 )
  {
    if ( a2 != (HWND *)-2LL )
    {
      if ( !v7 )
      {
        if ( a2 == (HWND *)-1LL || !a2[115] )
          return v6;
        goto LABEL_11;
      }
      if ( a2 != (HWND *)-1LL )
      {
LABEL_11:
        CIconicBitmapRegistry::RegisterBitmapPending(this, (struct CWindowData *)a2, 0);
LABEL_12:
        CIconicBitmapRegistry::UpdateIconicBitmapTimerEnabled(this);
        return v6;
      }
    }
    *((_BYTE *)this + 89) = 0;
    goto LABEL_12;
  }
  if ( a2 != (HWND *)-2LL )
  {
    *(_QWORD *)&v35.right = a2;
    GlobalTime = CDesktopManager::GetGlobalTime();
    v18 = *((_DWORD *)this + 18);
    v19 = v18 + 1;
    *(double *)&v35.left = GlobalTime + 10.0;
    if ( v18 + 1 < v18 )
    {
      v6 = -2147024362;
      v21 = 179;
      v20 = -2147024362;
    }
    else
    {
      v20 = 0;
      if ( v19 <= *((_DWORD *)this + 17) )
      {
        *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * v18) = v35;
        *((_DWORD *)this + 18) = v19;
LABEL_21:
        v6 = v20;
        goto LABEL_14;
      }
      v20 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 48, 16LL, 1LL, &v35);
      v6 = v20;
      if ( v20 >= 0 )
        goto LABEL_21;
      v21 = 190;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v21, 0LL);
    v22 = v20;
    v34 = 363;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, v34, 0LL);
    return v6;
  }
LABEL_14:
  v11 = IsWindowTab((struct CWindowData *)a2);
  if ( a2 == (HWND *)-2LL )
  {
LABEL_15:
    v12 = *(_QWORD *)(*((_QWORD *)this + 12) + 72LL);
    v13 = *(HWND *)(v12 + 40);
    *((_BYTE *)this + 89) = 1;
    if ( v7 )
    {
LABEL_38:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qp_EtwEventWriteTransfer(v12, &UdwmManageIconicThumbnail_Info, 3LL, v13);
      if ( IsWindowTab((struct CWindowData *)a2) )
        return v6;
      v27 = CDesktopManager::s_pDesktopManagerInstance;
      if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) )
        return v6;
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) = 1;
      started = CDesktopManager::PostStartAnimations(v27);
      v6 = started;
      if ( started >= 0 )
        return v6;
      v34 = 434;
      goto LABEL_44;
    }
    v14 = 0LL;
    v15 = 806;
    v16 = 0LL;
LABEL_37:
    PostMessageW(v13, v15, v16, v14);
    goto LABEL_38;
  }
  if ( !v11 )
  {
    if ( a2 == (HWND *)-1LL )
      goto LABEL_15;
    goto LABEL_30;
  }
  if ( a2 == (HWND *)-1LL )
    goto LABEL_15;
  if ( !*((_DWORD *)a2 + 148) || !*(_DWORD *)(*(_QWORD *)a2[71] + 73LL) )
  {
LABEL_30:
    v13 = a2[5];
    CIconicBitmapRegistry::RegisterBitmapPending(this, (struct CWindowData *)a2, 1);
    if ( v7 )
      goto LABEL_38;
    if ( !v13 )
      goto LABEL_38;
    v38 = 0LL;
    WindowDpiAwarenessContext = GetWindowDpiAwarenessContext(v13);
    AwarenessFromDpiAwarenessContext = GetAwarenessFromDpiAwarenessContext(WindowDpiAwarenessContext);
    if ( !(unsigned int)DwmGetIdealIconicThumbnailSize(AwarenessFromDpiAwarenessContext != 0, &v38) )
      goto LABEL_38;
    v25 = a2[115];
    if ( v25 )
    {
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           v25);
      if ( WindowDataByHwnd )
      {
        v35 = 0LL;
        started = CWindowData::GetWindowRestoreRect(WindowDataByHwnd, &v35, 1);
        v6 = started;
        if ( started < 0 )
        {
          v34 = 410;
LABEL_44:
          v22 = started;
          goto LABEL_24;
        }
        nNumerator = 0;
        v36 = 0;
        v30 = MonitorFromWindow(0LL, 1u);
        if ( (unsigned int)GetDpiForMonitorInternal(v30, 0LL, &nNumerator, &v36) )
        {
          v31 = MulDiv(375, nNumerator, 96);
          v32 = 0;
          v33 = 0;
          if ( v35.bottom - v35.top >= 0 )
            v32 = v35.bottom - v35.top;
          v38.cy = v31;
          if ( v35.right - v35.left >= 0 )
            v33 = v35.right - v35.left;
          v38.cx = MulDiv(v31, v33, v32);
        }
      }
    }
    v26 = LOWORD(v38.cy) | (LOWORD(v38.cx) << 16);
    if ( CWindowData::IsImmersiveWindow((CWindowData *)a2) )
      v16 = (WPARAM)a2[5];
    else
      v16 = 0LL;
    v14 = v26;
    v15 = 803;
    goto LABEL_37;
  }
  return 0LL;
}
