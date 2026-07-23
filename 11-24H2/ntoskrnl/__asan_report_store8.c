/*
 * XREFs of __asan_report_store8 @ 0x1405A94F0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 */

struct _KTHREAD *__fastcall _asan_report_store8(ULONG_PTR a1)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  return KasaniReport(a1, 8uLL, 1u, retaddr, 0x80u);
}
