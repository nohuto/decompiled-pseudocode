/*
 * XREFs of _Init_thread_wait_v2 @ 0x140059450
 * Callers:
 *     _Init_thread_header @ 0x1400593A0 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_1400C3DD0 )
  {
    qword_1400C3DD0(&unk_1400C3D98, &CriticalSection, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hEvent, 0x64u, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
