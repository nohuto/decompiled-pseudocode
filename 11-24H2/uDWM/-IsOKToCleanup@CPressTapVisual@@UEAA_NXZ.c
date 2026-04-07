/*
 * XREFs of ?IsOKToCleanup@CPressTapVisual@@UEAA_NXZ @ 0x1800B6E10
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18000E778 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     <none>
 */

char __fastcall CPressTapVisual::IsOKToCleanup(CPressTapVisual *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 45);
  result = 0;
  if ( !v1 || *(_BYTE *)(v1 + 72) )
    return 1;
  return result;
}
