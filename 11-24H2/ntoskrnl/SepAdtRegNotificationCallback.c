/*
 * XREFs of SepAdtRegNotificationCallback @ 0x1407965B0
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtInitializeBounds @ 0x1407963CC (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x140796450 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1407964B0 (SepAdtInitializePrivilegeAuditing.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 */

NTSTATUS SepAdtRegNotificationCallback()
{
  SepAdtInitializeCrashOnFail();
  SepAdtInitializePrivilegeAuditing();
  SepAdtInitializeBounds();
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
