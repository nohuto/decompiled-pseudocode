/*
 * XREFs of PfIsProcessExitingInNonSystemPartition @ 0x14047E324
 * Callers:
 *     MiQueuePageAccessLog @ 0x14032382C (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x14047DF70 (PfpReturnAccessBuffer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14047E0C0 (MiAllocatePfnRepurposeLogDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall PfIsProcessExitingInNonSystemPartition(__int64 a1, __int64 a2)
{
  if ( *(PVOID *)a1 == PspSystemPartition || (*(_DWORD *)(a2 + 500) & 4) == 0 )
    return 0;
  else
    return *(_DWORD *)(*(_QWORD *)a1 + 136LL) & 1;
}
