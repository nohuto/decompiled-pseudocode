/*
 * XREFs of xxxDrawCaptionBar @ 0x1C00E2158
 * Callers:
 *     xxxRedrawTitle @ 0x1C00E0970 (xxxRedrawTitle.c)
 *     xxxDWP_DoNCActivate @ 0x1C00E1260 (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x1C00E28A0 (xxxDrawWindowFrame.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 * Callees:
 *     PrepareHDCBITSBitmap @ 0x1C0016A3C (PrepareHDCBITSBitmap.c)
 *     GrePolyPatBlt @ 0x1C0046320 (GrePolyPatBlt.c)
 *     DrawEdge @ 0x1C004650C (DrawEdge.c)
 *     BitBltSysBmp @ 0x1C0076710 (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C007684C (GetOemBitmapInfoForDpi.c)
 *     IS_UI_LANGID @ 0x1C00768A8 (IS_UI_LANGID.c)
 *     GetResizeBorderWidthForDpi @ 0x1C0080754 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00890EC (GetWindowFrameMetricForDpi.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     NtGdiPatBlt @ 0x1C00BD720 (NtGdiPatBlt.c)
 *     GetRect @ 0x1C00E1ED0 (GetRect.c)
 *     GetWindowBorders @ 0x1C00E2338 (GetWindowBorders.c)
 *     IsVisible @ 0x1C00E2A5C (IsVisible.c)
 *     xxxMNCanClose @ 0x1C00E47A8 (xxxMNCanClose.c)
 *     GetDpiDependentMetric @ 0x1C00E91E0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00EB100 (GetDpiForSystem.c)
 *     GetWindowDpiLastNotify @ 0x1C00EDCC0 (GetWindowDpiLastNotify.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     xxxDrawCaptionTemp @ 0x1C022B7E4 (xxxDrawCaptionTemp.c)
 *     DrawFrame @ 0x1C024BD88 (DrawFrame.c)
 */

char __fastcall xxxDrawCaptionBar(const struct tagWND *a1, HDC a2, int a3)
{
  char v3; // bl
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v11; // rdx
  unsigned int v12; // edi
  unsigned int v13; // r13d
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int DpiForSystem; // eax
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r8d
  __int64 v25; // rcx
  unsigned int v26; // eax
  int v27; // ebx
  int v28; // ebx
  __int64 v29; // rcx
  unsigned int v30; // eax
  int DpiDependentMetric; // eax
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // r15d
  unsigned int v35; // eax
  int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  int v42; // edx
  unsigned int v43; // eax
  unsigned int v44; // r15d
  int v45; // ecx
  int v46; // edx
  int v47; // eax
  __int64 v48; // r13
  __int16 *OemBitmapInfoForDpi; // r15
  BOOL v50; // ecx
  int v52; // [rsp+20h] [rbp-B9h]
  int v53; // [rsp+20h] [rbp-B9h]
  int v54; // [rsp+20h] [rbp-B9h]
  unsigned int v55; // [rsp+60h] [rbp-79h]
  int v56; // [rsp+64h] [rbp-75h]
  int v57; // [rsp+64h] [rbp-75h]
  unsigned int v58; // [rsp+68h] [rbp-71h]
  int v60; // [rsp+70h] [rbp-69h]
  int v61; // [rsp+74h] [rbp-65h]
  int v62; // [rsp+78h] [rbp-61h]
  __int64 v63; // [rsp+80h] [rbp-59h]
  __int64 v64; // [rsp+88h] [rbp-51h]
  __int64 v65; // [rsp+90h] [rbp-49h]
  _DWORD v66[4]; // [rsp+98h] [rbp-41h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-31h]
  _DWORD v68[4]; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v69; // [rsp+C0h] [rbp-19h]
  int v70; // [rsp+C8h] [rbp-11h]
  int v71; // [rsp+CCh] [rbp-Dh]
  int v72; // [rsp+D0h] [rbp-9h]
  int v73; // [rsp+D4h] [rbp-5h]
  __int64 v74; // [rsp+D8h] [rbp-1h]
  int v75[4]; // [rsp+E0h] [rbp+7h] BYREF

  v58 = 0;
  v3 = a3;
  v65 = 0LL;
  *(_OWORD *)v75 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    LODWORD(ThreadWin32Thread) = IsVisible(a1);
    if ( !(_DWORD)ThreadWin32Thread )
      return ThreadWin32Thread;
  }
  GetRect(a1, (__int64)v75, 34);
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) == 0x80000010 )
  {
    v61 = v3 & 1;
    if ( (v3 & 1) != 0 )
      v7 = *(_QWORD *)(gpsi + 4912LL);
    else
      v7 = *(_QWORD *)(gpsi + 4920LL);
    v62 = 1;
    goto LABEL_8;
  }
  v62 = 0;
  v61 = v3 & 1;
  if ( (v3 & 1) == 0 )
  {
    v7 = *(_QWORD *)(gpsi + 4720LL);
    v62 = 0;
    v61 = v3 & 1;
LABEL_8:
    v63 = v7;
    goto LABEL_9;
  }
  v63 = *(_QWORD *)(gpsi + 4712LL);
