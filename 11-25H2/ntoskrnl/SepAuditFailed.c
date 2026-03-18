/*
 * XREFs of SepAuditFailed @ 0x140854DA0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1403D831C (SepRmDispatchDataToLsa.c)
 *     SepRmCallLsa @ 0x1403D8550 (SepRmCallLsa.c)
 *     SepInitProcessAuditSd @ 0x1405FBBC4 (SepInitProcessAuditSd.c)
 *     SepAuditFailedRaisedIrql @ 0x1405FD170 (SepAuditFailedRaisedIrql.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140780E64 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1407818B0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140781A98 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140781C1C (SeAuditSystemTimeChange.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14078230C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x1407828B8 (SepAuditAssignPrimaryToken.c)
 *     NtDeleteObjectAuditAlarm @ 0x140783450 (NtDeleteObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140854390 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140854730 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140854E70 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140856980 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14089FC40 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeAuditProcessCreation @ 0x1408F435C (SeAuditProcessCreation.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14092DA70 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14092E1E0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14092E4B0 (NtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14092E770 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140982C90 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140982FF4 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1409842A0 (SeOperationAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409847B8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140984A0C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409851A4 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409858B0 (SepAdtStagingEvent.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140985C34 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14099C480 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     NtCloseObjectAuditAlarm @ 0x140A0BC10 (NtCloseObjectAuditAlarm.c)
 *     SepRmCommandServerThread @ 0x140A4F080 (SepRmCommandServerThread.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x14069CF80 (ZwFlushKey.c)
 *     SepAdtLogAuditFailureEvent @ 0x140782114 (SepAdtLogAuditFailureEvent.c)
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
