/*
 * XREFs of RtlFlushNonVolatileMemoryRanges @ 0x1405EBA90
 * Callers:
 *     <none>
 * Callees:
 *     RtlFlushNonVolatileMemory @ 0x1404F8700 (RtlFlushNonVolatileMemory.c)
 *     RtlDrainNonVolatileFlush @ 0x1405E5440 (RtlDrainNonVolatileFlush.c)
 */

DWORD __cdecl RtlFlushNonVolatileMemoryRanges(PVOID NvToken, PNV_MEMORY_RANGE NvRanges, SIZE_T NumRanges, DWORD Flags)
{
  SIZE_T v5; // rdi

  v5 = NumRanges;
  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( ((unsigned __int8)NvToken & 2) != 0 )
  {
    if ( NumRanges )
    {
      do
      {
        RtlFlushNonVolatileMemory(NvToken, NvRanges->BaseAddress, NvRanges->Length, Flags | 1);
        ++NvRanges;
        --v5;
      }
      while ( v5 );
    }
    if ( (Flags & 1) == 0 )
      RtlDrainNonVolatileFlush(NvToken);
  }
  return 0;
}
