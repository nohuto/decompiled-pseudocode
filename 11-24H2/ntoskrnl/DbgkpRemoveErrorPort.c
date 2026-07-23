/*
 * XREFs of DbgkpRemoveErrorPort @ 0x1407054F8
 * Callers:
 *     DbgkpSendErrorMessage @ 0x1409E93F0 (DbgkpSendErrorMessage.c)
 *     DbgkFlushErrorPort @ 0x140A527EC (DbgkFlushErrorPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     DbgkpDereferenceErrorPort @ 0x14057BA38 (DbgkpDereferenceErrorPort.c)
 */

void __fastcall DbgkpRemoveErrorPort(__int64 a1, ULONG_PTR a2, volatile signed __int32 *a3)
{
  int v5; // r15d
  char *v6; // rax
  char *v7; // rbp
  __int64 v8; // rax

  if ( !_interlockedbittestandset(a3 + 1, 0) )
  {
    --*(_WORD *)(a1 + 484);
    v5 = 0;
    v6 = (char *)KeAbPreAcquire(a2, 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a2, v6, a2);
    if ( v7 )
      v7[10] = 1;
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
