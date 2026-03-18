/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x1408EF560
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140790124 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140790B70 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140790D58 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140790EDC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1407910A0 (SeAuditTransactionStateChange.c)
 *     SepAuditAssignPrimaryToken @ 0x140791B78 (SepAuditAssignPrimaryToken.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407DD868 (CmpReportAuditVirtualizationEvent.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14084D5BC (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140850540 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140853560 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeAuditProcessCreation @ 0x1408A73CC (SeAuditProcessCreation.c)
 *     ExProcessCounterSetCallback @ 0x1408EDBC0 (ExProcessCounterSetCallback.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1408F03C0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408F07FC (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1408F0A50 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408F1214 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408F1920 (SepAdtStagingEvent.c)
 *     SepQueryNameString @ 0x1408F2B48 (SepQueryNameString.c)
 *     SepAdtTokenRightAdjusted @ 0x1409383C4 (SepAdtTokenRightAdjusted.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 Pool2; // rax
  __int64 v7; // rbx

  if ( *(_QWORD *)(a1 + 1600) && (_QWORD)xmmword_140F05780 )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  v5 = *(_QWORD *)(a1 + 848);
  if ( !v5 )
    return 3221226021LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_OWORD *)Pool2 = *(_OWORD *)v5;
  if ( *(_QWORD *)(Pool2 + 8) )
  {
    *(_QWORD *)(Pool2 + 8) = Pool2 + 16;
    memmove((void *)(Pool2 + 16), *(const void **)(v5 + 8), *(unsigned __int16 *)(v5 + 2));
  }
  *a2 = v7;
  return 0LL;
}
