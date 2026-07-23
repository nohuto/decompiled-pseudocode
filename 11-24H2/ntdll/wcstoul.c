/*
 * XREFs of wcstoul @ 0x180126460
 * Callers:
 *     <none>
 * Callees:
 *     wcstoxlX @ 0x1801261CC (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)String, EndPtr, Radix, 1, 0);
}
