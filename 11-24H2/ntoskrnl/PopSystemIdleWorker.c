/*
 * XREFs of PopSystemIdleWorker @ 0x140A27660
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopScanIdleList @ 0x1404EAE90 (PopScanIdleList.c)
 *     PopPulseSystemIdleEvent @ 0x140A2778C (PopPulseSystemIdleEvent.c)
 *     PopIsSystemIdle @ 0x140A277D8 (PopIsSystemIdle.c)
 *     PopUpdateLastUserInputTime @ 0x140A27A24 (PopUpdateLastUserInputTime.c)
 *     PopExecuteSystemIdleAction @ 0x140A27A7C (PopExecuteSystemIdleAction.c)
 */

__int64 PopSystemIdleWorker()
{
  bool v0; // si
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v4; // rcx
  int v5; // ebx
  char IsSystemIdle; // di
  __int64 v7; // rdx
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  v0 = PopIdleLoopExecuted.Header.SignalState == 0;
  PopAcquireRwLockExclusive(&PopSystemIdleLock);
  while ( _BitScanForward((unsigned int *)&v4, PopPendingSystemIdleResetMask) )
  {
    _InterlockedAnd(&PopPendingSystemIdleResetMask, ~(1 << v4));
    if ( (_DWORD)v4 == 2 )
      PopPulseSystemIdleEvent(2LL);
  }
  PopUpdateLastUserInputTime(v4, v1, v2);
  v5 = dword_140E0B668;
  IsSystemIdle = PopIsSystemIdle(&unk_140E0B678, (unsigned int)dword_140E0B668, &v9, &unk_140E0B778);
  dword_140E0B758 = dword_140E0B664;
  PopReleaseRwLock((signed __int64 *)&PopSystemIdleLock);
  if ( PsWin32CalloutsEstablished )
    PopScanIdleList(v5, v9 / (unsigned int)PopIdleScanInterval);
  LOBYTE(v7) = IsSystemIdle;
  PopExecuteSystemIdleAction((unsigned int)dword_140E0B758, v7, &unk_140E0B760);
  PopAcquireRwLockExclusive(&PopSystemIdleLock);
  dword_140E0B758 = 0;
  PopReleaseRwLock((signed __int64 *)&PopSystemIdleLock);
  if ( v0 )
    KeSetEvent(&PopIdleLoopExecuted, 0, 0);
  return 0LL;
}
