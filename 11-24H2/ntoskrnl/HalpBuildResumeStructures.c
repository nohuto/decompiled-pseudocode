/*
 * XREFs of HalpBuildResumeStructures @ 0x140B4CE28
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x1404BD3D0 (HalpDispatchSystemStateTransition.c)
 *     HalpDpReplaceBegin @ 0x1407029B0 (HalpDpReplaceBegin.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x1405592F4 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
