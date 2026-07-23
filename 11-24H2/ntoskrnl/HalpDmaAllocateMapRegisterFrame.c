/*
 * XREFs of HalpDmaAllocateMapRegisterFrame @ 0x14054C72C
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     MmAllocateContiguousMemoryEx @ 0x1403966A0 (MmAllocateContiguousMemoryEx.c)
 *     MmFreeContiguousMemory @ 0x140398060 (MmFreeContiguousMemory.c)
 *     HalpDmaCvmSetPageShareability @ 0x1406FDBFC (HalpDmaCvmSetPageShareability.c)
 */

__int64 __fastcall HalpDmaAllocateMapRegisterFrame(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF
  __int64 QuadPart; // [rsp+68h] [rbp+10h] BYREF

  BaseAddress = 0LL;
  if ( HalpDmaCvmConfiguration )
  {
    QuadPart = 4096LL;
    if ( (int)MmAllocateContiguousMemoryEx(
                &QuadPart,
                0LL,
                -1LL,
                0,
                0x80000000,
                4u,
                0LL,
                0x446C6148u,
                0,
                (unsigned __int64 *)&BaseAddress) >= 0 )
    {
      QuadPart = MmGetPhysicalAddress(BaseAddress).QuadPart;
      LOBYTE(v2) = 1;
      if ( (int)HalpDmaCvmSetPageShareability(QuadPart, 1LL, v2, &QuadPart) < 0 )
        goto LABEL_8;
      result = MmMapIoSpaceEx(QuadPart, 4096LL, 4LL);
      if ( result )
        return result;
      if ( (int)HalpDmaCvmSetPageShareability(QuadPart, 1LL, 0LL, 0LL) >= 0 )
LABEL_8:
        MmFreeContiguousMemory(BaseAddress);
    }
    return 0LL;
  }
  result = HalpMmAllocCtxAlloc(a1, 4096LL);
  if ( !result )
    return 0LL;
  return result;
}
