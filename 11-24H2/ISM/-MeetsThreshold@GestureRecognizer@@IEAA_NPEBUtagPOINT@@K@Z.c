/*
 * XREFs of ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x1801B3F58
 * Callers:
 *     ?AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z @ 0x1801B3C44 (-AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z.c)
 *     ?RecordPoints@PinchStretchRecognizer@@AEAAXPEBUtagPOINT@@0@Z @ 0x1801B4414 (-RecordPoints@PinchStretchRecognizer@@AEAAXPEBUtagPOINT@@0@Z.c)
 *     ?GetInteresting@TwoFingerGestureRecognizer@@UEAA?AW4GestureType@@XZ @ 0x1801B5B80 (-GetInteresting@TwoFingerGestureRecognizer@@UEAA-AW4GestureType@@XZ.c)
 *     ?ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1801B6880 (-ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 *     ?SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z @ 0x1801B6ACC (-SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall GestureRecognizer::MeetsThreshold(GestureRecognizer *this, const struct tagPOINT *a2, unsigned int a3)
{
  unsigned int x; // eax
  unsigned int y; // eax

  x = -a2->x;
  if ( a2->x > 0 )
    x = a2->x;
  if ( x >= a3 )
    return 1;
  y = -a2->y;
  if ( a2->y > 0 )
    y = a2->y;
  return y >= a3;
}
