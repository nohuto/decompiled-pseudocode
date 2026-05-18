/*
 * XREFs of _Init_thread_notify @ 0x180002780
 * Callers:
 *     _Init_thread_footer @ 0x1800026B0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1800194D8 )
    return qword_1800194D8(&unk_180019498);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