LABEL_9:
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(_DWORD *)(v8 + 288) & 0xF;
  if ( v9 == 3 )
  {
    v55 = (*(_DWORD *)(v8 + 288) >> 8) & 0x1FF;
  }
  else
  {
    if ( (*(_DWORD *)(v8 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
LABEL_12:
      v55 = WindowDpiLastNotify;
      goto LABEL_13;
    }
    if ( v9
      || (v18 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v18 + 8) + 64LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      goto LABEL_12;
    }
    v55 = 96;
  }
LABEL_13:
  v12 = 0;
  v13 = 8;
  if ( !(unsigned int)xxxMNCanClose(a1) )
    v12 = 16;
  v14 = *((_QWORD *)a1 + 5);
  LOBYTE(v11) = *(_BYTE *)(v14 + 30);
  v15 = *(_BYTE *)(v14 + 31);
  if ( (v11 & 1) != 0 )
  {
    if ( (v15 & 1) != 0 )
      v12 |= 2u;
  }
  else
  {
    v12 |= 8u;
  }
  if ( (v11 & 2) != 0 )
  {
    if ( (v15 & 0x20) == 0 )
      goto LABEL_19;
    v12 |= 1u;
LABEL_39:
    if ( (a3 & 0x8000) != 0 )
    {
      DrawEdge(a2, (RECT *)v75, 5, 8207);
      DrawFrame(a2);
      ++v75[0];
      --v75[2];
      ++v75[1];
    }
    else
    {
      v75[0] += 3;
      v75[2] -= 3;
      v75[1] += 3;
    }
    DpiForSystem = GetDpiForSystem(v14, v11);
    v75[3] = v75[1] + GetDpiDependentMetric(13LL, DpiForSystem);
    v65 = GreSelectBrush(a2, v63);
    goto LABEL_63;
  }
  v12 |= 4u;
  if ( (v15 & 0x20) != 0 )
    goto LABEL_39;
LABEL_19:
  if ( (*(_BYTE *)(v14 + 25) & 3) == 0 || (*(_BYTE *)(v14 + 20) & 8) != 0 )
    v64 = 4744LL;
  else
    v64 = 4816LL;
  if ( (a3 & 0x8000) != 0 )
  {
    v21 = GetDpiForSystem(v14, v11);
    LODWORD(ThreadWin32Thread) = GetWindowFrameMetricForDpi(v22, v21);
    v16 = *((_QWORD *)a1 + 5);
    v23 = ThreadWin32Thread;
    v60 = ThreadWin32Thread;
    if ( (*(_BYTE *)(v16 + 25) & 1) != 0 )
    {
      v24 = 5;
    }
    else
    {
      if ( (*(_BYTE *)(v16 + 26) & 2) == 0 )
        goto LABEL_50;
      v24 = 2;
    }
    LOBYTE(ThreadWin32Thread) = DrawEdge(a2, (RECT *)v75, v24, 8207);
    v23 = v60;
LABEL_50:
    v25 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v25 + 30) & 4) != 0
      || v23 > 0
      && (v16 = *(unsigned int *)(v25 + 28),
          LOBYTE(ThreadWin32Thread) = (v16 & 0x40000) == 0,
          (((v16 & 0xC00000) != 12582912) & (unsigned __int8)ThreadWin32Thread) == 0)
      && ((ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread()),
           *(_DWORD *)(ThreadWin32Thread + 632) > 0x9900u)
       || (*(_DWORD *)(ThreadWin32Thread + 648) & 0x30000000) == 0) )
    {
      v26 = GetDpiForSystem(v25, v16);
      v27 = v60 + GetResizeBorderWidthForDpi(v26);
      LOBYTE(ThreadWin32Thread) = DrawFrame(a2);
      v28 = -v27;
      v75[0] -= v28;
      v75[2] += v28;
      v75[1] -= v28;
      v75[3] += v28;
    }
    v29 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v29 + 30) & 0xC0) != 0 || (*(_BYTE *)(v29 + 24) & 1) != 0 )
    {
      LOBYTE(ThreadWin32Thread) = DrawFrame(a2);
      ++v75[0];
      --v75[2];
      ++v75[1];
      --v75[3];
    }
    goto LABEL_23;
  }
  LODWORD(ThreadWin32Thread) = -(int)GetWindowBorders(*(unsigned int *)(v14 + 28), *(unsigned int *)(v14 + 24));
  v75[0] -= ThreadWin32Thread;
  v75[2] += ThreadWin32Thread;
  v75[1] -= ThreadWin32Thread;
  v75[3] += ThreadWin32Thread;
