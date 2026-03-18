/*
 * XREFs of _Init_thread_notify @ 0x18025C890
 * Callers:
 *     _Init_thread_footer @ 0x18025C7C0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1804059D8 )
    return qword_1804059D8(&unk_180405998);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
