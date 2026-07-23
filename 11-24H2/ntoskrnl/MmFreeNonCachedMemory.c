/*
 * XREFs of MmFreeNonCachedMemory @ 0x140A99000
 * Callers:
 *     DifMmFreeNonCachedMemoryWrapper @ 0x140631A70 (DifMmFreeNonCachedMemoryWrapper.c)
 * Callees:
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MmFreePagesFromMdl @ 0x14048E2C0 (MmFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  struct _MDL *v2; // rbx
  __int64 DemandZeroPte; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  _QWORD *v6; // rdx

  v2 = *(struct _MDL **)(48 * ((*(_QWORD *)MiGetPteAddress((unsigned __int64)BaseAddress) >> 12) & 0xFFFFFFFFFFLL)
                       - 0x220000000000LL
                       + 16);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  *(_QWORD *)(v4 + 16) = DemandZeroPte;
  MiReleasePtes((__int64)&unk_140E35EC0, v6, (v5 >> 12) + ((v5 & 0xFFF) != 0));
  MmFreePagesFromMdl(v2);
  ExFreePoolWithTag(v2, 0);
}
