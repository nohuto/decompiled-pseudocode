/*
 * XREFs of MmPrefetchPages @ 0x140955410
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x140955430 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists, 0LL);
}
