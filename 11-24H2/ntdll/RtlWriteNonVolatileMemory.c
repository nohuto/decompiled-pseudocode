/*
 * XREFs of RtlWriteNonVolatileMemory @ 0x1801434F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFlushNonVolatileMemory @ 0x1801430D0 (RtlFlushNonVolatileMemory.c)
 *     RtlCopyMemoryNonTemporal @ 0x180164380 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

DWORD __cdecl RtlWriteNonVolatileMemory(
        PVOID NvToken,
        void *NvDestination,
        const void *Source,
        SIZE_T Size,
        DWORD Flags)
{
  DWORD v5; // ebx

  v5 = 0;
  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( (Flags & 3) == 1 )
  {
    v5 = (Flags & 0x100) != 0;
    goto LABEL_10;
  }
  if ( (Flags & 2) == 0 )
  {
    memmove(NvDestination, Source, Size);
    return v5;
  }
  if ( Size < 8 )
  {
LABEL_10:
    memmove(NvDestination, Source, Size);
    return RtlFlushNonVolatileMemory(NvToken, NvDestination, Size, v5);
  }
  RtlCopyMemoryNonTemporal(NvDestination, Source, Size);
  return v5;
}
