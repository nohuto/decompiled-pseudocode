/*
 * XREFs of ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ @ 0x18002D0DC
 * Callers:
 *     ?GetFloatCornerRadiusForCurrentStyle@CTopLevelWindow@@AEAAMXZ @ 0x18002CC14 (-GetFloatCornerRadiusForCurrentStyle@CTopLevelWindow@@AEAAMXZ.c)
 *     ?GetDpiAdjustedFloatCornerRadius@CTopLevelWindow@@QEAAMXZ @ 0x18007BDB8 (-GetDpiAdjustedFloatCornerRadius@CTopLevelWindow@@QEAAMXZ.c)
 * Callees:
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x18002CF9C (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 */

float __fastcall CTopLevelWindow::GetRadiusFromCornerStyle(CTopLevelWindow *this, __int64 a2)
{
  float v2; // xmm6_4
  int v3; // eax
  int v4; // eax

  v2 = 0.0;
  v3 = CTopLevelWindow::GetEffectiveCornerStyle((__int64)this, a2) - 2;
  if ( !v3 )
    return FLOAT_8_0;
  v4 = v3 - 1;
  if ( !v4 )
    return FLOAT_4_0;
  if ( v4 == 1 )
    return FLOAT_8_0;
  return v2;
}
