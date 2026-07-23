/*
 * XREFs of DbgPrint @ 0x140274290
 * Callers:
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x140441F1C (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     RtlpCreateHeap @ 0x1404D0784 (RtlpCreateHeap.c)
 *     HalpAcpiGetFacsMapping @ 0x14053ADD0 (HalpAcpiGetFacsMapping.c)
 *     HalReturnToFirmware @ 0x1405421E0 (HalReturnToFirmware.c)
 *     x86BiosExecuteInterruptShadowed @ 0x140543D38 (x86BiosExecuteInterruptShadowed.c)
 *     RtlpAllocateHeap @ 0x1405E7EFC (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405E890C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405E8CD0 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405E93F0 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405E953C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405E9D48 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405EA8C0 (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405EDB70 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x1405F0AE8 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405F0F44 (RtlpPopulateListIndex.c)
 *     HalpTimerWatchdogLogReset @ 0x1406FC444 (HalpTimerWatchdogLogReset.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140741E10 (ObpShutdownCloseHandleProcedure.c)
 *     CmpPostApcRunDown @ 0x1407D24A0 (CmpPostApcRunDown.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x14082D794 (RtlpMuiRegLoadRegistryInfo.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408B3704 (PnpGetDeviceInterfacePropertyData.c)
 *     CmNotifyRunDown @ 0x1408FEA30 (CmNotifyRunDown.c)
 *     IopQueryLegacyBusInformation @ 0x140981D7C (IopQueryLegacyBusInformation.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     CmpPostApc @ 0x140A23B30 (CmpPostApc.c)
 *     ExpSetPendingUILanguage @ 0x140A6A190 (ExpSetPendingUILanguage.c)
 *     RtlDestroyHeap @ 0x140A8D840 (RtlDestroyHeap.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140AAC5C0 (PnpGetDeviceInstancePropertyData.c)
 *     RtlLCIDToCultureName @ 0x140AB5200 (RtlLCIDToCultureName.c)
 *     PopWriteHeaderPages @ 0x140B60744 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140B60DD0 (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 *     HalpMapNvsArea @ 0x140B6EF40 (HalpMapNvsArea.c)
 *     ViIsBTSSupported @ 0x140B95A54 (ViIsBTSSupported.c)
 *     HalpAcpiFindRsdp @ 0x140C0F868 (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140C699DC (HalpAcpiTableCacheInit.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x140275C70 (vDbgPrintExWithPrefixInternalHelper.c)
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
