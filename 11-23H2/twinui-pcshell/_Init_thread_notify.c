/*
 * XREFs of _Init_thread_notify @ 0x1801C91E0
 * Callers:
 *     _Init_thread_abort @ 0x1801C90D0 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_18098CBA8 )
    return qword_18098CBA8(&unk_18098CB68);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
