/*
 * XREFs of KsepShimDbChanged @ 0x1404A0C88
 * Callers:
 *     KseQueryDeviceDataList @ 0x1409424A0 (KseQueryDeviceDataList.c)
 *     KseQueryDeviceData @ 0x140944120 (KseQueryDeviceData.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KsepShimDatabaseTime @ 0x140A5A4EC (KsepShimDatabaseTime.c)
 */

__int64 KsepShimDbChanged()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rdi
  unsigned int v4; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&KsepShimDbLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v1, (__int64)&KsepShimDbLock);
  if ( v3 )
    v3[10] = 1;
  v4 = 0;
  if ( (int)KsepShimDatabaseTime(L"\\SystemRoot\\AppPatch\\drvmain.sdb") >= 0 )
  {
    if ( qword_140F0FAC8 )
    {
      qword_140F0FAC8 = 0LL;
      v4 = 1;
    }
    else
    {
      qword_140F0FAC8 = 0LL;
    }
    if ( (int)KsepShimDatabaseTime(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0 )
    {
      if ( qword_140F0FB00 )
        v4 = 1;
      qword_140F0FB00 = 0LL;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegion();
  return v4;
}
