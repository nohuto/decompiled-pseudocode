/*
 * XREFs of UnlockWndMenu @ 0x1C013C890
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C0094A20 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 */

struct tagWND **__fastcall UnlockWndMenu(struct tagWND *a1)
{
  return UnlockWndMenuWorker(a1, 0);
}
