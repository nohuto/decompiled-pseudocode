/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x140984CD0
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140780E64 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1407818B0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140781A98 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140781C1C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140781DE0 (SeAuditTransactionStateChange.c)
 *     SepAuditAssignPrimaryToken @ 0x1407828B8 (SepAuditAssignPrimaryToken.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407CE0A8 (CmpReportAuditVirtualizationEvent.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140854390 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14089FC40 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ExProcessCounterSetCallback @ 0x1408DE7B0 (ExProcessCounterSetCallback.c)
 *     SeAuditProcessCreation @ 0x1408F435C (SeAuditProcessCreation.c)
 *     SepAdtTokenRightAdjusted @ 0x140936BA8 (SepAdtTokenRightAdjusted.c)
 *     SepQueryNameString @ 0x140983F00 (SepQueryNameString.c)
 *     SeOperationAuditAlarm @ 0x1409842A0 (SeOperationAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409847B8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140984A0C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409851A4 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409858B0 (SepAdtStagingEvent.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140985C34 (SepAdtCloseObjectAuditAlarm.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 Pool2; // rax
  __int64 v5; // rbx

  if ( *(_QWORD *)(a1 + 1600) && (_QWORD)xmmword_140F053C0 )
    return guard_dispatch_icall_no_overrides(a1);
  v3 = *(_QWORD *)(a1 + 848);
  if ( !v3 )
    return 3221226021LL;
  Pool2 = ExAllocatePool2(0x40uLL);
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
