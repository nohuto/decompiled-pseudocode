/*
 * XREFs of SepAuditFailed @ 0x140850F60
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x140349EEC (SepRmDispatchDataToLsa.c)
 *     SepRmCallLsa @ 0x14034A120 (SepRmCallLsa.c)
 *     SepInitProcessAuditSd @ 0x140607F04 (SepInitProcessAuditSd.c)
 *     SepAuditFailedRaisedIrql @ 0x140609660 (SepAuditFailedRaisedIrql.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140790124 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140790B70 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140790D58 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140790EDC (SeAuditSystemTimeChange.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1407915CC (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x140791B78 (SepAuditAssignPrimaryToken.c)
 *     NtDeleteObjectAuditAlarm @ 0x140792710 (NtDeleteObjectAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14084D5BC (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140850540 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1408508E0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140851030 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140852C10 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140853560 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088A000 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeAuditProcessCreation @ 0x1408A73CC (SeAuditProcessCreation.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1408F03C0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408F07FC (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1408F0A50 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408F1214 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408F1920 (SepAdtStagingEvent.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1408F1C3C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1408F2FA8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140920280 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140920A00 (NtPrivilegedServiceAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140920CD0 (NtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14099E920 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     NtCloseObjectAuditAlarm @ 0x140A152C0 (NtCloseObjectAuditAlarm.c)
 *     SepRmCommandServerThread @ 0x140A52820 (SepRmCommandServerThread.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x1406A8250 (ZwFlushKey.c)
 *     SepAdtLogAuditFailureEvent @ 0x1407913D4 (SepAdtLogAuditFailureEvent.c)
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
