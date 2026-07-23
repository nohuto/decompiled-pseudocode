/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x140860D60
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1407900F4 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140790B40 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140790D28 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140790EAC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140791070 (SeAuditTransactionStateChange.c)
 *     SepAuditAssignPrimaryToken @ 0x140791B48 (SepAuditAssignPrimaryToken.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407DDDB8 (CmpReportAuditVirtualizationEvent.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14084987C (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14084C800 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14084F820 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ExProcessCounterSetCallback @ 0x14085F3F0 (ExProcessCounterSetCallback.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140861BC0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x140861FFC (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x140862250 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140862A14 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140863120 (SepAdtStagingEvent.c)
 *     SepAdtTokenRightAdjusted @ 0x1408F2A90 (SepAdtTokenRightAdjusted.c)
 *     SeAuditProcessCreation @ 0x1408FD624 (SeAuditProcessCreation.c)
 *     SepQueryNameString @ 0x140914194 (SepQueryNameString.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 Pool2; // rax
  __int64 v5; // rbx

  if ( *(_QWORD *)(a1 + 1600) && (_QWORD)xmmword_140F05A60 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  v3 = *(_QWORD *)(a1 + 848);
  if ( !v3 )
    return 3221226021LL;
  Pool2 = ExAllocatePool2(0x40uLL, *(unsigned __int16 *)(v3 + 2) + 16LL, 0x6E497350u);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_OWORD *)Pool2 = *(_OWORD *)v3;
  if ( *(_QWORD *)(Pool2 + 8) )
  {
    *(_QWORD *)(Pool2 + 8) = Pool2 + 16;
    memmove((void *)(Pool2 + 16), *(const void **)(v3 + 8), *(unsigned __int16 *)(v3 + 2));
  }
  *a2 = v5;
  return 0LL;
}
