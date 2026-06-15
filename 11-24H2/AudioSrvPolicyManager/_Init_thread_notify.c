/*
 * XREFs of _Init_thread_notify @ 0x180020940
 * Callers:
 *     _Init_thread_footer @ 0x180020870 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_180064018 )
    return qword_180064018(&unk_180063FD8);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
