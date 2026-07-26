/*
 * XREFs of NdisAllocateMemory @ 0x1400D45C0
 * Callers:
 *     ?ndisVerifierAllocateMemory@@YAHPEAPEAXIIT_LARGE_INTEGER@@@Z @ 0x1400C5A80 (-ndisVerifierAllocateMemory@@YAHPEAPEAXIIT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisAllocateMemory(
        PVOID *VirtualAddress,
        UINT Length,
        UINT MemoryFlags,
        NDIS_PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  void *v6; // r9
  PVOID Pool2; // rax

  v6 = 0LL;
  if ( !MemoryFlags )
  {
    Pool2 = (PVOID)ExAllocatePool2(66LL, Length, 1835091022LL);
LABEL_7:
    v6 = Pool2;
    goto LABEL_8;
  }
  if ( (MemoryFlags & 2) != 0 )
  {
    Pool2 = MmAllocateNonCachedMemory(Length);
    goto LABEL_7;
  }
  if ( (MemoryFlags & 1) != 0 )
  {
    Pool2 = (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))MmAllocateContiguousNodeMemory)(
                     Length,
                     0LL,
                     (NDIS_PHYSICAL_ADDRESS)HighestAcceptableAddress.QuadPart,
                     0LL,
                     4,
                     0x80000000);
    goto LABEL_7;
  }
LABEL_8:
  *VirtualAddress = v6;
  return v6 == 0LL ? 0xC0000001 : 0;
}
