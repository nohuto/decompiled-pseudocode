/*
 * XREFs of ?GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1402647F0
 * Callers:
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x14026479C (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1402ED708 (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1402EE41C (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1400A76E8 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?GetPointerInfoByPointerMsgId@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x140198B80 (-GetPointerInfoByPointerMsgId@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall GetPointerInfoByPointerId(__int64 a1, const struct tagPOINTER_INFO **a2)
{
  unsigned __int16 v3; // bx
  struct tagTHREADINFO *v4; // rax
  struct _LIST_ENTRY *v5; // rcx
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  unsigned __int64 v8; // rcx

  *a2 = 0LL;
  v3 = a1;
  v4 = PtiCurrent(a1, (__int64)a2);
  v5 = (struct _LIST_ENTRY *)((char *)v4 + 1208);
  ThreadPointerData = (struct tagTHREADPOINTERDATA *)*((_QWORD *)v4 + 154);
  if ( ThreadPointerData )
  {
    if ( *((_WORD *)ThreadPointerData + 8) != v3 )
      return 3221225485LL;
  }
  else
  {
    ThreadPointerData = FindThreadPointerData(v5, v3);
    if ( !ThreadPointerData )
      return 3221225485LL;
  }
  if ( (*((_DWORD *)ThreadPointerData + 12) & 8) != 0 )
    return 3221225485LL;
  v8 = *((_QWORD *)ThreadPointerData + 3);
  if ( !v8 )
    return 3221225485LL;
  return GetPointerInfoByPointerMsgId(v8, a2);
}
