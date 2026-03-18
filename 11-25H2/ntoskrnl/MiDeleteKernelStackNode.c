/*
 * XREFs of MiDeleteKernelStackNode @ 0x140669850
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14046BDAC (MiInPageSingleKernelStack.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteKernelStackNode(PVOID P)
{
  KIRQL v2; // bl

  v2 = ExAcquireSpinLockExclusive(&dword_140E35C98);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140E35C90, (__int64)P);
  MiReleaseSpinLockExclusive(&dword_140E35C98, v2);
  ExFreePoolWithTag(P, 0);
}
