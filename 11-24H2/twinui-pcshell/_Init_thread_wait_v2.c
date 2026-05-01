/*
 * XREFs of _Init_thread_wait_v2 @ 0x1802D5020
 * Callers:
 *     _Init_thread_header @ 0x1802D4F70 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_1808C85D0 )
  {
    qword_1808C85D0(&unk_1808C8598, &stru_1808C85A8, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_1808C85A8);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_1808C85A8);
  }
}
