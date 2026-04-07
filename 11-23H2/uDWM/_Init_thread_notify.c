/*
 * XREFs of _Init_thread_notify @ 0x18005CF20
 * Callers:
 *     _Init_thread_abort @ 0x18005CE10 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18005CE48 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1801481E8 )
    return qword_1801481E8(&unk_1801481A8);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
