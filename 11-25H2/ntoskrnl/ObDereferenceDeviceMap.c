/*
 * XREFs of ObDereferenceDeviceMap @ 0x14097F5CC
 * Callers:
 *     ObCleanupSiloState @ 0x140736E78 (ObCleanupSiloState.c)
 *     ObpDeleteDeviceMap @ 0x140738634 (ObpDeleteDeviceMap.c)
 *     ObpDirectoryTeardownCallback @ 0x14081B320 (ObpDirectoryTeardownCallback.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     ObClearProcessDeviceMap @ 0x1408E0E18 (ObClearProcessDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x14097E7F0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14097EE00 (ObpReferenceCurrentDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14097F108 (SeGetTokenDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14097F450 (ObpSetCurrentProcessDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x14097F690 (ObpReferenceDeviceMapFastRef.c)
 *     SepDeReferenceLogonSession @ 0x1409A78B8 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x140A62490 (SepDeleteLogonSessionTrack.c)
 *     ObpSetDeviceMap @ 0x140A77D08 (ObpSetDeviceMap.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     ObpDeleteDeviceMap @ 0x140738634 (ObpDeleteDeviceMap.c)
 */

void __fastcall ObDereferenceDeviceMap(volatile signed __int64 *P, unsigned int a2)
{
  volatile signed __int64 *v3; // rdi
  signed __int64 v4; // rax
  __int64 v5; // r15
  signed __int64 v6; // rtt
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v9; // rsi
  __int64 *v10; // rax
  __int64 *v11; // r14
  __int64 v12; // rax

  v3 = P;
  _m_prefetchw((const void *)(P + 30));
  v4 = *((_QWORD *)P + 30);
  v5 = a2;
  while ( v4 - a2 > 0 )
  {
    v6 = v4;
    v4 = _InterlockedCompareExchange64(P + 30, v4 - a2, v4);
    if ( v6 == v4 )
      return;
  }
  if ( v4 != a2 )
    __fastfail(0xEu);
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(*((_QWORD *)P + 2));
  CurrentThread = KeGetCurrentThread();
  v9 = (unsigned __int64 *)(ServerSiloGlobals + 120);
  --CurrentThread->SpecialApcDisable;
  v10 = KeAbPreAcquire((__int64)(ServerSiloGlobals + 120), 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  v12 = _InterlockedExchangeAdd64(v3 + 30, -a2) - v5;
  if ( v12 > 0 )
  {
    v3 = 0LL;
  }
  else
  {
    if ( v12 )
      __fastfail(0xEu);
    *(_QWORD *)(*v3 + 304) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  KeLeaveGuardedRegion();
  if ( v3 )
    ObpDeleteDeviceMap((char *)v3);
}
