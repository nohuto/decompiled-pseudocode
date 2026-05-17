/*
 * XREFs of LdrpQueueWork @ 0x18003E480
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpProcessMappedModule @ 0x18006DF80 (LdrpProcessMappedModule.c)
 *     LdrpLoadContextReplaceModule @ 0x18006F2DC (LdrpLoadContextReplaceModule.c)
 * Callees:
 *     TpPostWork @ 0x18003EF70 (TpPostWork.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 */

struct _PEB *__fastcall LdrpQueueWork(__int64 a1)
{
  struct _PEB *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  result = *(struct _PEB **)(a1 + 40);
  if ( *(int *)&result->InheritedAddressSpace >= 0 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v3 = (_QWORD *)qword_1801D4738;
    v4 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_1801D4738 != &LdrpWorkQueue )
      __fastfail(3u);
    *(_QWORD *)(a1 + 72) = qword_1801D4738;
    *v4 = &LdrpWorkQueue;
    *v3 = v4;
    qword_1801D4738 = a1 + 64;
    result = (struct _PEB *)RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
        return (struct _PEB *)TpPostWork(LdrpMapAndSnapWork);
    }
  }
  return result;
}
