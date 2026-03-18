/*
 * XREFs of DbgkpRemoveErrorPort @ 0x140707938
 * Callers:
 *     DbgkFlushErrorPort @ 0x140939888 (DbgkFlushErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     DbgkpDereferenceErrorPort @ 0x14057E5A8 (DbgkpDereferenceErrorPort.c)
 */

void __fastcall DbgkpRemoveErrorPort(__int64 a1, ULONG_PTR a2, volatile signed __int32 *a3)
{
  int v5; // r15d
  _QWORD *v6; // rax
  _QWORD *v7; // rbp
  __int64 v8; // rax

  if ( !_interlockedbittestandset(a3 + 1, 0) )
  {
    --*(_WORD *)(a1 + 484);
    v5 = 0;
    v6 = KeAbPreAcquire(a2, 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a2, (__int64)v6, a2);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    if ( *(volatile signed __int32 **)(a2 + 8) == a3 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v5 = 1;
      v8 = PdcCreateWatchdogAroundClientCall();
      if ( (void *)a2 == (char *)PsGetServerSiloGlobals(v8) + 936 )
        _interlockedbittestandreset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a2);
    KeAbPostRelease(a2);
    KeLeaveCriticalRegionThread();
    if ( v5 )
    {
      DbgkpDereferenceErrorPort(a3);
      KeResetEvent(*(PRKEVENT *)(a2 + 24));
    }
  }
}
