/*
 * XREFs of ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C00AAA84
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     xxxSysCommand @ 0x1C00857C4 (xxxSysCommand.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 * Callees:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00AABCC (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 */

__int64 __fastcall xxxShowWindow(struct tagWND *a1, __int64 a2)
{
  return xxxShowWindowEx(a1, a2, a2 & 0x10000);
}
