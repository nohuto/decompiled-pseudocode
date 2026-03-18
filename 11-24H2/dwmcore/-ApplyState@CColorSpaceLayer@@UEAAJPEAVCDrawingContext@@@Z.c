/*
 * XREFs of ?ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18027B450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorSpaceLayer::ApplyState(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  *((_BYTE *)this + 120) = *((_BYTE *)a2 + 8067);
  *((_BYTE *)a2 + 8067) = 0;
  return CExternalLayer::ApplyState(this, a2);
}
