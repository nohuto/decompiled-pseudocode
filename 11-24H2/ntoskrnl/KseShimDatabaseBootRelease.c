/*
 * XREFs of KseShimDatabaseBootRelease @ 0x14095A670
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1405A5EEC (PnpCompleteSystemStartProcess.c)
 *     KseShimDatabaseClose @ 0x14095C27C (KseShimDatabaseClose.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KsepSdbBootRelease @ 0x140740044 (KsepSdbBootRelease.c)
 */

void KseShimDatabaseBootRelease()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rdi
  int v4; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&KsepShimDbLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, (__int64)v1, (__int64)&KsepShimDbLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  if ( KsepShimDbDuringBoot )
  {
    v4 = KsepShimDbRefCount;
    if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v4 == 1) )
    {
      KsepSdbBootRelease(KsepShimDb);
      KsepSdbBootRelease(qword_140F0F7F8);
      KsepShimDbHandle = 0LL;
      KsepShimDbDuringBoot = 0;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegion();
}
