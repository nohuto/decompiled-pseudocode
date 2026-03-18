/*
 * XREFs of ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1401A4FD8
 * Callers:
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     SuspendThreadQueue @ 0x1401A4D60 (SuspendThreadQueue.c)
 * Callees:
 *     _FreeTouchInputInfo @ 0x140085CA0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x140266FF0 (_FreeGestureInfo.c)
 */

void __fastcall CleanInputMessage(int a1, struct tagQMSG *a2)
{
  if ( a1 == 576 )
  {
    FreeTouchInputInfo(*((_QWORD *)a2 + 5));
  }
  else if ( a1 == 281 )
  {
    FreeGestureInfo(*((_QWORD *)a2 + 5), 1LL);
  }
}
