/*
 * XREFs of ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800E4FB4
 * Callers:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x1800108B8 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x18001DBFC (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180033A50 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800354B0 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 */

void __fastcall CTopLevelWindow::ComputeWindowFrameMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  int v3; // ecx
  int v5; // edi
  __int64 v6; // rax
  int *v7; // rbx
  int v8; // r15d
  int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebp
  int v15; // ecx
  int v16; // edx
  int v17; // ebp
  int v18; // eax
  int v19; // ecx

  v3 = *((_DWORD *)this + 156);
  *a2 = 0LL;
  v5 = 0;
  if ( CTopLevelWindow::HasRenderedBorder(v3) || (*((_DWORD *)this + 156) & 0x200000) != 0 )
  {
    v6 = *((_QWORD *)this + 94);
    v7 = (int *)((char *)this + ((*((_BYTE *)this + 248) & 4) != 0 ? 676LL : 660LL));
    if ( !v6 || (*(_BYTE *)(v6 + 672) & 8) != 0 )
    {
      v8 = 0;
      v9 = 0;
      if ( !CTopLevelWindow::IsSheetOfGlass(this) )
      {
        v8 = *((_DWORD *)this + 161) - *v7;
        v9 = *((_DWORD *)this + 162) - v7[1];
        v14 = *((_DWORD *)this + 164) - v7[3];
        if ( (unsigned __int8)CDesktopManager::IsHighContrastMode(v11, v10, v12, v13) )
        {
          v15 = v8 - *(_DWORD *)(*((_QWORD *)this + 46) + 24LL);
          v8 = 0;
          v16 = v9 - *(_DWORD *)(*((_QWORD *)this + 47) + 24LL);
          v9 = 0;
          v17 = v14 - *(_DWORD *)(*((_QWORD *)this + 49) + 28LL);
          if ( v15 >= 0 )
            v8 = v15;
          if ( v16 >= 0 )
            v9 = v16;
          if ( v17 >= 0 )
            v5 = v17;
        }
        else
        {
          v5 = v14;
        }
      }
      v18 = v7[2];
      a2->cxLeftWidth = v8 + *v7;
      v19 = v9 + v7[1];
      a2->cyTopHeight = v18;
      a2->cxRightWidth = v19;
      a2->cyBottomHeight = v5 + v7[3];
    }
    else
    {
      a2->cxLeftWidth = *v7;
      a2->cyTopHeight = v7[2];
      a2->cxRightWidth = v7[1];
      a2->cyBottomHeight = v7[3];
    }
  }
}
