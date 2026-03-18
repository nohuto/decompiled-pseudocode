/*
 * XREFs of MmIsAddressValidEx @ 0x140262FC0
 * Callers:
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140262A88 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     KeCapturePersistentThreadState @ 0x140262B20 (KeCapturePersistentThreadState.c)
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     KiIsAddressRangeValid @ 0x1404AB6BC (KiIsAddressRangeValid.c)
 *     IopIsAddressRangeValid @ 0x1404ACD58 (IopIsAddressRangeValid.c)
 *     MiKernelWriteToExecutableMemory @ 0x1404CE618 (MiKernelWriteToExecutableMemory.c)
 *     IoFreeDumpRange @ 0x1405918B0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1405922F0 (IoSetDumpRange.c)
 *     IopGetMaxValidMemorySize @ 0x14059464C (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidMemorySizeDown @ 0x1405946C4 (IopGetMaxValidMemorySizeDown.c)
 *     IopRemovePageDumpRange @ 0x140594F58 (IopRemovePageDumpRange.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140599B68 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IoAddPagesForPartialKernelDump @ 0x14059FF50 (IoAddPagesForPartialKernelDump.c)
 *     IopMarkPagesForDpcData @ 0x1405A0CA0 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForProcessorData @ 0x1405A11D0 (IopMarkPagesForProcessorData.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405B2970 (KeValidateBugCheckCallbackRecord.c)
 *     KiCollectFullProcessName @ 0x1405B3360 (KiCollectFullProcessName.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405B33A8 (KiCollectTriageDumpDataBlocks.c)
 *     KiDumpParameterImages @ 0x1405B3C54 (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x1405B41D8 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x1405B43D0 (KiScanBugCheckCallbackList.c)
 *     KiValidateComponentName @ 0x1405B44A4 (KiValidateComponentName.c)
 *     KiSchedulerAssistBugCheckAddPagesCallback @ 0x1405B7890 (KiSchedulerAssistBugCheckAddPagesCallback.c)
 *     KiGetCurrentKernelShadowStackBounds @ 0x1405C6BCC (KiGetCurrentKernelShadowStackBounds.c)
 *     ExpHeapDumpEnumLargeAllocs @ 0x14065A17C (ExpHeapDumpEnumLargeAllocs.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x14066D068 (MiFreedUnusedPfnPagesDpc.c)
 *     MiAddPartitionToCrashDump @ 0x1406771A0 (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x140677468 (MiAddUnicodeStringToCrashDump.c)
 *     MiDbgCopyMemory @ 0x14067E4A8 (MiDbgCopyMemory.c)
 *     MiDbgWriteCheck @ 0x14067F674 (MiDbgWriteCheck.c)
 *     ViFreeTrackedPool @ 0x140BA8FD0 (ViFreeTrackedPool.c)
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
