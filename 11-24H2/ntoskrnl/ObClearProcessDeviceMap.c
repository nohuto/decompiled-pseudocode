/*
 * XREFs of ObClearProcessDeviceMap @ 0x1408FF75C
 * Callers:
 *     PspAssignPrimaryToken @ 0x140777290 (PspAssignPrimaryToken.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     ObDereferenceDeviceMap @ 0x14096DDE4 (ObDereferenceDeviceMap.c)
 */

void __fastcall ObClearProcessDeviceMap(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 *v5; // rsi
  char *v6; // rax
  char *v7; // rbx
  __int64 v8; // rbx

  if ( *(_QWORD *)(a1 + 792) )
  {
    ProcessServerSilo = PsGetProcessServerSilo(a1);
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals(ProcessServerSilo);
    CurrentThread = KeGetCurrentThread();
    v5 = (unsigned __int64 *)(ServerSiloGlobals + 120);
    --CurrentThread->SpecialApcDisable;
    v6 = (char *)KeAbPreAcquire((__int64)(ServerSiloGlobals + 120), 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
    if ( v7 )
      v7[10] = 1;
    v8 = _InterlockedExchange64((volatile __int64 *)(a1 + 792), 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveGuardedRegion();
    if ( v8 )
      ObDereferenceDeviceMap((PVOID)(v8 & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
