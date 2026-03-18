/*
 * XREFs of ExReleaseExtensionTable @ 0x14044FE80
 * Callers:
 *     PspNetRateControlDispatch @ 0x1407779A4 (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x14078F188 (BCryptGenerateSymmetricKey.c)
 *     BCryptImportKeyPair @ 0x14078F228 (BCryptImportKeyPair.c)
 *     BCryptSetProperty @ 0x14078F2B0 (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x14078F340 (LsaCallAuthenticationPackage.c)
 *     LsaDeregisterLogonProcess @ 0x14078F3F0 (LsaDeregisterLogonProcess.c)
 *     LsaLogonUser @ 0x14078F450 (LsaLogonUser.c)
 *     LsaLookupAuthenticationPackage @ 0x14078F560 (LsaLookupAuthenticationPackage.c)
 *     LsaRegisterLogonProcess @ 0x14078F5E0 (LsaRegisterLogonProcess.c)
 *     VmCleanProcessAddressSpace @ 0x14079E568 (VmCleanProcessAddressSpace.c)
 *     EtwpDestructIptData @ 0x1407B1BCC (EtwpDestructIptData.c)
 *     NtAcquireCrossVmMutant @ 0x1407C3A60 (NtAcquireCrossVmMutant.c)
 *     ExpCreateCrossVmEvent @ 0x1407C5364 (ExpCreateCrossVmEvent.c)
 *     ExpCreateCrossVmMutant @ 0x1407C5428 (ExpCreateCrossVmMutant.c)
 *     ExpCrossVmIntHostCallback @ 0x1407C54F0 (ExpCrossVmIntHostCallback.c)
 *     ExpCrossVmWnfPull @ 0x1407C560C (ExpCrossVmWnfPull.c)
 *     ExpObCloseCrossVmEvent @ 0x1407C5680 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x1407C56F0 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x1407C5760 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x1407C57B0 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x1407C57F4 (ExpPulseCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x1407C5850 (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x1407C58AC (ExpResetCrossVmEvent.c)
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 *     ExProcessCounterSetCallback @ 0x1408EDBC0 (ExProcessCounterSetCallback.c)
 *     BCryptFinishHash @ 0x1408FAB68 (BCryptFinishHash.c)
 *     BCryptHashData @ 0x1408FAC64 (BCryptHashData.c)
 *     BCryptDestroyHash @ 0x1408FACDC (BCryptDestroyHash.c)
 *     BCryptCreateHash @ 0x1408FAD30 (BCryptCreateHash.c)
 *     sub_1408FADC4 @ 0x1408FADC4 (sub_1408FADC4.c)
 *     PspCallProcessNotifyRoutines @ 0x140938898 (PspCallProcessNotifyRoutines.c)
 *     DbgkForwardException @ 0x140938C20 (DbgkForwardException.c)
 *     PsSetProcessFaultInformation @ 0x14093B330 (PsSetProcessFaultInformation.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     ExpSetCrossVmEvent @ 0x14098A940 (ExpSetCrossVmEvent.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     ExProcessorCounterSetCallback @ 0x1409DD2F0 (ExProcessorCounterSetCallback.c)
 *     PcwAddInstance @ 0x1409FE0F0 (PcwAddInstance.c)
 *     BCryptGetProperty @ 0x140A45488 (BCryptGetProperty.c)
 *     KiSynchCounterSetCallback @ 0x140A4A660 (KiSynchCounterSetCallback.c)
 *     PcwCreateInstance @ 0x140A4C400 (PcwCreateInstance.c)
 *     PcwRegister @ 0x140A4C490 (PcwRegister.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x140A4C810 (FsRtlAddDiskIOCounterInstance.c)
 *     PcwCloseInstance @ 0x140A594B0 (PcwCloseInstance.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A60920 (KiSynchNumaCounterSetCallback.c)
 *     ExpCrossVmWnfPush @ 0x140A6E584 (ExpCrossVmWnfPush.c)
 *     PsSetProcessesWindowState @ 0x140A83270 (PsSetProcessesWindowState.c)
 *     BCryptOpenAlgorithmProvider @ 0x140AA6D0C (BCryptOpenAlgorithmProvider.c)
 *     LsaFreeReturnBuffer @ 0x140AABF80 (LsaFreeReturnBuffer.c)
 *     PcwUnregister @ 0x140AAC390 (PcwUnregister.c)
 *     ExpQueryCrossVmEvent @ 0x140ABBDA0 (ExpQueryCrossVmEvent.c)
 *     PspChangeProcessExecutionState @ 0x140AD16D4 (PspChangeProcessExecutionState.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
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
