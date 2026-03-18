/*
 * XREFs of xxxWaitMessageEx @ 0x14016DD60
 * Callers:
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxHelpLoop @ 0x1402E98E4 (xxxHelpLoop.c)
 * Callees:
 *     xxxSleepThread2 @ 0x140063CE4 (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x14016DE40 (ClientWaitMessageExMPH.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxWaitMessageEx(__int64 a1, __int64 a2, enum SLEEP_STATUS *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  _QWORD *CurrentThreadNonPaged; // rax

  v4 = a2;
  v5 = a1;
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
  if ( *(int *)(CurrentThreadNonPaged[61] + 28LL) <= 0 )
    return xxxSleepThread2(v5, v4, 1, 0, a3);
  else
    return ClientWaitMessageExMPH(v5, v4);
}
