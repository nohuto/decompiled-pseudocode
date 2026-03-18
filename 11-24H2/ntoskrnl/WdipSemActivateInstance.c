/*
 * XREFs of WdipSemActivateInstance @ 0x140A489E0
 * Callers:
 *     WdipSemDisableScenario @ 0x140A47AF0 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A4835C (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

void __fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rbx
  signed __int64 v6; // rdx
  ULONG_PTR v7; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140EFFEF8, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140EFFEF8, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140EFFEF8, (__int64)v3, (__int64)&qword_140EFFEF8);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  *(_DWORD *)(a1 + 44) = 0;
  _m_prefetchw(&qword_140EFFEF8);
  v6 = qword_140EFFEF8 - 16;
  if ( (qword_140EFFEF8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v6 = 0LL;
  if ( (qword_140EFFEF8 & 2) != 0
    || (v7 = qword_140EFFEF8,
        v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140EFFEF8, v6, qword_140EFFEF8)) )
  {
    ExfReleasePushLock(&qword_140EFFEF8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140EFFEF8);
  KeLeaveCriticalRegion();
}
