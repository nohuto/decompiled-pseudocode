/*
 * XREFs of MmFreeNonCachedMemory @ 0x140A97F60
 * Callers:
 *     DifMmFreeNonCachedMemoryWrapper @ 0x1406274F0 (DifMmFreeNonCachedMemoryWrapper.c)
 * Callees:
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MmFreePagesFromMdl @ 0x14038C030 (MmFreePagesFromMdl.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  struct _MDL *v2; // rbx
  __int64 DemandZeroPte; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned __int64 *v6; // rdx

  v2 = *(struct _MDL **)(48 * ((*(_QWORD *)MiGetPteAddress((unsigned __int64)BaseAddress) >> 12) & 0xFFFFFFFFFFLL)
                       - 0x220000000000LL
                       + 16);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  *(_QWORD *)(v4 + 16) = DemandZeroPte;
  MiReleasePtes((__int64)&unk_140E35B40, v6, (v5 >> 12) + ((v5 & 0xFFF) != 0));
  MmFreePagesFromMdl(v2);
  ExFreePoolWithTag(v2, 0);
}
