/*
 * XREFs of ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180034C24
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18003B874 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18001A7F4 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x18001AA6C (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ @ 0x180034788 (-DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ.c)
 *     ?SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x180034F34 (-SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x180034FBC (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x1800350A4 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800354B0 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18006D732 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x1800B34BC (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z @ 0x1800C5C20 (-SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x1800C5CDC (-SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 *     ?CreateRoundRectRgnCoerceInvalid@@YAPEAUHRGN__@@HHHHHH@Z @ 0x1800C6AA8 (-CreateRoundRectRgnCoerceInvalid@@YAPEAUHRGN__@@HHHHHH@Z.c)
 *     ?EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ @ 0x1800E56E4 (-EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18010D900 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaGeometry(CTopLevelWindow *this)
{
  HRGN v2; // r14
  HRGN v3; // rdi
  int v4; // eax
  int v5; // ecx
  int v6; // r15d
  int v7; // r12d
  int v8; // r13d
  __int64 v9; // rax
  CLegacyNonClientBackground *v10; // rbx
  CBaseObject *v11; // rcx
  int v12; // r14d
  int v13; // r12d
  int v14; // r15d
  int v15; // ebx
  int v16; // ecx
  HRGN RectRgn; // rax
  int v18; // eax
  signed int v19; // ebx
  int v20; // eax
  HRGN v21; // r12
  __int64 v23; // rax
  int v24; // ecx
  int v25; // edx
  int v26; // r8d
  int v27; // ebx
  bool v28; // sf
  int v29; // eax
  int v30; // ecx
  int v31; // ecx
  CTopLevelWindow *v32; // rcx
  int v33; // r9d
  int MustBeOpaque; // eax
  int v35; // r12d
  LONG v36; // ebx
  int v37; // r10d
  int v38; // eax
  int v39; // eax
  int v40; // r11d
  HRGN RoundRectRgnCoerceInvalid; // rax
  signed int v42; // eax
  int v43; // edx
  unsigned int v44; // ecx
  int v45; // r8d
  int v46; // eax
  int v47; // eax
  signed int v48; // eax
  int v49; // eax
  signed int v50; // eax
  int v51; // edx
  unsigned int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  signed int LastError; // eax
  unsigned int v56; // [rsp+28h] [rbp-69h]
  unsigned int v57; // [rsp+28h] [rbp-69h]
  HRGN ho; // [rsp+38h] [rbp-59h]
  int hoa; // [rsp+38h] [rbp-59h]
  HRGN hrgnDst; // [rsp+40h] [rbp-51h] BYREF
  int v61; // [rsp+48h] [rbp-49h]
  int v62; // [rsp+4Ch] [rbp-45h]
  int v63; // [rsp+50h] [rbp-41h]
  int v64; // [rsp+54h] [rbp-3Dh]
  struct tagRECT rc; // [rsp+58h] [rbp-39h] BYREF
  struct tagRECT Src; // [rsp+68h] [rbp-29h] BYREF
  struct tagRECT v67; // [rsp+78h] [rbp-19h] BYREF
  LONG v68; // [rsp+88h] [rbp-9h]
  int v69; // [rsp+8Ch] [rbp-5h]
  int v70; // [rsp+90h] [rbp-1h]
  int v71; // [rsp+94h] [rbp+3h]
  int v72; // [rsp+98h] [rbp+7h]
  int v73; // [rsp+9Ch] [rbp+Bh]
  LONG right; // [rsp+A0h] [rbp+Fh]
  int v75; // [rsp+A4h] [rbp+13h]
  LONG v76; // [rsp+A8h] [rbp+17h]
  int v77; // [rsp+ACh] [rbp+1Bh]
  int v78; // [rsp+B0h] [rbp+1Fh]
  int v79; // [rsp+B4h] [rbp+23h]

  ho = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  hrgnDst = 0LL;
  *(_QWORD *)&Src.left = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
                           *((_DWORD *)this + 156),
                           1,
                           (*(_BYTE *)(*((_QWORD *)this + 94) + 675LL) & 0x10) != 0);
  rc = *(struct tagRECT *)(*((_QWORD *)this + 94) + 48LL);
  rc.left = _mm_cvtsi128_si32((__m128i)rc);
  OffsetRect(&rc, -rc.left, -rc.top);
  rc.right -= *((_DWORD *)this + 166);
  rc.top += *((_DWORD *)this + 167);
  rc.bottom -= *((_DWORD *)this + 168);
  v4 = *((_DWORD *)this + 163) - *((_DWORD *)this + 167);
  v5 = *((_DWORD *)this + 165);
  rc.left += v5;
  v6 = *((_DWORD *)this + 161) - v5;
  v7 = *((_DWORD *)this + 164) - *((_DWORD *)this + 168);
  v8 = *((_DWORD *)this + 162) - *((_DWORD *)this + 166);
  v62 = v4;
  v64 = v7;
  v61 = (int)((double)dword_180148440 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 53));
  if ( !CDesktopManager::IsHighContrastMode() )
  {
    v9 = *((_QWORD *)this + 94);
    if ( (*(_DWORD *)(v9 + 96) || *(_DWORD *)(v9 + 100) || *(_DWORD *)(v9 + 108)) && (*(_BYTE *)(v9 + 673) & 4) == 0 )
    {
      CTopLevelWindow::GetActualWindowRect(this, &Src, 1, 1, 0);
      v49 = CLegacyNonClientBackground::SetBorderRegion(*((CLegacyNonClientBackground **)this + 39), &Src);
      v19 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9A8, 0xAu, v49, 0x138Cu, 0LL);
        return (unsigned int)v19;
      }
    }
    else
    {
      v10 = (CLegacyNonClientBackground *)*((_QWORD *)this + 39);
      v11 = (CBaseObject *)*((_QWORD *)v10 + 40);
      if ( v11 )
      {
        *((_QWORD *)v10 + 40) = 0LL;
        CBaseObject::Release(v11);
        CLegacyNonClientBackground::DirtyForRebuild(v10);
      }
    }
LABEL_6:
    if ( v6 < 0 )
      v6 = 0;
    v12 = rc.top + v61;
    v13 = v6 + rc.left;
    Src.left = v6 + rc.left;
    if ( v8 < 0 )
      v8 = 0;
    Src.top = rc.top + v61;
    v14 = rc.top + v62;
    v15 = rc.right - v8;
    Src.right = rc.right - v8;
    Src.bottom = rc.top + v62;
    SetLastError(0);
    v16 = 0x7FFFFFF;
    if ( v14 <= -134217728 )
    {
      v14 = -134217728;
    }
    else if ( v14 >= 0x7FFFFFF )
    {
      v14 = 0x7FFFFFF;
    }
    if ( v15 <= -134217728 )
    {
      v15 = -134217728;
    }
    else if ( v15 >= 0x7FFFFFF )
    {
      v15 = 0x7FFFFFF;
    }
    if ( v12 <= -134217728 )
    {
      v12 = -134217728;
    }
    else if ( v12 >= 0x7FFFFFF )
    {
      v12 = 0x7FFFFFF;
    }
    if ( v13 <= -134217728 )
    {
      v13 = -134217728;
    }
    else if ( v13 >= 0x7FFFFFF )
    {
      goto LABEL_22;
    }
    v16 = v13;
LABEL_22:
    RectRgn = CreateRectRgn(v16, v12, v15, v14);
    v2 = RectRgn;
    if ( RectRgn )
    {
      v18 = CTopLevelWindow::ApplyMaximizedClip(this, RectRgn);
      v19 = v18;
      if ( v18 < 0 )
      {
        v57 = 5021;
LABEL_98:
        v54 = v18;
        goto LABEL_99;
      }
      v20 = HrgnFromRects(&Src, 1u, &hrgnDst);
      v19 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9A8, 0xAu, v20, 0x13A3u, 0LL);
        v3 = hrgnDst;
        goto LABEL_27;
      }
      SetLastError(0);
      v3 = hrgnDst;
      if ( CombineRgn(hrgnDst, hrgnDst, v2, 1) )
      {
        v18 = CLegacyNonClientBackground::SetCaptionRegion(*((CLegacyNonClientBackground **)this + 39), v3);
        v19 = v18;
        if ( v18 >= 0 )
        {
LABEL_27:
          v21 = ho;
          goto LABEL_28;
        }
        v57 = 5030;
        goto LABEL_98;
      }
      LastError = GetLastError();
      v19 = LastError;
      if ( LastError > 0 )
        v19 = (unsigned __int16)LastError | 0x80070000;
      v57 = 5029;
      if ( v19 >= 0 )
        v19 = -2003304445;
    }
    else
    {
      v50 = GetLastError();
      v19 = v50;
      if ( v50 > 0 )
        v19 = (unsigned __int16)v50 | 0x80070000;
      if ( v19 >= 0 )
        v19 = CheckGUIHandleQuota(v52, v51, v53);
      v57 = 5019;
    }
    v54 = v19;
LABEL_99:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9A8, 0xAu, v54, v57, 0LL);
    goto LABEL_27;
  }
  v23 = *((_QWORD *)this + 46);
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( v23 )
  {
    v24 = *(_DWORD *)(v23 + 24);
    v25 = *(_DWORD *)(*((_QWORD *)this + 47) + 24LL);
    v26 = *(_DWORD *)(*((_QWORD *)this + 49) + 28LL);
  }
  v27 = 0;
  v28 = v6 - v24 < 0;
  v29 = v6 - v24;
  v30 = 0;
  if ( !v28 )
    v27 = v29;
  if ( v8 - v25 >= 0 )
    v30 = v8 - v25;
  v63 = v30;
  v31 = 0;
  if ( v7 - v26 >= 0 )
    v31 = v7 - v26;
  hoa = v31;
  if ( CTopLevelWindow::TreatAsActiveWindow(this)
    || (MustBeOpaque = CTopLevelWindow::EdgeBorderMustBeOpaque(v32), v33 = 0, MustBeOpaque) )
  {
    v35 = v33;
  }
  else
  {
    v35 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 53);
  }
  v36 = v35 + rc.left + v27;
  v67.top = rc.top + v35;
  v67.right = rc.right - v63 - v35;
  v37 = rc.bottom - v64;
  v70 = v6 + rc.left;
  v38 = rc.bottom - v64;
  right = v67.right;
  if ( rc.top + v62 > rc.bottom - v64 )
    v38 = rc.top + v62;
  v78 = rc.right - v63 - v35;
  v71 = v38;
  v67.left = v36;
  v39 = rc.bottom - v64;
  v67.bottom = rc.top + v61;
  if ( rc.top + v62 > v37 )
    v39 = rc.top + v62;
  v68 = v36;
  v69 = rc.top + v61;
  v72 = rc.right - v8;
  v73 = rc.top + v61;
  if ( v37 < 0 )
    v37 = 0;
  v75 = v39;
  v40 = rc.bottom - hoa - v35;
  v76 = v36;
  v77 = v37;
  if ( v40 < 0 )
    v40 = 0;
  v79 = v40;
  SetLastError(0);
  RoundRectRgnCoerceInvalid = CreateRoundRectRgnCoerceInvalid(
                                rc.left,
                                rc.top,
                                rc.right,
                                rc.bottom,
                                2 * *(_DWORD *)(*(_QWORD *)&Src.left + 1864LL),
                                2 * *(_DWORD *)(*(_QWORD *)&Src.left + 1864LL));
  ho = RoundRectRgnCoerceInvalid;
  v21 = RoundRectRgnCoerceInvalid;
  if ( RoundRectRgnCoerceInvalid )
  {
    v46 = CTopLevelWindow::ApplyMaximizedClip(this, RoundRectRgnCoerceInvalid);
    v19 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9A8, 0xAu, v46, 0x1379u, 0LL);
LABEL_62:
      DeleteObject(v21);
LABEL_31:
      if ( v2 )
        DeleteObject(v2);
      return (unsigned int)v19;
    }
    v47 = HrgnFromRects(&v67, 4u, &hrgnDst);
    v19 = v47;
    if ( v47 >= 0 )
    {
      SetLastError(0);
      v3 = hrgnDst;
      if ( CombineRgn(hrgnDst, hrgnDst, v21, 1) )
      {
        v19 = CLegacyNonClientBackground::SetBorderRegion(*((CLegacyNonClientBackground **)this + 39), v3);
        if ( v19 >= 0 )
        {
          ReleaseGDIObject<HRGN__ *>(&hrgnDst);
          v3 = hrgnDst;
          goto LABEL_6;
        }
        v56 = 4994;
      }
      else
      {
        v48 = GetLastError();
        v19 = v48;
        if ( v48 > 0 )
          v19 = (unsigned __int16)v48 | 0x80070000;
        v56 = 4993;
        if ( v19 >= 0 )
          v19 = -2003304445;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9A8, 0xAu, v19, v56, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9A8, 0xAu, v47, 0x137Fu, 0LL);
      v3 = hrgnDst;
    }
LABEL_28:
    if ( v3 )
      DeleteObject(v3);
    if ( !v21 )
      goto LABEL_31;
    goto LABEL_62;
  }
  v42 = GetLastError();
  v19 = v42;
  if ( v42 > 0 )
    v19 = (unsigned __int16)v42 | 0x80070000;
  if ( v19 >= 0 )
    v19 = CheckGUIHandleQuota(v44, v43, v45);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9A8, 0xAu, v19, 0x1377u, 0LL);
  return (unsigned int)v19;
}
