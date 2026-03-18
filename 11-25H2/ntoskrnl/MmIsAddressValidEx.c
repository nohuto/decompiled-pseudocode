/*
 * XREFs of MmIsAddressValidEx @ 0x1402AA5A0
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1402AA064 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     KeCapturePersistentThreadState @ 0x1402AA100 (KeCapturePersistentThreadState.c)
 *     MiKernelWriteToExecutableMemory @ 0x140439960 (MiKernelWriteToExecutableMemory.c)
 *     IopIsAddressRangeValid @ 0x1404AB898 (IopIsAddressRangeValid.c)
 *     KiIsAddressRangeValid @ 0x1404AFA90 (KiIsAddressRangeValid.c)
 *     IoFreeDumpRange @ 0x14058E080 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x14058EAC0 (IoSetDumpRange.c)
 *     IopGetMaxValidMemorySize @ 0x140590E4C (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidMemorySizeDown @ 0x140590EC4 (IopGetMaxValidMemorySizeDown.c)
 *     IopRemovePageDumpRange @ 0x140591758 (IopRemovePageDumpRange.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140596458 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IoAddPagesForPartialKernelDump @ 0x14059C76C (IoAddPagesForPartialKernelDump.c)
 *     IopMarkPagesForDpcData @ 0x14059D4C0 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForProcessorData @ 0x14059D9F0 (IopMarkPagesForProcessorData.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405AEFE0 (KeValidateBugCheckCallbackRecord.c)
 *     KiCollectFullProcessName @ 0x1405AF9D0 (KiCollectFullProcessName.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405AFA18 (KiCollectTriageDumpDataBlocks.c)
 *     KiDumpParameterImages @ 0x1405B02A8 (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x1405B082C (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x1405B0A24 (KiScanBugCheckCallbackList.c)
 *     KiValidateComponentName @ 0x1405B0AF8 (KiValidateComponentName.c)
 *     KiSchedulerAssistBugCheckAddPagesCallback @ 0x1405B39A0 (KiSchedulerAssistBugCheckAddPagesCallback.c)
 *     KiGetCurrentKernelShadowStackBounds @ 0x1405C282C (KiGetCurrentKernelShadowStackBounds.c)
 *     ExpHeapDumpEnumLargeAllocs @ 0x14064E2E0 (ExpHeapDumpEnumLargeAllocs.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x140661528 (MiFreedUnusedPfnPagesDpc.c)
 *     MiAddPartitionToCrashDump @ 0x14066B850 (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x14066BB18 (MiAddUnicodeStringToCrashDump.c)
 *     MiDbgCopyMemory @ 0x140672C90 (MiDbgCopyMemory.c)
 *     MiDbgWriteCheck @ 0x140673E54 (MiDbgWriteCheck.c)
 *     ViFreeTrackedPool @ 0x140B98FF0 (ViFreeTrackedPool.c)
 * Callees:
 *     <none>
 */

bool __fastcall MmIsAddressValidEx(__int64 a1)
{
  __int64 v2; // r10
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r8
  __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-30h]
  unsigned __int64 v11; // [rsp+8h] [rbp-28h]
  unsigned __int64 v12; // [rsp+10h] [rbp-20h]
  unsigned __int64 v13; // [rsp+18h] [rbp-18h]
  __int64 v14; // [rsp+20h] [rbp-10h]

  if ( a1 >> 47 != -1 && a1 >> 47 != 0 )
    return 0;
  v11 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 4LL;
  while ( 1 )
  {
    v3 = *(&v10 + v2--);
    v4 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v6 = *(_QWORD *)v3;
      if ( (v4 & 1) == 0 )
        return 0;
      if ( ((v4 & 0x42) == 0 || (v4 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v9 = *(_QWORD *)(KernelWaitTime + 8 * ((v3 >> 3) & 0x1FF));
            if ( (v9 & 0x20) != 0 )
              LOBYTE(v6) = v4 | 0x20;
            LOBYTE(v4) = v6 | 0x42;
            if ( (v9 & 0x42) == 0 )
              LOBYTE(v4) = v6;
          }
        }
      }
    }
    if ( (v4 & 1) == 0 )
      return 0;
    if ( (v4 & 0x80u) != 0LL )
      break;
    if ( !v2 )
      return 1;
  }
  if ( (unsigned __int64)a1 < 0xFFFFF68000000000uLL )
    return 1;
  return (unsigned __int64)a1 > 0xFFFFF6FFFFFFFFFFuLL;
}
