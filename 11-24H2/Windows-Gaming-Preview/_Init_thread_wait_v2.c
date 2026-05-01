/*
 * XREFs of _Init_thread_wait_v2 @ 0x180002538
 * Callers:
 *     _Init_thread_header @ 0x180002488 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_180059610 )
  {
    qword_180059610(&unk_1800595D8, &stru_1800595E8, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_1800595E8);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_1800595E8);
  }
}
