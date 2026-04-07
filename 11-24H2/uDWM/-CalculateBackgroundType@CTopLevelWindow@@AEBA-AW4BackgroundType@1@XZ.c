/*
 * XREFs of ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x18002CC98
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18002CF30 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA?AW4SYSTEMBACKDROP_TYPE@@XZ @ 0x18002CF50 (-GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA-AW4SYSTEMBACKDROP_TYPE@@XZ.c)
 *     ?HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ @ 0x18002D090 (-HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?IsFrameExtendedIntoClientAreaLRB@CWindowData@@QEBA_NXZ @ 0x18007086C (-IsFrameExtendedIntoClientAreaLRB@CWindowData@@QEBA_NXZ.c)
 */

__int64 __fastcall CTopLevelWindow::CalculateBackgroundType(CTopLevelWindow *a1)
{
  CWindowData *v3; // rcx
  __int64 v4; // rcx

  if ( CAccent::s_IsPolicyActive((const struct ACCENT_POLICY *)(*((_QWORD *)a1 + 89) + 168LL)) )
    return 1LL;
  if ( (unsigned int)CTopLevelWindow::GetEffectiveSystemBackdropType(a1) == 1 )
    return 0LL;
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 89) + 204LL) )
  {
    if ( !CTopLevelWindow::HasCaptionAreaColorOverride(a1) )
    {
      v3 = (CWindowData *)*((_QWORD *)a1 + 89);
      if ( !*((_DWORD *)v3 + 26) && !CWindowData::IsFrameExtendedIntoClientAreaLRB(v3) )
        return *(_DWORD *)(v4 + 192) != 1 ? 4 : 0;
    }
    return 0LL;
  }
  return (unsigned int)CTopLevelWindow::HasCaptionAreaColorOverride(a1) + 2;
}
