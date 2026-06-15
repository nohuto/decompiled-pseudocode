/*
 * XREFs of _Init_thread_notify @ 0x180020890
 * Callers:
 *     _Init_thread_footer @ 0x1800207C0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_180067018 )
    return qword_180067018(&unk_180066FD8);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
