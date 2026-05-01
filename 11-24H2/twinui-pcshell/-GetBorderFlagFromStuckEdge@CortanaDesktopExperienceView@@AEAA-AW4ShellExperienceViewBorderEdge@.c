/*
 * XREFs of ?GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N1@Z @ 0x1803D9258
 * Callers:
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803DD910 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaDesktopExperienceView::GetBorderFlagFromStuckEdge(__int64 a1, int a2, __int64 a3, char a4)
{
  unsigned int v4; // r8d
  unsigned int v5; // ecx
  unsigned int v6; // r11d
  unsigned int v7; // r10d
  unsigned int v8; // r9d
  int v9; // edx
  int v10; // edx

  v4 = 0;
  if ( *(_BYTE *)(a1 + 245) || a4 )
  {
    v5 = 5;
    v7 = 5;
    v6 = 1;
    v8 = 4;
  }
  else
  {
    v5 = 7;
    v6 = 9;
    v7 = 13;
    v8 = 12;
  }
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          return v5;
      }
      else
      {
        return v6;
      }
    }
    else
    {
      return v7;
    }
  }
  else
  {
    return v8;
  }
  return v4;
}
