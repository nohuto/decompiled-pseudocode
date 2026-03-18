/*
 * XREFs of KseShimDatabaseBootRelease @ 0x140AA9AE4
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1405A260C (PnpCompleteSystemStartProcess.c)
 *     KseShimDatabaseClose @ 0x14082A294 (KseShimDatabaseClose.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KsepSdbBootRelease @ 0x140734024 (KsepSdbBootRelease.c)
 */

void KseShimDatabaseBootRelease()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rdi
  int v4; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&KsepShimDbLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v1, (__int64)&KsepShimDbLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  if ( KsepShimDbDuringBoot )
  {
    v4 = KsepShimDbRefCount;
    if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v4 == 1) )
    {
      KsepSdbBootRelease(KsepShimDb);
      KsepSdbBootRelease(qword_140F0F0F8);
      KsepShimDbHandle = 0LL;
      KsepShimDbDuringBoot = 0;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegion();
}
