/*
 * XREFs of HalpDmaControllerInitializeController @ 0x140550458
 * Callers:
 *     HalpDmaInitializeControllers @ 0x14054F4A8 (HalpDmaInitializeControllers.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     MmAllocateContiguousNodeMemory @ 0x140414C00 (MmAllocateContiguousNodeMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerInitializeController(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ecx
  __int64 v4; // rbx
  __int64 i; // rsi
  __int64 v6; // r14
  __int64 v7; // rbp
  void *ContiguousNodeMemory; // rax

  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 64));
  v3 = *(_DWORD *)(a1 + 76);
  if ( v3 < 0x40 )
    v4 = (1LL << v3) - 1;
  else
    LODWORD(v4) = -1;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 44); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(a1 + 56);
    v7 = 160 * i;
    result = *(unsigned int *)(v6 + 160 * i + 120);
    if ( (_DWORD)result )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory((unsigned int)result, 0, v4, 0, 516, 0x80000000);
      *(_QWORD *)(v6 + v7 + 128) = ContiguousNodeMemory;
      *(PHYSICAL_ADDRESS *)(v6 + v7 + 136) = MmGetPhysicalAddress(ContiguousNodeMemory);
      result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 64));
    }
  }
  return result;
}
