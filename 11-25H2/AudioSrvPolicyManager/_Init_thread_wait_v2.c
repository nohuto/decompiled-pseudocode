/*
 * XREFs of _Init_thread_wait_v2 @ 0x1800208D8
 * Callers:
 *     _Init_thread_header @ 0x180020828 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_180067010 )
  {
    qword_180067010(&unk_180066FD8, &stru_180066FE8, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_180066FE8);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_180066FE8);
  }
}
