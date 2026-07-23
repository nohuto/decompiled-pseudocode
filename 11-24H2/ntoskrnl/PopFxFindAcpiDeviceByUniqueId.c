/*
 * XREFs of PopFxFindAcpiDeviceByUniqueId @ 0x1404B59F0
 * Callers:
 *     PopFxAcpiPrepareDevice @ 0x1405D9424 (PopFxAcpiPrepareDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x14074CF20 (PopFxRegisterDeviceWorker.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140A72CEC (PopFxFindDeviceAndAllocateUniqueId.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     IoAcquireRemoveLockEx @ 0x14041D6D0 (IoAcquireRemoveLockEx.c)
 *     RtlCompareUnicodeString @ 0x1409343D0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PopFxFindAcpiDeviceByUniqueId(PCUNICODE_STRING String2, __int64 **a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rdi
  NTSTATUS v6; // esi
  char *v7; // rbx
  __int64 *i; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = 0LL;
  v6 = -1073741275;
  v7 = (char *)KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v7, (__int64)&PopFxDeviceListLock);
  if ( v7 )
    v7[10] = 1;
  for ( i = (__int64 *)PopFxAcpiDeviceList; i != &PopFxAcpiDeviceList; i = (__int64 *)*i )
  {
    v5 = i - 25;
    if ( i[3] && !RtlCompareUnicodeString((PCUNICODE_STRING)(v5 + 27), String2, 0) )
    {
      if ( a2 )
        v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 39), (PVOID)0x66466F50, &File, 1u, 0x20u);
      else
        v6 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegion();
  if ( v6 >= 0 && a2 )
    *a2 = v5;
  return (unsigned int)v6;
}
