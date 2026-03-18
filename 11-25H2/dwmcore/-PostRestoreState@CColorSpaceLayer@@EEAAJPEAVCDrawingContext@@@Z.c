/*
 * XREFs of ?PostRestoreState@CColorSpaceLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180286AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18018F430 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CColorSpaceLayer::PostRestoreState(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  *((_BYTE *)a2 + 8067) = *((_BYTE *)this + 120);
  v2 = CDrawingContext::FlushD2D(a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x3Cu, 0LL);
  return v3;
}
