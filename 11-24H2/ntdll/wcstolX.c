/*
 * XREFs of wcstolX @ 0x180126430
 * Callers:
 *     _wtoi @ 0x1801214C0 (_wtoi.c)
 *     _wtol @ 0x180121510 (_wtol.c)
 * Callees:
 *     wcstoxlX @ 0x1801261CC (wcstoxlX.c)
 */

__int64 __fastcall wcstolX(wint_t *a1, wint_t **a2, unsigned int a3, int a4)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
