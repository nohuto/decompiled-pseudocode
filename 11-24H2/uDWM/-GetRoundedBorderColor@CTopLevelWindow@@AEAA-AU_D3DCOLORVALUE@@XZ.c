/*
 * XREFs of ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x180030D88
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z @ 0x18002CB84 (-GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18002CC00 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x180030F2C (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?HasNonClientArea@CTopLevelWindow@@QEBA_NXZ @ 0x180032418 (-HasNonClientArea@CTopLevelWindow@@QEBA_NXZ.c)
 */

struct _D3DCOLORVALUE *__fastcall CTopLevelWindow::GetRoundedBorderColor(
        CTopLevelWindow *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  __int64 v2; // rax
  int v5; // edx
  char v6; // dl
  __int128 v7; // xmm0
  int v9; // edx
  __m128i v10; // xmm0
  int v11; // eax
  unsigned __int16 v12; // cx
  DWORD SysColor; // eax
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 89);
  v14 = 0;
  *(_OWORD *)&retstr->r = 0LL;
  v5 = *(_DWORD *)(v2 + 188);
  if ( v5 == 1 || (*((_BYTE *)this + 584) & 0x20) != 0 )
  {
    retstr->r = 0.0;
    retstr->g = 0.0;
    retstr->b = 0.0;
    retstr->a = 0.0;
  }
  else
  {
    if ( v5 )
    {
      v12 = *(_WORD *)(v2 + 188);
      retstr->r = (float)(unsigned __int8)v12 / 255.0;
      retstr->g = (float)HIBYTE(v12) / 255.0;
      retstr->b = (float)BYTE2(v5) / 255.0;
      goto LABEL_14;
    }
    CTopLevelWindow::TreatAsActiveWindow(this);
    if ( CDesktopManager::IsHighContrastMode() )
    {
      SysColor = GetSysColor(v6 != 0 ? 9 : 19);
      v9 = BYTE1(SysColor);
      v10 = _mm_cvtsi32_si128((unsigned __int8)SysColor);
      v11 = BYTE2(SysColor);
      goto LABEL_13;
    }
    if ( CDesktopManager::GetAccentColor(CDesktopManager::s_pDesktopManagerInstance, v6, &v14)
      && CTopLevelWindow::HasNonClientArea(this) )
    {
      v9 = BYTE1(v14);
      v10 = _mm_cvtsi32_si128((unsigned __int8)v14);
      v11 = BYTE2(v14);
LABEL_13:
      retstr->r = _mm_cvtepi32_ps(v10).m128_f32[0] / 255.0;
      retstr->g = (float)v9 / 255.0;
      retstr->b = (float)v11 / 255.0;
LABEL_14:
      retstr->a = 1.0;
      return retstr;
    }
    if ( (*(_DWORD *)(*((_QWORD *)this + 89) + 124LL) & 0x1000) != 0 )
      v7 = *(__int128 *)&CTopLevelWindow::SNAPPED_BORDER_COLOR.r;
    else
      v7 = *(__int128 *)&CTopLevelWindow::OVERLAPPED_BORDER_COLOR.r;
    *(_OWORD *)&retstr->r = v7;
  }
  return retstr;
}
