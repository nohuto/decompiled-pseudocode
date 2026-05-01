/*
 * XREFs of CrmStateMonitorResourceUsageCleanup @ 0x18007A520
 * Callers:
 *     CrmStateMonitorCleanup @ 0x18006EC04 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorListenerRemove @ 0x180033220 (CrmStateMonitorListenerRemove.c)
 */

void __fastcall CrmStateMonitorResourceUsageCleanup(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    CrmStateMonitorListenerRemove((int *)qword_1800E98F0, a1 + 64);
  if ( *(_QWORD *)(a1 + 88) )
  {
    CempLockAcquireExclusive(a1 + 8);
    TpSetTimer(*(_QWORD *)(a1 + 88), 0LL, 0LL, 0LL);
    *(_DWORD *)(a1 + 16) = 0;
    RtlReleaseSRWLockExclusive(a1 + 8);
    TpWaitForTimer(*(_QWORD *)(a1 + 88), 1LL);
    TpReleaseTimer(*(_QWORD *)(a1 + 88));
  }
  if ( *(_DWORD *)a1 == 43 )
  {
    CempLockAcquireExclusive((__int64)&unk_1800E9A88);
    *((_QWORD *)&xmmword_1800E9A98 + 1) = 0LL;
    dword_1800E9A90 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E9A88);
  }
}
