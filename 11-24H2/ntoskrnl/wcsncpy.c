/*
 * XREFs of wcsncpy @ 0x1404FD8D0
 * Callers:
 *     <none>
 * Callees:
 *     wcsnlen @ 0x1404FD950 (wcsnlen.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

wchar_t *__cdecl wcsncpy(wchar_t *Dest, const wchar_t *Source, size_t Count)
{
  size_t v6; // r14

  v6 = wcsnlen(Source, Count);
  memmove(Dest, Source, 2 * v6);
  if ( v6 < Count )
    memset_0(&Dest[v6], 0, 2 * (Count - v6));
  return Dest;
}
