/*
 * XREFs of MiReturnVadCharges @ 0x1408E2F98
 * Callers:
 *     MiDeleteNewlyCreatedPartialVads @ 0x1407FF044 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInsertVadCharges @ 0x1408E2418 (MiInsertVadCharges.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1404066F0 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14041B3B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 */

struct _KTHREAD *__fastcall MiReturnVadCharges(_QWORD *a1)
{
  struct _KTHREAD *result; // rax
  ULONG_PTR v3; // rdx
  ULONG_PTR Process; // rdi
  ULONG_PTR v5; // rdx
  __int64 ProcessPartition; // rax
  unsigned __int64 v7; // r8

  result = KeGetCurrentThread();
  v3 = a1[2];
  Process = (ULONG_PTR)result->ApcState.Process;
  if ( v3 )
    result = (struct _KTHREAD *)PsReturnProcessNonPagedPoolQuota((ULONG_PTR)result->ApcState.Process, v3);
  v5 = a1[1];
  if ( v5 )
    result = (struct _KTHREAD *)PsReturnProcessPagedPoolQuota(Process, v5);
  if ( *a1 )
  {
    ProcessPartition = MiGetProcessPartition(Process);
    return (struct _KTHREAD *)MiReturnResident(ProcessPartition, v7);
  }
  return result;
}
