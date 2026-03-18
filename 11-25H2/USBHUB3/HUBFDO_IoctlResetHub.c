/*
 * XREFs of HUBFDO_IoctlResetHub @ 0x14007F55C
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C7A0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F5EC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x140010820 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     HUBMISC_GetActivityIdIrp @ 0x140030314 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     HUBMISC_VerifyCallerIsAdmin @ 0x14008759C (HUBMISC_VerifyCallerIsAdmin.c)
 */

__int64 __fastcall HUBFDO_IoctlResetHub(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  int IsAdmin; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  int ActivityIdIrp; // eax
  __int64 v10; // rcx
  const GUID *v11; // r8
  int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+28h] [rbp-40h]
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v4,
         off_14006C198);
  IsAdmin = HUBMISC_VerifyCallerIsAdmin(*(_QWORD *)(v5 + 2528));
  if ( IsAdmin >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v7,
           off_14006C198);
    if ( !HUBMUX_CheckAndQueueIfResetHubIsEnabled(v8) )
      IsAdmin = -1073741823;
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v11 = (const GUID *)&v15;
      v14 = IsAdmin;
      v13 = 0;
      if ( ActivityIdIrp < 0 )
        v11 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v10,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_RESET_HUB_COMPLETE,
        v11,
        *(_QWORD *)(v5 + 248),
        v13,
        v14);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           0LL);
}
