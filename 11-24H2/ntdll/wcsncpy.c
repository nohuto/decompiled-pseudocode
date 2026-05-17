/*
 * XREFs of wcsncpy @ 0x1801279A0
 * Callers:
 *     <none>
 * Callees:
 *     wcsnlen @ 0x180127A20 (wcsnlen.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

wchar_t *__cdecl wcsncpy(wchar_t *Destination, const wchar_t *Source, size_t Count)
{
  size_t v6; // r14

  v6 = wcsnlen(Source, Count);
  memmove(Destination, Source, 2 * v6);
  if ( v6 < Count )
    memset_thunk_772440563353939046(&Destination[v6], 0, 2 * (Count - v6));
  return Destination;
}
