/*
 * XREFs of WdipSemMarkInstanceForDeletion @ 0x1407A24B4
 * Callers:
 *     WdipSemDisableScenario @ 0x140A47AF0 (WdipSemDisableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140A48DA8 (WdipSemQueryEnabledInstanceTable.c)
 */

__int64 __fastcall WdipSemMarkInstanceForDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  signed __int8 v5; // cf
  _QWORD *v6; // rdi
  __int64 EnabledInstanceTable; // rax
  signed __int64 v8; // rdx
  ULONG_PTR v9; // rtt

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&qword_140EFFEF8, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140EFFEF8, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140EFFEF8, (__int64)v4, (__int64)&qword_140EFFEF8);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  if ( a1 )
  {
    EnabledInstanceTable = WdipSemQueryEnabledInstanceTable(a1);
    v3 = EnabledInstanceTable;
    if ( EnabledInstanceTable )
    {
      if ( *(_DWORD *)(EnabledInstanceTable + 44) )
        v3 = 0LL;
      else
        *(_DWORD *)(EnabledInstanceTable + 44) = 1;
    }
  }
  _m_prefetchw(&qword_140EFFEF8);
  v8 = qword_140EFFEF8 - 16;
  if ( (qword_140EFFEF8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (qword_140EFFEF8 & 2) != 0
    || (v9 = qword_140EFFEF8,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140EFFEF8, v8, qword_140EFFEF8)) )
  {
    ExfReleasePushLock(&qword_140EFFEF8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140EFFEF8);
  KeLeaveCriticalRegion();
  return v3;
}
