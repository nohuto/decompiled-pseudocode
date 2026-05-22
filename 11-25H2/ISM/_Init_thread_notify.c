/*
 * XREFs of _Init_thread_notify @ 0x18009D828
 * Callers:
 *     _Init_thread_abort @ 0x18009D720 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18009D758 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1802462B8 )
    return qword_1802462B8(&unk_180246278);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
