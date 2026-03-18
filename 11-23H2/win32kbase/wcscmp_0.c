/*
 * XREFs of wcscmp_0 @ 0x1C00D68F3
 * Callers:
 *     RIMGetProductString @ 0x1C0189C50 (RIMGetProductString.c)
 *     RIMVirtGetProductString @ 0x1C018DFCC (RIMVirtGetProductString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
