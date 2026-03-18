/*
 * XREFs of IsPointerParentNotify @ 0x1400A9600
 * Callers:
 *     NtUserfnPOINTERINPUT @ 0x1400A8DE0 (NtUserfnPOINTERINPUT.c)
 *     NtUserfnPARENTNOTIFY @ 0x1400A9570 (NtUserfnPARENTNOTIFY.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x140146F40 (TransformMessageBetweenCoordinateSpaces.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     _QuerySendMessage @ 0x1402B182C (_QuerySendMessage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerParentNotify(int a1, __int16 a2)
{
  return a1 == 528 && a2 == 582;
}
