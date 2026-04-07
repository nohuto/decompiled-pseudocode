/*
 * XREFs of ?UpdateLocation@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@@Z @ 0x18000F558
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18000E778 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDirectTouchVisual::UpdateLocation(
        CDirectTouchVisual *this,
        const struct tagPOINT *a2,
        const struct tagRECT *a3)
{
  return CDirectTouchVisual::UpdateLocationWithScalar(this, a2, a3, *((float *)this + 77));
}
