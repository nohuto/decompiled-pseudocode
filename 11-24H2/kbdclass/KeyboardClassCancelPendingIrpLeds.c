/*
 * XREFs of KeyboardClassCancelPendingIrpLeds @ 0x1C0001B70
 * Callers:
 *     KeyboardPnP @ 0x1C0001240 (KeyboardPnP.c)
 *     KeyboardClassPowerComplete @ 0x1C00018B0 (KeyboardClassPowerComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0002F10 (WPP_RECORDER_SF_qq.c)
 */

char __fastcall KeyboardClassCancelPendingIrpLeds(__int64 a1)
{
  IRP *v2; // rbx

  v2 = (IRP *)_InterlockedExchange64((volatile __int64 *)(a1 + 368), 0LL);
  if ( !v2 )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 89);
  IoCancelIrp(v2);
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 376), 2) == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 90);
    IoFreeIrp(v2);
  }
  return 1;
}
