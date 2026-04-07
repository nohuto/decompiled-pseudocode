/*
 * XREFs of _Init_thread_wait_v2 @ 0x18009BD10
 * Callers:
 *     _Init_thread_header @ 0x18009BC60 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_180125E10 )
  {
    qword_180125E10(&unk_180125DD8, &CriticalSection, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
