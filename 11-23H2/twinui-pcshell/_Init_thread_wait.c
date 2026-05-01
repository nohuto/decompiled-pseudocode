/*
 * XREFs of _Init_thread_wait @ 0x1801C9234
 * Callers:
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_18098CBA0 )
  {
    qword_18098CBA0(&unk_18098CB68, &stru_18098CB78, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&stru_18098CB78);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_18098CB78);
  }
}
