/*
 * XREFs of PopFxAcpiPrepareDevice @ 0x1405DC554
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x1405DC3B0 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404BAB50 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopPluginAcpiNotificationStrict @ 0x1405E4454 (PopPluginAcpiNotificationStrict.c)
 */

__int64 __fastcall PopFxAcpiPrepareDevice(const UNICODE_STRING *a1, ULONG_PTR a2, ULONG_PTR *a3, _BYTE *a4)
{
  int AcpiDeviceByUniqueId; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // rsi
  _QWORD *v10; // rbx
  ULONG_PTR i; // rbx

  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a1, 0LL);
  if ( AcpiDeviceByUniqueId < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire((__int64)&PopFxPluginLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxPluginLock, 0, v10, (__int64)&PopFxPluginLock);
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
    for ( i = PopFxPluginList; (ULONG_PTR *)i != &PopFxPluginList; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 16) >= 3u
        && *(_QWORD *)(i + 112)
        && (unsigned __int8)PopPluginAcpiNotificationStrict(i, 1uLL, a2)
        && *(_BYTE *)(a2 + 12) )
      {
        v9 = i;
        break;
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    KeLeaveCriticalRegion();
    if ( v9 )
    {
      *a3 = v9;
      AcpiDeviceByUniqueId = 0;
      *a4 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)AcpiDeviceByUniqueId;
}
