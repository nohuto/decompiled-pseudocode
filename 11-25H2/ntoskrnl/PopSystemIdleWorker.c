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
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v4; // rcx
  int v5; // ebx
  char IsSystemIdle; // di
  __int64 v7; // rdx
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  v0 = PopIdleLoopExecuted.Header.SignalState == 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock);
  while ( _BitScanForward((unsigned int *)&v4, PopPendingSystemIdleResetMask) )
  {
    _InterlockedAnd(&PopPendingSystemIdleResetMask, ~(1 << v4));
    if ( (_DWORD)v4 == 2 )
      PopPulseSystemIdleEvent(2LL);
  }
  PopUpdateLastUserInputTime(v4, v1, v2);
  v5 = dword_140E0B508;
  IsSystemIdle = PopIsSystemIdle(&unk_140E0B518, (unsigned int)dword_140E0B508, &v9, &unk_140E0B618);
  dword_140E0B5F8 = dword_140E0B504;
  PopReleaseRwLock(&PopSystemIdleLock);
  if ( PsWin32CalloutsEstablished )
    PopScanIdleList(v5, v9 / (unsigned int)PopIdleScanInterval);
  LOBYTE(v7) = IsSystemIdle;
  PopExecuteSystemIdleAction((unsigned int)dword_140E0B5F8, v7, &unk_140E0B600);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock);
  dword_140E0B5F8 = 0;
  PopReleaseRwLock(&PopSystemIdleLock);
  if ( v0 )
    KeSetEvent(&PopIdleLoopExecuted, 0, 0);
  return 0LL;
}
