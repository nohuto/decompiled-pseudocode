/*
 * XREFs of ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800DAA80
 * Callers:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x1800316D8 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18002B8B0 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x18002BFF0 (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18002CC00 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 */

void __fastcall CTopLevelWindow::ComputeWindowFrameMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  int v3; // ecx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r8
  int v8; // r9d
  int v9; // r10d
  int v10; // r11d
  int v11; // esi
  int v12; // ecx
  int v13; // edx
  int v14; // esi
  int v15; // eax
  int v16; // ecx

  v3 = *((_DWORD *)this + 146);
  *a2 = 0LL;
  if ( CTopLevelWindow::HasRenderedBorder(v3) || (*((_DWORD *)this + 146) & 0x200000) != 0 )
  {
    v5 = *((_QWORD *)this + 89);
    v6 = *((_BYTE *)this + 200) & 4 | 0x9BLL;
    if ( !v5 || (*(_BYTE *)(v5 + 736) & 8) != 0 )
    {
      if ( !CTopLevelWindow::IsSheetOfGlass(this) )
      {
        v11 = *((_DWORD *)this + 154) - *((_DWORD *)this + v7 + 3);
        if ( CDesktopManager::IsHighContrastMode() )
        {
          v12 = v9 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
          v9 = v8;
          v13 = v10 - *(_DWORD *)(*((_QWORD *)this + 42) + 24LL);
          v10 = v8;
          v14 = v11 - *(_DWORD *)(*((_QWORD *)this + 44) + 28LL);
          if ( v12 >= 0 )
            v9 = v12;
          if ( v13 >= 0 )
            v10 = v13;
          if ( v14 >= 0 )
            v8 = v14;
        }
        else
        {
          v8 = v11;
        }
      }
      v15 = *((_DWORD *)this + v7 + 2);
      a2->cxLeftWidth = v9 + *((_DWORD *)this + v7);
      v16 = v10 + *((_DWORD *)this + v7 + 1);
      a2->cyTopHeight = v15;
      a2->cxRightWidth = v16;
      a2->cyBottomHeight = v8 + *((_DWORD *)this + v7 + 3);
    }
    else
    {
      a2->cxLeftWidth = *((_DWORD *)this + v6);
      a2->cyTopHeight = *((_DWORD *)this + v6 + 2);
      a2->cxRightWidth = *((_DWORD *)this + v6 + 1);
      a2->cyBottomHeight = *((_DWORD *)this + v6 + 3);
    }
  }
}
