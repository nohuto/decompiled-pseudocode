/*
 * XREFs of PspQueryJobHierarchyInterferenceCount @ 0x1407779F0
 * Callers:
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408EBCAC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1408ED360 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x1408ED5D4 (PspLockJobShared.c)
 */

__int64 __fastcall PspQueryJobHierarchyInterferenceCount(PVOID Object, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v5; // esi
  __int64 v7[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  PspLockJobShared(Object, CurrentThread);
  v8 = 0LL;
  v7[0] = (__int64)&v8;
  v7[1] = (__int64)Object;
  v5 = PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v7, 1);
  PspUnlockJob(Object, CurrentThread);
  if ( v5 >= 0 )
    *a2 = v8;
  return (unsigned int)v5;
}
