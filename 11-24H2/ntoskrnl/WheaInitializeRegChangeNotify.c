/*
 * XREFs of WheaInitializeRegChangeNotify @ 0x1407C89CC
 * Callers:
 *     WheapSetPolicyValue @ 0x1407C8E4C (WheapSetPolicyValue.c)
 *     WheaInitialize @ 0x140C440FC (WheaInitialize.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 */

void WheaInitializeRegChangeNotify()
{
  char v0; // [rsp+58h] [rbp-10h]

  if ( WheapDispatchPtr.Vpb )
  {
    *(_QWORD *)&WheapDispatchPtr.Flags = 0LL;
    WheapDispatchPtr.AttachedDevice = 0LL;
    v0 = 1;
    WheapDispatchPtr.Timer = (PIO_TIMER)WheaRegChangeNotifyCallback;
    if ( (int)NtNotifyChangeMultipleKeys(
                WheapDispatchPtr.Vpb,
                0,
                0,
                0,
                (__int64)&WheapDispatchPtr.AttachedDevice,
                1LL,
                (__int64)&WheapDispatchPtr.DriverObject,
                4,
                0,
                0LL,
                0,
                v0) < 0 )
      _InterlockedExchange((volatile __int32 *)&WheapDispatchPtr.DeviceExtension, 1);
  }
}
