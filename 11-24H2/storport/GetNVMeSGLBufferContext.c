/*
 * XREFs of GetNVMeSGLBufferContext @ 0x14011A3F0
 * Callers:
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011CB50 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessIoIrp @ 0x14011DC30 (NvmeProcessIoIrp.c)
 *     NvmeProcessPendingIo @ 0x14011E5A0 (NvmeProcessPendingIo.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x140120370 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x140122190 (NvmeProcessPendingIoInSpecifiedGroup.c)
 *     NvmeProcessPendingLowPriorityIo @ 0x140123160 (NvmeProcessPendingLowPriorityIo.c)
 *     NvmeSplitIoParallel @ 0x1401256A0 (NvmeSplitIoParallel.c)
 * Callees:
 *     AllocateNVMeSGLBufferContext @ 0x1401194C0 (AllocateNVMeSGLBufferContext.c)
 */

__int64 __fastcall GetNVMeSGLBufferContext(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  PSLIST_ENTRY v5; // r8
  unsigned __int16 *v6; // rax
  int v7; // r8d
  __int64 result; // rax

  v3 = a2;
  v4 = a2;
  v5 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 896) + 8LL * a2));
  if ( v5 )
    return (__int64)v5;
  v6 = *(unsigned __int16 **)(56 * v4 + *((_QWORD *)g_CpuInfo + 4) + 48);
  if ( v6 )
    v7 = *v6;
  else
    v7 = 0x80000000;
  result = AllocateNVMeSGLBufferContext(a1, v3, v7);
  v5 = (PSLIST_ENTRY)result;
  if ( result )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 896) + 8 * v3) + 16LL));
    return (__int64)v5;
  }
  return result;
}
