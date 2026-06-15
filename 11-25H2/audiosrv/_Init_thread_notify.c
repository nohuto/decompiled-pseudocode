/*
 * XREFs of _Init_thread_notify @ 0x1800A83F0
 * Callers:
 *     _Init_thread_footer @ 0x1800A8320 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1801CEEE0 )
    return qword_1801CEEE0(&unk_1801CEEA0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
