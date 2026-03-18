/*
 * XREFs of ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C008CB48
 * Callers:
 *     SuspendThreadQueue @ 0x1C0085B00 (SuspendThreadQueue.c)
 *     PostInputMessage @ 0x1C0117FD8 (PostInputMessage.c)
 * Callees:
 *     _FreeTouchInputInfo @ 0x1C01AFD80 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C02042E0 (_FreeGestureInfo.c)
 */

void __fastcall CleanInputMessage(int a1, struct tagQMSG *a2)
{
  if ( a1 == 576 )
    FreeTouchInputInfo(*((_QWORD *)a2 + 5), 1LL);
  if ( a1 == 281 )
    FreeGestureInfo(*((_QWORD *)a2 + 5), 1LL);
}
