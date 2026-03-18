/*
 * XREFs of HUBFDO_IoctlGetNodeInformation @ 0x14007EDCC
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C7A0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x14000CA58 (HUBFDO_BuildUsb20HubDescriptor.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F5EC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMISC_GetActivityIdIrp @ 0x140030314 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007FBD4 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeInformation(__int64 a1, __int64 a2, size_t a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ebx
  int ActivityIdIrp; // eax
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+28h] [rbp-50h]
  void *v16; // [rsp+30h] [rbp-48h] BYREF
  __int128 v17; // [rsp+38h] [rbp-40h] BYREF

  v16 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_14006C198);
  v9 = HUBFDO_IoctlValidateParameters(v8, 0, a4, 0, 76LL, a3);
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
           WdfDriverGlobals,
           a2,
           a3,
           &v16,
           0LL);
    if ( v9 >= 0 )
    {
      memset(v16, 0, a3);
      *(_DWORD *)v16 = 0;
      if ( *(_DWORD *)(v8 + 92) == 100 )
        *((_BYTE *)v16 + 75) = 1;
      HUBFDO_BuildUsb20HubDescriptor(v8, (char *)v16 + 4);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v8 + 2528),
        2u,
        3u,
        0x3Fu,
        (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
        v15);
    }
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v12 = (const GUID *)&v17;
      LODWORD(v15) = v9;
      LODWORD(v14) = 0;
      if ( ActivityIdIrp < 0 )
        v12 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v11,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_INFORMATION_COMPLETE,
        v12,
        *(_QWORD *)(v8 + 248),
        v14,
        v15);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v9,
           76LL);
}
