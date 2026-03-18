/*
 * XREFs of RtlInitAnsiString @ 0x14046B2E0
 * Callers:
 *     RtlInitUTF8String @ 0x14046B670 (RtlInitUTF8String.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140592434 (IopCreateUnicodeFromAnsiBuffer.c)
 *     IopCheckDiskName @ 0x140593758 (IopCheckDiskName.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405D4230 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1405D6570 (PopEmUpdateDeviceConstraintCallback.c)
 *     WheaGetCurrentProcessName @ 0x140650D90 (WheaGetCurrentProcessName.c)
 *     CmpInitializeLoadOptions @ 0x14065BBE8 (CmpInitializeLoadOptions.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140691EC0 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     IopCopyBootLogRegistryToFile @ 0x140705D7C (IopCopyBootLogRegistryToFile.c)
 *     KsepGetModuleInfoByName @ 0x140734104 (KsepGetModuleInfoByName.c)
 *     RtlIsApiSetImplemented @ 0x140776130 (RtlIsApiSetImplemented.c)
 *     SepInitializationPhase1 @ 0x14077FC20 (SepInitializationPhase1.c)
 *     WmipCheckSMBiosSysInfoString @ 0x140794CFC (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x140795190 (WmipGetSMBiosString.c)
 *     WmipQueryWmiRegInfo @ 0x140796EA0 (WmipQueryWmiRegInfo.c)
 *     EtwWmitraceWorker @ 0x14079D46C (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407AEDE0 (NtQuerySystemEnvironmentValue.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407C55D4 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x1407C8190 (CmpSetVersionData.c)
 *     CmpInitializeRegistryNode @ 0x1407CF174 (CmpInitializeRegistryNode.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407D6518 (CmpAddRemoveContainerToCLFSLog.c)
 *     AslStringAnsiToUnicode @ 0x1407F8824 (AslStringAnsiToUnicode.c)
 *     EtwpBuildProcessEvent @ 0x1408BE460 (EtwpBuildProcessEvent.c)
 *     PiGetDefaultMessageString @ 0x1409B00D4 (PiGetDefaultMessageString.c)
 *     MiResolveImageReferences @ 0x140A1286C (MiResolveImageReferences.c)
 *     MiLogFailedDriverLoad @ 0x140A1375C (MiLogFailedDriverLoad.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A198D4 (PopPowerRequestStatsGetIdForRequest.c)
 *     ObCheckRefTraceProcess @ 0x140A4FAF4 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x140A8679C (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140A99FDC (PnpLogVetoInformation.c)
 *     ExpSystemErrorHandler2 @ 0x140B51340 (ExpSystemErrorHandler2.c)
 *     KdInitSystem @ 0x140B65E30 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     InitLoadDebuggerSymbols @ 0x140BFA7D0 (InitLoadDebuggerSymbols.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     EmpInfParseGetGuidFromName @ 0x140C051A4 (EmpInfParseGetGuidFromName.c)
 *     EmpParseEntryTypes @ 0x140C055A4 (EmpParseEntryTypes.c)
 *     IopCreateArcNames @ 0x140C0AB18 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140C0AC5C (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140C0BBA0 (IopMarkBootPartition.c)
 *     IopGetBootDiskInformation @ 0x140C0C6AC (IopGetBootDiskInformation.c)
 *     IopGetBootDiskInformationLite @ 0x140C0CB64 (IopGetBootDiskInformationLite.c)
 *     IopApplySystemPartitionProt @ 0x140C0D000 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140C0F510 (PipCriticalDeviceWaitCallback.c)
 *     WmipDriverEntry @ 0x140C2B6E0 (WmipDriverEntry.c)
 *     CmpInitializeDriverStores @ 0x140C35F30 (CmpInitializeDriverStores.c)
 *     CmpSetSystemBiosInformation @ 0x140C387E4 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140C38B84 (CmpSetVideoBiosInformation.c)
 *     RamdiskCreateSymbolicLink @ 0x140C4D158 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     strlen @ 0x1406B51D0 (strlen.c)
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
