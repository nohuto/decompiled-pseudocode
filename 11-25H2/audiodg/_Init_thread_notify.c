/*
 * XREFs of _Init_thread_notify @ 0x140059408
 * Callers:
 *     _Init_thread_abort @ 0x140059300 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x140059338 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1400C3DD8 )
    return qword_1400C3DD8(&unk_1400C3D98);
  SetEvent(hEvent);
  return ResetEvent(hEvent);
}
