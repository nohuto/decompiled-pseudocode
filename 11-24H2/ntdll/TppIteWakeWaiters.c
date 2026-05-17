/*
 * XREFs of TppIteWakeWaiters @ 0x18006CB10
 * Callers:
 *     TppSingleTimerExpiration @ 0x18006BE80 (TppSingleTimerExpiration.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x180162AA0 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall TppIteWakeWaiters(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v4 = (_QWORD *)*a1;
      result = ZwAlertThreadByThreadId(a1[1], a2, a3, a4);
      a1 = v4;
    }
    while ( v4 );
  }
  return result;
}
