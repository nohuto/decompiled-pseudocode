/*
 * XREFs of ?PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z @ 0x1801B4C3C
 * Callers:
 *     ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B4660 (-Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801B4AC4 (-OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 *     ?OnTouchDown@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801B4BA0 (-OnTouchDown@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ClickRecognizer::PointsWithinThreshold(
        ClickRecognizer *this,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3,
        unsigned int a4)
{
  char v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // eax

  v4 = 0;
  v5 = a3->x - a2->x;
  if ( a2->x - a3->x > 0 )
    v5 = a2->x - a3->x;
  if ( v5 <= a4 )
  {
    v6 = a3->y - a2->y;
    if ( a2->y - a3->y > 0 )
      v6 = a2->y - a3->y;
    if ( v6 <= a4 )
      return 1;
  }
  return v4;
}
