/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x140796510
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140C3D2A8 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     SepRegOpenKey @ 0x140A245B4 (SepRegOpenKey.c)
 */

NTSTATUS SepAdtOpenRegAndSetupNotification()
{
  NTSTATUS result; // eax

  result = SepRegOpenKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
             0x211u,
             &SepAdtRegNotifyHandle);
  if ( result >= 0 )
  {
    qword_140E680A8 = (__int64)SepAdtRegNotificationCallback;
    qword_140E680B0 = 0LL;
    SepAdtLsaRegWatchWorkItem[0] = 0LL;
    return NtNotifyChangeMultipleKeys(
             SepAdtRegNotifyHandle,
             0,
             0LL,
             0LL,
             (PIO_APC_ROUTINE)SepAdtLsaRegWatchWorkItem,
             (PVOID)1,
             &SepAdtIoStatusBlock,
             5u,
             0,
             0LL,
             0,
             1u);
  }
  return result;
}
