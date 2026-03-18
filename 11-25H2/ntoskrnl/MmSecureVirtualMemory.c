/*
 * XREFs of MmSecureVirtualMemory @ 0x1409F0050
 * Callers:
 *     DifMmSecureVirtualMemoryWrapper @ 0x140628A10 (DifMmSecureVirtualMemoryWrapper.c)
 *     RtlFileMapMapView @ 0x14068B394 (RtlFileMapMapView.c)
 *     AslpFileLargeMapCreate @ 0x1408008A0 (AslpFileLargeMapCreate.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x1409F0080 (MmSecureVirtualMemoryEx.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  __int64 v4; // r8

  v4 = 4LL;
  if ( ProbeMode == 2 )
    v4 = 2LL;
  return (HANDLE)MmSecureVirtualMemoryEx(Address, Size, v4);
}
