/*
 * XREFs of HalpDmaFreeMapRegisterFrame @ 0x14054CEA4
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x140334FBC (HalpDmaAllocateMapRegisters.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     HalpDmaCvmSetPageShareability @ 0x1406F41CC (HalpDmaCvmSetPageShareability.c)
 */

__int64 __fastcall HalpDmaFreeMapRegisterFrame(void *a1)
{
  PHYSICAL_ADDRESS v3; // rbx
  int v4; // ebx
  PHYSICAL_ADDRESS PhysicalAddress; // [rsp+38h] [rbp+10h] BYREF

  if ( HalpDmaCvmConfiguration )
  {
    PhysicalAddress = MmGetPhysicalAddress(a1);
    v3 = PhysicalAddress;
    if ( PhysicalAddress.QuadPart )
    {
      MiUnmapContiguousMemory((unsigned __int64)a1, 0x1000uLL, 1);
      v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))HalpDmaCvmSetPageShareability)(
             (PHYSICAL_ADDRESS)v3.QuadPart,
             1LL,
             0LL,
             &PhysicalAddress);
      if ( v4 >= 0 )
        MmFreeContiguousMemory((PVOID)((PhysicalAddress.LowPart & 0xFFF)
                                     + ((__int64)(*(_QWORD *)(48 * ((unsigned __int64)PhysicalAddress.QuadPart >> 12)
                                                            - 0x21FFFFFFFFF8LL) << 25) >> 16)));
      return (unsigned int)v4;
    }
    else
    {
      return 3221225711LL;
    }
  }
  else
  {
    HalpMmAllocCtxFree((__int64)a1, (__int64)a1);
    return 0LL;
  }
}
