/*
 * XREFs of ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180005D7C
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180006834 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800079A0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008CBC4 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ @ 0x180097A7C (-OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x1800039BC (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x1800054B4 (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18000560C (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateCloneSize@CWindowIconic@@AEAAXAEBUtagRECT@@AEBU_MARGINS@@@Z @ 0x180006200 (-UpdateCloneSize@CWindowIconic@@AEAAXAEBUtagRECT@@AEBU_MARGINS@@@Z.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18000627C (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B030 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x180020E90 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x18003F5F0 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800434E0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180085AD8 (-OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180094F50 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowIconic::UpdateSizeOrMargins(CWindowIconic *this, char a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __m128i *v5; // rdx
  __m128i v6; // xmm7
  __m128i v7; // xmm6
  int cyTopHeight; // r15d
  int cxLeftWidth; // r14d
  LONG right; // r12d
  LONG bottom; // r13d
  HWND v12; // rdx
  int left; // ecx
  LONG top; // esi
  int v15; // ecx
  __m128i v16; // xmm2
  int v17; // eax
  int v18; // r9d
  int v19; // r8d
  int v20; // edx
  char v21; // r12
  bool v22; // r13
  bool v23; // si
  int updated; // eax
  int v25; // eax
  int v26; // eax
  int WindowRectForLivePreview; // eax
  int v29; // eax
  CWindowData *WindowDataByHwnd; // rax
  int WindowRestoreRect; // eax
  __int64 v32; // rax
  HMONITOR v33; // rax
  int v34; // eax
  int v35; // r8d
  int v36; // edx
  int v37; // ecx
  __m128i v38; // xmm7
  int v39; // eax
  int v40; // edx
  int nNumerator; // [rsp+3Ch] [rbp-45h] BYREF
  struct _MARGINS v43; // [rsp+40h] [rbp-41h] BYREF
  int v44; // [rsp+50h] [rbp-31h] BYREF
  struct tagRECT v45; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v47; // [rsp+78h] [rbp-9h] BYREF

  v2 = *((_QWORD *)this + 9);
  v3 = 0;
  v5 = (__m128i *)*((_QWORD *)this + 10);
  v47 = *(struct tagRECT *)(v2 + 48);
  v6 = v5[3];
  v7 = v5[4];
  v43 = 0LL;
  if ( !*(_QWORD *)(v2 + 920) || *((_BYTE *)this + 20) )
  {
    Rect = 0LL;
    AdjustWindowRectEx(&Rect, v5[7].m128i_u32[1], 0, 0);
    cxLeftWidth = -Rect.left;
    right = Rect.right;
    cyTopHeight = -Rect.top;
    bottom = Rect.bottom;
    v43.cyTopHeight = -Rect.top;
    v43.cxLeftWidth = -Rect.left;
    v43.cxRightWidth = Rect.right;
    v43.cyBottomHeight = Rect.bottom;
  }
  else
  {
    cyTopHeight = v43.cyTopHeight;
    cxLeftWidth = v43.cxLeftWidth;
    right = v43.cxRightWidth;
    bottom = v43.cyBottomHeight;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    *(_QWORD *)&Rect.left = 0LL;
    DwmGetIdealIconicThumbnailSize(1, (struct tagSIZE *)&Rect);
    if ( *((_DWORD *)this + 4) == 2 && (v32 = *((_QWORD *)this + 3)) != 0 )
    {
      *(_QWORD *)&Rect.left = *(_QWORD *)(v32 + 24);
    }
    else
    {
      v12 = *(HWND *)(*((_QWORD *)this + 9) + 920LL);
      if ( v12 )
      {
        WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             v12);
        if ( WindowDataByHwnd )
        {
          v45 = 0LL;
          WindowRestoreRect = CWindowData::GetWindowRestoreRect(WindowDataByHwnd, &v45, 1);
          v3 = WindowRestoreRect;
          if ( WindowRestoreRect < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WindowRestoreRect, 0x16Du, 0LL);
            return v3;
          }
          nNumerator = 0;
          v44 = 0;
          v33 = MonitorFromWindow(0LL, 1u);
          if ( (unsigned int)GetDpiForMonitorInternal(v33, 0LL, &nNumerator, &v44) )
          {
            v34 = MulDiv(375, nNumerator, 96);
            v35 = 0;
            top = v34;
            if ( v45.bottom - v45.top >= 0 )
              v35 = v45.bottom - v45.top;
            v36 = 0;
            if ( v45.right - v45.left >= 0 )
              v36 = v45.right - v45.left;
            left = MulDiv(v34, v36, v35);
            goto LABEL_8;
          }
        }
      }
    }
    left = Rect.left;
    top = Rect.top;
LABEL_8:
    v47.right = cxLeftWidth + right + v47.left + left;
    v47.bottom = cyTopHeight + bottom + top + v47.top;
    goto LABEL_9;
  }
  WindowRectForLivePreview = CWindowIconic::GetWindowRectForLivePreview(this, &v47);
  v3 = WindowRectForLivePreview;
  if ( WindowRectForLivePreview < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WindowRectForLivePreview, 0x17Fu, 0LL);
    return v3;
  }
LABEL_9:
  CWindowIconic::UpdateCloneSize(this, &v47, &v43);
  v15 = 0;
  v16 = _mm_srli_si128(v6, 8);
  if ( v47.right - v47.left >= 0 )
    v15 = v47.right - v47.left;
  v17 = 0;
  v18 = _mm_cvtsi128_si32(v6);
  v19 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 4));
  v20 = _mm_cvtsi128_si32(v16) - v18;
  if ( v20 >= 0 )
    v17 = v20;
  if ( v17 != v15 )
    goto LABEL_14;
  v37 = 0;
  v38 = _mm_srli_si128(v6, 12);
  if ( v47.bottom - v47.top >= 0 )
    v37 = v47.bottom - v47.top;
  v39 = 0;
  v40 = _mm_cvtsi128_si32(v38) - v19;
  if ( v40 >= 0 )
    v39 = v40;
  if ( v39 == v37 )
    v21 = 0;
  else
LABEL_14:
    v21 = 1;
  v22 = v18 != v47.left || v19 != v47.top;
  v23 = cxLeftWidth != _mm_cvtsi128_si32(v7)
     || v43.cxRightWidth != _mm_cvtsi128_si32(_mm_srli_si128(v7, 4))
     || cyTopHeight != _mm_cvtsi128_si32(_mm_srli_si128(v7, 8))
     || v43.cyBottomHeight != _mm_cvtsi128_si32(_mm_srli_si128(v7, 12));
  if ( v21 && (v29 = CTopLevelWindow::OnWindowSizeUpdated(*((CTopLevelWindow **)this + 11)), v3 = v29, v29 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x18Cu, 0LL);
  }
  else
  {
    if ( v23 )
      CTopLevelWindow::OnClientMarginsUpdated(*((CTopLevelWindow **)this + 11));
    if ( v22 )
      CTopLevelWindow::OnOffsetUpdated(*((CTopLevelWindow **)this + 11));
    if ( v21 || v23 )
    {
      updated = CWindowIconic::UpdateClientArea(this);
      v3 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x19Bu, 0LL);
      }
      else
      {
        v25 = CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11));
        v3 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x19Cu, 0LL);
        }
        else
        {
          v26 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 48LL))(*((_QWORD *)this + 13));
          v3 = v26;
          if ( v26 >= 0 )
          {
            if ( a2 )
              CWindowData::NotifySWROfMarginOrSizeChange(*((CWindowData **)this + 9), 1, 1);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x19Du, 0LL);
          }
        }
      }
    }
  }
  return v3;
}
