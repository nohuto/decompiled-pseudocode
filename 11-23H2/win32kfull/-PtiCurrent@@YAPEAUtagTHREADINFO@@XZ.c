/*
 * XREFs of ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1C01A5A2C
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *PtiCurrent(void)
{
  return (struct tagTHREADINFO *)gptiCurrent;
}
