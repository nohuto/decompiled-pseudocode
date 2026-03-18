/*
 * XREFs of RtlpFreeAtom @ 0x14085AC78
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140431DA0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x14043201C (RtlpAllocateAtomTableEntry.c)
 *     RtlDestroyLowBoxAtoms @ 0x14046DCA0 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x14046DD74 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x14046DE04 (RtlpFreeAllAtom.c)
 *     RtlCreateAtomTableEx @ 0x1404959E0 (RtlCreateAtomTableEx.c)
 *     RtlEmptyAtomTable @ 0x140780930 (RtlEmptyAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1409E4ED0 (RtlDestroyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x14085A690 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx

  v4 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(char **)(a1 - 16), *(_QWORD *)(a1 - 16 + 8), 0LL, a4);
  ExFreePoolWithTag(v4, 0);
}
