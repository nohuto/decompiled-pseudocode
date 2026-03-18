/*
 * XREFs of ExRaiseAccessViolation @ 0x140936B90
 * Callers:
 *     DifExRaiseAccessViolationWrapper @ 0x140613AF0 (DifExRaiseAccessViolationWrapper.c)
 *     NtQueryKey @ 0x14084D9C0 (NtQueryKey.c)
 *     NtQuerySecurityAttributesToken @ 0x140867840 (NtQuerySecurityAttributesToken.c)
 *     NtQuerySecurityObject @ 0x14086F0A0 (NtQuerySecurityObject.c)
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 *     NtAlpcQueryInformationMessage @ 0x1408ABDF0 (NtAlpcQueryInformationMessage.c)
 *     NtQuerySection @ 0x1408B64C0 (NtQuerySection.c)
 *     NtQueryObject @ 0x1408BFD10 (NtQueryObject.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C6A20 (BuildQueryDirectoryIrp.c)
 *     PiCMReturnBufferResultData @ 0x1408C7B70 (PiCMReturnBufferResultData.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1408CDD90 (PiControlCopyUserModeCallersBuffer.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1408E2AC0 (NtGetCompleteWnfStateSubscription.c)
 *     NtQueryWnfStateData @ 0x1408E34F0 (NtQueryWnfStateData.c)
 *     sub_1409092C8 @ 0x1409092C8 (sub_1409092C8.c)
 *     RtlpWriteExtendedContext @ 0x140909C2C (RtlpWriteExtendedContext.c)
 *     NtPrivilegeCheck @ 0x140933900 (NtPrivilegeCheck.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x140936F60 (NtQueryVolumeInformationFile.c)
 *     NtQueryEvent @ 0x1409375D0 (NtQueryEvent.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     KeUserModeCallback @ 0x140938670 (KeUserModeCallback.c)
 *     PiCMReturnHandleResultData @ 0x14095BF24 (PiCMReturnHandleResultData.c)
 *     NtQueryLicenseValue @ 0x14097DEE0 (NtQueryLicenseValue.c)
 *     IopValidateQueryInformationParameters @ 0x140988620 (IopValidateQueryInformationParameters.c)
 *     NtRemoveIoCompletionEx @ 0x14099A080 (NtRemoveIoCompletionEx.c)
 *     NtAlpcQueryInformation @ 0x1409C1FD0 (NtAlpcQueryInformation.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 *     NtQuerySymbolicLinkObject @ 0x1409EB140 (NtQuerySymbolicLinkObject.c)
 *     NtSubscribeWnfStateChange @ 0x140A13A20 (NtSubscribeWnfStateChange.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
