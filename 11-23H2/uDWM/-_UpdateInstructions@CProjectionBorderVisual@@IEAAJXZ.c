/*
 * XREFs of ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x1800D5C18
 * Callers:
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x1800D5930 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800354B0 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x1800D59B4 (-_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::_UpdateInstructions(CProjectionBorderVisual *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v8; // esi
  int v9; // eax
  int v10; // eax
  struct _D3DCOLORVALUE v12; // [rsp+30h] [rbp-48h] BYREF
  struct _D3DCOLORVALUE v13; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-28h] BYREF

  rc = (struct tagRECT)*((_OWORD *)this + 18);
  v2 = CRenderDataVisual::ClearInstructions(this);
  v7 = v2;
  if ( v2 >= 0 )
  {
    if ( *((_BYTE *)this + 304) )
    {
      v8 = 2;
      *(struct _D3DCOLORVALUE *)&v13.r = (struct _D3DCOLORVALUE)xmmword_180129318;
      *(struct _D3DCOLORVALUE *)&v12.r = (struct _D3DCOLORVALUE)_xmm;
      if ( (unsigned __int8)CDesktopManager::IsHighContrastMode(v4, v3, v5, v6) )
      {
        if ( !*((_DWORD *)this + 77) )
          v8 = 4;
        v12.a = FLOAT_1_0;
      }
      v9 = CProjectionBorderVisual::_AddBorderInstructions((struct tagRECT *)this, &rc, v8, &v12);
      v7 = v9;
      if ( v9 >= 0 )
      {
        InflateRect(
          &rc,
          -(int)((double)v8 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 53)),
          -(int)((double)v8 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 53)));
        v10 = CProjectionBorderVisual::_AddBorderInstructions((struct tagRECT *)this, &rc, 1, &v13);
        v7 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x81u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x7Du);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x6Au);
  }
  return v7;
}
