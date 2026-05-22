/*
 * XREFs of _Init_thread_notify @ 0x18009D9F8
 * Callers:
 *     _Init_thread_abort @ 0x18009D8F0 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18009D928 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_180250278 )
    return qword_180250278(&unk_180250238);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
