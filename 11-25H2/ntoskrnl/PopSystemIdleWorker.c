/*
 * XREFs of PopSystemIdleWorker @ 0x140A1E6C0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopScanIdleList @ 0x14048872C (PopScanIdleList.c)
 *     PopPulseSystemIdleEvent @ 0x140A1E7EC (PopPulseSystemIdleEvent.c)
 *     PopIsSystemIdle @ 0x140A1E838 (PopIsSystemIdle.c)
 *     PopUpdateLastUserInputTime @ 0x140A1EA84 (PopUpdateLastUserInputTime.c)
 *     PopExecuteSystemIdleAction @ 0x140A1EADC (PopExecuteSystemIdleAction.c)
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
  v3 = dword_140E0B508;
  IsSystemIdle = PopIsSystemIdle(&unk_140E0B518, (unsigned int)dword_140E0B508, &v7, &unk_140E0B618);
  dword_140E0B5F8 = dword_140E0B504;
  PopReleaseRwLock(&PopSystemIdleLock);
  if ( PsWin32CalloutsEstablished )
    PopScanIdleList(v3, v7 / (unsigned int)PopIdleScanInterval);
  LOBYTE(v5) = IsSystemIdle;
  PopExecuteSystemIdleAction((unsigned int)dword_140E0B5F8, v5, &unk_140E0B600);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock);
  dword_140E0B5F8 = 0;
  PopReleaseRwLock(&PopSystemIdleLock);
  if ( v0 )
    KeSetEvent(&PopIdleLoopExecuted, 0, 0);
  return 0LL;
}
