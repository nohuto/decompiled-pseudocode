/*
 * XREFs of PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14008D804
 * Callers:
 *     UpdateCheckpoint @ 0x140025F7C (UpdateCheckpoint.c)
 *     GetRect @ 0x1400355F0 (GetRect.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140043A80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14008C5F8 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x14008D624 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     NtUserPhysicalToLogicalDpiPointForWindow @ 0x1401D0880 (NtUserPhysicalToLogicalDpiPointForWindow.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14022B0AC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1400453CC (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x14008D8F8 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRectWithSubpixel(const struct tagWND *a1, int *a2, __int64 a3)
{
  unsigned int v5; // ebx
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  const struct tagWND *v7; // r9
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm5_4

  v5 = 0;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a1, (__int64)a2, a3);
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
      ScaleValueWithSubpixel(
        a2,
        (float *)(a3 & ((unsigned __int128)-(__int128)(unsigned __int64)a3 >> 64)),
        1.0 / **((float **)v7 + 27));
      ScaleValueWithSubpixel(a2 + 1, (float *)((a3 + 4) & -(__int64)(a3 != 0)), v12);
      v5 = 1;
      a2[2] = (int)(float)((float)((float)((float)a2[2] * v13) + 0.0) + 0.5);
      a2[3] = (int)(float)((float)((float)((float)a2[3] * v14) + 0.0) + 0.5);
    }
  }
  return v5;
}
