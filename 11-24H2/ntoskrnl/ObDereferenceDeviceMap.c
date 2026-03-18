/*
 * XREFs of ObDereferenceDeviceMap @ 0x1409855D4
 * Callers:
 *     ObCleanupSiloState @ 0x140742E98 (ObCleanupSiloState.c)
 *     ObpDeleteDeviceMap @ 0x140744654 (ObpDeleteDeviceMap.c)
 *     ObpDirectoryTeardownCallback @ 0x14082B060 (ObpDirectoryTeardownCallback.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     ObClearProcessDeviceMap @ 0x1408A94FC (ObClearProcessDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x1409848B0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140984EA0 (ObpReferenceCurrentDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14098519C (SeGetTokenDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x140985458 (ObpSetCurrentProcessDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x1409856A0 (ObpReferenceDeviceMapFastRef.c)
 *     SepDeleteLogonSessionTrack @ 0x140A64520 (SepDeleteLogonSessionTrack.c)
 *     ObpSetDeviceMap @ 0x140A79B78 (ObpSetDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x140AD8BA4 (SepDeReferenceLogonSession.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     ObpDeleteDeviceMap @ 0x140744654 (ObpDeleteDeviceMap.c)
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
  _QWORD *v10; // rax
  _QWORD *v11; // r14
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
    ExfAcquirePushLockExclusiveEx(v9, (__int64)v10, (__int64)v9);
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
