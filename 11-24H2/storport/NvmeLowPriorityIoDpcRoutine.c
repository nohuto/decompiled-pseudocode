/*
 * XREFs of NvmeLowPriorityIoDpcRoutine @ 0x14011CAF0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeProcessPendingLowPriorityIo @ 0x140123160 (NvmeProcessPendingLowPriorityIo.c)
 */

void __fastcall NvmeLowPriorityIoDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rax

  v4 = DeferredContext[2];
  if ( *(_QWORD *)(v4 + 1288) && **(_DWORD **)(v4 + 1288) || *(_DWORD *)(DeferredContext[2] + 948LL) )
  {
    _InterlockedExchange((volatile __int32 *)(DeferredContext[33] + 40LL), 0);
  }
  else
  {
    LOBYTE(SystemArgument1) = 1;
    NvmeProcessPendingLowPriorityIo(DeferredContext, DeferredContext, SystemArgument1, SystemArgument2);
  }
}
