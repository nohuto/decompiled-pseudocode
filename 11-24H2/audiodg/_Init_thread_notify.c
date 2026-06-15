/*
 * XREFs of _Init_thread_notify @ 0x140059318
 * Callers:
 *     _Init_thread_abort @ 0x140059210 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x140059248 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1400C3D58 )
    return qword_1400C3D58(&unk_1400C3D18);
  SetEvent(hEvent);
  return ResetEvent(hEvent);
}
