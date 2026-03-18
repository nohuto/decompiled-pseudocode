/*
 * XREFs of ?GetQ@tagTHREADINFO@@QEBAPEAUtagQ@@XZ @ 0x1C01A5728
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

struct tagQ *__fastcall tagTHREADINFO::GetQ(tagTHREADINFO *this)
{
  return (struct tagQ *)*((_QWORD *)this + 54);
}
