/*
 * XREFs of RtlCreateUnicodeString @ 0x140833010
 * Callers:
 *     DifRtlCreateUnicodeStringWrapper @ 0x1406397C0 (DifRtlCreateUnicodeStringWrapper.c)
 *     IopCopyBootLogRegistryToFile @ 0x140711E7C (IopCopyBootLogRegistryToFile.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072AC78 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDrvDbCreateNode @ 0x1407368AC (PiDrvDbCreateNode.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140739154 (PiDrvDbResolveNodeFilePaths.c)
 *     EtwStartAutoLogger @ 0x1407ADDF8 (EtwStartAutoLogger.c)
 *     EtwpQueryRegistryCallback @ 0x1407AF540 (EtwpQueryRegistryCallback.c)
 *     EtwpSavePersistedLogger @ 0x1407AFE60 (EtwpSavePersistedLogger.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407D3860 (CmpCreateHwProfileFriendlyName.c)
 *     AslPathWildcardFindFirst @ 0x14080A0A4 (AslPathWildcardFindFirst.c)
 *     _PnpCtxCreateNode @ 0x1408172AC (_PnpCtxCreateNode.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408226F4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x140823A00 (DrvDbCreateDatabaseNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140831268 (PiDevCfgQueryDeviceMigrationNode.c)
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x140832F00 (EtwpCaptureString.c)
 *     RtlConvertSidToUnicodeString @ 0x140865350 (RtlConvertSidToUnicodeString.c)
 *     PiDevCfgQueryDriverNode @ 0x140996564 (PiDevCfgQueryDriverNode.c)
 *     PiGetDefaultMessageString @ 0x1409C8444 (PiGetDefaultMessageString.c)
 *     EtwpRealtimeCreateLogfile @ 0x1409D8F3C (EtwpRealtimeCreateLogfile.c)
 *     PiDevCfgResolveVariable @ 0x140A6A668 (PiDevCfgResolveVariable.c)
 *     PipGenerateContainerID @ 0x140A7063C (PipGenerateContainerID.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140A98C04 (PiDevCfgLogDeviceConfigured.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140AA3320 (PiCreateDriverSwDeviceCallback.c)
 *     PipInitDeviceOverrideCache @ 0x140C210A8 (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C631D0 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     wcslen @ 0x1404FFED0 (wcslen.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
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
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  DestinationString->Buffer = Pool2;
  if ( !Pool2 )
    return 0;
  DestinationString->MaximumLength = v5;
  memmove(Pool2, SourceString, v5);
  DestinationString->Length = v5 - 2;
  return 1;
}
