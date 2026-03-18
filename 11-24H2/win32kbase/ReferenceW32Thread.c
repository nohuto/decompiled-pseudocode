/*
 * XREFs of ReferenceW32Thread @ 0x1400C5AD0
 * Callers:
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     AllocateW32ThreadImpl @ 0x1400C59E0 (AllocateW32ThreadImpl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReferenceW32Thread(__int64 a1)
{
  ObfReferenceObject(*(PVOID *)a1);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 376));
}
