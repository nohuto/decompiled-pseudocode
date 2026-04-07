/*
 * XREFs of ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x1800D0684
 * Callers:
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x1800D0390 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800250EC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18002CC00 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x1800D0414 (-_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::_UpdateInstructions(CProjectionBorderVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // edi
  bool v5; // zf
  int v6; // eax
  int v7; // eax
  struct _D3DCOLORVALUE v9; // [rsp+30h] [rbp-48h] BYREF
  struct _D3DCOLORVALUE v10; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-28h] BYREF

  rc = (struct tagRECT)*((_OWORD *)this + 15);
  v2 = CRenderDataVisual::ClearInstructions(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x69u, 0LL);
  }
  else if ( *((_BYTE *)this + 256) )
  {
    v4 = 2;
    *(struct _D3DCOLORVALUE *)&v10.r = (struct _D3DCOLORVALUE)xmmword_18010A028;
    *(struct _D3DCOLORVALUE *)&v9.r = (struct _D3DCOLORVALUE)_xmm;
    if ( CDesktopManager::IsHighContrastMode() )
    {
      v5 = *((_DWORD *)this + 65) == 0;
      v9.a = 1.0;
      if ( v5 )
        v4 = 4;
    }
    v6 = CProjectionBorderVisual::_AddBorderInstructions((struct tagRECT *)this, &rc, v4, &v9);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x7Cu, 0LL);
    }
    else
    {
      InflateRect(
        &rc,
        -(int)((double)v4 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 52)),
        -(int)((double)v4 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 52)));
      v7 = CProjectionBorderVisual::_AddBorderInstructions((struct tagRECT *)this, &rc, 1, &v10);
      v3 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x80u, 0LL);
    }
  }
  return v3;
}
