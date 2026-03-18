/*
 * XREFs of MmAllocateContiguousMemory @ 0x140663690
 * Callers:
 *     DifMmAllocateContiguousMemoryWrapper @ 0x140625F70 (DifMmAllocateContiguousMemoryWrapper.c)
 * Callees:
 *     MiAllocateContiguousMemory @ 0x140414D9C (MiAllocateContiguousMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  unsigned __int64 v2; // rdx
  SIZE_T v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = NumberOfBytes;
  v2 = (unsigned __int64)HighestAcceptableAddress.QuadPart >> 12;
  if ( v2 > qword_140E2D9A0 )
    v2 = qword_140E2D9A0;
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
