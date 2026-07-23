/*
 * XREFs of ObDereferenceDeviceMap @ 0x14096DDE4
 * Callers:
 *     ObCleanupSiloState @ 0x140740DC8 (ObCleanupSiloState.c)
 *     ObpDeleteDeviceMap @ 0x140742944 (ObpDeleteDeviceMap.c)
 *     ObpDirectoryTeardownCallback @ 0x14082B890 (ObpDirectoryTeardownCallback.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     ObClearProcessDeviceMap @ 0x1408FF75C (ObClearProcessDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x14096D0C0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14096D6B0 (ObpReferenceCurrentDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14096D9AC (SeGetTokenDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14096DC68 (ObpSetCurrentProcessDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x14096DEB0 (ObpReferenceDeviceMapFastRef.c)
 *     SepDeleteLogonSessionTrack @ 0x140A5CE20 (SepDeleteLogonSessionTrack.c)
 *     ObpSetDeviceMap @ 0x140A73E78 (ObpSetDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x140AD7224 (SepDeReferenceLogonSession.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     ObpDeleteDeviceMap @ 0x140742944 (ObpDeleteDeviceMap.c)
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
  char *v10; // rax
  char *v11; // r14
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
  v10 = (char *)KeAbPreAcquire((__int64)(ServerSiloGlobals + 120), 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
  if ( v11 )
    v11[10] = 1;
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
