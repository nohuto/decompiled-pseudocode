/*
 * XREFs of ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x1800C61F8
 * Callers:
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x18001D564 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800152B0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@QEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800C5EA4 (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C65F8 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x1800C84BC (-_GetDesktopWorkArea@CLivePreview@@AEAA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180107D44 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CLivePreview::Activate(
        __int64 a1,
        HWND *a2,
        unsigned int a3,
        HWND a4,
        int a5,
        int a6,
        struct tagRECT *a7)
{
  struct tagRECT *v7; // rsi
  HWND *v10; // r12
  CDesktopManager *v11; // rax
  __int64 v12; // rdx
  __int64 i; // rcx
  unsigned int v14; // r13d
  struct tagRECT *j; // rdi
  struct _RTL_CRITICAL_SECTION *v16; // rbx
  HWND v17; // r12
  __int64 v18; // rsi
  unsigned int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // r9
  _BYTE *v22; // rdx
  unsigned int RecursionCount; // eax
  int v24; // ecx
  bool v25; // al
  HMONITOR v26; // rax
  HMONITOR v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // r9d
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // r9d
  __int64 v35; // r8
  struct tagRECT *DesktopWorkArea; // rax
  struct tagRECT v37; // xmm0
  signed int LastError; // eax
  struct _RTL_CRITICAL_SECTION *WindowDataByHwnd; // [rsp+30h] [rbp-81h] BYREF
  struct tagRECT *v41; // [rsp+38h] [rbp-79h]
  unsigned int v42; // [rsp+40h] [rbp-71h]
  struct tagRECT v43; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v44; // [rsp+58h] [rbp-59h] BYREF
  RECT rc1; // [rsp+68h] [rbp-49h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+78h] [rbp-39h] BYREF
  struct tagRECT Rect; // [rsp+A8h] [rbp-9h] BYREF

  v7 = a7;
  *(_QWORD *)&rc1.left = a2;
  v10 = a2;
  v42 = a3;
  *(_BYTE *)(a1 + 292) = 0;
  *(_BYTE *)(a1 + 291) = a5 == 4;
  *(_DWORD *)(a1 + 304) = a6;
  v11 = CDesktopManager::s_pDesktopManagerInstance;
  *(_WORD *)(a1 + 289) = 1;
  *(_DWORD *)(a1 + 536) = a5;
  v41 = a7;
  *(_QWORD *)(a1 + 520) = CWindowList::FindWindowDataByHwnd(*((CWindowList **)v11 + 54), a4);
  v12 = *(_QWORD *)(a1 + 504);
  for ( i = *(_QWORD *)(a1 + 496); i != v12; i += 8LL )
    *(_BYTE *)(*(_QWORD *)i + 678LL) &= ~2u;
  v14 = 0;
  *(_QWORD *)(a1 + 504) = *(_QWORD *)(a1 + 496);
  if ( !a3 )
    return CLivePreview::Activate((CLivePreview *)a1);
  for ( j = a7; ; ++j )
  {
    WindowDataByHwnd = (struct _RTL_CRITICAL_SECTION *)CWindowList::FindWindowDataByHwnd(
                                                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                         + 54),
                                                         *v10);
    v16 = WindowDataByHwnd;
    if ( !WindowDataByHwnd )
    {
      v17 = *v10;
      v18 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
      WindowDataByHwnd = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v19 = *(_DWORD *)(v18 + 520);
      v20 = 0LL;
      if ( v19 )
      {
        v21 = *(_QWORD *)(v18 + 496);
        while ( *(HWND *)(*(_QWORD *)(v21 + 8 * v20) + 40LL) != v17 )
        {
          v20 = (unsigned int)(v20 + 1);
          if ( (unsigned int)v20 >= v19 )
            goto LABEL_13;
        }
        v16 = *(struct _RTL_CRITICAL_SECTION **)(v21 + 8 * v20);
      }
LABEL_13:
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&WindowDataByHwnd);
      v10 = *(HWND **)&rc1.left;
      v7 = v41;
      WindowDataByHwnd = v16;
      if ( !v16 )
        goto LABEL_55;
    }
    if ( (v16[16].SpinCount & 4) == 0 )
    {
      v22 = *(_BYTE **)(a1 + 504);
      if ( v22 == *(_BYTE **)(a1 + 512) )
      {
        std::vector<CWindowData *>::_Emplace_reallocate<CWindowData * const &>(a1 + 496, v22, &WindowDataByHwnd);
        v16 = WindowDataByHwnd;
      }
      else
      {
        *(_QWORD *)v22 = v16;
        *(_QWORD *)(a1 + 504) += 8LL;
      }
      BYTE6(v16[16].SpinCount) |= 2u;
    }
    if ( (v16[2].SpinCount & 0x2000000000000000LL) != 0
      && !v16[12].DebugInfo
      && !CWindowData::GetMDIOwner((CWindowData *)v16) )
    {
      break;
    }
LABEL_25:
    if ( !*(_BYTE *)(a1 + 290) )
    {
      RecursionCount = v16[3].RecursionCount;
      v25 = 0;
      if ( RecursionCount <= 0xA )
      {
        v24 = 1282;
        if ( _bittest(&v24, RecursionCount) )
          v25 = 1;
      }
      *(_BYTE *)(a1 + 290) = v25;
    }
    if ( v7 && j->right > j->left && j->bottom > j->top )
    {
      if ( v16[3].RecursionCount == 1 )
      {
        v26 = MonitorFromWindow((HWND)v16[1].DebugInfo, 0);
        v27 = v26;
        if ( v26 )
        {
          v28 = *(_QWORD *)(a1 + 528);
          rc1 = 0LL;
          v29 = 0LL;
          v30 = *(_DWORD *)(v28 + 40);
          if ( v30 )
          {
            v31 = *(_QWORD *)(v28 + 16);
            while ( *(HMONITOR *)(v31 + 24 * v29 + 16) != v26 )
            {
              v29 = (unsigned int)(v29 + 1);
              if ( (unsigned int)v29 >= v30 )
                goto LABEL_42;
            }
            rc1 = *(RECT *)(v31 + 24 * v29);
          }
LABEL_42:
          if ( !EqualRect(&rc1, &v41[v14]) )
          {
            v32 = *(_QWORD *)(a1 + 528);
            v33 = 0LL;
            v34 = *(_DWORD *)(v32 + 40);
            if ( v34 )
            {
              v35 = *(_QWORD *)(v32 + 16);
              while ( *(HMONITOR *)(v35 + 24 * v33 + 16) != v27 )
              {
                v33 = (unsigned int)(v33 + 1);
                if ( (unsigned int)v33 >= v34 )
                  goto LABEL_49;
              }
              *(struct tagRECT *)(v35 + 24 * v33) = *j;
            }
          }
        }
LABEL_49:
        DesktopWorkArea = CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v43, (struct CWindowData *)v16);
        v7 = v41;
        v37 = *DesktopWorkArea;
      }
      else
      {
        v37 = *j;
      }
    }
    else if ( v16[3].RecursionCount == 1 )
    {
      v37 = *CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v44, (struct CWindowData *)v16);
    }
    else
    {
      v37 = *(struct tagRECT *)&v16[1].LockCount;
    }
    *(struct tagRECT *)((char *)&v16[19].LockSemaphore + 4) = v37;
LABEL_55:
    ++v10;
    ++v14;
    *(_QWORD *)&rc1.left = v10;
    if ( v14 >= v42 )
      return CLivePreview::Activate((CLivePreview *)a1);
  }
  wndpl.length = 44;
  memset(&wndpl.flags, 0, 40);
  SetLastError(0);
  if ( GetWindowPlacement((HWND)v16[1].DebugInfo, &wndpl) )
  {
    if ( (wndpl.flags & 2) == 0 )
    {
      Rect = 0LL;
      AdjustWindowRectEx(&Rect, HIDWORD(v16[2].SpinCount), 0, (DWORD)v16[3].DebugInfo);
    }
    goto LABEL_25;
  }
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError >= 0 )
    LastError = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, 0x361u);
  return CLivePreview::Activate((CLivePreview *)a1);
}
