/*
 * XREFs of PopFxLowPowerEpochCallback @ 0x1404C18C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxLowPowerEpochCallback(_QWORD *a1, char *a2, int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rbx
  ULONG_PTR *i; // rbx
  ULONG_PTR v8; // r8
  char v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = -1073741811;
  v4 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *a1 )
    v4 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - a1[1];
  if ( !v4 && a3 == 4 && a2 )
  {
    PopFxLowPowerEpoch = *a2;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((__int64)&PopFxPluginLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxPluginLock, 0, v6, (unsigned __int64)&PopFxPluginLock);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
    {
      v8 = i[12];
      v10[0] = 0;
      if ( v8 )
      {
        v10[0] = PopFxLowPowerEpoch;
        guard_dispatch_icall_no_overrides(24LL, v10);
      }
    }
    PopPepLowPowerEpoch = PopFxLowPowerEpoch;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    KeLeaveCriticalRegion();
    return 0;
  }
  return v3;
}
