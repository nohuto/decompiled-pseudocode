/*
 * XREFs of NtSetTimerResolution @ 0x1409B1920
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExpUpdateTimerResolution @ 0x14041D4F0 (ExpUpdateTimerResolution.c)
 *     ExpInsertTimerResolutionEntry @ 0x1404A7A14 (ExpInsertTimerResolutionEntry.c)
 *     PoTraceSystemTimerResolution @ 0x1409B1C30 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409B1FC0 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409B2024 (ExReleaseTimeRefreshLockExclusive.c)
 *     PoDiagCaptureUsermodeStack @ 0x1409B2070 (PoDiagCaptureUsermodeStack.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetTimerResolution(unsigned int a1, char a2, int *a3)
{
  __int64 v6; // r9
  _KPROCESS *Process; // rbx
  unsigned int v8; // r12d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  int updated; // esi
  signed __int32 DirectoryTableBase_high; // eax
  signed __int32 v14; // ett
  _KAB_UM_PROCESS_TREE *Trees; // r14
  _KAB_UM_PROCESS_TREE *v16; // r15
  char v18; // r14
  signed __int32 v19; // ett
  __int16 v20; // si
  bool v21; // zf
  _KAB_UM_PROCESS_CONTEXT *p_AutoBoostState; // [rsp+30h] [rbp-38h]
  char v23; // [rsp+88h] [rbp+20h]

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a3;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v23 = 0;
  v8 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((__int64)&ExpTimeRefreshLock, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpTimeRefreshLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpTimeRefreshLock, (__int64)v10, (__int64)&ExpTimeRefreshLock);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  updated = KeTimeIncrement;
  _m_prefetchw((char *)&Process[1].DirectoryTableBase + 4);
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( a2 )
  {
    v18 = 1;
    do
    {
      v19 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high | 0x80001000,
                                  DirectoryTableBase_high);
    }
    while ( v19 != DirectoryTableBase_high );
    v20 = DirectoryTableBase_high;
    if ( DirectoryTableBase_high >= 0 )
      ExpInsertTimerResolutionEntry((__int64)Process);
    if ( (v20 & 0x1000) != 0 )
    {
      if ( a1 > Process[3].AutoBoostState.TreeCount )
        v18 = 0;
    }
    else
    {
      ++ExpTimerResolutionCount;
    }
    if ( !Process[3].AutoBoostState.Trees || a1 < *(&Process[3].AutoBoostState.TreeCount + 1) )
      v23 = 1;
    Process[3].AutoBoostState.TreeCount = a1;
    PoTraceSystemTimerResolution(0LL, Process);
    if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) != 0 )
      updated = KePseudoHrTimeIncrement;
    else
      updated = ExpUpdateTimerResolution(v18, a1, 0LL);
  }
  else
  {
    do
    {
      v14 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high & 0xFFFFEFFF,
                                  DirectoryTableBase_high);
    }
    while ( v14 != DirectoryTableBase_high );
    if ( (DirectoryTableBase_high & 0x1000) != 0 )
    {
      --ExpTimerResolutionCount;
      Process[3].AutoBoostState.TreeCount = 0;
      PoTraceSystemTimerResolution(0LL, Process);
      updated = ExpUpdateTimerResolution(0, 0, 0LL);
    }
    else
    {
      v8 = -1073741243;
    }
  }
  p_AutoBoostState = &Process[3].AutoBoostState;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpTimeRefreshLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpTimeRefreshLock);
  KeAbPostRelease((ULONG_PTR)&ExpTimeRefreshLock);
  KeLeaveCriticalRegionThread();
  Trees = 0LL;
  v16 = 0LL;
  if ( v23 )
  {
    v16 = (_KAB_UM_PROCESS_TREE *)PoDiagCaptureUsermodeStack();
    if ( v16 )
    {
      ExAcquireTimeRefreshLockExclusive();
      v21 = p_AutoBoostState->Trees == 0LL;
      if ( p_AutoBoostState->Trees )
      {
        if ( a1 >= *(&Process[3].AutoBoostState.TreeCount + 1) )
        {
LABEL_38:
          ExReleaseTimeRefreshLockExclusive();
          goto LABEL_16;
        }
        v21 = p_AutoBoostState->Trees == 0LL;
      }
      if ( !v21 )
        Trees = p_AutoBoostState->Trees;
      *(&Process[3].AutoBoostState.TreeCount + 1) = a1;
      Process[3].AutoBoostState.Trees = v16;
      v16 = 0LL;
      goto LABEL_38;
    }
  }
LABEL_16:
  if ( Trees )
    ExFreePoolWithTag(Trees, 0x50455654u);
  if ( v16 )
    ExFreePoolWithTag(v16, 0x50455654u);
  *a3 = updated;
  return v8;
}
