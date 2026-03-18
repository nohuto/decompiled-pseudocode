/*
 * XREFs of _Init_thread_wait_v2 @ 0x1802512A8
 * Callers:
 *     _Init_thread_header @ 0x1802511F8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_1803F9950 )
  {
    qword_1803F9950(&unk_1803F9918, &stru_1803F9928, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_1803F9928);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_1803F9928);
  }
}
