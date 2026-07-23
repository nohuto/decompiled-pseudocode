/*
 * XREFs of RtlCreateUnicodeString @ 0x1409D2A00
 * Callers:
 *     DifRtlCreateUnicodeStringWrapper @ 0x140637D80 (DifRtlCreateUnicodeStringWrapper.c)
 *     IopCopyBootLogRegistryToFile @ 0x14070FA0C (IopCopyBootLogRegistryToFile.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140728A48 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDrvDbCreateNode @ 0x1407347DC (PiDrvDbCreateNode.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140737084 (PiDrvDbResolveNodeFilePaths.c)
 *     EtwStartAutoLogger @ 0x1407AE248 (EtwStartAutoLogger.c)
 *     EtwpQueryRegistryCallback @ 0x1407AF990 (EtwpQueryRegistryCallback.c)
 *     EtwpSavePersistedLogger @ 0x1407B02B0 (EtwpSavePersistedLogger.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407D3D50 (CmpCreateHwProfileFriendlyName.c)
 *     AslPathWildcardFindFirst @ 0x14080A7E4 (AslPathWildcardFindFirst.c)
 *     _PnpCtxCreateNode @ 0x1408179EC (_PnpCtxCreateNode.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140822E34 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x140824140 (DrvDbCreateDatabaseNode.c)
 *     RtlConvertSidToUnicodeString @ 0x140869960 (RtlConvertSidToUnicodeString.c)
 *     PiGetDefaultMessageString @ 0x1409B8860 (PiGetDefaultMessageString.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1409D1CC4 (PiDevCfgQueryDeviceMigrationNode.c)
 *     EtwpCaptureString @ 0x1409D28F8 (EtwpCaptureString.c)
 *     EtwpRealtimeCreateLogfile @ 0x1409D3A4C (EtwpRealtimeCreateLogfile.c)
 *     PiDevCfgResolveVariable @ 0x140A63A18 (PiDevCfgResolveVariable.c)
 *     PipGenerateContainerID @ 0x140A69ACC (PipGenerateContainerID.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9E6B0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x140AC0A0C (PiDevCfgQueryDriverNode.c)
 *     PipInitDeviceOverrideCache @ 0x140C230E8 (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C6534C (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     wcslen @ 0x1404FD790 (wcslen.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  int v4; // eax
  unsigned int v5; // esi
  wchar_t *Pool2; // rax

  v4 = wcslen(SourceString);
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v5, 0x67727453u);
  DestinationString->Buffer = Pool2;
  if ( !Pool2 )
    return 0;
  DestinationString->MaximumLength = v5;
  memmove(Pool2, SourceString, v5);
  DestinationString->Length = v5 - 2;
  return 1;
}
