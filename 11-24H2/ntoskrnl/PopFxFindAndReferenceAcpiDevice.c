/*
 * XREFs of PopFxFindAndReferenceAcpiDevice @ 0x1404BC634
 * Callers:
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1404BC5A4 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     IoAcquireRemoveLockEx @ 0x140429580 (IoAcquireRemoveLockEx.c)
 */

__int64 __fastcall PopFxFindAndReferenceAcpiDevice(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rbx
  __int64 *i; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = -1073741810;
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v4, (__int64)&PopFxDeviceListLock);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  for ( i = (__int64 *)PopFxAcpiDeviceList; i != &PopFxAcpiDeviceList; i = (__int64 *)*i )
  {
    if ( i - 25 == a1 )
    {
      v3 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(i + 14), (PVOID)0x66466F50, &File, 1u, 0x20u);
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegion();
  return v3;
}
