/*
 * XREFs of ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180053D6C
 * Callers:
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180053A04 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180051BE4 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180053F40 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x1800547C4 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::StartHold(__int64 a1, const struct tagPOINT *a2, const struct tagRECT *a3)
{
  float v6; // xmm3_4
  double v7; // xmm1_8

  CDirectTouchVisual::StopTimer((CDirectTouchVisual *)a1);
  v6 = *(float *)(a1 + 368);
  *(_DWORD *)(a1 + 376) = -1;
  *(_BYTE *)(a1 + 408) = 0;
  CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)a1, a2, a3, v6);
  CImage::SetBitmapSource(*(CImage **)(a1 + 416), *(struct CBitmapSource **)(a1 + 424));
  if ( (*(_BYTE *)(a1 + 376) & 8) != 0 )
    v7 = DOUBLE_1_0;
  else
    v7 = 0.0;
  CVisual::SetOpacity((CVisual *)a1, v7);
  return 0LL;
}
