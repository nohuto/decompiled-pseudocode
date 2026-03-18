/*
 * XREFs of ?IsIn3DMode@CDrawingContext@@QEBA_NXZ @ 0x18008135C
 * Callers:
 *     ?CanUseCVI@CVisualBitmap@@AEAA_NPEAVCDrawingContext@@@Z @ 0x1800812FC (-CanUseCVI@CVisualBitmap@@AEAA_NPEAVCDrawingContext@@@Z.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180114A90 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x180270770 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsIn3DMode(CDrawingContext *this)
{
  bool result; // al
  int v2; // edx

  result = 0;
  if ( *((_DWORD *)this + 80) )
  {
    v2 = *((_DWORD *)this + 80);
    if ( v2 )
      return *(_BYTE *)((unsigned int)(v2 - 1) + *((_QWORD *)this + 39));
  }
  return result;
}
