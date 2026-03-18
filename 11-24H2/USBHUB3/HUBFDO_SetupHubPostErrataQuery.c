/*
 * XREFs of HUBFDO_SetupHubPostErrataQuery @ 0x14000F044
 * Callers:
 *     HUBHSM_SettingUpHubPostErrataQuery @ 0x14000A0D0 (HUBHSM_SettingUpHubPostErrataQuery.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FE8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x14000C8B4 (Feature_RH1S__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_RH5S__private_IsEnabledDeviceUsageNoInline @ 0x14000C908 (Feature_RH5S__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBMISC_VerifierDbgBreak @ 0x140034050 (HUBMISC_VerifierDbgBreak.c)
 *     USBD_CreateHandle @ 0x140043E68 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x140044278 (USBD_QueryUsbCapability.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 */

__int64 __fastcall HUBFDO_SetupHubPostErrataQuery(char *Context)
{
  __int64 v2; // r14
  __int64 v3; // rax
  struct _DEVICE_OBJECT *v4; // rbx
  struct _DEVICE_OBJECT *v5; // rax
  ULONG v6; // r8d
  ULONG v7; // r9d
  NTSTATUS UsbCapability; // esi
  USBD_HANDLE v9; // rbx
  __int128 v10; // xmm0
  USBD_HANDLE v11; // rbx
  void (__fastcall *v12)(_QWORD); // rax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  int v18; // ebx
  struct _DEVICE_OBJECT *v19; // rax
  NTSTATUS v20; // eax
  int v21; // eax
  int v23; // eax
  ULONG *USBDHandle; // [rsp+28h] [rbp-99h]
  ULONG *USBDHandlea; // [rsp+28h] [rbp-99h]
  ULONG *USBDHandleb; // [rsp+28h] [rbp-99h]
  __int64 v27; // [rsp+30h] [rbp-91h]
  USBD_HANDLE v28; // [rsp+38h] [rbp-89h] BYREF
  _QWORD v29[10]; // [rsp+48h] [rbp-79h] BYREF
  _DWORD v30[2]; // [rsp+98h] [rbp-29h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-21h]
  int v32; // [rsp+A8h] [rbp-19h]
  __int128 v33; // [rsp+B0h] [rbp-11h] BYREF
  __int128 v34; // [rsp+C0h] [rbp-1h]
  int v35; // [rsp+D0h] [rbp+Fh]
  UCHAR OutputBuffer[16]; // [rsp+D8h] [rbp+17h] BYREF

  v28 = 0LL;
  v35 = 0;
  HIWORD(v32) = 0;
  v33 = 0LL;
  v34 = 0LL;
  memset(v29, 0, 0x44uLL);
  v2 = *((_QWORD *)Context + 2);
  *(_OWORD *)OutputBuffer = 0LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v2);
  v4 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                                  WdfDriverGlobals,
                                  v3);
  v5 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                  WdfDriverGlobals,
                                  v2);
  UsbCapability = USBD_CreateHandle(v5, v4, v6, v7, &v28);
  if ( UsbCapability < 0 )
    goto LABEL_14;
  v9 = v28;
  if ( USBD_QueryUsbCapability(v28, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 4u, (PUCHAR)Context + 156, USBDHandle) < 0 )
    *((_DWORD *)Context + 39) = 0;
  if ( USBD_QueryUsbCapability(v9, &GUID_USB_CAPABILITY_MICROSOFT_MAUSBHOST, 0x10u, OutputBuffer, USBDHandlea) >= 0 )
  {
    v10 = *(_OWORD *)OutputBuffer;
    Context[201] = 1;
    *(_OWORD *)(Context + 780) = v10;
  }
  UsbCapability = USBD_QueryUsbCapability(v9, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0, 0LL, USBDHandleb);
  *((_BYTE *)v9 + 225) = 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 55, 0xFFFFFFFF) <= 1 )
  {
    if ( *((_BYTE *)v9 + 225) )
    {
      v11 = v28;
      v12 = (void (__fastcall *)(_QWORD))*((_QWORD *)v28 + 14);
      if ( v12 )
        v12(*((_QWORD *)v28 + 6));
      ExFreePoolWithTag(v11, *((_DWORD *)v11 + 16));
    }
    else if ( g_EnableDbgPrints )
    {
      DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", v28);
    }
  }
  if ( UsbCapability < 0 )
  {
LABEL_14:
    _InterlockedOr((volatile signed __int32 *)Context + 10, 0x80u);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 317),
        2u,
        3u,
        0x60u,
        (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
        UsbCapability);
  }
  if ( (*((_DWORD *)Context + 10) & 0x80u) != 0 || (*((_DWORD *)Context + 11) & 1) != 0 || !Context[260] )
    goto LABEL_49;
  *(_QWORD *)&v33 = 0x200000024LL;
  *((_QWORD *)&v34 + 1) = 2LL;
  v35 = 2;
  if ( (unsigned int)Feature_RH1S__private_IsEnabledDeviceUsageNoInline()
    || (unsigned int)Feature_RH5S__private_IsEnabledDeviceUsageNoInline() )
  {
    v13 = (*((_DWORD *)Context + 11) & 0x400) != 0 ? 1000 : 50;
    v14 = (*((_DWORD *)Context + 11) & 0x400) != 0 ? 0x3E8 : 0;
    if ( (*((_DWORD *)Context + 11) & 0x800) != 0 )
    {
      v13 = 5000;
      v14 = 5000;
    }
    *((_DWORD *)Context + 649) = v14;
  }
  else
  {
    v13 = 50;
  }
  HIDWORD(v33) = v13;
  *((_DWORD *)Context + 648) = v13;
  *(_QWORD *)&v34 = 0x200000002LL;
  DWORD2(v33) = 3;
  if ( !Context[240] || (*((_DWORD *)Context + 11) & 0x20) != 0 )
    HIDWORD(v34) = 2;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 368))(
          WdfDriverGlobals,
          v2,
          &v33);
  v18 = v15;
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v27) = v15;
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 317),
        2u,
        3u,
        0x61u,
        (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
        v27);
    }
    if ( v18 == -1073741101 && *((_DWORD *)Context + 64) == 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_(
          *((_QWORD *)Context + 317),
          v16,
          3,
          98,
          (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
      }
      if ( (*((_DWORD *)Context + 652) & 8) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierNoSelectiveSuspendSupport", Context + 1280);
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 8) != 0 )
      {
        LODWORD(USBDHandle) = -1073741101;
        McTemplateK0pq_EtwWriteTransfer(
          v17,
          &USBHUB3_ETW_EVENT_HUB_SELECTIVE_SUSPEND_NOT_SUPPORTED,
          (const GUID *)(Context + 2428),
          *((_QWORD *)Context + 31),
          USBDHandle);
      }
    }
