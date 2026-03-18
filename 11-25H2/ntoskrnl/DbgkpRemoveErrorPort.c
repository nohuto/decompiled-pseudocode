/*
 * XREFs of DbgkpRemoveErrorPort @ 0x1406FBA58
 * Callers:
 *     DbgkpSendErrorMessage @ 0x1408B6DA4 (DbgkpSendErrorMessage.c)
 *     DbgkFlushErrorPort @ 0x14091D610 (DbgkFlushErrorPort.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     DbgkpDereferenceErrorPort @ 0x14057B288 (DbgkpDereferenceErrorPort.c)
 */

void __fastcall DbgkpRemoveErrorPort(__int64 a1, ULONG_PTR a2, volatile signed __int32 *a3)
{
  int v6; // r15d
  __int64 *v7; // rax
  __int64 *v8; // rbp
  __int64 v9; // rax

  if ( !_interlockedbittestandset(a3 + 1, 0) )
  {
    --*(_WORD *)(a1 + 484);
    v6 = 0;
    v7 = KeAbPreAcquire(a2, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a2, v7, a2);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    if ( *(volatile signed __int32 **)(a2 + 8) == a3 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v6 = 1;
      v9 = PdcCreateWatchdogAroundClientCall();
      if ( (void *)a2 == (char *)PsGetServerSiloGlobals(v9) + 936 )
        _interlockedbittestandreset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a2);
    KeAbPostRelease(a2);
    KeLeaveCriticalRegionThread(a1);
    if ( v6 )
    {
      DbgkpDereferenceErrorPort(a3);
      KeResetEvent(*(PRKEVENT *)(a2 + 24));
    }
  }
}
