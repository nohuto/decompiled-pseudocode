/*
 * XREFs of MmAllocateContiguousMemory @ 0x14066F1B0
 * Callers:
 *     DifMmAllocateContiguousMemoryWrapper @ 0x140631F30 (DifMmAllocateContiguousMemoryWrapper.c)
 * Callees:
 *     MiAllocateContiguousMemory @ 0x14041182C (MiAllocateContiguousMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  unsigned __int64 v2; // rdx
  SIZE_T v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = NumberOfBytes;
  v2 = (unsigned __int64)HighestAcceptableAddress.QuadPart >> 12;
  if ( v2 > qword_140E2DBE0 )
    v2 = qword_140E2DBE0;
  return (PVOID)MiAllocateContiguousMemory(
                  &v4,
                  0LL,
                  v2,
                  0LL,
                  6u,
                  0x80000000,
                  (volatile signed __int64 *)&MiSystemPartition,
                  1416523587,
                  0);
}
