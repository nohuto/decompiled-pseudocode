/*
 * XREFs of ?GetTreeEffect@CLayerVisual@@UEBAPEAVCTreeEffect@@XZ @ 0x18007D410
 * Callers:
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x18007D3C4 (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

struct CTreeEffect *__fastcall CLayerVisual::GetTreeEffect(CLayerVisual *this)
{
  return (struct CTreeEffect *)*((_QWORD *)this + 85);
}
