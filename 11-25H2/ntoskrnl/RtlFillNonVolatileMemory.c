/*
 * XREFs of RtlFillNonVolatileMemory @ 0x1405E20C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFlushNonVolatileMemory @ 0x1404F89F0 (RtlFlushNonVolatileMemory.c)
 *     RtlFillMemoryNonTemporal @ 0x1406A88B0 (RtlFillMemoryNonTemporal.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

DWORD __cdecl RtlFillNonVolatileMemory(PVOID NvToken, void *NvDestination, SIZE_T Size, const BYTE Value, DWORD Flags)
{
  DWORD v5; // ebx
  SIZE_T v7; // rdi

  v5 = 0;
  v7 = Size;
  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( (Flags & 3) == 1 )
  {
    v5 = (Flags & 0x100) != 0;
    goto LABEL_10;
  }
  if ( (Flags & 2) == 0 )
  {
    memset_0(NvDestination, Value, Size);
    return v5;
  }
  if ( Size < 8 )
  {
LABEL_10:
    memset_0(NvDestination, Value, Size);
    return RtlFlushNonVolatileMemory(NvToken, NvDestination, v7, v5);
  }
  LOBYTE(Size) = Value;
  RtlFillMemoryNonTemporal(NvDestination, v7, Size);
  return v5;
}
