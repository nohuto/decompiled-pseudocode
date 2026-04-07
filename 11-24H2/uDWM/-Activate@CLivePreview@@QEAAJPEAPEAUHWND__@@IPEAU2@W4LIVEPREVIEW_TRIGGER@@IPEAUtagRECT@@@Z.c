/*
 * XREFs of ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x1800451F4
 * Callers:
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x180045F00 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 * Callees:
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180008798 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800434E0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045584 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x180045B24 (-_GetDesktopWorkArea@CLivePreview@@AEAA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@AEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x18004D430 (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?GetMonitorDesktopWorkArea@CImmersiveState@@QEAA?AUtagRECT@@PEAUHMONITOR__@@@Z @ 0x1800C6580 (-GetMonitorDesktopWorkArea@CImmersiveState@@QEAA-AUtagRECT@@PEAUHMONITOR__@@@Z.c)
 *     ?SetMonitorDesktopWorkArea@CImmersiveState@@QEAAXPEAUHMONITOR__@@AEBUtagRECT@@@Z @ 0x1800C6644 (-SetMonitorDesktopWorkArea@CImmersiveState@@QEAAXPEAUHMONITOR__@@AEBUtagRECT@@@Z.c)
 *     ?FindTabWindowData@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800EF484 (-FindTabWindowData@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall CLivePreview::Activate(__int64 a1, __int64 a2, unsigned int a3, HWND a4, int a5, int a6, __int64 a7)
{
  unsigned int v8; // ebx
  __int64 v9; // r15
  CDesktopManager *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  __int64 i; // rcx
  __int64 j; // r12
  struct CWindowData *v16; // rbx
  struct CWindowData *v17; // rcx
  unsigned int v18; // eax
  int v19; // ecx
  bool v20; // al
  RECT v21; // xmm0
  struct CWindowData **v22; // rdx
  const RECT *v23; // rdi
  HMONITOR v24; // rax
  HMONITOR v25; // r15
  struct tagRECT *DesktopWorkArea; // rax
  signed int LastError; // eax
  struct CWindowData *WindowDataByHwnd; // [rsp+38h] [rbp-79h] BYREF
  __int64 v30; // [rsp+40h] [rbp-71h]
  struct tagRECT v31; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v32; // [rsp+58h] [rbp-59h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+68h] [rbp-49h] BYREF
  struct tagRECT Rect; // [rsp+98h] [rbp-19h] BYREF
  RECT rc1; // [rsp+A8h] [rbp-9h] BYREF

  v8 = a3;
  v30 = a2;
  v9 = a2;
  *(_BYTE *)(a1 + 244) = 0;
  *(_BYTE *)(a1 + 243) = a5 == 4;
  *(_DWORD *)(a1 + 256) = a6;
  v10 = CDesktopManager::s_pDesktopManagerInstance;
  *(_WORD *)(a1 + 241) = 1;
  *(_DWORD *)(a1 + 488) = a5;
  v11 = (_QWORD *)(a1 + 448);
  *(_QWORD *)(a1 + 472) = CWindowList::FindWindowDataByHwnd(*((CWindowList **)v10 + 53), a4);
  v12 = *(_QWORD *)(a1 + 456);
  for ( i = *(_QWORD *)(a1 + 448); i != v12; i += 8LL )
    *(_BYTE *)(*(_QWORD *)i + 742LL) &= ~2u;
  if ( *(_QWORD *)(a1 + 448) != *(_QWORD *)(a1 + 456) )
    *(_QWORD *)(a1 + 456) = *v11;
  for ( j = 0LL; (unsigned int)j < v8; j = (unsigned int)(j + 1) )
  {
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                         *(HWND *)(v9 + 8 * j));
    v16 = WindowDataByHwnd;
    v17 = WindowDataByHwnd;
    if ( WindowDataByHwnd
      || (WindowDataByHwnd = CWindowList::FindTabWindowData(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                               *(HWND *)(v9 + 8 * j)),
          v16 = WindowDataByHwnd,
          (v17 = WindowDataByHwnd) != 0LL) )
    {
      if ( (*((_BYTE *)v17 + 736) & 4) == 0 )
      {
        v22 = *(struct CWindowData ***)(a1 + 456);
        if ( v22 == *(struct CWindowData ***)(a1 + 464) )
        {
          std::vector<CWindowData *>::_Emplace_reallocate<CWindowData * const &>(a1 + 448, v22, &WindowDataByHwnd);
          v16 = WindowDataByHwnd;
        }
        else
        {
          *v22 = v16;
          *(_QWORD *)(a1 + 456) += 8LL;
        }
        *((_BYTE *)v16 + 742) |= 2u;
      }
      if ( (*((_DWORD *)v16 + 29) & 0x20000000) != 0 && !*((_QWORD *)v16 + 60) && !CWindowData::GetMDIOwner((HWND *)v16) )
      {
        wndpl.length = 44;
        memset(&wndpl.flags, 0, 40);
        SetLastError(0);
        if ( !GetWindowPlacement(*((HWND *)v16 + 5), &wndpl) )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          if ( LastError >= 0 )
            LastError = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, 0x35Fu, 0LL);
          return CLivePreview::Activate((CLivePreview *)a1);
        }
        if ( (wndpl.flags & 2) == 0 )
        {
          Rect = 0LL;
          AdjustWindowRectEx(&Rect, *((_DWORD *)v16 + 29), 0, *((_DWORD *)v16 + 30));
        }
      }
      if ( !*(_BYTE *)(a1 + 242) )
      {
        v18 = *((_DWORD *)v16 + 32);
        v20 = 0;
        if ( v18 <= 0xA )
        {
          v19 = 1282;
          if ( _bittest(&v19, v18) )
            v20 = 1;
        }
        *(_BYTE *)(a1 + 242) = v20;
      }
      if ( a7 && (v23 = (const RECT *)(a7 + 16LL * (unsigned int)j), v23->right > v23->left) && v23->bottom > v23->top )
      {
        if ( *((_DWORD *)v16 + 32) == 1 )
        {
          v24 = MonitorFromWindow(*((HWND *)v16 + 5), 0);
          v25 = v24;
          if ( v24 )
          {
            CImmersiveState::GetMonitorDesktopWorkArea(*(CImmersiveState **)(a1 + 480), &rc1, v24);
            if ( !EqualRect(&rc1, v23) )
              CImmersiveState::SetMonitorDesktopWorkArea(*(CImmersiveState **)(a1 + 480), v25, v23);
          }
          DesktopWorkArea = CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v31, v16);
          v9 = v30;
          v21 = *DesktopWorkArea;
        }
        else
        {
          v21 = *v23;
        }
      }
      else if ( *((_DWORD *)v16 + 32) == 1 )
      {
        v21 = *CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v32, v16);
      }
      else
      {
        v21 = (RECT)*((_OWORD *)v16 + 3);
      }
      *(RECT *)((char *)v16 + 852) = v21;
    }
    v8 = a3;
  }
  return CLivePreview::Activate((CLivePreview *)a1);
}
