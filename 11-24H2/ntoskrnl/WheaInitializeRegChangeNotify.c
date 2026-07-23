/*
 * XREFs of WheaInitializeRegChangeNotify @ 0x1407C8EBC
 * Callers:
 *     WheapSetPolicyValue @ 0x1407C933C (WheapSetPolicyValue.c)
 *     WheaInitialize @ 0x140C4624C (WheaInitialize.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 */

void WheaInitializeRegChangeNotify()
{
  if ( WheapDispatchPtr.Vpb )
  {
    *(_QWORD *)&WheapDispatchPtr.Flags = 0LL;
    WheapDispatchPtr.AttachedDevice = 0LL;
    WheapDispatchPtr.Timer = (PIO_TIMER)WheaRegChangeNotifyCallback;
    if ( NtNotifyChangeMultipleKeys(
           WheapDispatchPtr.Vpb,
           0,
           0LL,
           0LL,
           (PIO_APC_ROUTINE)&WheapDispatchPtr.AttachedDevice,
           (PVOID)1,
           (PIO_STATUS_BLOCK)&WheapDispatchPtr.DriverObject,
           4u,
           0,
           0LL,
           0,
           1u) < 0 )
      _InterlockedExchange((volatile __int32 *)&WheapDispatchPtr.DeviceExtension, 1);
  }
}
