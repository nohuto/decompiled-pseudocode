/*
 * XREFs of OSNotifyCreateThermalZone @ 0x140052368
 * Callers:
 *     OSNotifyCreate @ 0x140016320 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x140040DF0 (ACPIBuildMissingChildren.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_qL @ 0x14002A120 (WPP_RECORDER_SF_qL.c)
 *     ACPIBuildThermalZoneExtension @ 0x140052428 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildThermalZoneRequest @ 0x140052698 (ACPIBuildThermalZoneRequest.c)
 */

__int64 __fastcall OSNotifyCreateThermalZone(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  int v4; // ebx
  __int64 v5; // rcx
  unsigned __int16 v6; // r9
  int v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  v3 = a1;
  v4 = ACPIBuildThermalZoneExtension(a1, a2, &v9);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 20;
      goto LABEL_7;
    }
  }
  else
  {
    ACPIInitReferenceDeviceExtension(v9);
    _InterlockedOr64((volatile signed __int64 *)(v5 + 8), a2);
    v3 = v9;
    v4 = ACPIBuildThermalZoneRequest(v9);
    if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 21;
LABEL_7:
      v8 = v4;
      WPP_RECORDER_SF_qL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        v6,
        (__int64)&WPP_537052fec54a3dab9555f154ee754e1c_Traceguids,
        v3,
        v8);
    }
  }
  return (unsigned int)v4;
}
