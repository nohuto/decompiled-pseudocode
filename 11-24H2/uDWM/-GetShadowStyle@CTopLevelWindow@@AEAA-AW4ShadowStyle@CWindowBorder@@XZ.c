/*
 * XREFs of ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ @ 0x18002DA1C
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x18002CF9C (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 */

__int64 __fastcall CTopLevelWindow::GetShadowStyle(__int64 a1, __int64 a2)
{
  int EffectiveCornerStyle; // eax
  int v4; // ecx
  bool v5; // dl
  bool v6; // zf
  __int64 v7; // rcx
  char v8; // cl

  EffectiveCornerStyle = CTopLevelWindow::GetEffectiveCornerStyle(a1, a2);
  v4 = *(_DWORD *)(a1 + 584);
  if ( (v4 & 0x20) != 0 )
    return 0LL;
  v5 = 1;
  if ( (unsigned int)(EffectiveCornerStyle - 3) <= 1 )
    return 1LL;
  v6 = (v4 & 0x40) == 0;
  v7 = a1 + 712;
  if ( v6 )
    v5 = (*(_BYTE *)(*(_QWORD *)v7 + 739LL) & 0x10) != 0;
  v8 = *(_BYTE *)(*(_QWORD *)v7 + 741LL) & 4;
  if ( v5 )
    return (unsigned int)(v8 != 0) + 2;
  else
    return (unsigned int)(v8 != 0) + 4;
}
