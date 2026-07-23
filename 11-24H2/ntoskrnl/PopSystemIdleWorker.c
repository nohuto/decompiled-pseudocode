/*
 * XREFs of PopSystemIdleWorker @ 0x140A1C0E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopScanIdleList @ 0x1404E1E10 (PopScanIdleList.c)
 *     PopPulseSystemIdleEvent @ 0x140A1C20C (PopPulseSystemIdleEvent.c)
 *     PopIsSystemIdle @ 0x140A1C258 (PopIsSystemIdle.c)
 *     PopUpdateLastUserInputTime @ 0x140A1C4A4 (PopUpdateLastUserInputTime.c)
 *     PopExecuteSystemIdleAction @ 0x140A1C4FC (PopExecuteSystemIdleAction.c)
 */

__int64 PopSystemIdleWorker()
{
  bool v0; // si
  int v2; // ecx
  int v3; // ebx
  char IsSystemIdle; // di
  __int64 v5; // rdx
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v0 = PopIdleLoopExecuted.Header.SignalState == 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock);
  while ( _BitScanForward((unsigned int *)&v2, PopPendingSystemIdleResetMask) )
  {
    _InterlockedAnd(&PopPendingSystemIdleResetMask, ~(1 << v2));
    if ( v2 == 2 )
      PopPulseSystemIdleEvent(2LL);
  }
  PopUpdateLastUserInputTime();
  v3 = dword_140E0B6E8;
  IsSystemIdle = PopIsSystemIdle(&unk_140E0B6F8, (unsigned int)dword_140E0B6E8, &v7, &unk_140E0B7F8);
  dword_140E0B7D8 = dword_140E0B6E4;
  PopReleaseRwLock(&PopSystemIdleLock);
  if ( PsWin32CalloutsEstablished )
    PopScanIdleList(v3, v7 / (unsigned int)PopIdleScanInterval);
  LOBYTE(v5) = IsSystemIdle;
  PopExecuteSystemIdleAction((unsigned int)dword_140E0B7D8, v5, &unk_140E0B7E0);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock);
  dword_140E0B7D8 = 0;
  PopReleaseRwLock(&PopSystemIdleLock);
  if ( v0 )
    KeSetEvent(&PopIdleLoopExecuted, 0, 0);
  return 0LL;
}
