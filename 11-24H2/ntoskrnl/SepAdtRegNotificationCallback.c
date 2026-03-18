/*
 * XREFs of SepAdtRegNotificationCallback @ 0x1407964A0
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtInitializeBounds @ 0x1407962BC (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x140796340 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1407963A0 (SepAdtInitializePrivilegeAuditing.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
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
