/*
 * XREFs of _Init_thread_notify @ 0x1800A46E0
 * Callers:
 *     _Init_thread_footer @ 0x1800A4610 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1801DAF20 )
    return qword_1801DAF20(&unk_1801DAEE0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
