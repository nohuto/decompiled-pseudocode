/*
 * XREFs of MmPrefetchPages @ 0x1409C8CE0
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x1409C8D00 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists, 0LL);
}
