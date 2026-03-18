/*
 * XREFs of ?HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ @ 0x1800DD5F8
 * Callers:
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1800DD364 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180114A90 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x180270770 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScopedClipStack::HasDeferredD2DLayers(CScopedClipStack *this)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *((_QWORD *)this + 1);
  v2 = 0;
  if ( v1 != *(_QWORD *)this )
    return *(_QWORD *)(v1 - 160) != 0LL;
  return v2;
}
