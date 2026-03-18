/*
 * XREFs of _Init_thread_notify @ 0x180251260
 * Callers:
 *     _Init_thread_footer @ 0x180251190 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1803F9958 )
    return qword_1803F9958(&unk_1803F9918);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
