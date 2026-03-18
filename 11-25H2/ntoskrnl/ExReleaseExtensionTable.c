/*
 * XREFs of ExReleaseExtensionTable @ 0x1404516B0
 * Callers:
 *     PspNetRateControlDispatch @ 0x140767EC4 (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x14077FEC8 (BCryptGenerateSymmetricKey.c)
 *     BCryptImportKeyPair @ 0x14077FF68 (BCryptImportKeyPair.c)
 *     BCryptSetProperty @ 0x14077FFF0 (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x140780080 (LsaCallAuthenticationPackage.c)
 *     LsaDeregisterLogonProcess @ 0x140780130 (LsaDeregisterLogonProcess.c)
 *     LsaLogonUser @ 0x140780190 (LsaLogonUser.c)
 *     LsaLookupAuthenticationPackage @ 0x1407802A0 (LsaLookupAuthenticationPackage.c)
 *     LsaRegisterLogonProcess @ 0x140780320 (LsaRegisterLogonProcess.c)
 *     VmCleanProcessAddressSpace @ 0x14078F1A8 (VmCleanProcessAddressSpace.c)
 *     EtwpDestructIptData @ 0x1407A27FC (EtwpDestructIptData.c)
 *     NtAcquireCrossVmMutant @ 0x1407B5550 (NtAcquireCrossVmMutant.c)
 *     ExpCreateCrossVmEvent @ 0x1407B5B94 (ExpCreateCrossVmEvent.c)
 *     ExpCreateCrossVmMutant @ 0x1407B5C58 (ExpCreateCrossVmMutant.c)
 *     ExpCrossVmIntHostCallback @ 0x1407B5D20 (ExpCrossVmIntHostCallback.c)
 *     ExpCrossVmWnfPull @ 0x1407B5E3C (ExpCrossVmWnfPull.c)
 *     ExpObCloseCrossVmEvent @ 0x1407B5EB0 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x1407B5F20 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x1407B5F90 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x1407B5FE0 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x1407B6024 (ExpPulseCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x1407B6080 (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x1407B60DC (ExpResetCrossVmEvent.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     ExProcessCounterSetCallback @ 0x1408DE7B0 (ExProcessCounterSetCallback.c)
 *     ExpNtUpdateWnfStateData @ 0x1408E4380 (ExpNtUpdateWnfStateData.c)
 *     BCryptFinishHash @ 0x140907094 (BCryptFinishHash.c)
 *     BCryptHashData @ 0x140907108 (BCryptHashData.c)
 *     BCryptDestroyHash @ 0x140907208 (BCryptDestroyHash.c)
 *     BCryptCreateHash @ 0x14090725C (BCryptCreateHash.c)
 *     sub_1409072F0 @ 0x1409072F0 (sub_1409072F0.c)
 *     PspCallProcessNotifyRoutines @ 0x14091F098 (PspCallProcessNotifyRoutines.c)
 *     DbgkForwardException @ 0x14091F420 (DbgkForwardException.c)
 *     ExpQueryCrossVmEvent @ 0x140939554 (ExpQueryCrossVmEvent.c)
 *     ExpSetCrossVmEvent @ 0x140995510 (ExpSetCrossVmEvent.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     ExProcessorCounterSetCallback @ 0x1409FB640 (ExProcessorCounterSetCallback.c)
 *     PcwAddInstance @ 0x1409FC2A0 (PcwAddInstance.c)
 *     BCryptGetProperty @ 0x140A41A50 (BCryptGetProperty.c)
 *     KiSynchCounterSetCallback @ 0x140A47490 (KiSynchCounterSetCallback.c)
 *     PcwCreateInstance @ 0x140A49850 (PcwCreateInstance.c)
 *     PcwRegister @ 0x140A498E0 (PcwRegister.c)
 *     PcwCloseInstance @ 0x140A55F20 (PcwCloseInstance.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x140A55FE0 (FsRtlAddDiskIOCounterInstance.c)
 *     PsSetProcessFaultInformation @ 0x140A5B7E0 (PsSetProcessFaultInformation.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A5EA90 (KiSynchNumaCounterSetCallback.c)
 *     ExpCrossVmWnfPush @ 0x140A6BCE8 (ExpCrossVmWnfPush.c)
 *     PsSetProcessesWindowState @ 0x140A84100 (PsSetProcessesWindowState.c)
 *     BCryptOpenAlgorithmProvider @ 0x140AA1968 (BCryptOpenAlgorithmProvider.c)
 *     LsaFreeReturnBuffer @ 0x140AA69C0 (LsaFreeReturnBuffer.c)
 *     PcwUnregister @ 0x140AA6F50 (PcwUnregister.c)
 *     PspChangeProcessExecutionState @ 0x140AC7CBC (PspChangeProcessExecutionState.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 */

void __fastcall ExReleaseExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rcx
  unsigned __int64 v2; // rtt

  v1 = a1 + 11;
  _m_prefetchw(v1);
  v2 = v1->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 != _InterlockedCompareExchange64((volatile signed __int64 *)v1, v2 - 2, v2) )
    ExfReleaseRundownProtection(v1);
}
