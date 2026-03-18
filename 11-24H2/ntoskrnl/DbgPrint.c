/*
 * XREFs of DbgPrint @ 0x1402CB260
 * Callers:
 *     SepCreateTokenEx @ 0x1403645F4 (SepCreateTokenEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14044ADDC (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     RtlpCreateHeap @ 0x1404D7334 (RtlpCreateHeap.c)
 *     HalpAcpiGetFacsMapping @ 0x14053D4D0 (HalpAcpiGetFacsMapping.c)
 *     HalReturnToFirmware @ 0x140544920 (HalReturnToFirmware.c)
 *     x86BiosExecuteInterruptShadowed @ 0x140546478 (x86BiosExecuteInterruptShadowed.c)
 *     RtlpAllocateHeap @ 0x1405EA9AC (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405EB39C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405EB760 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405EBE80 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405EBFC0 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405EC7B4 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405ED2D8 (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405F0590 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x1405F34A8 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405F3904 (RtlpPopulateListIndex.c)
 *     HalpTimerWatchdogLogReset @ 0x1406FE804 (HalpTimerWatchdogLogReset.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140743EE0 (ObpShutdownCloseHandleProcedure.c)
 *     CmpPostApcRunDown @ 0x1407D1FB0 (CmpPostApcRunDown.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x14082CF64 (RtlpMuiRegLoadRegistryInfo.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     CmNotifyRunDown @ 0x1408A87D0 (CmNotifyRunDown.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408B5D94 (PnpGetDeviceInterfacePropertyData.c)
 *     IopQueryLegacyBusInformation @ 0x1409C53AC (IopQueryLegacyBusInformation.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     RtlpQueryRegistryValues @ 0x1409CC350 (RtlpQueryRegistryValues.c)
 *     CmpPostApc @ 0x140A2F0F0 (CmpPostApc.c)
 *     ExpSetPendingUILanguage @ 0x140A70D00 (ExpSetPendingUILanguage.c)
 *     RtlDestroyHeap @ 0x140A91140 (RtlDestroyHeap.c)
 *     IopUnloadDriver @ 0x140AA8FB8 (IopUnloadDriver.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140AB1650 (PnpGetDeviceInstancePropertyData.c)
 *     RtlLCIDToCultureName @ 0x140ABA1E0 (RtlLCIDToCultureName.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 *     PopWriteHeaderPages @ 0x140B5E6C4 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140B5ED50 (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140B64C6C (PoBroadcastSystemState.c)
 *     HalpMapNvsArea @ 0x140B6D6A0 (HalpMapNvsArea.c)
 *     ViIsBTSSupported @ 0x140B93A54 (ViIsBTSSupported.c)
 *     HalpAcpiFindRsdp @ 0x140C0D868 (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140C67860 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1402CB420 (vDbgPrintExWithPrefixInternalHelper.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  unsigned int v1; // ebx
  char v2; // cf
  int v3; // edi
  ULONG result; // eax
  va_list va; // [rsp+78h] [rbp+10h] BYREF

  va_start(va, Format);
  v1 = 128;
  v2 = 1;
  v3 = (int)Format;
  do
  {
    result = vDbgPrintExWithPrefixInternalHelper((int)&File, 101, 3, v3, va, 1, v1, v2);
    if ( result != -2147483643 )
      break;
    if ( v1 >= 0x200 )
      break;
    v1 += 128;
    v2 = v1 < 0x200;
  }
  while ( v1 <= 0x200 );
  return result;
}
