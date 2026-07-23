/*
 * XREFs of NtSetTimerResolution @ 0x1409CC680
 * Callers:
 *     <none>
 * Callees:
 *     ExpUpdateTimerResolution @ 0x140276C80 (ExpUpdateTimerResolution.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExpInsertTimerResolutionEntry @ 0x1404A7A8C (ExpInsertTimerResolutionEntry.c)
 *     PoTraceSystemTimerResolution @ 0x1409CC990 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409CCD20 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409CCD84 (ExReleaseTimeRefreshLockExclusive.c)
 *     PoDiagCaptureUsermodeStack @ 0x1409CCDD0 (PoDiagCaptureUsermodeStack.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution, PULONG ActualTime)
{
  __int64 v6; // r9
  _KPROCESS *Process; // rbx
  NTSTATUS v8; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rax
  __int64 *v11; // rsi
  ULONG updated; // esi
  signed __int32 DirectoryTableBase_high; // eax
  signed __int32 v14; // ett
  _KAB_UM_PROCESS_TREE *Trees; // r14
  _KAB_UM_PROCESS_TREE *v16; // r15
  char v18; // r14
  signed __int32 v19; // ett
  __int16 v20; // si
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // zf
  _KAB_UM_PROCESS_CONTEXT *p_AutoBoostState; // [rsp+30h] [rbp-38h]
  char v25; // [rsp+88h] [rbp+20h]

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ActualTime < 0x7FFFFFFF0000LL )
      v6 = (__int64)ActualTime;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v25 = 0;
  v8 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((__int64)&ExpTimeRefreshLock, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpTimeRefreshLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpTimeRefreshLock, v10, (__int64)&ExpTimeRefreshLock);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  updated = KeTimeIncrement;
  _m_prefetchw((char *)&Process[1].DirectoryTableBase + 4);
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( SetResolution )
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
      if ( DesiredTime > Process[3].AutoBoostState.TreeCount )
        v18 = 0;
    }
    else
    {
      ++ExpTimerResolutionCount;
    }
    if ( !Process[3].AutoBoostState.Trees || DesiredTime < *(&Process[3].AutoBoostState.TreeCount + 1) )
      v25 = 1;
    Process[3].AutoBoostState.TreeCount = DesiredTime;
    PoTraceSystemTimerResolution(0LL, Process);
    if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) != 0 )
      updated = KePseudoHrTimeIncrement;
    else
      updated = ExpUpdateTimerResolution(v18, DesiredTime, 0LL);
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  Trees = 0LL;
  v16 = 0LL;
  if ( v25 )
  {
    v16 = (_KAB_UM_PROCESS_TREE *)PoDiagCaptureUsermodeStack();
    if ( v16 )
    {
      ExAcquireTimeRefreshLockExclusive(v22, v21);
      v23 = p_AutoBoostState->Trees == 0LL;
      if ( p_AutoBoostState->Trees )
      {
        if ( DesiredTime >= *(&Process[3].AutoBoostState.TreeCount + 1) )
        {
LABEL_38:
          ExReleaseTimeRefreshLockExclusive();
          goto LABEL_16;
        }
        v23 = p_AutoBoostState->Trees == 0LL;
      }
      if ( !v23 )
        Trees = p_AutoBoostState->Trees;
      *(&Process[3].AutoBoostState.TreeCount + 1) = DesiredTime;
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
  *ActualTime = updated;
  return v8;
}
