/*
 * XREFs of ObClearProcessDeviceMap @ 0x1408E0E18
 * Callers:
 *     PspAssignPrimaryToken @ 0x1407676A0 (PspAssignPrimaryToken.c)
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     ObDereferenceDeviceMap @ 0x14097F5CC (ObDereferenceDeviceMap.c)
 */

void __fastcall ObClearProcessDeviceMap(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 *v5; // rsi
  __int64 *v6; // rax
  __int64 *v7; // rbx
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
      ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
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
