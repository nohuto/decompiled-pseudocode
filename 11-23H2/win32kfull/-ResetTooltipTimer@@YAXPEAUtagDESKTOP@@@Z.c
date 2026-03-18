/*
 * XREFs of ?ResetTooltipTimer@@YAXPEAUtagDESKTOP@@@Z @ 0x1C013CB70
 * Callers:
 *     xxxTrackMouseMove @ 0x1C0024474 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C0098298 (xxxCancelMouseMoveTracking.c)
 * Callees:
 *     FindTimer @ 0x1C003DA48 (FindTimer.c)
 */

void __fastcall ResetTooltipTimer(struct tagDESKTOP *a1)
{
  FindTimer(0LL, *((_QWORD *)a1 + 15), 4u, 1, 0LL);
  *((_QWORD *)a1 + 15) = 0LL;
}
