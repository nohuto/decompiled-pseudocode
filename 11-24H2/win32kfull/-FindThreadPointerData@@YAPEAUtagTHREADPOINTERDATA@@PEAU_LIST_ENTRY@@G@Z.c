/*
 * XREFs of ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1400A76E8
 * Callers:
 *     ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x1400A6CFC (-DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z.c)
 *     xxxPromotePointerToMouse @ 0x1400A7304 (xxxPromotePointerToMouse.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1400A7418 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?PointerMsgIdFromHookCall@@YA_KPEAUtagTHREADINFO@@I_J@Z @ 0x1400A75E0 (-PointerMsgIdFromHookCall@@YA_KPEAUtagTHREADINFO@@I_J@Z.c)
 *     EditionFindThreadPointerData @ 0x1400A76D0 (EditionFindThreadPointerData.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1400A7A5C (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     xxxSendPointerMessage @ 0x1400A8EFC (xxxSendPointerMessage.c)
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1400A96AC (xxxDiscardPointerFrameMessagesInternal.c)
 *     xxxRetrievePointerInputMessage @ 0x1401B9D88 (xxxRetrievePointerInputMessage.c)
 *     ?GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1402647F0 (-GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagTHREADPOINTERDATA *__fastcall FindThreadPointerData(struct _LIST_ENTRY *a1, __int64 a2)
{
  unsigned __int16 v2; // bx
  __int64 UserSessionState; // rax

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return CTouchProcessor::FindThreadPointerData(*(CTouchProcessor **)(UserSessionState + 3264), a1, v2);
}
