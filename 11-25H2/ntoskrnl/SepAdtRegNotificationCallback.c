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

__int64 SepAdtRegNotificationCallback()
{
  SepAdtInitializeCrashOnFail();
  SepAdtInitializePrivilegeAuditing();
  SepAdtInitializeBounds();
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
