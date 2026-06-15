/*
 * XREFs of _Init_thread_wait_v2 @ 0x140059360
 * Callers:
 *     _Init_thread_header @ 0x1400592B0 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_1400C3D50 )
  {
    qword_1400C3D50(&unk_1400C3D18, &CriticalSection, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hEvent, 0x64u, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
