/*
 * XREFs of TppIteWakeWaiters @ 0x18003E510
 * Callers:
 *     TppSingleTimerExpiration @ 0x18003F720 (TppSingleTimerExpiration.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x180164030 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall TppIteWakeWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = ZwAlertThreadByThreadId(a1[1]);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
