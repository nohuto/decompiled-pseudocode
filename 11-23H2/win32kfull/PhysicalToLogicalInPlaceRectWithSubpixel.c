/*
 * XREFs of PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00B1464
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0050300 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x1C00A4C9C (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00AE414 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00B04C0 (xxxInheritWindowMonitor.c)
 *     GetRect @ 0x1C00E1ED0 (GetRect.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F6650 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C01246F0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z @ 0x1C01B8918 (-GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z.c)
 *     NtUserPhysicalToLogicalDpiPointForWindow @ 0x1C01D7C50 (NtUserPhysicalToLogicalDpiPointForWindow.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C00B14EC (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x1C0151062 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRectWithSubpixel(const struct tagWND *a1, int *a2, unsigned __int64 a3)
{
  unsigned int v5; // ebx
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  const struct tagWND *v7; // r11
  __int64 v9; // rax
  int v10; // ecx
  int v11; // eax
  float v12; // xmm3_4
  float v13; // xmm4_4
  float *v14; // rdx
  float v15; // xmm4_4
  int v16; // edx

  v5 = 0;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a1);
  v7 = TopLevelOrDpiBoundaryWindow;
  if ( TopLevelOrDpiBoundaryWindow )
  {
    v9 = *((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
    if ( v9 )
    {
      v10 = (int)*(float *)(v9 + 52);
      v11 = (int)*(float *)(v9 + 48);
      a2[3] -= v10;
      a2[1] -= v10;
      *a2 -= v11;
      a2[2] -= v11;
      v12 = 1.0 / **((float **)v7 + 27);
      ScaleValueWithSubpixel(a2, (float *)(a3 & ((unsigned __int128)-(__int128)a3 >> 64)), v12);
      ScaleValueWithSubpixel(a2 + 1, (float *)((a3 + 4) & -(__int64)(a3 != 0)), v13);
      ScaleValueWithSubpixel(a2 + 2, 0LL, v12);
      ScaleValueWithSubpixel(a2 + 3, v14, v15);
      return (unsigned int)(v16 + 1);
    }
  }
  return v5;
}
