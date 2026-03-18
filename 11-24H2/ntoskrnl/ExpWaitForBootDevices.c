/*
 * XREFs of ExpWaitForBootDevices @ 0x140655DF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeFreezeExecution @ 0x1404D5B60 (KeFreezeExecution.c)
 *     KeThawExecution @ 0x1404F4AF0 (KeThawExecution.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn ExpWaitForBootDevices(PVOID StartContext)
{
  int v1; // edi
  __int64 *v2; // rbx
  KIRQL v3; // al
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  while ( 1 )
  {
    KeWaitForSingleObject(&ExBootDevicesRemovedEvent, Executive, 0, 0, 0LL);
    v1 = 60;
    while ( 1 )
    {
      v2 = &ExBootDeviceList;
      do
      {
        v3 = KeAcquireSpinLockRaiseToDpc(&ExBootDeviceListSpinLock);
        v2 = (__int64 *)v2[1];
        KeReleaseSpinLock(&ExBootDeviceListSpinLock, v3);
      }
      while ( v2 != &ExBootDeviceList
           && (!*((_DWORD *)v2 - 1)
            || !(unsigned __int8)guard_dispatch_icall_no_overrides(v2[4], v2[6], v4, v5)
            || _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 1, 0xFFFFFFFF) != 1
            || _InterlockedExchangeAdd(&ExNumMissingBootDevices, 0xFFFFFFFF) != 1) );
      if ( !ExNumMissingBootDevices )
        break;
      KeFreezeExecution();
      KeStallExecutionProcessor(0xF4240u);
      KeThawExecution(1, v6, v7, v8);
      if ( !--v1 )
        KeBugCheckEx(0x7Bu, 0LL, 0LL, 3uLL, 0LL);
    }
  }
}
