/*
 * XREFs of ACPIVerifyUSB4Presence @ 0x1400679BC
 * Callers:
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x14005D394 (WPP_RECORDER_SF_i.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     ACPIAmliEvaluateOsc @ 0x1400BA520 (ACPIAmliEvaluateOsc.c)
 */

__int64 __fastcall ACPIVerifyUSB4Presence(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v6[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v7[4]; // [rsp+40h] [rbp-28h] BYREF

  v7[1] = 0;
  v7[0] = 1;
  v7[2] = 15;
  v3 = *(_QWORD *)(RootDeviceExtension + 760);
  *(_OWORD *)v6 = SB_OSC_USB4_UUID;
  v4 = (int)ACPIAmliEvaluateOsc(v3, (int)v6, a3, 3, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x1Du,
      (__int64)&WPP_407264dfc63035306de6021495d93ce2_Traceguids,
      v4);
  return (unsigned int)v4;
}
