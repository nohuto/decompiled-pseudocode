/*
 * XREFs of ?CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z @ 0x180285950
 * Callers:
 *     ?CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180299E10 (-CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x180083B10 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18010B800 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180277784 (-TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRec.c)
 */

void __fastcall COcclusionContext::CollectCursor(COcclusionContext *this, struct CCursorVisual *a2)
{
  __int64 v2; // rax
  bool v5; // al
  __int128 *TopByReference; // r14
  __int64 v7; // rax
  COverlayContext **v8; // rbx
  const struct D2D_RECT_F *v9; // r15
  COverlayContext **v10; // rbp

  v2 = *((_QWORD *)a2 + 87);
  v5 = !*(_BYTE *)(v2 + 112) && !*(_QWORD *)(v2 + 264);
  *((_BYTE *)this + 1567) = v5;
  TopByReference = (__int128 *)CMatrixStack::GetTopByReference((COcclusionContext *)((char *)this + 32));
  v7 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference((__int64)this + 128);
  v8 = (COverlayContext **)*((_QWORD *)this + 225);
  v9 = (const struct D2D_RECT_F *)v7;
  v10 = (COverlayContext **)*((_QWORD *)this + 226);
  while ( v8 != v10 )
  {
    if ( !COverlayContext::TryEnableHardwareCursor(*v8, a2, TopByReference, v9) )
      *((_BYTE *)this + 1567) = 0;
    ++v8;
  }
  *((_BYTE *)this + 1566) = 0;
}
