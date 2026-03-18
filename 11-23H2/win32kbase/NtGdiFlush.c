/*
 * XREFs of NtGdiFlush @ 0x1C009C920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 NtGdiFlush()
{
  if ( qword_1C0294D38 && (int)qword_1C0294D38() >= 0 && qword_1C0294D40 )
    qword_1C0294D40();
  return 0LL;
}
