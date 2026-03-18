/*
 * XREFs of ?GetFocusWnd@tagQ@@QEBAPEAUtagWND@@XZ @ 0x1C01AD504
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall tagQ::GetFocusWnd(tagQ *this)
{
  return (struct tagWND *)*((_QWORD *)this + 15);
}
