/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x140796400
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140C3B150 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     SepRegOpenKey @ 0x140A2FB74 (SepRegOpenKey.c)
 */

__int64 SepAdtOpenRegAndSetupNotification()
{
  __int64 result; // rax

  result = SepRegOpenKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
             0x211u,
             &SepAdtRegNotifyHandle);
  if ( (int)result >= 0 )
  {
    qword_140E67ED8 = (__int64)SepAdtRegNotificationCallback;
    qword_140E67EE0 = 0LL;
    SepAdtLsaRegWatchWorkItem = 0LL;
    return NtNotifyChangeMultipleKeys(
             (_DWORD)SepAdtRegNotifyHandle,
             0,
             0,
             0,
             (__int64)&SepAdtLsaRegWatchWorkItem,
             1LL,
             (__int64)&SepAdtIoStatusBlock,
             5,
             0,
             0LL,
             0,
             1);
  }
  return result;
}
