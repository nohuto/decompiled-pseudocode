/*
 * XREFs of xxxDrawCaptionBar @ 0x14006E51C
 * Callers:
 *     xxxRedrawTitle @ 0x1400677A8 (xxxRedrawTitle.c)
 *     xxxDWP_DoNCActivate @ 0x14006CB5C (xxxDWP_DoNCActivate.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     xxxDrawWindowFrame @ 0x140255644 (xxxDrawWindowFrame.c)
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     GetRect @ 0x1400355F0 (GetRect.c)
 *     IsVisible @ 0x140036A48 (IsVisible.c)
 *     DrawEdge @ 0x140037D18 (DrawEdge.c)
 *     GrePolyPatBlt @ 0x1400382E8 (GrePolyPatBlt.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     GetAppCompatFlags2 @ 0x140049EF0 (GetAppCompatFlags2.c)
 *     GetWindowBorders @ 0x14006E4E8 (GetWindowBorders.c)
 *     xxxMNCanClose @ 0x1400708B0 (xxxMNCanClose.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetResizeBorderWidthForDpi @ 0x140079418 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x140079440 (GetWindowFrameMetricForDpi.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     BitBltSysBmp @ 0x14007B288 (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x14007B544 (GetOemBitmapInfoForDpi.c)
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 *     IS_UI_LANGID @ 0x14007BEC8 (IS_UI_LANGID.c)
 *     GrePatBlt @ 0x1400C4060 (GrePatBlt.c)
 *     DrawFrame @ 0x1401EA350 (DrawFrame.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140204AAC (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall xxxDrawCaptionBar(struct tagWND *a1, HDC a2, int a3)
{
  char v3; // bl
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // edi
  char v21; // al
  unsigned int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned int WindowDpiLastNotify; // eax
  unsigned int v28; // eax
  int DpiDependentMetric; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // r15d
  unsigned int v37; // eax
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // eax
  int v44; // eax
  int v45; // edx
  unsigned int DpiForSystem; // eax
  __int64 v47; // r8
  BOOL v48; // ecx
  unsigned int v49; // eax
  __int64 v50; // rcx
  unsigned int WindowFrameMetricForDpi; // eax
  __int64 v52; // rcx
  unsigned int v53; // r8d
  __int64 v54; // rcx
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // r15d
  int v58; // ecx
  int v59; // edx
  __int64 v60; // r8
  __int64 v61; // rax
  unsigned int v62; // eax
  unsigned int v63; // ebx
  int v64; // ebx
  int v65; // eax
  HDC v66; // r13
  __int16 *OemBitmapInfoForDpi; // r15
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v71; // [rsp+20h] [rbp-99h]
  unsigned int v72; // [rsp+60h] [rbp-59h]
  unsigned int v73; // [rsp+64h] [rbp-55h]
  int v74; // [rsp+64h] [rbp-55h]
  int v75; // [rsp+64h] [rbp-55h]
  int v76; // [rsp+68h] [rbp-51h]
  unsigned int v78; // [rsp+70h] [rbp-49h]
  int v79; // [rsp+74h] [rbp-45h]
  __int64 v80; // [rsp+78h] [rbp-41h]
  __int64 v81; // [rsp+80h] [rbp-39h]
  __int64 v82; // [rsp+88h] [rbp-31h]
  int v83; // [rsp+90h] [rbp-29h] BYREF
  int v84; // [rsp+94h] [rbp-25h]
  int v85; // [rsp+98h] [rbp-21h]
  int v86; // [rsp+9Ch] [rbp-1Dh]
  __int64 v87; // [rsp+A0h] [rbp-19h]
  int v88; // [rsp+A8h] [rbp-11h]
  int v89; // [rsp+ACh] [rbp-Dh]
  int v90; // [rsp+B0h] [rbp-9h]
  int v91; // [rsp+B4h] [rbp-5h]
  __int64 v92; // [rsp+B8h] [rbp-1h]
  __int64 v93[2]; // [rsp+C0h] [rbp+7h] BYREF

  v76 = 0;
  v3 = a3;
  v82 = 0LL;
  *(_OWORD *)v93 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    LODWORD(v6) = IsVisible((__int64)a1);
    if ( !(_DWORD)v6 )
      return v6;
  }
  GetRect((__int64)a1, (__int64)v93, 34);
  if ( !*(_DWORD *)(W32GetUserSessionState(v8, v7) + 43304) )
  {
    v10 = *(_DWORD *)(W32GetUserSessionState(v10, v9) + 67060) & 0x80000010;
    if ( (_DWORD)v10 == -2147483632 )
    {
      v11 = v3 & 1;
      if ( (v3 & 1) != 0 )
        v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19928) + 4912LL);
      else
        v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19928) + 4920LL);
      v79 = 1;
      goto LABEL_8;
    }
  }
  v79 = 0;
  v11 = v3 & 1;
  if ( (v3 & 1) == 0 )
  {
    v79 = 0;
    v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19928) + 4720LL);
LABEL_8:
    v80 = v12;
    goto LABEL_9;
  }
  v80 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19928) + 4712LL);
LABEL_9:
  v13 = *((_QWORD *)a1 + 5);
  v14 = *(_DWORD *)(v13 + 288) & 0xF;
  if ( v14 == 3 )
  {
    v72 = (*(_DWORD *)(v13 + 288) >> 8) & 0x1FF;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(v13 + 232) & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
    goto LABEL_26;
  }
  if ( v14
    || (v61 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) == 0
    || (*(_DWORD *)(**(_QWORD **)(v61 + 8) + 64LL) & 1) == 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
LABEL_26:
    v72 = WindowDpiLastNotify;
    goto LABEL_11;
  }
  v72 = 96;
LABEL_11:
  v15 = xxxMNCanClose(a1);
  v18 = *((_QWORD *)a1 + 5);
  LOBYTE(v19) = *(_BYTE *)(v18 + 30);
  v20 = v15 == 0 ? 0x10 : 0;
  v21 = *(_BYTE *)(v18 + 31);
  v22 = 8;
  if ( (v19 & 1) != 0 )
  {
    if ( (v21 & 1) != 0 )
      v20 |= 2u;
  }
  else
  {
    v20 |= 8u;
  }
  if ( (v19 & 2) != 0 )
  {
    if ( (v21 & 0x20) == 0 )
      goto LABEL_15;
    v20 |= 1u;
LABEL_42:
    if ( (a3 & 0x8000) != 0 )
    {
      DrawEdge(a2, (__m128i *)v93, 5u, 8207);
      DrawFrame(a2, v93, 1LL, 120LL);
      ++LODWORD(v93[0]);
      --LODWORD(v93[1]);
      ++HIDWORD(v93[0]);
    }
    else
    {
      LODWORD(v93[0]) += 3;
      LODWORD(v93[1]) -= 3;
      HIDWORD(v93[0]) += 3;
    }
    DpiForSystem = GetDpiForSystem(v18, v19, v16, v17);
    HIDWORD(v93[1]) = HIDWORD(v93[0]) + GetDpiDependentMetric(13LL, DpiForSystem);
    v82 = GreSelectBrush(a2, v80, v47);
    goto LABEL_34;
  }
  v20 |= 4u;
  if ( (v21 & 0x20) != 0 )
    goto LABEL_42;
LABEL_15:
  if ( (*(_BYTE *)(v18 + 25) & 3) == 0 || (*(_BYTE *)(v18 + 20) & 8) != 0 )
  {
    v73 = 48;
    v81 = 4744LL;
  }
  else
  {
    v73 = 120;
    v81 = 4816LL;
  }
  if ( (a3 & 0x8000) != 0 )
  {
    v49 = GetDpiForSystem(v18, v19, v16, v17);
    WindowFrameMetricForDpi = GetWindowFrameMetricForDpi(v50, v49);
    v24 = WindowFrameMetricForDpi;
    v78 = WindowFrameMetricForDpi;
    v6 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v6 + 25) & 1) != 0 )
    {
      v53 = 5;
    }
    else
    {
      if ( (*(_BYTE *)(v6 + 26) & 2) == 0 )
      {
LABEL_56:
        v23 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v23 + 30) & 4) != 0
          || (int)v24 > 0
          && (v23 = *(unsigned int *)(v23 + 28),
              LOBYTE(v6) = (v23 & 0x40000) == 0,
              (((v23 & 0xC00000) != 12582912) & (unsigned __int8)v6) == 0)
          && (LODWORD(v6) = GetAppCompatFlags2(39168LL, v23), (v6 & 0x30000000) == 0) )
        {
          v62 = GetDpiForSystem(v52, v23, v24, v25);
          v63 = v78 + GetResizeBorderWidthForDpi(v62);
          LOBYTE(v6) = DrawFrame(a2, v93, v63, 8 * (v11 ^ 1u) + 80);
          v64 = -v63;
          LODWORD(v93[0]) -= v64;
          LODWORD(v93[1]) += v64;
          HIDWORD(v93[0]) -= v64;
          HIDWORD(v93[1]) += v64;
        }
        v54 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v54 + 30) & 0xC0) != 0 || (*(_BYTE *)(v54 + 24) & 1) != 0 )
        {
          LOBYTE(v6) = DrawFrame(a2, v93, 1LL, v73);
          ++LODWORD(v93[0]);
          --LODWORD(v93[1]);
          ++HIDWORD(v93[0]);
          --HIDWORD(v93[1]);
        }
        goto LABEL_19;
      }
      v53 = 2;
    }
    LOBYTE(v6) = DrawEdge(a2, (__m128i *)v93, v53, 8207);
    v24 = v78;
    goto LABEL_56;
  }
  LODWORD(v6) = -(int)GetWindowBorders(*(unsigned int *)(v18 + 28), *(unsigned int *)(v18 + 24), v16, v17);
  LODWORD(v93[0]) -= v6;
  LODWORD(v93[1]) += v6;
  HIDWORD(v93[0]) -= v6;
  HIDWORD(v93[1]) += v6;
LABEL_19:
  v26 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v26 + 16) & 8) == 0 )
    return v6;
  if ( *(char *)(v26 + 24) < 0 )
  {
    v20 |= 0x20u;
    v55 = GetDpiForSystem(v26, v23, v24, v25);
    DpiDependentMetric = GetDpiDependentMetric(24LL, v55);
    v76 = 41;
  }
  else
  {
    v28 = GetDpiForSystem(v26, v23, v24, v25);
    DpiDependentMetric = GetDpiDependentMetric(13LL, v28);
  }
  HIDWORD(v93[1]) = HIDWORD(v93[0]) + DpiDependentMetric;
  v84 = HIDWORD(v93[0]) + DpiDependentMetric;
  v83 = v93[0];
  v85 = LODWORD(v93[1]) - LODWORD(v93[0]);
  v86 = 1;
  v87 = *(_QWORD *)(v81 + *(_QWORD *)(W32GetUserSessionState(LODWORD(v93[0]), v30) + 19928));
  GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)&v83, 1);
  GreSelectBrush(a2, v80, v31);
LABEL_34:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) == 0 )
    goto LABEL_49;
  v36 = 1;
  v37 = GetDpiForSystem(v33, v32, v34, v35);
  v38 = GetDpiDependentMetric(12LL, v37);
  v43 = GetDpiForSystem(v40, v39, v41, v42);
  v44 = GetDpiDependentMetric(23LL, v43);
  v74 = v44;
  if ( (a3 & 0x1000) != 0 )
  {
    if ( v20 )
    {
      if ( v20 != 12 )
      {
        HIDWORD(v93[1]) -= 2;
        v71 = HIDWORD(v93[1]) - (HIDWORD(v93[0]) + 2);
        HIDWORD(v93[0]) += 2;
        LODWORD(v93[1]) -= 2;
        GrePatBlt(a2, v93[1], SHIDWORD(v93[0]), 2, v71, 15728673);
        v56 = v76;
        if ( (v20 & 0x10) != 0 )
          v56 = v76 + 3;
        LODWORD(v93[1]) -= *(__int16 *)(GetOemBitmapInfoForDpi(v56, v72) + 4);
        BitBltSysBmp(a2, 1);
        if ( (v20 & 0xC) != 12 && (v20 & 0x20) == 0 )
        {
          LODWORD(v93[1]) -= 2;
          GrePatBlt(a2, v93[1], SHIDWORD(v93[0]), 2, HIDWORD(v93[1]) - HIDWORD(v93[0]), 15728673);
          if ( (v20 & 2) != 0 )
            v57 = 8;
          else
            v57 = (v20 & 8) != 0 ? 17 : 14;
          LODWORD(v93[1]) -= *(__int16 *)(GetOemBitmapInfoForDpi(v57, v72) + 4);
          BitBltSysBmp(a2, 1);
          if ( (v20 & 1) == 0 )
            v22 = (v20 & 4) != 0 ? 7 : 4;
          LODWORD(v93[1]) -= *(__int16 *)(GetOemBitmapInfoForDpi(v22, v72) + 4);
          BitBltSysBmp(a2, 1);
          LODWORD(v93[1]) -= 2;
          GrePatBlt(a2, v93[1], SHIDWORD(v93[0]), 2, HIDWORD(v93[1]) - HIDWORD(v93[0]), 15728673);
          v36 = 3;
        }
        if ( (v20 & 0x1C) != 0 && (v20 & 0x20) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
        {
          LODWORD(v93[1]) -= 2;
          GrePatBlt(a2, v93[1], SHIDWORD(v93[0]), 2, HIDWORD(v93[1]) - HIDWORD(v93[0]), 15728673);
          LODWORD(v93[1]) -= *(__int16 *)(GetOemBitmapInfoForDpi(11LL, v72) + 4);
          BitBltSysBmp(a2, 1);
          ++v36;
        }
        v58 = HIDWORD(v93[0]) - 2;
        v59 = HIDWORD(v93[1]) + 2;
        v83 = v93[1];
        v88 = v93[1];
        HIDWORD(v93[0]) -= 2;
        if ( (v20 & 0x20) != 0 )
          v38 = v74;
        v87 = 0LL;
        v92 = 0LL;
        HIDWORD(v93[1]) += 2;
        v84 = v58;
        v86 = 2;
        v89 = v59 - 2;
        v85 = v38 * v36;
        v90 = v38 * v36;
        v91 = 2;
        GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)&v83, 2);
        if ( v82 )
          GreSelectBrush(a2, v82, v60);
        goto LABEL_49;
      }
      v65 = v38 + 2;
    }
    else
    {
      v65 = 3 * v38;
    }
    v75 = v65;
    v66 = PrepareHDCBITSBitmap(0LL);
    if ( v66 )
    {
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)!(a3 & 1) + 39, v72);
      LODWORD(v93[1]) -= v75;
      GreBitBltInternal(
        a2,
        v93[1],
        SHIDWORD(v93[0]),
        v75,
        OemBitmapInfoForDpi[3],
        v66,
        OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - v75 - v38,
        OemBitmapInfoForDpi[1],
        0xCC0020u,
        0,
        0);
      if ( v20 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
        {
          LODWORD(v93[1]) += 2 - v38;
          GreBitBltInternal(
            a2,
            v93[1],
            SHIDWORD(v93[0]),
            v38,
            OemBitmapInfoForDpi[3],
            v66,
            OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - v38,
            OemBitmapInfoForDpi[1],
            0xCC0020u,
            0,
            0);
          if ( ((unsigned int)IS_UI_LANGID()
             || *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v69, v68) + 19928) + 7012LL) == 1037)
            && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
          {
            GreBitBltInternal(
              a2,
              LODWORD(v93[1]) - 2,
              HIDWORD(v93[0]) + 2,
              v38 - 4,
              OemBitmapInfoForDpi[3] - 4,
              v66,
              *OemBitmapInfoForDpi + OemBitmapInfoForDpi[2] - v38 + 2,
              OemBitmapInfoForDpi[1] + 2,
              0x80CC0020,
              0,
              0);
          }
        }
      }
    }
    goto LABEL_49;
  }
  if ( !v20 || (v20 & 0xC) != 12 && (v20 & 0x20) == 0 )
  {
    v45 = v93[1];
    v36 = 3;
  }
  else
  {
    v45 = LODWORD(v93[1]) - 2;
    LODWORD(v93[1]) -= 2;
    if ( v20 == 12 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
        v36 = 2;
      goto LABEL_47;
    }
  }
  if ( (v20 & 0x20) == 0 )
LABEL_47:
    v44 = v38;
  LODWORD(v93[1]) = v45 - v36 * v44;
LABEL_49:
  LOBYTE(v6) = a3;
  if ( (a3 & 0xC) != 0 )
  {
    v48 = xxxDrawCaptionTemp(a1, a2, (__int64)v93, 0LL, 0LL, a3 | (32 * v79) | (v20 >> 4) & 2) == 0;
    LOBYTE(v6) = SetOrClrWF(v48, a1, 0x708u, 1);
  }
  return v6;
}
