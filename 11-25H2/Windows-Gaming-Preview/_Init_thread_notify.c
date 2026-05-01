/*
 * XREFs of _Init_thread_notify @ 0x1800024F0
 * Callers:
 *     _Init_thread_footer @ 0x180002420 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_180059618 )
    return qword_180059618(&unk_1800595D8);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