LABEL_49:
    v32 = 257;
    *((_DWORD *)Context + 654) = 5;
    v30[1] = 5;
    v30[0] = 20;
    v31 = 1LL;
    v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 376))(
            WdfDriverGlobals,
            v2,
            v30);
    if ( v23 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v27) = v23;
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 317),
        2u,
        3u,
        0x65u,
        (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
        v27);
    }
    return 2053LL;
  }
  _InterlockedOr((volatile signed __int32 *)Context + 10, 0x4000000u);
  v19 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                   WdfDriverGlobals,
                                   v2);
  v20 = PoRegisterPowerSettingCallback(
          v19,
          &GUID_POWER_HUB_SELECTIVE_SUSPEND_TIMEOUT,
          (PPOWER_SETTING_CALLBACK)HUBFDO_PowerSettingCallback,
          Context,
          (PVOID *)Context + 323);
  if ( v20 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v27) = v20;
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 317),
        2u,
        3u,
        0x63u,
        (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
        v27);
    }
    *((_QWORD *)Context + 323) = 0LL;
  }
  if ( Context[240] && (*((_DWORD *)Context + 11) & 0x20) == 0 )
    goto LABEL_49;
  memset(v29, 0, 0x48uLL);
  v29[1] = HUBFDO_EvtPostPoFxRegisterDevice;
  LODWORD(v29[0]) = 72;
  v29[2] = HUBFDO_EvtPrePoFxUnregisterDevice;
  v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 3400))(
          WdfDriverGlobals,
          v2,
          v29);
  if ( v21 >= 0 )
    goto LABEL_49;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v27) = v21;
    WPP_RECORDER_SF_d(
      *((_QWORD *)Context + 317),
      2u,
      3u,
      0x64u,
      (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
      v27);
  }
  return 2045LL;
}
