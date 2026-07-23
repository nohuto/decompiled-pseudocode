/*
 * XREFs of RtlFillNonVolatileMemory @ 0x180143300
 * Callers:
 *     <none>
 * Callees:
 *     RtlFlushNonVolatileMemory @ 0x1801430D0 (RtlFlushNonVolatileMemory.c)
 *     RtlFillMemoryNonTemporal @ 0x1801644C0 (RtlFillMemoryNonTemporal.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
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
    memset_thunk_772440563353939046(NvDestination, Value, Size);
    return v5;
  }
  if ( Size < 8 )
  {
LABEL_10:
    memset_thunk_772440563353939046(NvDestination, Value, Size);
    return RtlFlushNonVolatileMemory(NvToken, NvDestination, v7, v5);
  }
  LOBYTE(Size) = Value;
  RtlFillMemoryNonTemporal(NvDestination, v7, Size);
  return v5;
}
