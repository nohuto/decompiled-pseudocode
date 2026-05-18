/*
 * XREFs of _Init_thread_wait_v2 @ 0x1800027C8
 * Callers:
 *     _Init_thread_header @ 0x180002718 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_1800194D0 )
  {
    qword_1800194D0(&unk_180019498, &stru_1800194A8, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_1800194A8);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_1800194A8);
  }
}
