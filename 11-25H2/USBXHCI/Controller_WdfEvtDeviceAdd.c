/*
 * XREFs of Controller_WdfEvtDeviceAdd @ 0x140079910
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Controller_AddControllerToGlobalControllerList @ 0x14003FEE0 (Controller_AddControllerToGlobalControllerList.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x140042054 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Device_IsSecureDevice @ 0x140043E88 (Device_IsSecureDevice.c)
 *     Etw_ControllerCreate @ 0x14004F008 (Etw_ControllerCreate.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     Command_Create @ 0x1400741FC (Command_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1400748E4 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_ConfigureSxWakeSettings @ 0x140074C58 (Controller_ConfigureSxWakeSettings.c)
 *     Controller_Create @ 0x140074D44 (Controller_Create.c)
 *     Controller_CreateWdfDevice @ 0x140075CAC (Controller_CreateWdfDevice.c)
 *     DeviceSlot_Create @ 0x14007A7B4 (DeviceSlot_Create.c)
 *     Interrupter_Create @ 0x14007B9A4 (Interrupter_Create.c)
 *     IoControl_Create @ 0x14007CD00 (IoControl_Create.c)
 *     Register_Create @ 0x14007CEE4 (Register_Create.c)
 *     RootHub_Create @ 0x14007DE10 (RootHub_Create.c)
 *     Wmi_Create @ 0x14007EBF0 (Wmi_Create.c)
 *     IntelPptFilter_Create @ 0x14007EE74 (IntelPptFilter_Create.c)
 *     SecureChannel_Create @ 0x14007F8F8 (SecureChannel_Create.c)
 *     Controller_ExecuteDSM @ 0x140081BA8 (Controller_ExecuteDSM.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceAdd(__int64 a1, __int64 a2)
{
  int v3; // edx
  int v4; // ebx
  int v5; // r9d
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // [rsp+38h] [rbp-9h] BYREF
  __int64 v16; // [rsp+40h] [rbp-1h] BYREF
  __int64 v17; // [rsp+48h] [rbp+7h] BYREF
  int v18; // [rsp+50h] [rbp+Fh] BYREF
  _QWORD v19[4]; // [rsp+58h] [rbp+17h] BYREF
  __int128 v20; // [rsp+78h] [rbp+37h]
  __int64 v21; // [rsp+88h] [rbp+47h]

  v20 = 0LL;
  v19[0] = 56LL;
  LOBYTE(v20) = 0;
  v19[2] = 0LL;
  v19[3] = 0x1000000000LL;
  v21 = 0x200000002LL;
  v19[1] = 0xC800000400LL;
  v17 = 0LL;
  v16 = 0LL;
  v18 = 0;
  v15 = 0LL;
  imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v19, &v16);
  v4 = ((__int64 (__fastcall *)(__int64, __int64))qword_14006BE28)(UcxDriverGlobals, a2);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v5 = 10;
    goto LABEL_4;
  }
  v4 = Controller_CreateWdfDevice(a2, v16, &v17, (unsigned int *)&v18);
  if ( v4 < 0 )
    goto LABEL_5;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         v17,
         off_14006B240);
  if ( Device_IsSecureDevice(v7) )
  {
    v4 = SecureChannel_Create(v8, v8 + 96);
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 12;
LABEL_4:
        LOBYTE(v3) = 2;
        WPP_RECORDER_SF_d(v16, v3, 4, v5, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v4);
        goto LABEL_5;
      }
      goto LABEL_5;
    }
  }
  v4 = Controller_Create(v17, v16, v18, (__int64 *)&v15);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 13;
      goto LABEL_4;
    }
LABEL_5:
    if ( v15 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 1664))(WdfDriverGlobals, v15[1]);
    return (unsigned int)v4;
  }
  v9 = v15;
  *(_OWORD *)((char *)v15 + 180) = *(_OWORD *)(v7 + 24);
  *(_OWORD *)((char *)v9 + 196) = *(_OWORD *)(v7 + 40);
  *(_OWORD *)((char *)v9 + 212) = *(_OWORD *)(v7 + 56);
  *(_OWORD *)((char *)v9 + 228) = *(_OWORD *)(v7 + 72);
  *(_QWORD *)(v7 + 8) = v15;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01033 + 1640))(
    WdfDriverGlobals,
    v15[1],
    Controller_WdfEvtDeviceAdd,
    349LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
  v4 = IoControl_Create(v17, v15, v15 + 10);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 14;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = Register_Create(v15, v15 + 11);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 15;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = Interrupter_Create(v17, v15, v15 + 16);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 16;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = DeviceSlot_Create(v10, v15, v15 + 17);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 17;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = Command_Create(v11, (__int64)v15, v15 + 18);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 18;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v12 = v15 + 21;
  if ( (v15[92] & 0x800000) != 0 )
  {
    v4 = IntelPptFilter_Create(v17, v15, v15 + 21);
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 19;
        goto LABEL_4;
      }
      goto LABEL_5;
    }
  }
  else
  {
    *v12 = 0LL;
  }
  v4 = RootHub_Create(v12, v15, v15 + 19);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 20;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = Wmi_Create(v17, v15, v15 + 20);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 21;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  *(_QWORD *)v7 = g_UsbXhciTriageInfo;
  Controller_ConfigureS0IdleSettings((__int64)v15);
  Controller_ConfigureSxWakeSettings(v15);
  KeInitializeSpinLock((PKSPIN_LOCK)v15 + 5);
  v13 = v15 + 6;
  v15[7] = (__int64)(v15 + 6);
  *v13 = (__int64)v13;
  *((_DWORD *)v15 + 16) = 0;
  *((_DWORD *)v15 + 198) = 5;
  Controller_AddControllerToGlobalControllerList((__int64)v15);
  Etw_ControllerCreate(v14, (__int64)v15);
  Controller_QueryControllerCapabilitiesFromACPI((__int64)v15);
  if ( (v15[93] & 1) != 0 )
    Controller_ExecuteDSM(v15, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1LL);
  return (unsigned int)v4;
}
