/*
 * XREFs of OSNotifyCreatePowerResource @ 0x140063C74
 * Callers:
 *     OSNotifyCreate @ 0x140016320 (OSNotifyCreate.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14002A120 (WPP_RECORDER_SF_qL.c)
 *     ACPIBuildPowerResourceExtension @ 0x140058A34 (ACPIBuildPowerResourceExtension.c)
 *     ACPIBuildPowerResourceRequest @ 0x140058B30 (ACPIBuildPowerResourceRequest.c)
 */

__int64 __fastcall OSNotifyCreatePowerResource(__int64 *a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  unsigned __int16 v3; // r9
  int v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = (__int64)a1;
  v2 = ACPIBuildPowerResourceExtension(a1, &v6);
  if ( v2 >= 0 )
  {
    v1 = v6;
    v2 = ACPIBuildPowerResourceRequest(v6);
    if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = 16;
      goto LABEL_7;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = 15;
LABEL_7:
    v5 = v2;
    WPP_RECORDER_SF_qL(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      v3,
      (__int64)&WPP_537052fec54a3dab9555f154ee754e1c_Traceguids,
      v1,
      v5);
  }
  return (unsigned int)v2;
}
