/*
 * XREFs of SepAdtRegNotificationCallback @ 0x1407870D0
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtInitializeBounds @ 0x140786EEC (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x140786F70 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140786FD0 (SepAdtInitializePrivilegeAuditing.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
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
