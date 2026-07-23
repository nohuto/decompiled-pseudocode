/*
 * XREFs of __asan_report_store16 @ 0x1405A9460
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 */

struct _KTHREAD *__fastcall _asan_report_store16(ULONG_PTR a1)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  return KasaniReport(a1, 0x10uLL, 1u, retaddr, 0x80u);
}
