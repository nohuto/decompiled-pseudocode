/*
 * XREFs of ObClearProcessDeviceMap @ 0x1408A94FC
 * Callers:
 *     PspAssignPrimaryToken @ 0x140777070 (PspAssignPrimaryToken.c)
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     ObDereferenceDeviceMap @ 0x1409855D4 (ObDereferenceDeviceMap.c)
 */

void __fastcall ObClearProcessDeviceMap(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 *v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rbx

  if ( *(_QWORD *)(a1 + 792) )
  {
    ProcessServerSilo = PsGetProcessServerSilo(a1);
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals(ProcessServerSilo);
    CurrentThread = KeGetCurrentThread();
    v5 = (unsigned __int64 *)(ServerSiloGlobals + 120);
    --CurrentThread->SpecialApcDisable;
    v6 = KeAbPreAcquire((__int64)(ServerSiloGlobals + 120), 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, (__int64)v6, (__int64)v5);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    v8 = _InterlockedExchange64((volatile __int64 *)(a1 + 792), 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveGuardedRegion();
    if ( v8 )
      ObDereferenceDeviceMap((PVOID)(v8 & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
