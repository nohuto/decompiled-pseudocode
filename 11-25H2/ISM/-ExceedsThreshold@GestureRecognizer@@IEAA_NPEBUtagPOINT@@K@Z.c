/*
 * XREFs of ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x1801ADD74
 * Callers:
 *     ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x1801ADB70 (-AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z.c)
 *     ?DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801AED38 (-DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall GestureRecognizer::ExceedsThreshold(
        GestureRecognizer *this,
        const struct tagPOINT *a2,
        unsigned int a3)
{
  unsigned int x; // eax
  unsigned int y; // eax
  bool result; // al

  x = -a2->x;
  if ( a2->x > 0 )
    x = a2->x;
  if ( x > a3 )
    return 1;
  y = -a2->y;
  if ( a2->y > 0 )
    y = a2->y;
  if ( y > a3 )
    return 1;
  result = 0;
  if ( !a3 )
    return 1;
  return result;
}
