/*
 * XREFs of IopLiveDumpUncorralProcessors @ 0x14059B3A0
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x140596F60 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpCollectPages @ 0x1405971E8 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140597940 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x14059891C (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14059B1E4 (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405A0300 (IopLiveDumpTraceNoArgs.c)
 */

char __fastcall IopLiveDumpUncorralProcessors(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  unsigned __int64 v6; // rsi
  __int64 *v7; // rcx
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+80h] [rbp+40h] BYREF
  __int64 v13; // [rsp+88h] [rbp+48h] BYREF

  v10 = 0LL;
  v2 = *(_QWORD *)a1;
  v3 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  IopLiveDumpInitiateCorralStateChange(a1, 5, &v12);
  IopLiveDumpInitiateCorralStateChange(a1, 8, &v13);
  if ( (*(_DWORD *)(v2 + 80) & 0x100) == 0 )
  {
    IopLiveDumpInitiateCorralStateChange(a1, 6, &v11);
    v3 = v11;
  }
  PoAllProcIntrDisabled = 0;
  IopLiveDumpInitiateCorralStateChange(a1, -1, &v10);
  KeRevertToUserGroupAffinityThread((PGROUP_AFFINITY)(a1 + 96));
  if ( a2 || (*(_DWORD *)(v2 + 40) & 0x20) != 0 )
  {
    v6 = *(unsigned __int8 *)(a1 + 88);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), *(_BYTE *)(a1 + 88));
    __writecr8(v6);
  }
  *(_DWORD *)(a1 + 8) &= ~1u;
  if ( IopLiveDumpIsTracingEnabled() )
  {
    v7 = LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUIESCE_END;
    if ( (*(_DWORD *)(v2 + 80) & 1) == 0 )
      v7 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCE_END;
    IopLiveDumpTraceNoArgs(v7);
  }
  v8 = *(_DWORD *)(v2 + 80);
  if ( (v8 & 0x80u) != 0 )
    LOBYTE(v8) = IopLiveDumpTraceUncorralProcessorsDuration(*(_QWORD *)a1, v10, v3, v13, v12);
  return v8;
}
