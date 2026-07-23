/*
 * XREFs of __asan_report_load1 @ 0x1405A9310
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 */

struct _KTHREAD *__fastcall _asan_report_load1(ULONG_PTR a1)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  return KasaniReport(a1, 1uLL, 0, retaddr, 0x80u);
}
