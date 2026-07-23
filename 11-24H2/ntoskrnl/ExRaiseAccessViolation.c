/*
 * XREFs of ExRaiseAccessViolation @ 0x1408BEAA0
 * Callers:
 *     DifExRaiseAccessViolationWrapper @ 0x14061E070 (DifExRaiseAccessViolationWrapper.c)
 *     NtQueryKey @ 0x140845A20 (NtQueryKey.c)
 *     NtQuerySecurityObject @ 0x14087D790 (NtQuerySecurityObject.c)
 *     NtQuerySecurityAttributesToken @ 0x14088CC70 (NtQuerySecurityAttributesToken.c)
 *     NtAlpcQueryInformationMessage @ 0x140892400 (NtAlpcQueryInformationMessage.c)
 *     KeUserModeCallback @ 0x1408BCB10 (KeUserModeCallback.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     NtQueryEvent @ 0x1408BDD20 (NtQueryEvent.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C22B0 (BuildQueryDirectoryIrp.c)
 *     PiCMReturnBufferResultData @ 0x1408C3020 (PiCMReturnBufferResultData.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1408CDC30 (PiControlCopyUserModeCallersBuffer.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1409014C0 (NtGetCompleteWnfStateSubscription.c)
 *     NtQueryWnfStateData @ 0x140901E30 (NtQueryWnfStateData.c)
 *     sub_14091F7CC @ 0x14091F7CC (sub_14091F7CC.c)
 *     RtlpWriteExtendedContext @ 0x14092013C (RtlpWriteExtendedContext.c)
 *     PiCMReturnHandleResultData @ 0x14094BBB4 (PiCMReturnHandleResultData.c)
 *     NtQueryObject @ 0x140951400 (NtQueryObject.c)
 *     NtQueryVolumeInformationFile @ 0x140957060 (NtQueryVolumeInformationFile.c)
 *     IopValidateQueryInformationParameters @ 0x140958CB0 (IopValidateQueryInformationParameters.c)
 *     NtQueryLicenseValue @ 0x1409604B0 (NtQueryLicenseValue.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 *     NtRemoveIoCompletionEx @ 0x140975B40 (NtRemoveIoCompletionEx.c)
 *     NtPrivilegeCheck @ 0x140984C80 (NtPrivilegeCheck.c)
 *     NtAlpcQueryInformation @ 0x140994E70 (NtAlpcQueryInformation.c)
 *     NtQuerySymbolicLinkObject @ 0x1409DEC50 (NtQuerySymbolicLinkObject.c)
 *     NtQuerySection @ 0x1409E9AC0 (NtQuerySection.c)
 *     NtSubscribeWnfStateChange @ 0x140A124F0 (NtSubscribeWnfStateChange.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
