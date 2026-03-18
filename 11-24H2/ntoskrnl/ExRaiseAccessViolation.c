/*
 * XREFs of ExRaiseAccessViolation @ 0x1408C10E0
 * Callers:
 *     DifExRaiseAccessViolationWrapper @ 0x14061FAB0 (DifExRaiseAccessViolationWrapper.c)
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 *     NtQueryKey @ 0x140849760 (NtQueryKey.c)
 *     NtQuerySecurityObject @ 0x140879460 (NtQuerySecurityObject.c)
 *     NtQuerySecurityAttributesToken @ 0x140888DC0 (NtQuerySecurityAttributesToken.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1408AB260 (NtGetCompleteWnfStateSubscription.c)
 *     NtQueryWnfStateData @ 0x1408ABBD0 (NtQueryWnfStateData.c)
 *     KeUserModeCallback @ 0x1408BF150 (KeUserModeCallback.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     NtQueryEvent @ 0x1408C0360 (NtQueryEvent.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     IopReadFile @ 0x1408C0610 (IopReadFile.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C48F0 (BuildQueryDirectoryIrp.c)
 *     PiCMReturnBufferResultData @ 0x1408C5620 (PiCMReturnBufferResultData.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1408D0240 (PiControlCopyUserModeCallersBuffer.c)
 *     sub_1408FCEEC @ 0x1408FCEEC (sub_1408FCEEC.c)
 *     RtlpWriteExtendedContext @ 0x1408FD85C (RtlpWriteExtendedContext.c)
 *     NtPrivilegeCheck @ 0x140937BF0 (NtPrivilegeCheck.c)
 *     NtQuerySection @ 0x14093C3B0 (NtQuerySection.c)
 *     NtAlpcQueryInformationMessage @ 0x14093DDC0 (NtAlpcQueryInformationMessage.c)
 *     PiCMReturnHandleResultData @ 0x1409640DC (PiCMReturnHandleResultData.c)
 *     NtQueryObject @ 0x140968970 (NtQueryObject.c)
 *     NtQueryVolumeInformationFile @ 0x14096EFA0 (NtQueryVolumeInformationFile.c)
 *     IopValidateQueryInformationParameters @ 0x1409704A0 (IopValidateQueryInformationParameters.c)
 *     NtQueryLicenseValue @ 0x140977CA0 (NtQueryLicenseValue.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 *     NtRemoveIoCompletionEx @ 0x14098B530 (NtRemoveIoCompletionEx.c)
 *     NtAlpcQueryInformation @ 0x1409AB170 (NtAlpcQueryInformation.c)
 *     NtQuerySymbolicLinkObject @ 0x1409E41F0 (NtQuerySymbolicLinkObject.c)
 *     NtSubscribeWnfStateChange @ 0x140A19380 (NtSubscribeWnfStateChange.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
