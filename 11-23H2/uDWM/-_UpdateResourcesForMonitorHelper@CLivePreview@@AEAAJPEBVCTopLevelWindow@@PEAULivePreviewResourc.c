/*
 * XREFs of ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800C9578
 * Callers:
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800C9074 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 * Callees:
 *     ?CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z @ 0x1800068C4 (-CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x1800B34BC (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?CreateRoundRectRgnCoerceInvalid@@YAPEAUHRGN__@@HHHHHH@Z @ 0x1800C6AA8 (-CreateRoundRectRgnCoerceInvalid@@YAPEAUHRGN__@@HHHHHH@Z.c)
 *     ?GetCornerRadius@CTopLevelWindow@@QEBAHXZ @ 0x1800E58E8 (-GetCornerRadius@CTopLevelWindow@@QEBAHXZ.c)
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x1800E5B24 (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18010D900 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CLivePreview::_UpdateResourcesForMonitorHelper(
        CLivePreview *this,
        const struct CTopLevelWindow *a2,
        struct LivePreviewResource *a3)
{
  signed int v5; // edi
  BOOL v6; // ebx
  __int64 v7; // rax
  int v8; // ebx
  HRGN v9; // r14
  signed int LastError; // eax
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // r8d
  signed int v14; // eax
  int v15; // edx
  unsigned int v16; // ecx
  int v17; // r8d
  signed int v18; // eax
  HRGN v19; // rbx
  signed int v20; // eax
  HRGN v22; // [rsp+30h] [rbp-50h] BYREF
  HRGN RoundRectRgnCoerceInvalid; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-40h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-30h] BYREF
  RECT rc1; // [rsp+60h] [rbp-20h] BYREF

  v5 = 0;
  CTopLevelWindow::GetLivePreviewWindowRect(a2, &rcDst, 1);
  v6 = IntersectRect(&rcDst, &rcDst, (const RECT *)a3 + 7);
  if ( v6 && (*(_BYTE *)(*((_QWORD *)a2 + 94) + 675LL) & 1) == 0 )
    UnionRect((LPRECT)a3, (const RECT *)a3, &rcDst);
  v7 = *((_QWORD *)a2 + 94);
  if ( *(char *)(v7 + 674) >= 0 && *(_DWORD *)(v7 + 132) == 1 )
  {
    if ( v6 )
      UnionRect((LPRECT)((char *)a3 + 40), (const RECT *)((char *)a3 + 40), &rcDst);
    rcDst = *CTopLevelWindow::GetLivePreviewWindowRect(a2, &rc1, 0);
    if ( IntersectRect(&rcSrc2, &rcDst, (const RECT *)a3 + 7) )
    {
      if ( UnionRect(&rc1, (const RECT *)a3 + 5, &rcSrc2) && !EqualRect(&rc1, (const RECT *)a3 + 5) )
      {
        UnionRect((LPRECT)a3 + 5, (const RECT *)a3 + 5, &rcSrc2);
        v8 = 2 * CTopLevelWindow::GetCornerRadius(a2);
        SetLastError(0);
        RoundRectRgnCoerceInvalid = CreateRoundRectRgnCoerceInvalid(
                                      rcDst.left,
                                      rcDst.top,
                                      rcDst.right,
                                      rcDst.bottom,
                                      v8,
                                      v8);
        v9 = RoundRectRgnCoerceInvalid;
        if ( !RoundRectRgnCoerceInvalid )
        {
          LastError = GetLastError();
          v5 = LastError;
          if ( LastError > 0 )
            v5 = (unsigned __int16)LastError | 0x80070000;
          if ( v5 >= 0 )
            v5 = CheckGUIHandleQuota(v12, v11, v13);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x485u);
          return (unsigned int)v5;
        }
        if ( UnionRect(&rc1, &rcSrc2, &rcDst) && !EqualRect(&rc1, &rcDst) )
        {
          SetLastError(0);
          v22 = CreateRectRgnCoerceInvalid(&rcSrc2);
          if ( !v22 )
          {
            v14 = GetLastError();
            v5 = v14;
            if ( v14 > 0 )
              v5 = (unsigned __int16)v14 | 0x80070000;
            if ( v5 >= 0 )
              v5 = CheckGUIHandleQuota(v16, v15, v17);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x48Bu);
            return (unsigned int)v5;
          }
          SetLastError(0);
          if ( !CombineRgn(RoundRectRgnCoerceInvalid, RoundRectRgnCoerceInvalid, v22, 1) )
          {
            v18 = GetLastError();
            v5 = v18;
            if ( v18 > 0 )
              v5 = (unsigned __int16)v18 | 0x80070000;
            if ( v5 >= 0 )
              v5 = -2003304445;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x48Cu);
            return (unsigned int)v5;
          }
          ReleaseGDIObject<HRGN__ *>((void **)&v22);
        }
        v19 = (HRGN)*((_QWORD *)a3 + 12);
        SetLastError(0);
        if ( CombineRgn(v19, v19, v9, 2) )
        {
          ReleaseGDIObject<HRGN__ *>((void **)&RoundRectRgnCoerceInvalid);
        }
        else
        {
          v20 = GetLastError();
          v5 = v20;
          if ( v20 > 0 )
            v5 = (unsigned __int16)v20 | 0x80070000;
          if ( v5 >= 0 )
            v5 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x491u);
        }
      }
    }
  }
  return (unsigned int)v5;
}
