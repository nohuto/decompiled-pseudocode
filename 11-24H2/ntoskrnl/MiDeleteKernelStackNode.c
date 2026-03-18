/*
 * XREFs of MiDeleteKernelStackNode @ 0x1406752B0
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14046A150 (MiInPageSingleKernelStack.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteKernelStackNode(PVOID P)
{
  KIRQL v2; // bl

  v2 = ExAcquireSpinLockExclusive(&dword_140E35ED8);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140E35ED0, (__int64)P);
  MiReleaseSpinLockExclusive(&dword_140E35ED8, v2);
  ExFreePoolWithTag(P, 0);
}
