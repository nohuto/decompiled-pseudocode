/*
 * XREFs of ?CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z @ 0x18027ACF0
 * Callers:
 *     ?CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18028FC30 (-CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x1800F8AE0 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18016A440 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?SetHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@@Z @ 0x18026CF64 (-SetHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@@Z.c)
 */

void __fastcall COcclusionContext::CollectCursor(COcclusionContext *this, struct CCursorVisual *a2)
{
  bool v4; // zf
  const struct CMILMatrix *TopByReference; // rax
  struct CCursorVisual ***v6; // rbx
  const struct CMILMatrix *v7; // r14
  struct CCursorVisual ***v8; // rbp

  if ( *((_BYTE *)this + 1566) )
  {
    v4 = *((_DWORD *)this + 429) == 0;
    *((_BYTE *)this + 1567) = *((_BYTE *)a2 + 745) == 0;
    if ( v4
      && !CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference((__int64)this + 128) )
    {
      TopByReference = CMatrixStack::GetTopByReference((COcclusionContext *)((char *)this + 32));
      v6 = (struct CCursorVisual ***)*((_QWORD *)this + 225);
      v7 = TopByReference;
      v8 = (struct CCursorVisual ***)*((_QWORD *)this + 226);
      while ( v6 != v8 )
        COverlayContext::SetHardwareCursor(*v6++, a2, v7);
    }
    *((_BYTE *)this + 1566) = 0;
  }
}
