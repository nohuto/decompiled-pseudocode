/*
 * XREFs of RtlDereferenceAtomTable @ 0x1405DCBD0
 * Callers:
 *     SepTokenDeleteMethod @ 0x1409A7370 (SepTokenDeleteMethod.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A0E024 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyAtomTable @ 0x14091D100 (RtlDestroyAtomTable.c)
 */

NTSTATUS __fastcall RtlDereferenceAtomTable(void *a1)
{
  return RtlDestroyAtomTable(a1);
}
