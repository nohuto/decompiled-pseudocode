/*
 * XREFs of WPP_RECORDER_SF_q @ 0x14003DEE0
 * Callers:
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     UsbhFdoUrbPdoFilter @ 0x14000AF60 (UsbhFdoUrbPdoFilter.c)
 *     UsbhPdoInternalDeviceControl @ 0x14000B2A0 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x14000BE94 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhDeletePdo @ 0x140014454 (UsbhDeletePdo.c)
 *     UsbhCreatePdo @ 0x14001A420 (UsbhCreatePdo.c)
 *     UsbhPdoPnp_StartDevice @ 0x14001D150 (UsbhPdoPnp_StartDevice.c)
 *     UsbhSyncSuspendPdoPort @ 0x14001E27C (UsbhSyncSuspendPdoPort.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1400213E0 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhFdoColdStartPdo @ 0x140022D78 (UsbhFdoColdStartPdo.c)
 *     UsbhFdoS0IoComplete_Action @ 0x14002E360 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x140035350 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhSetPdoRegistryParameter @ 0x140036540 (UsbhSetPdoRegistryParameter.c)
 *     UsbhWaitForBootDevice @ 0x140038CB8 (UsbhWaitForBootDevice.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1400400C0 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_BusPause_PdoEvent @ 0x140048294 (Usbh_BusPause_PdoEvent.c)
 *     UsbhResetNotifyCompletion @ 0x14004BA90 (UsbhResetNotifyCompletion.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1400509A0 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhResetNotifyDownstreamHub @ 0x140050B64 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhQueryGlobalHubValue @ 0x140051D10 (UsbhQueryGlobalHubValue.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x140051F20 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhBuildWmiConnectionNotification @ 0x140054460 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhQueryUxdDevice @ 0x14005F4E0 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // r11
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v11, va);
}
