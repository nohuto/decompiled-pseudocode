/*
 * XREFs of ?GetActiveWindow@tagQ@@QEBAPEAUtagWND@@XZ @ 0x1C0138A0C
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall tagQ::GetActiveWindow(tagQ *this)
{
  return (struct tagWND *)*((_QWORD *)this + 16);
}
