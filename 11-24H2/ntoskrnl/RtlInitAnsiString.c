/*
 * XREFs of RtlInitAnsiString @ 0x1404654C0
 * Callers:
 *     RtlInitUTF8String @ 0x1404654A0 (RtlInitUTF8String.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140595B8C (IopCreateUnicodeFromAnsiBuffer.c)
 *     IopCheckDiskName @ 0x140596E08 (IopCheckDiskName.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405D8C80 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1405DB750 (PopEmUpdateDeviceConstraintCallback.c)
 *     WheaGetCurrentProcessName @ 0x14065CD20 (WheaGetCurrentProcessName.c)
 *     CmpInitializeLoadOptions @ 0x1406676C8 (CmpInitializeLoadOptions.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x14069D260 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     IopCopyBootLogRegistryToFile @ 0x140711E7C (IopCopyBootLogRegistryToFile.c)
 *     KsepGetModuleInfoByName @ 0x140740124 (KsepGetModuleInfoByName.c)
 *     SepInitializationPhase1 @ 0x14078EEE0 (SepInitializationPhase1.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1407A40CC (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x1407A4560 (WmipGetSMBiosString.c)
 *     WmipQueryWmiRegInfo @ 0x1407A6270 (WmipQueryWmiRegInfo.c)
 *     EtwWmitraceWorker @ 0x1407AC83C (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407BE5B0 (NtQuerySystemEnvironmentValue.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407D4D18 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x1407D7920 (CmpSetVersionData.c)
 *     CmpInitializeRegistryNode @ 0x1407DEA4C (CmpInitializeRegistryNode.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407E639C (CmpAddRemoveContainerToCLFSLog.c)
 *     AslStringAnsiToUnicode @ 0x140808394 (AslStringAnsiToUnicode.c)
 *     EtwpBuildProcessEvent @ 0x14094B5C0 (EtwpBuildProcessEvent.c)
 *     PiGetDefaultMessageString @ 0x1409C8444 (PiGetDefaultMessageString.c)
 *     MiResolveImageReferences @ 0x140A17C94 (MiResolveImageReferences.c)
 *     MiLogFailedDriverLoad @ 0x140A18B7C (MiLogFailedDriverLoad.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A24BE4 (PopPowerRequestStatsGetIdForRequest.c)
 *     ObCheckRefTraceProcess @ 0x140A53078 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x140A8B24C (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140A9F1B4 (PnpLogVetoInformation.c)
 *     ExpSystemErrorHandler2 @ 0x140B61470 (ExpSystemErrorHandler2.c)
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     InitLoadDebuggerSymbols @ 0x140C0B7D0 (InitLoadDebuggerSymbols.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     EmpInfParseGetGuidFromName @ 0x140C16244 (EmpInfParseGetGuidFromName.c)
 *     EmpParseEntryTypes @ 0x140C16644 (EmpParseEntryTypes.c)
 *     IopCreateArcNames @ 0x140C1BCEC (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140C1BE30 (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140C1CD70 (IopMarkBootPartition.c)
 *     IopGetBootDiskInformation @ 0x140C1D87C (IopGetBootDiskInformation.c)
 *     IopGetBootDiskInformationLite @ 0x140C1DD34 (IopGetBootDiskInformationLite.c)
 *     IopApplySystemPartitionProt @ 0x140C1E168 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140C20670 (PipCriticalDeviceWaitCallback.c)
 *     WmipDriverEntry @ 0x140C3C9C0 (WmipDriverEntry.c)
 *     CmpInitializeDriverStores @ 0x140C471E0 (CmpInitializeDriverStores.c)
 *     CmpSetSystemBiosInformation @ 0x140C49AE0 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140C49E80 (CmpSetVideoBiosInformation.c)
 *     RamdiskCreateSymbolicLink @ 0x140C5E4D8 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     strlen @ 0x1406C04D0 (strlen.c)
 */

void __stdcall RtlInitAnsiString(PSTRING DestinationString, PCSZ SourceString)
{
  size_t v3; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v3 = strlen(SourceString);
    if ( v3 >= 0xFFFF )
      LOWORD(v3) = -2;
    DestinationString->Length = v3;
    DestinationString->MaximumLength = v3 + 1;
  }
}
