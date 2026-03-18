/*
 * XREFs of RtlCreateUnicodeString @ 0x140893990
 * Callers:
 *     DifRtlCreateUnicodeStringWrapper @ 0x14062D800 (DifRtlCreateUnicodeStringWrapper.c)
 *     IopCopyBootLogRegistryToFile @ 0x140705D7C (IopCopyBootLogRegistryToFile.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14071ECF8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDrvDbCreateNode @ 0x14072A61C (PiDrvDbCreateNode.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14072CEC4 (PiDrvDbResolveNodeFilePaths.c)
 *     EtwStartAutoLogger @ 0x14079EA28 (EtwStartAutoLogger.c)
 *     EtwpQueryRegistryCallback @ 0x1407A0170 (EtwpQueryRegistryCallback.c)
 *     EtwpSavePersistedLogger @ 0x1407A0A90 (EtwpSavePersistedLogger.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407C411C (CmpCreateHwProfileFriendlyName.c)
 *     AslPathWildcardFindFirst @ 0x1407FA534 (AslPathWildcardFindFirst.c)
 *     _PnpCtxCreateNode @ 0x1408073AC (_PnpCtxCreateNode.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408127F4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x140813BD8 (DrvDbCreateDatabaseNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14088F39C (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140891DEC (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryDriverNode @ 0x140892318 (PiDevCfgQueryDriverNode.c)
 *     EtwpCaptureString @ 0x140893884 (EtwpCaptureString.c)
 *     RtlConvertSidToUnicodeString @ 0x140917220 (RtlConvertSidToUnicodeString.c)
 *     EtwpRealtimeCreateLogfile @ 0x140990098 (EtwpRealtimeCreateLogfile.c)
 *     PiGetDefaultMessageString @ 0x1409B00D4 (PiGetDefaultMessageString.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 *     PiDevCfgResolveVariable @ 0x140A67A58 (PiDevCfgResolveVariable.c)
 *     PipGenerateContainerID @ 0x140A6E420 (PipGenerateContainerID.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9DAA0 (PiCreateDriverSwDeviceCallback.c)
 *     PipInitDeviceOverrideCache @ 0x140C0FF48 (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C51EBC (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     wcslen @ 0x1404FD750 (wcslen.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
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
