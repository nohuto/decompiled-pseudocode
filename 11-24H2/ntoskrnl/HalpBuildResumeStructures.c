/*
 * XREFs of HalpBuildResumeStructures @ 0x140B4EE68
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x1404B8540 (HalpDispatchSystemStateTransition.c)
 *     HalpDpReplaceBegin @ 0x1407005F0 (HalpDpReplaceBegin.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x140556F24 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
