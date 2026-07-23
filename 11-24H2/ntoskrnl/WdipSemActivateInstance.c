/*
 * XREFs of WdipSemActivateInstance @ 0x140A3E790
 * Callers:
 *     WdipSemDisableScenario @ 0x140A3D910 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A3E10C (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rbx
  signed __int64 v6; // rdx
  ULONG_PTR v7; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&qword_140F021D8, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F021D8, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140F021D8, v3, (__int64)&qword_140F021D8);
  if ( v5 )
    v5[10] = 1;
  *(_DWORD *)(a1 + 44) = 0;
  _m_prefetchw(&qword_140F021D8);
  v6 = qword_140F021D8 - 16;
  if ( (qword_140F021D8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v6 = 0LL;
  if ( (qword_140F021D8 & 2) != 0
    || (v7 = qword_140F021D8,
        v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F021D8, v6, qword_140F021D8)) )
  {
    ExfReleasePushLock(&qword_140F021D8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F021D8);
  KeLeaveCriticalRegion();
}
