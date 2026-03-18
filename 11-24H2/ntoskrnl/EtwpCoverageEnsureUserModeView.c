/*
 * XREFs of EtwpCoverageEnsureUserModeView @ 0x140906720
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x1409047E8 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 *     MmMapViewOfSection @ 0x1409071A0 (MmMapViewOfSection.c)
 */

__int64 __fastcall EtwpCoverageEnsureUserModeView(__int64 a1)
{
  _KPROCESS *Process; // rsi
  struct _LIST_ENTRY *Blink; // r14
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // r15
  __int64 v6; // rcx
  __int64 *ReadyTime; // rax
  int v9; // [rsp+50h] [rbp-38h]
  __int64 v10; // [rsp+60h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+68h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v12; // [rsp+A0h] [rbp+18h] BYREF
  _KPROCESS *v13; // [rsp+A8h] [rbp+20h]

  v12 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = Process;
  v11[0] = 0LL;
  Blink = Process[1].ProcessListEntry.Blink;
  if ( Blink[122].Flink )
  {
    v9 = 0;
  }
  else
  {
    v10 = 0LL;
    v9 = MmMapViewOfSection(
           *(_QWORD *)(a1 + 8),
           (_DWORD)Process,
           (unsigned int)&v12,
           0,
           0LL,
           (__int64)v11,
           (__int64)&v10,
           1,
           0,
           2);
    if ( v9 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v4 = KeAbPreAcquire((__int64)&EtwpCoverageLock, 0LL);
      v5 = v4;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&EtwpCoverageLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&EtwpCoverageLock, (__int64)v4, (__int64)&EtwpCoverageLock);
      if ( v5 )
        *((_BYTE *)v5 + 10) = 1;
      EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
      if ( !Blink[122].Flink )
      {
        Blink[122].Flink = v12;
        v12 = 0LL;
      }
      v6 = 0LL;
      ReadyTime = (__int64 *)Process[1].ReadyTime;
      if ( ReadyTime )
        v6 = *ReadyTime;
      if ( v6 )
        *(_DWORD *)(v6 + 1116) = Blink[122].Flink;
      v9 = 0;
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegion();
  }
  if ( v12 )
    MiUnmapViewOfSection(Process, (unsigned __int64)v12, 0, 0);
  return (unsigned int)v9;
}
