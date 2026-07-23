/*
 * XREFs of __asan_report_loadN @ 0x1405A9400
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 */

struct _KTHREAD *__fastcall _asan_report_loadN(ULONG_PTR a1, ULONG_PTR a2)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  return KasaniReport(a1, a2, 0, retaddr, 0x80u);
}
