/*
 * XREFs of SepRmReferenceCapTable @ 0x140455064
 * Callers:
 *     SepRmReferenceFindCap @ 0x140454FA4 (SepRmReferenceFindCap.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

__int64 SepRmReferenceCapTable()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rbx
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&SepRmCapTableLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&SepRmCapTableLock, 0, v1, (__int64)&SepRmCapTableLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  v2 = SepRmCapTable;
  if ( SepRmCapTable && _InterlockedIncrement64((volatile signed __int64 *)(SepRmCapTable + 40)) <= 1 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&SepRmCapTableLock);
  KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
  KeLeaveCriticalRegion();
  return v2;
}
