/*
 * XREFs of __asan_report_store1 @ 0x1405AC4C0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405AA0B0 (KasaniReport.c)
 */

struct _KTHREAD *__fastcall _asan_report_store1(ULONG_PTR a1)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  return KasaniReport(a1, 1uLL, 1u, retaddr, 0x80u);
}
