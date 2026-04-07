/*
 * XREFs of ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x1800E5968
 * Callers:
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z @ 0x1800122C0 (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x1800C89C4 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x18000F370 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x1801063D8 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180107D90 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetLivePreviewVisual(
        struct CWindowData *a1,
        struct CTopLevelWindow **a2,
        struct CWindowIconic **a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  int WindowRestoreRect; // eax
  bool v8; // zf
  __int64 v9; // rdi
  signed int LastError; // eax
  __int64 v11; // rcx
  unsigned int v13; // [rsp+20h] [rbp-58h]
  __int128 v14; // [rsp+30h] [rbp-48h]
  struct tagRECT rc; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  if ( (*((_BYTE *)a1 + 673) & 1) != 0 )
    goto LABEL_17;
  v6 = *((_QWORD *)a1 + 60);
  if ( !v6 )
  {
    if ( *((_QWORD *)a1 + 55) && (*((_DWORD *)a1 + 29) & 0x20000000) == 0 )
    {
      WindowRestoreRect = CTopLevelWindow::CloneVisualTreeForLivePreview(*((CTopLevelWindow **)a1 + 55), 0, a2);
      v3 = WindowRestoreRect;
      if ( WindowRestoreRect < 0 )
      {
        v13 = 5588;
LABEL_19:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRestoreRect, v13);
        return v3;
      }
      return v3;
    }
LABEL_17:
    WindowRestoreRect = CWindowIconic::Create(a1, a3, 1);
    v3 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      v13 = 5567;
      goto LABEL_19;
    }
    *a2 = (struct CTopLevelWindow *)*((_QWORD *)*a3 + 11);
    v11 = *((_QWORD *)*a3 + 11);
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    return v3;
  }
  v8 = (*((_DWORD *)a1 + 29) & 0x20000000) == 0;
  v9 = *(_QWORD *)(v6 + 24);
  v14 = *(_OWORD *)(v9 + 676);
  rc = *(struct tagRECT *)(*(_QWORD *)(v6 + 32) + 48LL);
  if ( !v8 )
  {
    WindowRestoreRect = CWindowData::GetWindowRestoreRect(a1, &rc, 1);
    v3 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      v13 = 5578;
      goto LABEL_19;
    }
  }
  SetLastError(0);
  if ( OffsetRect(&rc, -(int)v14, -DWORD2(v14)) )
  {
    CVisual::SetOffset((struct tagPOINT *)v9, (const struct tagPOINT *)&rc);
    *a2 = (struct CTopLevelWindow *)v9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  }
  else
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    if ( (v3 & 0x80000000) == 0 )
      v3 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x15CDu);
  }
  return v3;
}
