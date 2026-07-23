/*
 * XREFs of ExReleaseExtensionTable @ 0x1404450F0
 * Callers:
 *     PspNetRateControlDispatch @ 0x140777B64 (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x14078F158 (BCryptGenerateSymmetricKey.c)
 *     BCryptImportKeyPair @ 0x14078F1F8 (BCryptImportKeyPair.c)
 *     BCryptSetProperty @ 0x14078F280 (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x14078F310 (LsaCallAuthenticationPackage.c)
 *     LsaDeregisterLogonProcess @ 0x14078F3C0 (LsaDeregisterLogonProcess.c)
 *     LsaLogonUser @ 0x14078F420 (LsaLogonUser.c)
 *     LsaLookupAuthenticationPackage @ 0x14078F530 (LsaLookupAuthenticationPackage.c)
 *     LsaRegisterLogonProcess @ 0x14078F5B0 (LsaRegisterLogonProcess.c)
 *     VmCleanProcessAddressSpace @ 0x14079E678 (VmCleanProcessAddressSpace.c)
 *     EtwpDestructIptData @ 0x1407B201C (EtwpDestructIptData.c)
 *     NtAcquireCrossVmMutant @ 0x1407C2660 (NtAcquireCrossVmMutant.c)
 *     ExpCreateCrossVmEvent @ 0x1407C57C4 (ExpCreateCrossVmEvent.c)
 *     ExpCreateCrossVmMutant @ 0x1407C5888 (ExpCreateCrossVmMutant.c)
 *     ExpCrossVmIntHostCallback @ 0x1407C5950 (ExpCrossVmIntHostCallback.c)
 *     ExpCrossVmWnfPull @ 0x1407C5A6C (ExpCrossVmWnfPull.c)
 *     ExpObCloseCrossVmEvent @ 0x1407C5AE0 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x1407C5B50 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x1407C5BC0 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x1407C5C10 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x1407C5C54 (ExpPulseCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x1407C5CB0 (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x1407C5D0C (ExpResetCrossVmEvent.c)
 *     ExProcessCounterSetCallback @ 0x14085F3F0 (ExProcessCounterSetCallback.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PspCallProcessNotifyRoutines @ 0x1408F2F68 (PspCallProcessNotifyRoutines.c)
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 *     BCryptFinishHash @ 0x14091D448 (BCryptFinishHash.c)
 *     BCryptHashData @ 0x14091D544 (BCryptHashData.c)
 *     BCryptDestroyHash @ 0x14091D5BC (BCryptDestroyHash.c)
 *     BCryptCreateHash @ 0x14091D610 (BCryptCreateHash.c)
 *     sub_14091D6A4 @ 0x14091D6A4 (sub_14091D6A4.c)
 *     ExpSetCrossVmEvent @ 0x140974030 (ExpSetCrossVmEvent.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     ExProcessorCounterSetCallback @ 0x1409D6EC0 (ExProcessorCounterSetCallback.c)
 *     PcwAddInstance @ 0x1409F7360 (PcwAddInstance.c)
 *     BCryptGetProperty @ 0x140A3B034 (BCryptGetProperty.c)
 *     KiSynchCounterSetCallback @ 0x140A41380 (KiSynchCounterSetCallback.c)
 *     PcwCreateInstance @ 0x140A42F90 (PcwCreateInstance.c)
 *     PcwRegister @ 0x140A43020 (PcwRegister.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x140A433A0 (FsRtlAddDiskIOCounterInstance.c)
 *     PcwCloseInstance @ 0x140A50C60 (PcwCloseInstance.c)
 *     PsSetProcessFaultInformation @ 0x140A55880 (PsSetProcessFaultInformation.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A58E70 (KiSynchNumaCounterSetCallback.c)
 *     ExpCrossVmWnfPush @ 0x140A67A84 (ExpCrossVmWnfPush.c)
 *     PsSetProcessesWindowState @ 0x140A7DD90 (PsSetProcessesWindowState.c)
 *     BCryptOpenAlgorithmProvider @ 0x140AA1E08 (BCryptOpenAlgorithmProvider.c)
 *     LsaFreeReturnBuffer @ 0x140AA6F50 (LsaFreeReturnBuffer.c)
 *     PcwUnregister @ 0x140AA73C0 (PcwUnregister.c)
 *     ExpQueryCrossVmEvent @ 0x140AB6DC0 (ExpQueryCrossVmEvent.c)
 *     PspChangeProcessExecutionState @ 0x140ACFA40 (PspChangeProcessExecutionState.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
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
