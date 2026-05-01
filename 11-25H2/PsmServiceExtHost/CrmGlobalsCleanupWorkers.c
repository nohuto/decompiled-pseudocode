/*
 * XREFs of CrmGlobalsCleanupWorkers @ 0x180078774
 * Callers:
 *     CrmGlobalsCleanup @ 0x180078688 (CrmGlobalsCleanup.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorNpuUsageContextCleanup @ 0x18007A028 (CrmStateMonitorNpuUsageContextCleanup.c)
 */

__int64 __fastcall CrmGlobalsCleanupWorkers(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( (_QWORD)xmmword_1800E9A98 )
  {
    CempLockAcquireExclusive((__int64)&unk_1800E9A88);
    TpSetTimer(xmmword_1800E9A98, 0LL, 0LL, 0LL);
    dword_1800E9A90 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E9A88);
    TpWaitForTimer(xmmword_1800E9A98, 1LL);
    TpReleaseTimer(xmmword_1800E9A98);
  }
  result = CrmStateMonitorNpuUsageContextCleanup(&xmmword_1800E9AA8);
  v3 = *(_QWORD *)(a1 + 472);
  if ( v3 )
  {
    TpWaitForWork(v3, 0LL);
    return TpReleaseWork(*(_QWORD *)(a1 + 472));
  }
  return result;
}
