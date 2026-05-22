/*
 * XREFs of _Init_thread_wait_v2 @ 0x18009DA40
 * Callers:
 *     _Init_thread_header @ 0x18009D990 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_180250270 )
  {
    qword_180250270(&unk_180250238, &CriticalSection, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
