/*
 * XREFs of ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ @ 0x18001AA04
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18003D8E0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x18001AA6C (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x18003AB74 (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 */

__int64 __fastcall CTopLevelWindow::GetShadowStyle(CTopLevelWindow *a1)
{
  int EffectiveCornerStyle; // eax
  char v3; // dl

  EffectiveCornerStyle = CTopLevelWindow::GetEffectiveCornerStyle();
  if ( (*((_BYTE *)a1 + 624) & 0x20) != 0 )
    return 0LL;
  if ( (unsigned int)(EffectiveCornerStyle - 3) <= 1 )
    return 1LL;
  if ( CTopLevelWindow::TreatAsActiveWindow(a1) )
    return (unsigned int)(v3 != 0) + 2;
  return (unsigned int)(v3 != 0) + 4;
}
