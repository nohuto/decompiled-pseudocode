/*
 * XREFs of IsPointerInputMessageWithState @ 0x1401507E0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1401506F8 (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxRetrievePointerInputMessage @ 0x1401B9D88 (xxxRetrievePointerInputMessage.c)
 *     _QuerySendMessage @ 0x1402B182C (_QuerySendMessage.c)
 * Callees:
 *     IsPointerInputClientMessage @ 0x140148320 (IsPointerInputClientMessage.c)
 */

_BOOL8 __fastcall IsPointerInputMessageWithState(unsigned int a1)
{
  int v2; // ecx

  return a1 - 577 <= 3 || IsPointerInputClientMessage(a1) && v2 != 595;
}
