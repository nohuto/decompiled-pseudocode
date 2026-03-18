/*
 * XREFs of OSNotifyDeviceWakeCallBack @ 0x140033440
 * Callers:
 *     OSNotifyDeviceWake @ 0x140018190 (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1400311FC (OSNotifyDeviceWakeByInterrupt.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x140031A38 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIWakeDisableAsync @ 0x140031C68 (ACPIWakeDisableAsync.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1400232C0 (WPP_RECORDER_SF_q.c)
 *     ACPIWakeCompleteRequestQueue @ 0x1400334B4 (ACPIWakeCompleteRequestQueue.c)
 */

void __fastcall OSNotifyDeviceWakeCallBack(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  if ( (_QWORD *)*a4 == a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x1Du,
        (__int64)&WPP_537052fec54a3dab9555f154ee754e1c_Traceguids,
        a4);
  }
  else
  {
    ACPIWakeCompleteRequestQueue(a4, a2);
  }
  ExFreePoolWithTag(a4, 0);
}
