/*
 * XREFs of RtlInitAnsiString @ 0x14045BBA0
 * Callers:
 *     RtlInitUTF8String @ 0x14045BB80 (RtlInitUTF8String.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140592BBC (IopCreateUnicodeFromAnsiBuffer.c)
 *     IopCheckDiskName @ 0x140593DE8 (IopCheckDiskName.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405D6120 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1405D8620 (PopEmUpdateDeviceConstraintCallback.c)
 *     WheaGetCurrentProcessName @ 0x14065B440 (WheaGetCurrentProcessName.c)
 *     CmpInitializeLoadOptions @ 0x140665FB8 (CmpInitializeLoadOptions.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x14069E2F0 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     IopCopyBootLogRegistryToFile @ 0x14070FA0C (IopCopyBootLogRegistryToFile.c)
 *     KsepGetModuleInfoByName @ 0x14073E054 (KsepGetModuleInfoByName.c)
 *     SepInitializationPhase1 @ 0x14078EEB0 (SepInitializationPhase1.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1407A41DC (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x1407A4670 (WmipGetSMBiosString.c)
 *     WmipQueryWmiRegInfo @ 0x1407A63B0 (WmipQueryWmiRegInfo.c)
 *     EtwWmitraceWorker @ 0x1407ACD0C (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407BEA00 (NtQuerySystemEnvironmentValue.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407D5208 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x1407D7E74 (CmpSetVersionData.c)
 *     CmpInitializeRegistryNode @ 0x1407DEF9C (CmpInitializeRegistryNode.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407E696C (CmpAddRemoveContainerToCLFSLog.c)
 *     AslStringAnsiToUnicode @ 0x140808AD4 (AslStringAnsiToUnicode.c)
 *     EtwpBuildProcessEvent @ 0x1408EFB30 (EtwpBuildProcessEvent.c)
 *     PiGetDefaultMessageString @ 0x1409B8860 (PiGetDefaultMessageString.c)
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 *     MiLogFailedDriverLoad @ 0x140A11CEC (MiLogFailedDriverLoad.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A18BD4 (PopPowerRequestStatsGetIdForRequest.c)
 *     ObCheckRefTraceProcess @ 0x140A4B068 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x140A8758C (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140A9A584 (PnpLogVetoInformation.c)
 *     ExpSystemErrorHandler2 @ 0x140B63540 (ExpSystemErrorHandler2.c)
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     InitLoadDebuggerSymbols @ 0x140C0D7D0 (InitLoadDebuggerSymbols.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     EmpInfParseGetGuidFromName @ 0x140C18244 (EmpInfParseGetGuidFromName.c)
 *     EmpParseEntryTypes @ 0x140C18644 (EmpParseEntryTypes.c)
 *     IopCreateArcNames @ 0x140C1DD2C (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140C1DE70 (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140C1EDB0 (IopMarkBootPartition.c)
 *     IopGetBootDiskInformation @ 0x140C1F8BC (IopGetBootDiskInformation.c)
 *     IopGetBootDiskInformationLite @ 0x140C1FD74 (IopGetBootDiskInformationLite.c)
 *     IopApplySystemPartitionProt @ 0x140C201A8 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140C226B0 (PipCriticalDeviceWaitCallback.c)
 *     WmipDriverEntry @ 0x140C3EB10 (WmipDriverEntry.c)
 *     CmpInitializeDriverStores @ 0x140C49330 (CmpInitializeDriverStores.c)
 *     CmpSetSystemBiosInformation @ 0x140C4BC04 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140C4BFA4 (CmpSetVideoBiosInformation.c)
 *     RamdiskCreateSymbolicLink @ 0x140C60628 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     strlen @ 0x1406C13D0 (strlen.c)
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
