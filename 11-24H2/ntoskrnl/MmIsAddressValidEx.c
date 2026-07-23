/*
 * XREFs of MmIsAddressValidEx @ 0x140244560
 * Callers:
 *     MmIsAddressValid @ 0x1402433E0 (MmIsAddressValid.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14029293C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     KeCapturePersistentThreadState @ 0x140420EC0 (KeCapturePersistentThreadState.c)
 *     MiKernelWriteToExecutableMemory @ 0x140426B40 (MiKernelWriteToExecutableMemory.c)
 *     KiIsAddressRangeValid @ 0x1404A5A08 (KiIsAddressRangeValid.c)
 *     IopIsAddressRangeValid @ 0x1404A6F64 (IopIsAddressRangeValid.c)
 *     IoFreeDumpRange @ 0x14058E8D0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x14058F310 (IoSetDumpRange.c)
 *     IopGetMaxValidMemorySize @ 0x14059166C (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidMemorySizeDown @ 0x1405916E8 (IopGetMaxValidMemorySizeDown.c)
 *     IopRemovePageDumpRange @ 0x140591F7C (IopRemovePageDumpRange.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140596AE8 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IoAddPagesForPartialKernelDump @ 0x14059CE74 (IoAddPagesForPartialKernelDump.c)
 *     IopMarkPagesForDpcData @ 0x14059DBD0 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForProcessorData @ 0x14059E108 (IopMarkPagesForProcessorData.c)
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405AF8E0 (KeValidateBugCheckCallbackRecord.c)
 *     KiCollectFullProcessName @ 0x1405B02D0 (KiCollectFullProcessName.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405B0318 (KiCollectTriageDumpDataBlocks.c)
 *     KiDumpParameterImages @ 0x1405B0BC8 (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x1405B1150 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x1405B134C (KiScanBugCheckCallbackList.c)
 *     KiValidateComponentName @ 0x1405B1424 (KiValidateComponentName.c)
 *     KiSchedulerAssistBugCheckAddPagesCallback @ 0x1405B4E60 (KiSchedulerAssistBugCheckAddPagesCallback.c)
 *     KiGetCurrentKernelShadowStackBounds @ 0x1405C42FC (KiGetCurrentKernelShadowStackBounds.c)
 *     ExpHeapDumpEnumLargeAllocs @ 0x14065881C (ExpHeapDumpEnumLargeAllocs.c)
 *     ExpHeapDumpNodeLinksValid @ 0x140658914 (ExpHeapDumpNodeLinksValid.c)
 *     CmFcpIsValidMemoryRange @ 0x14066754C (CmFcpIsValidMemoryRange.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x14066E238 (MiFreedUnusedPfnPagesDpc.c)
 *     MiAddPartitionToCrashDump @ 0x140678370 (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x140678638 (MiAddUnicodeStringToCrashDump.c)
 *     MiDbgCopyMemory @ 0x14067F6A8 (MiDbgCopyMemory.c)
 *     MiDbgWriteCheck @ 0x140680874 (MiDbgWriteCheck.c)
 *     ViFreeTrackedPool @ 0x140BAAFD0 (ViFreeTrackedPool.c)
 * Callees:
 *     <none>
 */

bool __fastcall MmIsAddressValidEx(__int64 a1)
{
  __int64 v2; // r10
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r8
  __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-30h]
  unsigned __int64 v11; // [rsp+8h] [rbp-28h]
  unsigned __int64 v12; // [rsp+10h] [rbp-20h]
  unsigned __int64 v13; // [rsp+18h] [rbp-18h]
  __int64 v14; // [rsp+20h] [rbp-10h]

  if ( a1 >> 47 == -1 || a1 >> 47 == 0 )
  {
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
        v5 = *(_QWORD *)v3;
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
                LOBYTE(v5) = v4 | 0x20;
              LOBYTE(v4) = v5 | 0x42;
              if ( (v9 & 0x42) == 0 )
                LOBYTE(v4) = v5;
            }
          }
        }
      }
      if ( (v4 & 1) == 0 )
        break;
      if ( (v4 & 0x80u) != 0LL )
      {
        if ( (unsigned __int64)a1 < 0xFFFFF68000000000uLL )
          return 1;
        return (unsigned __int64)a1 > 0xFFFFF6FFFFFFFFFFuLL;
      }
      if ( !v2 )
        return 1;
    }
  }
  return 0;
}
