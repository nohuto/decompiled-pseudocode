/*
 * XREFs of _Init_thread_wait_v2 @ 0x1800A4728
 * Callers:
 *     _Init_thread_header @ 0x1800A4678 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_1801DAF18 )
  {
    qword_1801DAF18(&unk_1801DAEE0, &stru_1801DAEF0, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_1801DAEF0);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_1801DAEF0);
  }
}
