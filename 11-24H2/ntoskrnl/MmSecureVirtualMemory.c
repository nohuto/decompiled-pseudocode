/*
 * XREFs of MmSecureVirtualMemory @ 0x1409E5050
 * Callers:
 *     DifMmSecureVirtualMemoryWrapper @ 0x140632F90 (DifMmSecureVirtualMemoryWrapper.c)
 *     RtlFileMapMapView @ 0x1406977B4 (RtlFileMapMapView.c)
 *     AslpFileLargeMapCreate @ 0x140810B50 (AslpFileLargeMapCreate.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x1409E5080 (MmSecureVirtualMemoryEx.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  __int64 v4; // r8

  v4 = 4LL;
  if ( ProbeMode == 2 )
    v4 = 2LL;
  return (HANDLE)MmSecureVirtualMemoryEx(Address, Size, v4);
}
