/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x140787030
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140C29E70 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     SepRegOpenKey @ 0x140A2A1F4 (SepRegOpenKey.c)
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
    qword_140E67BC8 = (__int64)SepAdtRegNotificationCallback;
    qword_140E67BD0 = 0LL;
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
