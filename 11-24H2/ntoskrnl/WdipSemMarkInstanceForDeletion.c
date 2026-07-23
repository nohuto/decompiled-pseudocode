/*
 * XREFs of WdipSemMarkInstanceForDeletion @ 0x1407A25C4
 * Callers:
 *     WdipSemDisableScenario @ 0x140A3D910 (WdipSemDisableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140A3FAC0 (WdipSemQueryEnabledInstanceTable.c)
 */

__int64 __fastcall WdipSemMarkInstanceForDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rdi
  __int64 EnabledInstanceTable; // rax
  signed __int64 v8; // rdx
  ULONG_PTR v9; // rtt

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire((__int64)&qword_140F021D8, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F021D8, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140F021D8, v4, (__int64)&qword_140F021D8);
  if ( v6 )
    v6[10] = 1;
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
  _m_prefetchw(&qword_140F021D8);
  v8 = qword_140F021D8 - 16;
  if ( (qword_140F021D8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (qword_140F021D8 & 2) != 0
    || (v9 = qword_140F021D8,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F021D8, v8, qword_140F021D8)) )
  {
    ExfReleasePushLock(&qword_140F021D8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F021D8);
  KeLeaveCriticalRegion();
  return v3;
}
