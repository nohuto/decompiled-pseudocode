/*
 * XREFs of ?HasNonEmptyContent@CLayerVisual@@UEBA_NXZ @ 0x1801F1F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLayerVisual::HasNonEmptyContent(CLayerVisual *this)
{
  return *((float *)this + 40) > *((float *)this + 38) && *((float *)this + 41) > *((float *)this + 39);
}
