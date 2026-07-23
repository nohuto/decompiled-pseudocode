/*
 * XREFs of MmFreeMappingAddress @ 0x140A55EC0
 * Callers:
 *     SmFpCleanup @ 0x1403780A4 (SmFpCleanup.c)
 *     DifMmFreeMappingAddressWrapper @ 0x140631900 (DifMmFreeMappingAddressWrapper.c)
 *     PnprFreeMappingReserve @ 0x14072D57C (PnprFreeMappingReserve.c)
 *     PnprInitializeMappingReserve @ 0x14072DA04 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x1407B02B0 (EtwpSavePersistedLogger.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140C1207C (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140C1219C (HalpDmaAllocateMappingResources.c)
 * Callees:
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiRemoveMappingNode @ 0x14049DACC (MiRemoveMappingNode.c)
 *     MiRemovePteTracker @ 0x1404C793C (MiRemovePteTracker.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall MmFreeMappingAddress(PVOID BaseAddress, ULONG PoolTag)
{
  ULONG_PTR v2; // rbx
  _QWORD *v4; // rax
  void *v5; // rsi
  ULONG_PTR BugCheckParameter4; // rdi
  ULONG_PTR v7; // r10
  _QWORD *PteAddress; // r14
  unsigned __int64 v9; // rdx
  _QWORD *v10; // r8

  v2 = PoolTag;
  v4 = MiRemoveMappingNode((ULONG_PTR)BaseAddress, *(ULONG_PTR *)&PoolTag);
  v5 = v4;
  if ( *((_DWORD *)v4 + 10) != (_DWORD)v2 )
    KeBugCheckEx(0xDAu, 0x102uLL, (ULONG_PTR)BaseAddress, v2, 0LL);
  BugCheckParameter4 = v4[4];
  PteAddress = (_QWORD *)MiGetPteAddress(v4[3]);
  v9 = (unsigned __int64)PteAddress;
  v10 = &PteAddress[BugCheckParameter4];
  while ( v9 < (unsigned __int64)v10 )
  {
    if ( ((_QWORD *)v9 == PteAddress || (v9 & 0xFFF) == 0) && (*(_QWORD *)MiGetPteAddress(v9) & 0x80u) != 0LL )
      KeBugCheckEx(0xDAu, 0x109uLL, v7, v2, BugCheckParameter4);
    if ( *(_QWORD *)v9 )
      KeBugCheckEx(0xDAu, 0x103uLL, v7, v2, BugCheckParameter4);
    v9 += 8LL;
  }
  if ( (dword_140FC51FC & 1) != 0 )
    MiRemovePteTracker(0LL, v7, BugCheckParameter4);
  MiReleasePtes((__int64)&qword_140E376A8, PteAddress, BugCheckParameter4);
  ExFreePoolWithTag(v5, 0);
}
