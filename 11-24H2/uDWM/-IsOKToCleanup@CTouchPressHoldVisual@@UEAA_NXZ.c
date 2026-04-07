/*
 * XREFs of ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x1800DBD80
 * Callers:
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18000DB14 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18000E778 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTouchPressHoldVisual::IsOKToCleanup(CTouchPressHoldVisual *this)
{
  bool result; // al

  result = 0;
  if ( !*((_QWORD *)this + 37) && !*((_QWORD *)this + 38) && !*((_QWORD *)this + 39) )
    return *((_QWORD *)this + 40) == 0LL;
  return result;
}
