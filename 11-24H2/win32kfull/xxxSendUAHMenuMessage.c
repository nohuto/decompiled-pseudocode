/*
 * XREFs of xxxSendUAHMenuMessage @ 0x1401D8418
 * Callers:
 *     xxxMenuDraw @ 0x14006938C (xxxMenuDraw.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxPaintMenuBar @ 0x1401D8150 (xxxPaintMenuBar.c)
 *     xxxMNDrawFullNC @ 0x1402E951C (xxxMNDrawFullNC.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHMenuMessage(struct tagWND *a1, unsigned int a2)
{
  return xxxSendMessage(a1, a2);
}
