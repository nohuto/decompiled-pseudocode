/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x140A47D18
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140A47800 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x140A47AF0 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A4835C (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     WdipSemFastFree @ 0x1406F99A0 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemDeleteTransitionalInstance(struct _SLIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rdi
  _SLIST_ENTRY *Next; // rcx
  struct _SLIST_ENTRY **v7; // rax
  signed __int64 v8; // rdx
  ULONG_PTR v9; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140EFFEF8, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140EFFEF8, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140EFFEF8, (__int64)v3, (__int64)&qword_140EFFEF8);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  Next = a1->Next;
  if ( *(&a1->Next->Next + 1) != a1 || (v7 = (struct _SLIST_ENTRY **)*((_QWORD *)&a1->Next + 1), *v7 != a1) )
    __fastfail(3u);
  *v7 = Next;
  *((_QWORD *)&Next->Next + 1) = v7;
  --dword_140EFFEF0;
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
  return WdipSemFastFree(3, a1);
}
