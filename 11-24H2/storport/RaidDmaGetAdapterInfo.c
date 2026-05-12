/*
 * XREFs of RaidDmaGetAdapterInfo @ 0x14006B154
 * Callers:
 *     RaidInitializePerfOpts @ 0x140041BFC (RaidInitializePerfOpts.c)
 *     NVMeGetUncachedExtensionEx @ 0x140072684 (NVMeGetUncachedExtensionEx.c)
 *     NvmeControllerAllocateInternalBufferAllocation @ 0x1400728A8 (NvmeControllerAllocateInternalBufferAllocation.c)
 *     NvmeAdapterCompleteInitialization @ 0x1400CD5A8 (NvmeAdapterCompleteInitialization.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidDmaGetAdapterInfo(int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v3)(_QWORD); // rax

  if ( a2
    && a1
    && *(_QWORD *)a1
    && (v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL)) != 0
    && a1[7] >= 3
    && (v3 = *(__int64 (__fastcall **)(_QWORD))(v2 + 128)) != 0LL )
  {
    return v3(*(_QWORD *)a1);
  }
  else
  {
    return 3221225485LL;
  }
}
