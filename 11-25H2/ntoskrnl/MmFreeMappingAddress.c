/*
 * XREFs of MmFreeMappingAddress @ 0x140A5BDC0
 * Callers:
 *     SmFpCleanup @ 0x140396584 (SmFpCleanup.c)
 *     DifMmFreeMappingAddressWrapper @ 0x140627380 (DifMmFreeMappingAddressWrapper.c)
 *     PnprFreeMappingReserve @ 0x1407235EC (PnprFreeMappingReserve.c)
 *     PnprInitializeMappingReserve @ 0x140723A74 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x1407A0A90 (EtwpSavePersistedLogger.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140BFF07C (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140BFF19C (HalpDmaAllocateMappingResources.c)
 * Callees:
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiRemoveMappingNode @ 0x1404A326C (MiRemoveMappingNode.c)
 *     MiRemovePteTracker @ 0x1404CE90C (MiRemovePteTracker.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall MmFreeMappingAddress(PVOID BaseAddress, ULONG PoolTag)
{
  ULONG_PTR v2; // rbx
  _QWORD *v4; // rax
  void *v5; // rsi
  ULONG_PTR BugCheckParameter4; // rdi
  ULONG_PTR v7; // r10
  unsigned __int64 *PteAddress; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r8

  v2 = PoolTag;
  v4 = MiRemoveMappingNode((ULONG_PTR)BaseAddress, *(ULONG_PTR *)&PoolTag);
  v5 = v4;
  if ( *((_DWORD *)v4 + 10) != (_DWORD)v2 )
    KeBugCheckEx(0xDAu, 0x102uLL, (ULONG_PTR)BaseAddress, v2, 0LL);
  BugCheckParameter4 = v4[4];
  PteAddress = (unsigned __int64 *)MiGetPteAddress(v4[3]);
  v9 = (unsigned __int64)PteAddress;
  v10 = &PteAddress[BugCheckParameter4];
  while ( v9 < (unsigned __int64)v10 )
  {
    if ( ((unsigned __int64 *)v9 == PteAddress || (v9 & 0xFFF) == 0) && (*(_QWORD *)MiGetPteAddress(v9) & 0x80u) != 0LL )
      KeBugCheckEx(0xDAu, 0x109uLL, v7, v2, BugCheckParameter4);
    if ( *(_QWORD *)v9 )
      KeBugCheckEx(0xDAu, 0x103uLL, v7, v2, BugCheckParameter4);
    v9 += 8LL;
  }
  if ( (dword_140FC41EC & 1) != 0 )
    MiRemovePteTracker(0LL, v7, BugCheckParameter4);
  MiReleasePtes((__int64)&qword_140E37328, PteAddress, BugCheckParameter4);
  ExFreePoolWithTag(v5, 0);
}
