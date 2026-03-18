/*
 * XREFs of DbgPrint @ 0x1403A9600
 * Callers:
 *     SepCreateTokenEx @ 0x14036B744 (SepCreateTokenEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14044BC0C (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 *     RtlpCreateHeap @ 0x1404D8494 (RtlpCreateHeap.c)
 *     HalpAcpiGetFacsMapping @ 0x14053ACA0 (HalpAcpiGetFacsMapping.c)
 *     HalReturnToFirmware @ 0x140542060 (HalReturnToFirmware.c)
 *     x86BiosExecuteInterruptShadowed @ 0x140543B88 (x86BiosExecuteInterruptShadowed.c)
 *     RtlpAllocateHeap @ 0x1405DE67C (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405DF06C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405DF430 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405DFB50 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405DFC90 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405E0484 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405E0FA8 (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405E4280 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x1405E7160 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405E75BC (RtlpPopulateListIndex.c)
 *     HalpTimerWatchdogLogReset @ 0x1406F2A14 (HalpTimerWatchdogLogReset.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140737EC0 (ObpShutdownCloseHandleProcedure.c)
 *     CmpPostApcRunDown @ 0x1407C2870 (CmpPostApcRunDown.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x14081D224 (RtlpMuiRegLoadRegistryInfo.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     CmNotifyRunDown @ 0x1408F53C0 (CmNotifyRunDown.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140954E84 (PnpGetDeviceInterfacePropertyData.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     RtlpQueryRegistryValues @ 0x1409B3FD0 (RtlpQueryRegistryValues.c)
 *     CmpPostApc @ 0x140A29490 (CmpPostApc.c)
 *     ExpSetPendingUILanguage @ 0x140A6EE30 (ExpSetPendingUILanguage.c)
 *     IopQueryLegacyBusInformation @ 0x140A768F0 (IopQueryLegacyBusInformation.c)
 *     RtlDestroyHeap @ 0x140A8C040 (RtlDestroyHeap.c)
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140AAC3E0 (PnpGetDeviceInstancePropertyData.c)
 *     RtlLCIDToCultureName @ 0x140AB5EA0 (RtlLCIDToCultureName.c)
 *     PopWriteHeaderPages @ 0x140B4E604 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140B4EC1C (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 *     HalpMapNvsArea @ 0x140B5E5F0 (HalpMapNvsArea.c)
 *     ViIsBTSSupported @ 0x140B83A74 (ViIsBTSSupported.c)
 *     HalpAcpiFindRsdp @ 0x140BFC868 (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140C55BD8 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1403A97C0 (vDbgPrintExWithPrefixInternalHelper.c)
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
