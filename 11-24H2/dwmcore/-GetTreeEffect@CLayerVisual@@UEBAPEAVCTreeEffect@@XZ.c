/*
 * XREFs of ?GetTreeEffect@CLayerVisual@@UEBAPEAVCTreeEffect@@XZ @ 0x180136240
 * Callers:
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x1801361FC (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

struct CTreeEffect *__fastcall CLayerVisual::GetTreeEffect(CLayerVisual *this)
{
  return (struct CTreeEffect *)*((_QWORD *)this + 86);
}
