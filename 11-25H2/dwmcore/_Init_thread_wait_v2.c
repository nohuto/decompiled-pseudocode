/*
 * XREFs of _Init_thread_wait_v2 @ 0x18025C8D8
 * Callers:
 *     _Init_thread_header @ 0x18025C828 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_1804059D0 )
  {
    qword_1804059D0(&unk_180405998, &stru_1804059A8, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_1804059A8);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_1804059A8);
  }
}
