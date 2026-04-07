/*
 * XREFs of _Init_thread_notify @ 0x18009BCC8
 * Callers:
 *     _Init_thread_abort @ 0x18009BBC0 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18009BBF8 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_180125E18 )
    return qword_180125E18(&unk_180125DD8);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
