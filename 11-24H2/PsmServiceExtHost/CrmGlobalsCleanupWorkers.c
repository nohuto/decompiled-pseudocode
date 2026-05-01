/*
 * XREFs of CrmGlobalsCleanupWorkers @ 0x1800787D4
 * Callers:
 *     CrmGlobalsCleanup @ 0x1800786E8 (CrmGlobalsCleanup.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorNpuUsageContextCleanup @ 0x18007A088 (CrmStateMonitorNpuUsageContextCleanup.c)
 */

__int64 __fastcall CrmGlobalsCleanupWorkers(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( (_QWORD)xmmword_1800EAA38 )
  {
    CempLockAcquireExclusive((__int64)&unk_1800EAA28);
    TpSetTimer(xmmword_1800EAA38, 0LL, 0LL, 0LL);
    dword_1800EAA30 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800EAA28);
    TpWaitForTimer(xmmword_1800EAA38, 1LL);
    TpReleaseTimer(xmmword_1800EAA38);
  }
  result = CrmStateMonitorNpuUsageContextCleanup(&xmmword_1800EAA48);
  v3 = *(_QWORD *)(a1 + 472);
  if ( v3 )
  {
    TpWaitForWork(v3, 0LL);
    return TpReleaseWork(*(_QWORD *)(a1 + 472));
  }
  return result;
}
