/*
 * XREFs of _Init_thread_wait_v2 @ 0x18009D870
 * Callers:
 *     _Init_thread_header @ 0x18009D7C0 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_1802462B0 )
  {
    qword_1802462B0(&unk_180246278, &CriticalSection, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
