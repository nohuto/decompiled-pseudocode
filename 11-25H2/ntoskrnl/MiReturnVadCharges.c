/*
 * XREFs of MiReturnVadCharges @ 0x140901270
 * Callers:
 *     MiDeleteNewlyCreatedPartialVads @ 0x1407EF1B4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInsertVadCharges @ 0x140900770 (MiInsertVadCharges.c)
 * Callees:
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C5970 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C5AE0 (PsReturnProcessPagedPoolQuota.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
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
