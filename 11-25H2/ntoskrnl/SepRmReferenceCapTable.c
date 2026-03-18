/*
 * XREFs of SepRmReferenceCapTable @ 0x1404548A4
 * Callers:
 *     SepRmReferenceFindCap @ 0x1404547E4 (SepRmReferenceFindCap.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 */

__int64 SepRmReferenceCapTable()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rbx
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&SepRmCapTableLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&SepRmCapTableLock, 0, v1, (unsigned __int64)&SepRmCapTableLock);
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
