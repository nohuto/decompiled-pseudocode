/*
 * XREFs of HalpBuildResumeStructures @ 0x140B3CE28
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x1404BE448 (HalpDispatchSystemStateTransition.c)
 *     HalpDpReplaceBegin @ 0x1406F6BC0 (HalpDpReplaceBegin.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x1405569F4 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 HalpBuildResumeStructures()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  void *v2; // rax
  __int64 v3; // rcx

  v0 = 1472LL * KeQueryActiveProcessorCountEx(0xFFFFu);
  v2 = (void *)HalpMmAllocCtxAlloc(v1, v0);
  HalpHiberProcState = (__int64)v2;
  if ( v2 )
  {
    memset_0(v2, 0, v0);
    if ( !HalpTiledMemoryMapActive || (int)HalpMmUpdateTiledMemoryMapTargetStub() >= 0 )
      return 0LL;
  }
  if ( HalpHiberProcState )
  {
    HalpMmAllocCtxFree(v3, HalpHiberProcState);
    HalpHiberProcState = 0LL;
  }
  return 3221225626LL;
}
