/*
 * XREFs of RtlpFreeAtom @ 0x14091BC00
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140435780 (RtlAddAtomToAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x1404359FC (RtlpAllocateAtomTableEntry.c)
 *     RtlDestroyLowBoxAtoms @ 0x14046F170 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x14046F244 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x14046F2D4 (RtlpFreeAllAtom.c)
 *     RtlCreateAtomTableEx @ 0x1404969B0 (RtlCreateAtomTableEx.c)
 *     RtlEmptyAtomTable @ 0x1407716E0 (RtlEmptyAtomTable.c)
 *     RtlDestroyAtomTable @ 0x14091D100 (RtlDestroyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x14091B660 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx

  v4 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(char **)(a1 - 16), *(_QWORD *)(a1 - 16 + 8), 0LL, a4);
  ExFreePoolWithTag(v4, 0);
}
