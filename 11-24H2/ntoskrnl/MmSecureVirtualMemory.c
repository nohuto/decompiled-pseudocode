/*
 * XREFs of MmSecureVirtualMemory @ 0x1409EA760
 * Callers:
 *     DifMmSecureVirtualMemoryWrapper @ 0x1406349D0 (DifMmSecureVirtualMemoryWrapper.c)
 *     RtlFileMapMapView @ 0x1406966E4 (RtlFileMapMapView.c)
 *     AslpFileLargeMapCreate @ 0x140810410 (AslpFileLargeMapCreate.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x1409EA790 (MmSecureVirtualMemoryEx.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  __int64 v4; // r8

  v4 = 4LL;
  if ( ProbeMode == 2 )
    v4 = 2LL;
  return (HANDLE)MmSecureVirtualMemoryEx(Address, Size, v4);
}
