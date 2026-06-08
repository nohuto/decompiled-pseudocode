/*
 * XREFs of ReConnectHwpInterrupt @ 0x1400077B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 ReConnectHwpInterrupt()
{
  __int64 result; // rax
  int v1; // [rsp+28h] [rbp-10h]

  result = HalPrivateDispatchTable[117]((__int64)HwpInterruptService);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v1 = result;
    return WPP_RECORDER_SF_D(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             3u,
             0xFu,
             (__int64)&WPP_9b89ed0794b23191a81b3e1d548602ce_Traceguids,
             v1);
  }
  return result;
}
