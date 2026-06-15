/*
 * XREFs of _Init_thread_wait_v2 @ 0x180020988
 * Callers:
 *     _Init_thread_header @ 0x1800208D8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_180064010 )
  {
    qword_180064010(&unk_180063FD8, &stru_180063FE8, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_180063FE8);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_180063FE8);
  }
}
