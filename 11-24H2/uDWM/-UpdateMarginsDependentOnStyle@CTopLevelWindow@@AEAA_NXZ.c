/*
 * XREFs of ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18002B3F0
 * Callers:
 *     ?UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z @ 0x180029060 (-UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z.c)
 * Callees:
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x18002B670 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 *     ?SetMargin@@YA_NPEAU_MARGINS@@AEBU1@PEBU1@@Z @ 0x18002B750 (-SetMargin@@YA_NPEAU_MARGINS@@AEBU1@PEBU1@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18006AA30 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z @ 0x18006F240 (-GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x180099114 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateMarginsDependentOnStyle(CTopLevelWindow *this)
{
  struct CWindowData *v1; // rsi
  unsigned int v2; // edx
  bool v4; // di
  const struct _MARGINS *v5; // rcx
  unsigned __int8 v6; // di
  __int64 v8; // rdx
  int v9; // eax
  struct tagRECT v10; // xmm1
  LONG v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // r10d
  int v16; // r8d
  int v17; // r9d
  struct _MARGINS *v18; // rax
  char v19; // si
  struct _MARGINS v20; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT v21; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v22; // [rsp+40h] [rbp-20h] BYREF

  v1 = (struct CWindowData *)*((_QWORD *)this + 89);
  v2 = *((_DWORD *)this + 146);
  v20 = 0LL;
  v21 = 0LL;
  CTopLevelWindow::CalculateOutsideMargins(v1, v2, (struct _MARGINS *)&v21);
  v4 = SetMargin(
         (struct _MARGINS *)((char *)this + 620),
         (const struct _MARGINS *)&v21,
         (const struct _MARGINS *)((char *)this + 604));
  if ( (*((_DWORD *)this + 146) & 0x200020) != 0 )
  {
    v8 = *((_QWORD *)this + 89);
    v9 = 0;
    v10 = *(struct tagRECT *)(v8 + 48);
    v22 = v10;
    if ( *(_DWORD *)(v8 + 228) - *(_DWORD *)(v8 + 220) >= 0 )
      v9 = *(_DWORD *)(v8 + 228) - *(_DWORD *)(v8 + 220);
    v11 = _mm_cvtsi128_si32((__m128i)v10) + (int)((double)v9 * *(double *)(v8 + 336));
    v12 = 0;
    v22.right = v11;
    if ( *(_DWORD *)(v8 + 232) - *(_DWORD *)(v8 + 224) >= 0 )
      v12 = *(_DWORD *)(v8 + 232) - *(_DWORD *)(v8 + 224);
    v22.bottom = v22.top + (int)((double)v12 * *(double *)(v8 + 336));
    v21 = 0LL;
    if ( !CTopLevelWindow::GetMonitorRect((CTopLevelWindow *)(unsigned int)v22.bottom, &v22, &v21) )
      v21 = v22;
    v13 = v21.left - v22.left;
    if ( v21.left - v22.left < 0 )
      v13 = 0;
    v14 = *((_DWORD *)v1 + 28);
    v15 = v22.right - v21.right;
    v20.cxLeftWidth = v13;
    if ( v22.right - v21.right < 0 )
      v15 = 0;
    v16 = v21.top - v22.top;
    v20.cxRightWidth = v15;
    if ( v21.top - v22.top < 0 )
      v16 = 0;
    v17 = v22.bottom - v21.bottom;
    v20.cyTopHeight = v16;
    if ( v22.bottom - v21.bottom < 0 )
      v17 = 0;
    if ( v13 > v14 - *((_DWORD *)this + 155) )
      v20.cxLeftWidth = 0;
    if ( v15 > v14 - *((_DWORD *)this + 156) )
      v20.cxRightWidth = 0;
    if ( v16 > v14 - *((_DWORD *)this + 157) )
      v20.cyTopHeight = 0;
    v18 = (struct _MARGINS *)*((_QWORD *)this + 89);
    v19 = 1;
    if ( v17 > v14 - *((_DWORD *)this + 158) )
      v17 = 0;
    v20.cyBottomHeight = v17;
    v18[19] = v20;
    v6 = v4 | SetMargin((struct _MARGINS *)((char *)this + 636), &v20, 0LL);
  }
  else
  {
    v6 = SetMargin((struct _MARGINS *)((char *)this + 636), &v20, 0LL) || v4;
    if ( (*((_BYTE *)this + 200) & 4) == 0 )
      return v6;
    v19 = 0;
  }
  *((_BYTE *)this + 200) = (4 * v19) | *((_BYTE *)this + 200) & 0xFB;
  if ( !v19 )
    v5 = 0LL;
  CAtlasedRectsVisual::SetClipMargins(*((CAtlasedRectsVisual **)this + 33), v5);
  CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
  return v6;
}
