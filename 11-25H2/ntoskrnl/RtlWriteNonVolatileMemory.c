/*
 * XREFs of RtlWriteNonVolatileMemory @ 0x1404A4BB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFlushNonVolatileMemory @ 0x1404F89F0 (RtlFlushNonVolatileMemory.c)
 *     RtlCopyMemoryNonTemporal @ 0x1406A8770 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x1406B4940 (memmove.c)
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
  if ( ((unsigned __int8)NvToken & 1) != 0 )
  {
    if ( (Flags & 3) == 1 )
    {
      v5 = (Flags & 0x100) != 0;
    }
    else
    {
      if ( (Flags & 2) == 0 )
      {
        memmove(NvDestination, Source, Size);
        return v5;
      }
      if ( Size >= 8 )
      {
        RtlCopyMemoryNonTemporal(NvDestination, Source, Size);
        return v5;
      }
    }
    memmove(NvDestination, Source, Size);
    return RtlFlushNonVolatileMemory(NvToken, NvDestination, Size, v5);
  }
  return -1073741811;
}
