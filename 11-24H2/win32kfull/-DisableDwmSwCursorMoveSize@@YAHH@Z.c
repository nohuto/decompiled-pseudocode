/*
 * XREFs of ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x140248F40
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxCancelTrackingForThread @ 0x1402AAEF0 (xxxCancelTrackingForThread.c)
 * Callees:
 *     ChangeComposableCursor @ 0x14020E090 (ChangeComposableCursor.c)
 */

__int64 __fastcall DisableDwmSwCursorMoveSize(int a1, __int64 a2)
{
  if ( a1 )
    ChangeComposableCursor(0LL, a2);
  return 1LL;
}
