/*
 * XREFs of _Init_thread_wait_v2 @ 0x1800A8438
 * Callers:
 *     _Init_thread_header @ 0x1800A8388 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_1801CEED8 )
  {
    qword_1801CEED8(&unk_1801CEEA0, &stru_1801CEEB0, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_1801CEEB0);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_1801CEEB0);
  }
}
