/*
 * XREFs of iswspace @ 0x1801265B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
