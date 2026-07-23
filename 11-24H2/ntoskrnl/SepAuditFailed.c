/*
 * XREFs of SepAuditFailed @ 0x14084D220
 * Callers:
 *     SepRmCallLsa @ 0x1403C17F0 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x1403C1B1C (SepRmDispatchDataToLsa.c)
 *     SepInitProcessAuditSd @ 0x140605560 (SepInitProcessAuditSd.c)
 *     SepAuditFailedRaisedIrql @ 0x140607C18 (SepAuditFailedRaisedIrql.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1407900F4 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140790B40 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140790D28 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140790EAC (SeAuditSystemTimeChange.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14079159C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x140791B48 (SepAuditAssignPrimaryToken.c)
 *     NtDeleteObjectAuditAlarm @ 0x1407926E0 (NtDeleteObjectAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14084987C (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14084C800 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14084D2F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14084F820 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140861BC0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x140861FFC (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x140862250 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140862A14 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140863120 (SepAdtStagingEvent.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14086395C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088DEB0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeAuditProcessCreation @ 0x1408FD624 (SeAuditProcessCreation.c)
 *     NtOpenObjectAuditAlarm @ 0x140911F00 (NtOpenObjectAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140912CF0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1409134B0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140913820 (NtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1409875D0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x140A0E0E0 (NtCloseObjectAuditAlarm.c)
 *     SepRmCommandServerThread @ 0x140A4A870 (SepRmCommandServerThread.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x1406A91F0 (ZwFlushKey.c)
 *     SepAdtLogAuditFailureEvent @ 0x1407913A4 (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAuditFailed(signed int a1)
{
  ULONG_PTR v1; // rbx
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp+10h] BYREF

  DestinationString = 0LL;
  v1 = a1;
  if ( SepCrashOnAuditFail )
  {
    if ( SepAdtRegNotifyHandle )
    {
      SepAdtLogAuditFailureEvent(a1, 1);
      RtlInitUnicodeString(&DestinationString, L"CrashOnAuditFail");
      LODWORD(BugCheckParameter4) = 2;
      do
      {
        do
          v2 = ZwSetValueKey(SepAdtRegNotifyHandle, &DestinationString, 0, 4u, &BugCheckParameter4, 4u);
        while ( v2 == -1073741670 );
      }
      while ( v2 == -1073741801 );
      if ( v2 >= 0 )
      {
        do
        {
          do
            v3 = ZwFlushKey(SepAdtRegNotifyHandle);
          while ( v3 == -1073741670 );
        }
        while ( v3 == -1073741801 );
      }
      KeBugCheckEx(0xC0000244, v1, 0LL, 0LL, 0LL);
    }
    SepCrashOnAuditFail = 0;
  }
}
