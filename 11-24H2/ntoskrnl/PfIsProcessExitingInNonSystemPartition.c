/*
 * XREFs of PfIsProcessExitingInNonSystemPartition @ 0x140479AF4
 * Callers:
 *     MiQueuePageAccessLog @ 0x14020D250 (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x140479740 (PfpReturnAccessBuffer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140479890 (MiAllocatePfnRepurposeLogDispatch.c)
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
