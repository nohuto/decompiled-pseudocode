/*
 * XREFs of KsepShimDbChanged @ 0x1404A6134
 * Callers:
 *     KseQueryDeviceDataList @ 0x140829150 (KseQueryDeviceDataList.c)
 *     KseQueryDeviceData @ 0x14082A670 (KseQueryDeviceData.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KsepShimDatabaseTime @ 0x140A6049C (KsepShimDatabaseTime.c)
 */

__int64 KsepShimDbChanged()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rdi
  unsigned int v4; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&KsepShimDbLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v1, (__int64)&KsepShimDbLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = 0;
  if ( (int)KsepShimDatabaseTime(L"\\SystemRoot\\AppPatch\\drvmain.sdb") >= 0 )
  {
    if ( qword_140F0F0E8 )
    {
      qword_140F0F0E8 = 0LL;
      v4 = 1;
    }
    else
    {
      qword_140F0F0E8 = 0LL;
    }
    if ( (int)KsepShimDatabaseTime(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0 )
    {
      if ( qword_140F0F120 )
        v4 = 1;
      qword_140F0F120 = 0LL;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegion();
  return v4;
}
