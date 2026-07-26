/*
 * XREFs of NdisIMCancelInitializeDeviceInstance @ 0x140099260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x14002C3B0 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_qZL @ 0x140056920 (WPP_RECORDER_SF_qZL.c)
 *     ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x14008E6C0 (-ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisIMCancelInitializeDeviceInstance(NDIS_HANDLE DriverHandle, PNDIS_STRING DeviceInstance)
{
  char v4; // al
  int v5; // edx
  NDIS_STATUS v6; // ebx
  char v8[4]; // [rsp+38h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)DeviceInstance,
      1u,
      0x36u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)DriverHandle,
      &DeviceInstance->Length);
  v4 = 1 - ndisIMCheckDeviceInstance((struct _NDIS_M_DRIVER_BLOCK *)DriverHandle, DeviceInstance, 0LL);
  v6 = v4 != 0 ? 0xC0000001 : 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v4 != 0 ? 0xC0000001 : 0;
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      1u,
      0x37u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)DriverHandle,
      &DeviceInstance->Length,
      *(_DWORD *)v8);
  }
  return v6;
}
