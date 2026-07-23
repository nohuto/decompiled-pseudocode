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

void __fastcall LdrpQueueWork(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  if ( **(int **)(a1 + 40) >= 0 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v2 = (_QWORD *)qword_1801D4738;
    v3 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_1801D4738 != &LdrpWorkQueue )
      __fastfail(3u);
    *(_QWORD *)(a1 + 72) = qword_1801D4738;
    *v3 = &LdrpWorkQueue;
    *v2 = v3;
    qword_1801D4738 = a1 + 64;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        TpPostWork(LdrpMapAndSnapWork);
    }
  }
}
