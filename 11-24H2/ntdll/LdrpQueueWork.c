/*
 * XREFs of LdrpQueueWork @ 0x1800D6D64
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18000C8D0 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpProcessMappedModule @ 0x180073700 (LdrpProcessMappedModule.c)
 *     LdrpLoadContextReplaceModule @ 0x1800D6BB8 (LdrpLoadContextReplaceModule.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     TpPostWork @ 0x1800D6E00 (TpPostWork.c)
 */

struct _PEB *__fastcall LdrpQueueWork(__int64 a1)
{
  struct _PEB *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  result = *(struct _PEB **)(a1 + 40);
  if ( *(int *)&result->InheritedAddressSpace >= 0 )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v3 = (_QWORD *)qword_1801D26D8;
    v4 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_1801D26D8 != &LdrpWorkQueue )
      __fastfail(3u);
    *(_QWORD *)(a1 + 72) = qword_1801D26D8;
    *v4 = &LdrpWorkQueue;
    *v3 = v4;
    qword_1801D26D8 = a1 + 64;
    result = (struct _PEB *)RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
        return (struct _PEB *)TpPostWork(LdrpMapAndSnapWork, v5, v6, v7);
    }
  }
  return result;
}
