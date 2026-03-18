/*
 * XREFs of HalpNumaCompareMemorySideCacheEntries @ 0x140C008C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpNumaCompareMemorySideCacheNodeAndLevel @ 0x1406F5B64 (HalpNumaCompareMemorySideCacheNodeAndLevel.c)
 */

__int64 __fastcall HalpNumaCompareMemorySideCacheEntries(const void *a1, const void *a2)
{
  return HalpNumaCompareMemorySideCacheNodeAndLevel(
           *(_DWORD *)a1,
           *((_DWORD *)a1 + 5),
           *(_DWORD *)a2,
           *((_DWORD *)a2 + 5));
}
