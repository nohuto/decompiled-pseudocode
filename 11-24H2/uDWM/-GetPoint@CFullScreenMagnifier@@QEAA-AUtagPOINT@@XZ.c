/*
 * XREFs of ?GetPoint@CFullScreenMagnifier@@QEAA?AUtagPOINT@@XZ @ 0x1800C328C
 * Callers:
 *     ?UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z @ 0x1800C8FB8 (-UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z.c)
 * Callees:
 *     <none>
 */

struct tagPOINT __fastcall CFullScreenMagnifier::GetPoint(CFullScreenMagnifier *this, _DWORD *a2)
{
  double v2; // xmm0_8

  v2 = *((double *)this + 5) * -1.0;
  *a2 = (int)(*((double *)this + 4) * -1.0);
  a2[1] = (int)v2;
  return (struct tagPOINT)a2;
}
