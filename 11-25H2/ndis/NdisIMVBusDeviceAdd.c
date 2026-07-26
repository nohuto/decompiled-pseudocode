/*
 * XREFs of NdisIMVBusDeviceAdd @ 0x1400A2D10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     ?ndisIMVBusIsValidInput@@YAEPEAXPEBU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z @ 0x1400A293C (-ndisIMVBusIsValidInput@@YAEPEAXPEBU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisIMVBusDeviceAdd(_BYTE *a1, const struct _NDIS_VBUS_DEVICE_CHARACTERISTICS *a2)
{
  unsigned int v4; // ebx
  char v6[4]; // [rsp+38h] [rbp-10h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x26u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      a2);
  if ( ndisIMVBusIsValidInput(a1, a2) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.DeviceQueue.32) )
    {
      v4 = ((__int64 (__fastcall *)(char *, char *, char *))WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Flink)(
             (char *)a2 + 8,
             (char *)a2 + 24,
             (char *)a2 + 72);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.DeviceQueue.32);
    }
    else
    {
      v4 = -1073741661;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v6 = v4;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x27u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v6);
  }
  return v4;
}
