/*
 * XREFs of ClearSendMessages @ 0x1C00F2B6C
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     xxxInterSendMsgEx @ 0x1C0033720 (xxxInterSendMsgEx.c)
 *     SetWakeBit @ 0x1C01190C0 (SetWakeBit.c)
 */

__int64 ClearSendMessages()
{
  return gsmsList;
}
