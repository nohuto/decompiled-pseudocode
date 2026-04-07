/*
 * XREFs of ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18004BCE0
 * Callers:
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x18000351C (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800070D0 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180049060 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18004B2C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800C2788 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800C2F44 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x1800C326C (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x1800C3708 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 * Callees:
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18000B6D8 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x18000B71C (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ @ 0x18000BA04 (-UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800152B0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035620 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x1800566A0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800ACC7C (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800B21C8 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180107D90 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18010FE48 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RequestBitmap(CIconicBitmapRegistry *this, struct CWindowData *a2, char a3)
{
  unsigned int v3; // esi
  char v4; // bp
  unsigned int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  struct CWindowData **v12; // r8
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // eax
  int v17; // r14d
  HWND v18; // r15
  __int64 v19; // rcx
  __int64 WindowDpiAwarenessContext; // rax
  int AwarenessFromDpiAwarenessContext; // eax
  HWND v22; // rdx
  CWindowData *WindowDataByHwnd; // rax
  int WindowRestoreRect; // eax
  HMONITOR v25; // rax
  LONG v26; // eax
  int v27; // r8d
  int v28; // edx
  LPARAM v29; // rdi
  WPARAM v30; // r8
  LPARAM v31; // r9
  UINT v32; // edx
  CDesktopManager *v33; // rcx
  int started; // eax
  struct tagRECT v35; // [rsp+30h] [rbp-38h] BYREF
  char v36; // [rsp+78h] [rbp+10h] BYREF
  int nNumerator; // [rsp+80h] [rbp+18h] BYREF
  struct tagSIZE v38; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0;
  if ( a2 != (struct CWindowData *)-2LL )
  {
    v8 = *((_DWORD *)this + 18);
    v9 = (_QWORD *)((char *)this + 48);
    v10 = 0LL;
    if ( v8 )
    {
      v12 = (struct CWindowData **)(*v9 + 8LL);
      do
      {
        if ( *v12 == a2 )
          break;
        v10 = (unsigned int)(v10 + 1);
        v12 += 2;
      }
      while ( (unsigned int)v10 < v8 );
    }
    if ( (unsigned int)v10 < v8 )
    {
      v4 = 1;
      v13 = DynArray<CIconicBitmapPending,0>::RemoveAt(v9, v10);
      v3 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x160u, 0LL);
    }
  }
  if ( a3 )
  {
    if ( a2 == (struct CWindowData *)-2LL )
    {
      IsWindowTab((struct CWindowData *)0xFFFFFFFFFFFFFFFELL);
    }
    else
    {
      *(_QWORD *)&v35.right = a2;
      v14 = *((unsigned int *)this + 18);
      v15 = v14 + 1;
      *(double *)&v35.left = *((double *)CDesktopManager::s_pDesktopManagerInstance + 33) + 10.0;
      if ( (int)v14 + 1 < (unsigned int)v14 )
      {
        v3 = -2147024362;
        v16 = 181;
        v17 = -2147024362;
LABEL_33:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v16, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x16Cu, 0LL);
        return v3;
      }
      v17 = 0;
      if ( v15 > *((_DWORD *)this + 17) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 48, 16, 1, &v35);
        v3 = v17;
        if ( v17 < 0 )
        {
          v16 = 192;
          goto LABEL_33;
        }
      }
      else
      {
        *(struct tagRECT *)(*((_QWORD *)this + 6) + 16 * v14) = v35;
        *((_DWORD *)this + 18) = v15;
      }
      if ( IsWindowTab(a2) && a2 != (struct CWindowData *)-1LL )
      {
        if ( *((_DWORD *)a2 + 148) && *(_DWORD *)(**((_QWORD **)a2 + 71) + 73LL) )
          return 0LL;
        goto LABEL_36;
      }
      v3 = v17;
      if ( a2 != (struct CWindowData *)-1LL )
      {
LABEL_36:
        v18 = (HWND)*((_QWORD *)a2 + 5);
        CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 1);
        v3 = v17;
        if ( v4 )
          goto LABEL_57;
        if ( !v18 )
          goto LABEL_57;
        v38 = 0LL;
        WindowDpiAwarenessContext = GetWindowDpiAwarenessContext(v18);
        AwarenessFromDpiAwarenessContext = GetAwarenessFromDpiAwarenessContext(WindowDpiAwarenessContext);
        if ( !(unsigned int)DwmGetIdealIconicThumbnailSize(AwarenessFromDpiAwarenessContext != 0, &v38) )
          goto LABEL_57;
        v22 = (HWND)*((_QWORD *)a2 + 107);
        if ( v22 )
        {
          WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                               v22);
          if ( WindowDataByHwnd )
          {
            WindowRestoreRect = CWindowData::GetWindowRestoreRect(WindowDataByHwnd, &v35, 1);
            v3 = WindowRestoreRect;
            if ( WindowRestoreRect < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WindowRestoreRect, 0x19Bu, 0LL);
              return v3;
            }
            v25 = MonitorFromWindow(0LL, 1u);
            if ( (unsigned int)GetDpiForMonitorInternal(v25, 0LL, &nNumerator, &v36) )
            {
              v26 = MulDiv(375, nNumerator, 96);
              v27 = 0;
              if ( v35.bottom - v35.top >= 0 )
                v27 = v35.bottom - v35.top;
              v38.cy = v26;
              v28 = 0;
              if ( v35.right - v35.left >= 0 )
                v28 = v35.right - v35.left;
              v38.cx = MulDiv(v26, v28, v27);
            }
          }
        }
        v29 = LOWORD(v38.cy) | (LOWORD(v38.cx) << 16);
        if ( CWindowData::IsImmersiveWindow(a2) )
          v30 = *((_QWORD *)a2 + 5);
        else
          v30 = 0LL;
        v31 = v29;
        v32 = 803;
        goto LABEL_56;
      }
    }
    v19 = *(_QWORD *)(*((_QWORD *)this + 12) + 72LL);
    v18 = *(HWND *)(v19 + 40);
    *((_BYTE *)this + 89) = 1;
    if ( v4 )
    {
LABEL_57:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qp_EtwEventWriteTransfer(v19, &UdwmManageIconicThumbnail_Info, 3LL);
      if ( !IsWindowTab(a2) )
      {
        v33 = CDesktopManager::s_pDesktopManagerInstance;
        if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) )
        {
          *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) = 1;
          started = CDesktopManager::PostStartAnimations(v33);
          v3 = started;
          if ( started < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x1B3u, 0LL);
        }
      }
      return v3;
    }
    v31 = 0LL;
    v32 = 806;
    v30 = 0LL;
LABEL_56:
    PostMessageW(v18, v32, v30, v31);
    goto LABEL_57;
  }
  if ( a2 == (struct CWindowData *)-2LL )
    goto LABEL_14;
  if ( !v4 )
  {
    if ( a2 == (struct CWindowData *)-1LL || !*((_QWORD *)a2 + 107) )
      return v3;
    goto LABEL_12;
  }
  if ( a2 == (struct CWindowData *)-1LL )
  {
LABEL_14:
    *((_BYTE *)this + 89) = 0;
    goto LABEL_13;
  }
LABEL_12:
  CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 0);
LABEL_13:
  CIconicBitmapRegistry::UpdateIconicBitmapTimerEnabled(this);
  return v3;
}
