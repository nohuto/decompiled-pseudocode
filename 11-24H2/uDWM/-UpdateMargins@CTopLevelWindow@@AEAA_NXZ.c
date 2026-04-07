/*
 * XREFs of ?UpdateMargins@CTopLevelWindow@@AEAA_NXZ @ 0x18002B290
 * Callers:
 *     ?UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z @ 0x180029060 (-UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z.c)
 * Callees:
 *     ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x18002B780 (-SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x18002BFF0 (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800D02C8 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

_BOOL8 __fastcall CTopLevelWindow::UpdateMargins(CTopLevelWindow *this)
{
  _DWORD *v1; // rbx
  int v3; // ebp
  int v4; // r14d
  int v5; // r15d
  int v6; // r12d
  bool v7; // di
  int v8; // r8d
  int v9; // r11d
  _DWORD *v10; // rcx
  int v11; // ebx
  int v12; // r9d
  int v13; // r11d
  int v14; // r8d
  bool v15; // di
  struct CWindowData *v17; // rdx
  CProjectionBorderVisual *v18; // rcx

  v1 = (_DWORD *)*((_QWORD *)this + 89);
  v3 = v1[16];
  v4 = v1[18];
  v5 = v1[17];
  v6 = v1[19];
  v7 = SetMargin((struct _MARGINS *)((char *)this + 588), v3, v5, v4, v6, 0LL);
  if ( CTopLevelWindow::IsSheetOfGlass(this) )
  {
    v11 = v9 / 2;
    v12 = v8 / 2;
    v13 = (v9 + 1) / 2;
    v14 = (v8 + 1) / 2;
  }
  else
  {
    v10 = (_DWORD *)*((_QWORD *)this + 89);
    v11 = v9;
    v12 = v8;
    if ( v9 >= v10[24] )
      v11 = v10[24];
    v13 = v9 - v11;
    if ( v8 >= v10[26] )
      v12 = v10[26];
    v14 = v8 - v12;
    if ( v13 >= v10[25] )
      v13 = v10[25];
    if ( v14 >= v10[27] )
      v14 = v10[27];
  }
  v15 = SetMargin((struct _MARGINS *)((char *)this + 604), v11 + v3, v13 + v5, v4 + v12, v14 + v6, 0LL) || v7;
  if ( v15 )
  {
    v17 = (struct CWindowData *)*((_QWORD *)this + 89);
    v18 = (CProjectionBorderVisual *)*((_QWORD *)v17 + 58);
    if ( v18 )
      CProjectionBorderVisual::UpdateRectFromWindow(v18, v17);
  }
  return v15;
}
