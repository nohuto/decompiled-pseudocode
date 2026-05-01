/*
 * XREFs of _Init_thread_notify @ 0x1802D4FD8
 * Callers:
 *     _Init_thread_abort @ 0x1802D4ED0 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x1802D4F08 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1808C85D8 )
    return qword_1808C85D8(&unk_1808C8598);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
