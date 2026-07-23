/*
 * XREFs of RtlpFreeAtom @ 0x140856F58
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1404242E0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x14042455C (RtlpAllocateAtomTableEntry.c)
 *     RtlDestroyLowBoxAtoms @ 0x140468590 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x140468664 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x1404686F4 (RtlpFreeAllAtom.c)
 *     RtlCreateAtomTableEx @ 0x1404902A0 (RtlCreateAtomTableEx.c)
 *     RtlEmptyAtomTable @ 0x140780860 (RtlEmptyAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1409DF930 (RtlDestroyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x140856970 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx

  v4 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(char **)(a1 - 16), *(_QWORD *)(a1 - 16 + 8), 0LL, a4);
  ExFreePoolWithTag(v4, 0);
}
