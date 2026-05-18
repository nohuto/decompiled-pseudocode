/*
 * XREFs of sub_18000CAA8 @ 0x18000CAA8
 * Callers:
 *     _Init_thread_abort @ 0x18000C9A0 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int sub_18000CAA8()
{
  if ( qword_1801C42D8 )
    return qword_1801C42D8(&unk_1801C4298);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
