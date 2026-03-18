/*
 * XREFs of ACPIDeviceInternalDelayedDeviceRequest @ 0x140020248
 * Callers:
 *     ACPIBuildProcessDevicePhasePsc @ 0x14001FF30 (ACPIBuildProcessDevicePhasePsc.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x14001BA00 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x14001D6DC (WPP_RECORDER_SF_qdqss.c)
 */

__int64 __fastcall ACPIDeviceInternalDelayedDeviceRequest(_QWORD *a1, __int64 a2)
{
  char v3; // r10
  const char *v4; // rcx
  int v5; // edi
  const char *v6; // r8
  __int64 result; // rax
  __int64 v8; // rax

  v3 = 0;
  v4 = byte_1400753E8;
  v5 = a2;
  v6 = byte_1400753E8;
  if ( a1 )
  {
    v8 = a1[1];
    v3 = (char)a1;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)a1[76];
      if ( (v8 & 0x400000000000LL) != 0 )
        v6 = (const char *)a1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      0xAu,
      0x17u,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      0,
      a2 - 1,
      v3,
      v4,
      v6);
  result = ACPIDeviceInitializePowerRequest((__int64)a1, v5, 0LL, 0LL, 0LL, 0, 0, 9u);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