LABEL_23:
  v17 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v17 + 16) & 8) == 0 )
    return ThreadWin32Thread;
  if ( *(char *)(v17 + 24) >= 0 )
  {
    v32 = GetDpiForSystem(v17, v16);
    DpiDependentMetric = GetDpiDependentMetric(13LL, v32);
  }
  else
  {
    v12 |= 0x20u;
    v30 = GetDpiForSystem(v17, v16);
    DpiDependentMetric = GetDpiDependentMetric(24LL, v30);
    v58 = 41;
  }
  v75[3] = v75[1] + DpiDependentMetric;
  v66[1] = v75[1] + DpiDependentMetric;
  v66[0] = v75[0];
  v66[2] = v75[2] - v75[0];
  v66[3] = 1;
  v67 = *(_QWORD *)(v64 + gpsi);
  GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v66, 1u, v52);
  GreSelectBrush(a2, v63);
LABEL_63:
  v33 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v33 + 30) & 8) != 0 || (*(_BYTE *)(v33 + 21) & 2) == 0 )
  {
    v34 = 1;
    v35 = GetDpiForSystem(v33, v20);
    v36 = GetDpiDependentMetric(12LL, v35);
    v39 = GetDpiForSystem(v38, v37);
    v40 = GetDpiDependentMetric(23LL, v39);
    v56 = v40;
    if ( (a3 & 0x1000) != 0 )
    {
      if ( v12 )
      {
        if ( v12 != 12 )
        {
          v75[3] -= 2;
          v53 = v75[3] - (v75[1] + 2);
          v75[1] += 2;
          v75[2] -= 2;
          NtGdiPatBlt(a2, v75[2], v75[1], 2, v53, 15728673);
          v43 = v58;
          if ( (v12 & 0x10) != 0 )
          {
            v43 = v58 + 3;
            v58 += 3;
          }
          v75[2] -= *((__int16 *)GetOemBitmapInfoForDpi(v43, v55) + 2);
          BitBltSysBmp(a2, (unsigned int)v75[2], v75[1], v58, 1);
          if ( (v12 & 0xC) != 12 && (v12 & 0x20) == 0 )
          {
            v75[2] -= 2;
            NtGdiPatBlt(a2, v75[2], v75[1], 2, v75[3] - v75[1], 15728673);
            if ( (v12 & 2) != 0 )
              v44 = 8;
            else
              v44 = (v12 & 8) != 0 ? 17 : 14;
            v75[2] -= *((__int16 *)GetOemBitmapInfoForDpi(v44, v55) + 2);
            BitBltSysBmp(a2, (unsigned int)v75[2], v75[1], v44, 1);
            if ( (v12 & 1) == 0 )
              v13 = (v12 & 4) != 0 ? 7 : 4;
            v75[2] -= *((__int16 *)GetOemBitmapInfoForDpi(v13, v55) + 2);
            BitBltSysBmp(a2, (unsigned int)v75[2], v75[1], v13, 1);
            v75[2] -= 2;
            NtGdiPatBlt(a2, v75[2], v75[1], 2, v75[3] - v75[1], 15728673);
            v34 = 3;
          }
          if ( (v12 & 0x1C) != 0 && (v12 & 0x20) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          {
            v75[2] -= 2;
            NtGdiPatBlt(a2, v75[2], v75[1], 2, v75[3] - v75[1], 15728673);
            v75[2] -= *((__int16 *)GetOemBitmapInfoForDpi(11LL, v55) + 2);
            BitBltSysBmp(a2, (unsigned int)v75[2], v75[1], 0xBu, 1);
            ++v34;
          }
          v45 = v75[1] - 2;
          v46 = v75[3] + 2;
          v68[0] = v75[2];
          v70 = v75[2];
          v75[1] -= 2;
          if ( (v12 & 0x20) != 0 )
            v36 = v56;
          v69 = 0LL;
          v74 = 0LL;
          v75[3] += 2;
          v68[1] = v45;
          v68[3] = 2;
          v71 = v46 - 2;
          v68[2] = v36 * v34;
          v72 = v36 * v34;
          v73 = 2;
          GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v68, 2u, v54);
          if ( v65 )
            GreSelectBrush(a2, v65);
          goto LABEL_102;
        }
        v47 = v36 + 2;
      }
      else
      {
        v47 = 3 * v36;
      }
      v57 = v47;
      v48 = PrepareHDCBITSBitmap(0LL, v41);
      if ( v48 )
      {
        OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((v61 ^ 1u) + 39, v55);
        v75[2] -= v57;
        NtGdiBitBltInternal(
          a2,
          v75[2],
          v75[1],
          v57,
          OemBitmapInfoForDpi[3],
          v48,
          OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - v57 - v36,
          OemBitmapInfoForDpi[1],
          13369376,
          0,
          0);
        if ( v12 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          {
            v75[2] += 2 - v36;
            NtGdiBitBltInternal(
              a2,
              v75[2],
              v75[1],
              v36,
              OemBitmapInfoForDpi[3],
              v48,
              OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - v36,
              OemBitmapInfoForDpi[1],
              13369376,
              0,
              0);
            if ( ((unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 7012LL) == 1037)
              && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
            {
              NtGdiBitBltInternal(
                a2,
                v75[2] - 2,
                v75[1] + 2,
                v36 - 4,
                OemBitmapInfoForDpi[3] - 4,
                v48,
                *OemBitmapInfoForDpi - v36 + 2 + OemBitmapInfoForDpi[2],
                OemBitmapInfoForDpi[1] + 2,
                -2134114272,
                0,
                0);
            }
          }
        }
      }
      goto LABEL_102;
    }
    if ( !v12 || (v12 & 0xC) != 12 && (v12 & 0x20) == 0 )
    {
      v42 = v75[2];
      v34 = 3;
    }
    else
    {
      v42 = v75[2] - 2;
      v75[2] -= 2;
      if ( v12 == 12 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          v34 = 2;
        goto LABEL_73;
      }
    }
    if ( (v12 & 0x20) != 0 )
    {
LABEL_74:
      v75[2] = v42 - v34 * v40;
      goto LABEL_102;
    }
LABEL_73:
    v40 = v36;
    goto LABEL_74;
  }
LABEL_102:
  LOBYTE(ThreadWin32Thread) = a3;
  if ( (a3 & 0xC) != 0 )
  {
    v50 = xxxDrawCaptionTemp(a1, a2, v75, 0LL, 0LL, 0LL, a3 | (32 * v62) | (v12 >> 4) & 2) == 0;
    LOBYTE(ThreadWin32Thread) = SetOrClrWF(v50, (__int64 *)a1, 0x708u, 1);
  }
  return ThreadWin32Thread;
}
