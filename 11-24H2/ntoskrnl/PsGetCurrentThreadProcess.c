/*
 * XREFs of PsGetCurrentThreadProcess @ 0x1404709D0
 * Callers:
 *     NtAlertMultipleThreadByThreadId @ 0x14077C170 (NtAlertMultipleThreadByThreadId.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140790124 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140790B70 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x140790EDC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1407910A0 (SeAuditTransactionStateChange.c)
 *     SepAuditAssignPrimaryToken @ 0x140791B78 (SepAuditAssignPrimaryToken.c)
 *     CmpDoAccessCheckOnKCB @ 0x1407DB468 (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407DD868 (CmpReportAuditVirtualizationEvent.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14084D5BC (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140850540 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140853560 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmQueryKey @ 0x140877890 (CmQueryKey.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1408F03C0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408F07FC (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1408F0A50 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408F1214 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408F1920 (SepAdtStagingEvent.c)
 *     CmpIsSystemEntity @ 0x14090D660 (CmpIsSystemEntity.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x1409137C4 (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14091735C (CmpCheckKeySecurityDescriptorAccess.c)
 *     SepAdtTokenRightAdjusted @ 0x1409383C4 (SepAdtTokenRightAdjusted.c)
 *     CmpCheckExeOwnerForPca @ 0x1409A1D9C (CmpCheckExeOwnerForPca.c)
 *     CmpPublishEventForPcaResolver @ 0x140A501E0 (CmpPublishEventForPcaResolver.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140A8A7C0 (PopDiagTracePowerSettingRegistration.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x140AA8818 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
