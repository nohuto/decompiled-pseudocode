/*
 * XREFs of HalpDmaControllerInitializeController @ 0x140552D58
 * Callers:
 *     HalpDmaInitializeControllers @ 0x140551DA8 (HalpDmaInitializeControllers.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     MmAllocateContiguousNodeMemory @ 0x140411690 (MmAllocateContiguousNodeMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerInitializeController(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v6; // ecx
  __int64 v7; // rbx
  __int64 i; // rsi
  __int64 v9; // r14
  __int64 v10; // rbp
  void *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v13; // r8

  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 64), a2, a3, a4);
  v6 = *(_DWORD *)(a1 + 76);
  if ( v6 < 0x40 )
    v7 = (1LL << v6) - 1;
  else
    LODWORD(v7) = -1;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 44); i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)(a1 + 56);
    v10 = 160 * i;
    result = *(unsigned int *)(v9 + 160 * i + 120);
    if ( (_DWORD)result )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory((unsigned int)result, 0, v7, 0, 516, 0x80000000);
      *(_QWORD *)(v9 + v10 + 128) = ContiguousNodeMemory;
      PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
      v13 = *(_QWORD *)(v9 + v10 + 128);
      *(PHYSICAL_ADDRESS *)(v9 + v10 + 136) = PhysicalAddress;
      result = guard_dispatch_icall_no_overrides(
                 *(_QWORD *)(a1 + 64),
                 (unsigned int)i,
                 v13,
                 (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart);
    }
  }
  return result;
}
