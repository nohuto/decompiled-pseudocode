/*
 * XREFs of ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800057E8
 * Callers:
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180003D00 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 * Callees:
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800076C4 (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z @ 0x18002E7A8 (-CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z.c)
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x180040434 (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x1800777B0 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1800F4A44 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CLivePreview::_UpdateResourcesForMonitorHelper(
        CLivePreview *this,
        const struct CTopLevelWindow *a2,
        struct LivePreviewResource *a3)
{
  signed int v5; // edi
  BOOL v6; // esi
  CTopLevelWindow *v7; // rcx
  HRGN v9; // rsi
  HRGN v10; // rbx
  signed int v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  int v14; // r8d
  signed int v15; // eax
  int v16; // edx
  unsigned int v17; // ecx
  int v18; // r8d
  signed int v19; // eax
  signed int LastError; // eax
  HRGN v21; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT rcDst; // [rsp+38h] [rbp-38h] BYREF
  RECT rcSrc2; // [rsp+48h] [rbp-28h] BYREF
  RECT rc1; // [rsp+58h] [rbp-18h] BYREF

  v5 = 0;
  CTopLevelWindow::GetLivePreviewWindowRect(a2, &rcDst, 1);
  v6 = IntersectRect(&rcDst, &rcDst, (const RECT *)a3 + 7);
  if ( v6 && (*((_BYTE *)CTopLevelWindow::GetWindowData(a2) + 739) & 1) == 0 )
    UnionRect((LPRECT)a3, (const RECT *)a3, &rcDst);
  if ( *((char *)CTopLevelWindow::GetWindowData(a2) + 738) >= 0
    && *((_DWORD *)CTopLevelWindow::GetWindowData(v7) + 32) == 1 )
  {
    if ( v6 )
      UnionRect((LPRECT)((char *)a3 + 40), (const RECT *)((char *)a3 + 40), &rcDst);
    rcSrc2 = 0LL;
    rcDst = *CTopLevelWindow::GetLivePreviewWindowRect(a2, &rc1, 0);
    if ( IntersectRect(&rcSrc2, &rcDst, (const RECT *)a3 + 7) )
    {
      rc1 = 0LL;
      if ( UnionRect(&rc1, (const RECT *)a3 + 5, &rcSrc2) )
      {
        if ( !EqualRect(&rc1, (const RECT *)a3 + 5) )
        {
          UnionRect((LPRECT)a3 + 5, (const RECT *)a3 + 5, &rcSrc2);
          SetLastError(0);
          v9 = CreateRectRgnCoerceInvalid(&rcDst);
          if ( v9 )
          {
            if ( !UnionRect(&rc1, &rcSrc2, &rcDst) || EqualRect(&rc1, &rcDst) )
            {
LABEL_13:
              v10 = (HRGN)*((_QWORD *)a3 + 12);
              SetLastError(0);
              if ( CombineRgn(v10, v10, v9, 2) )
              {
                DeleteObject(v9);
              }
              else
              {
                LastError = GetLastError();
                v5 = LastError;
                if ( LastError > 0 )
                  v5 = (unsigned __int16)LastError | 0x80070000;
                if ( v5 >= 0 )
                  v5 = -2003304445;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x48Eu, 0LL);
              }
              return (unsigned int)v5;
            }
            SetLastError(0);
            v21 = CreateRectRgnCoerceInvalid(&rcSrc2);
            if ( v21 )
            {
              SetLastError(0);
              if ( CombineRgn(v9, v9, v21, 1) )
              {
                ReleaseGDIObject<HRGN__ *>(&v21);
                goto LABEL_13;
              }
              v19 = GetLastError();
              v5 = v19;
              if ( v19 > 0 )
                v5 = (unsigned __int16)v19 | 0x80070000;
              if ( v5 >= 0 )
                v5 = -2003304445;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x489u, 0LL);
            }
            else
            {
              v15 = GetLastError();
              v5 = v15;
              if ( v15 > 0 )
                v5 = (unsigned __int16)v15 | 0x80070000;
              if ( v5 >= 0 )
                v5 = CheckGUIHandleQuota(v17, v16, v18);
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x488u, 0LL);
            }
          }
          else
          {
            v11 = GetLastError();
            v5 = v11;
            if ( v11 > 0 )
              v5 = (unsigned __int16)v11 | 0x80070000;
            if ( v5 >= 0 )
              v5 = CheckGUIHandleQuota(v13, v12, v14);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x482u, 0LL);
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
