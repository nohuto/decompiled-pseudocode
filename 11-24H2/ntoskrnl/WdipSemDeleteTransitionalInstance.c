/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x140A3DB38
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140A3D620 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x140A3D910 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A3E10C (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     WdipSemFastFree @ 0x1406F75E0 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemDeleteTransitionalInstance(_SLIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rdi
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v7; // rax
  signed __int64 v8; // rdx
  ULONG_PTR v9; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&qword_140F021D8, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F021D8, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140F021D8, v3, (__int64)&qword_140F021D8);
  if ( v5 )
    v5[10] = 1;
  Next = a1->Next;
  if ( *(&a1->Next->Next + 1) != a1 || (v7 = (_SLIST_ENTRY **)*((_QWORD *)&a1->Next + 1), *v7 != a1) )
    __fastfail(3u);
  *v7 = Next;
  *((_QWORD *)&Next->Next + 1) = v7;
  --dword_140F021D0;
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
  return WdipSemFastFree(3, a1);
}
