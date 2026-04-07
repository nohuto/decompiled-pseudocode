/*
 * XREFs of ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180041230
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18003DE40 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x1800048CC (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x180006A0C (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH_N@Z @ 0x180008268 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH_N@Z.c)
 *     ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x180017930 (-SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _o_ceil_0 @ 0x18005D484 (_o_ceil_0.c)
 *     floor @ 0x18005D4A8 (floor.c)
 *     IsOpenThemeDataPresent @ 0x18005DB28 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateMarginsDependentOnStyle(CTopLevelWindow *this)
{
  __int64 v1; // r14
  const struct _MARGINS *v2; // rdi
  int v3; // esi
  char v5; // al
  char v6; // si
  int v7; // r8d
  char v8; // r15
  int v9; // ecx
  int v10; // r10d
  int v11; // edx
  unsigned __int8 v12; // si
  int v14; // esi
  int MetricsForCaptionBar; // eax
  double v16; // xmm6_8
  double v17; // xmm0_8
  int v18; // r15d
  double v19; // xmm0_8
  int v20; // r12d
  int v21; // edx
  int v22; // r13d
  int v23; // ecx
  int v24; // eax
  int v25; // r12d
  int v26; // eax
  int v27; // r13d
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  HMONITOR v32; // rax
  int v33; // r9d
  CAtlasedRectsVisual *v34; // rcx
  char v35; // al
  int v36[4]; // [rsp+38h] [rbp-69h]
  int v37; // [rsp+4Ch] [rbp-55h]
  RECT rcWork; // [rsp+58h] [rbp-49h]
  RECT rc; // [rsp+68h] [rbp-39h] BYREF
  struct tagMONITORINFO mi; // [rsp+78h] [rbp-29h] BYREF

  v1 = *((_QWORD *)this + 94);
  v2 = 0LL;
  v3 = *((_DWORD *)this + 156);
  if ( (unsigned __int8)IsOpenThemeDataPresent(this)
    && (v3 & 6) != 0
    && *(_DWORD *)(v1 + 64) >= CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    && *(_DWORD *)(v1 + 68) >= dword_18014843C
    && *(_DWORD *)(v1 + 72) >= dword_180148440
    && *(_DWORD *)(v1 + 76) >= dword_180148444
    && (*(_DWORD *)(v1 + 120) & 0x800000) == 0
    && (int)GetSystemMetricsForDpi(92LL, *(unsigned int *)(v1 + 348)) > 0 )
  {
    v14 = 0;
    if ( (*(_BYTE *)(v1 + 118) & 0xC0) == 0xC0 )
    {
      if ( *(char *)(v1 + 120) < 0 )
        MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar((CWindowData *)v1, 0x33u, 0);
      else
        MetricsForCaptionBar = GetSystemMetricsForDpi(4LL, *(unsigned int *)(v1 + 348));
      v14 = MetricsForCaptionBar;
    }
    v16 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 53);
    if ( v16 < 0.0 )
    {
      v17 = v16 - 0.5;
      o_ceil_0();
    }
    else
    {
      v17 = floor(v16 + 0.5);
    }
    v18 = (int)v17;
    if ( v16 < 0.0 )
    {
      v19 = v16 - 0.5;
      o_ceil_0();
    }
    else
    {
      v19 = floor(v16 + 0.5);
    }
    v20 = *(_DWORD *)(v1 + 64);
    v21 = v14 + v18;
    v22 = *(_DWORD *)(v1 + 68);
    v23 = (int)v19;
    v24 = (int)v19;
    if ( v20 > (int)v19 )
      v24 = *(_DWORD *)(v1 + 64);
    v25 = v20 - v24;
    v26 = *(_DWORD *)(v1 + 72);
    if ( v22 > v23 )
      v23 = *(_DWORD *)(v1 + 68);
    v27 = v22 - v23;
    if ( v26 > v21 )
      v21 = *(_DWORD *)(v1 + 72);
    v37 = v26 - v21;
    v28 = *(_DWORD *)(v1 + 76);
    if ( v28 > v18 )
      v18 = *(_DWORD *)(v1 + 76);
    v5 = SetMargin(
           (struct _MARGINS *)((char *)this + 660),
           v25,
           v27,
           v37,
           v28 - v18,
           (const struct _MARGINS *)((char *)this + 644));
  }
  else
  {
    v5 = SetMargin((struct _MARGINS *)((char *)this + 660), 0, 0, 0, 0, (const struct _MARGINS *)((char *)this + 644));
  }
  v6 = v5;
  if ( (*((_DWORD *)this + 156) & 0x200020) != 0 )
  {
    v29 = *((_QWORD *)this + 94);
    rc = *(RECT *)(v29 + 48);
    v30 = *(_DWORD *)(v29 + 224) - *(_DWORD *)(v29 + 216);
    if ( v30 < 0 )
      v30 = 0;
    rc.right = rc.left + (int)((double)v30 * *(double *)(v29 + 336));
    v31 = *(_DWORD *)(v29 + 228) - *(_DWORD *)(v29 + 220);
    if ( v31 < 0 )
      v31 = 0;
    rc.bottom = rc.top + (int)((double)v31 * *(double *)(v29 + 336));
    v32 = MonitorFromRect(&rc, 0);
    if ( v32 && (mi.cbSize = 40, GetMonitorInfoW(v32, &mi)) )
      rcWork = mi.rcWork;
    else
      rcWork = rc;
    v11 = rcWork.left - rc.left;
    if ( rcWork.left - rc.left < 0 )
      v11 = 0;
    v10 = rc.right - rcWork.right;
    v36[0] = v11;
    if ( rc.right - rcWork.right < 0 )
    {
      v10 = 0;
      v36[1] = 0;
    }
    else
    {
      v36[1] = rc.right - rcWork.right;
    }
    v9 = rcWork.top - rc.top;
    if ( rcWork.top - rc.top < 0 )
      v9 = 0;
    v7 = rc.bottom - rcWork.bottom;
    v36[2] = v9;
    if ( rc.bottom - rcWork.bottom < 0 )
    {
      v7 = 0;
      v36[3] = 0;
    }
    else
    {
      v36[3] = rc.bottom - rcWork.bottom;
    }
    v33 = *(_DWORD *)(v1 + 112);
    if ( v11 > v33 - *((_DWORD *)this + 165) )
    {
      v11 = 0;
      v36[0] = 0;
    }
    if ( v10 > v33 - *((_DWORD *)this + 166) )
    {
      v10 = 0;
      v36[1] = 0;
    }
    if ( v9 > v33 - *((_DWORD *)this + 167) )
    {
      v9 = 0;
      v36[2] = 0;
    }
    if ( v7 > v33 - *((_DWORD *)this + 168) )
    {
      v7 = 0;
      v36[3] = 0;
    }
    v8 = 1;
    *(_OWORD *)(*((_QWORD *)this + 94) + 300LL) = *(_OWORD *)v36;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
  }
  v12 = SetMargin((struct _MARGINS *)((char *)this + 676), v11, v10, v9, v7, 0LL) | v6;
  if ( v8 || (*((_BYTE *)this + 248) & 4) != 0 )
  {
    v34 = (CAtlasedRectsVisual *)*((_QWORD *)this + 38);
    v35 = (4 * v8) | *((_BYTE *)this + 248) & 0xFB;
    *((_BYTE *)this + 248) = v35;
    if ( (v35 & 4) != 0 )
      v2 = (const struct _MARGINS *)((char *)this + 676);
    CAtlasedRectsVisual::SetClipMargins(v34, v2);
    CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
  }
  return v12;
}
