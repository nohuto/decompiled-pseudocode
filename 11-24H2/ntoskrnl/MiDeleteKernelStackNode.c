/*
 * XREFs of MiDeleteKernelStackNode @ 0x140676480
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14047BE44 (MiInPageSingleKernelStack.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteKernelStackNode(PVOID P)
{
  KIRQL v2; // bl

  v2 = ExAcquireSpinLockExclusive(&dword_140E36018);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140E36010, (__int64)P);
  MiReleaseSpinLockExclusive(&dword_140E36018, v2);
  ExFreePoolWithTag(P, 0);
}
