/*
 * XREFs of WheapReportDeferredLiveDumps @ 0x1407C8CE0
 * Callers:
 *     WheaCrashDumpInitializationComplete @ 0x1407C8C7C (WheaCrashDumpInitializationComplete.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     WheapReportLiveDump @ 0x1407C8DE8 (WheapReportLiveDump.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 WheapReportDeferredLiveDumps()
{
  void *Lock; // rbx
  __int64 v1; // rax
  bool v2; // di
  unsigned int v3; // esi
  __int64 v4; // rax

  Lock = 0LL;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
  if ( (KSPIN_LOCK *)WheapDispatchPtr.DeviceQueue.Lock != &WheapDispatchPtr.DeviceQueue.Lock )
  {
    Lock = (void *)WheapDispatchPtr.DeviceQueue.Lock;
    v1 = *(_QWORD *)WheapDispatchPtr.DeviceQueue.Lock;
    if ( *(struct _DEVICE_OBJECT **)(WheapDispatchPtr.DeviceQueue.Lock + 8) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceQueue.Lock
      || *(_QWORD *)(v1 + 8) != WheapDispatchPtr.DeviceQueue.Lock )
    {
LABEL_18:
      __fastfail(3u);
    }
    WheapDispatchPtr.DeviceQueue.Lock = *(_QWORD *)WheapDispatchPtr.DeviceQueue.Lock;
    *(_QWORD *)(v1 + 8) = &WheapDispatchPtr.DeviceQueue.Lock;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
  v2 = 0;
  v3 = 0;
  while ( Lock )
  {
    if ( !v2 )
      v3 = WheapReportLiveDump(Lock);
    ExFreePoolWithTag(Lock, 0x61656857u);
    if ( !v2 )
      v2 = v3 != 0;
    ExAcquireFastMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
    Lock = (void *)WheapDispatchPtr.DeviceQueue.Lock;
    if ( (KSPIN_LOCK *)WheapDispatchPtr.DeviceQueue.Lock == &WheapDispatchPtr.DeviceQueue.Lock )
    {
      Lock = 0LL;
    }
    else
    {
      if ( *(struct _DEVICE_OBJECT **)(WheapDispatchPtr.DeviceQueue.Lock + 8) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceQueue.Lock )
        goto LABEL_18;
      v4 = *(_QWORD *)WheapDispatchPtr.DeviceQueue.Lock;
      if ( *(_QWORD *)(*(_QWORD *)WheapDispatchPtr.DeviceQueue.Lock + 8LL) != WheapDispatchPtr.DeviceQueue.Lock )
        goto LABEL_18;
      WheapDispatchPtr.DeviceQueue.Lock = *(_QWORD *)WheapDispatchPtr.DeviceQueue.Lock;
      *(_QWORD *)(v4 + 8) = &WheapDispatchPtr.DeviceQueue.Lock;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
  }
  return v3;
}
