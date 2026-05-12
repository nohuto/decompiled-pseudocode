/*
 * XREFs of FreeAllSglAndContextInChainedSplitIoContext @ 0x14011A100
 * Callers:
 *     NvmeProcessIoForResetRecovery @ 0x1400F9F34 (NvmeProcessIoForResetRecovery.c)
 *     NvmeContinueScatterGatherProcessIO @ 0x14011C250 (NvmeContinueScatterGatherProcessIO.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011CB50 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessPendingIo @ 0x14011E5A0 (NvmeProcessPendingIo.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x140120370 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x140122190 (NvmeProcessPendingIoInSpecifiedGroup.c)
 *     NvmeProcessPendingLowPriorityIo @ 0x140123160 (NvmeProcessPendingLowPriorityIo.c)
 *     NvmeSplitIoParallel @ 0x1401256A0 (NvmeSplitIoParallel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FreeAllSglAndContextInChainedSplitIoContext(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned int v5; // ebp
  _WORD *v6; // r12
  __int16 v7; // dx
  __int64 v8; // rsi
  __int64 v9; // r14
  char v10; // si
  __int64 v11; // rdi
  KIRQL v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rax

  v2 = a2;
  result = HIDWORD(a1[17]);
  if ( (result & 1) == 0 )
  {
    result = 0LL;
    v5 = 0;
    v6 = (_WORD *)(a2 + 32);
    v7 = *(_WORD *)(a2 + 32);
    if ( v7 )
    {
      do
      {
        LOWORD(result) = v7;
        if ( v2 )
        {
          v8 = *(_QWORD *)(v2 + 88);
          if ( v8 )
          {
            v9 = *(_QWORD *)(v8 + 24);
            if ( v9 )
            {
              v10 = *(_BYTE *)(v8 + 126);
              v11 = a1[16];
              v12 = KfRaiseIrql(2u);
              (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v11 + 1144) + 8LL) + 96LL))(
                *(_QWORD *)(v11 + 1144),
                v9,
                (v10 & 1) == 0);
              if ( v12 < 2u )
                KeLowerIrql(v12);
            }
            v13 = *(_QWORD *)(v2 + 88);
            v14 = *(unsigned int *)(v13 + 120);
            *(_QWORD *)(v13 + 24) = 0LL;
            *(_QWORD *)(v13 + 88) = 0LL;
            *(_BYTE *)(v13 + 126) = 0;
            ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(a1[112] + 8 * v14), (PSLIST_ENTRY)v13);
            LOWORD(result) = *v6;
          }
          v2 = *(_QWORD *)(v2 + 96);
        }
        v7 = result;
        ++v5;
        result = (unsigned __int16)result;
      }
      while ( v5 < (unsigned __int16)result );
    }
  }
  return result;
}
