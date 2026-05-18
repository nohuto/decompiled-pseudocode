/*
 * XREFs of sub_18000C938 @ 0x18000C938
 * Callers:
 *     _Init_thread_abort @ 0x18000C830 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int sub_18000C938()
{
  if ( qword_1801C32C0 )
    return qword_1801C32C0(&unk_1801C3280);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
