/*
 * XREFs of xxxSendUAHMenuMessage @ 0x1C0236FC4
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C0234A9C (xxxMNDrawFullNC.c)
 *     xxxMenuDraw @ 0x1C0235944 (xxxMenuDraw.c)
 *     xxxPaintMenuBar @ 0x1C0235DDC (xxxPaintMenuBar.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     MNInitUAHMenu @ 0x1C023419C (MNInitUAHMenu.c)
 */

__int64 __fastcall xxxSendUAHMenuMessage(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  ULONG_PTR v4; // r11
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  MNInitUAHMenu(a3, a4, (__int64)&v6);
  return xxxSendMessage(v4);
}
