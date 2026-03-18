/*
 * XREFs of HUBMISC_ControlTransfer @ 0x14002EDA8
 * Callers:
 *     HUBHTX_AckPortChangeUsingControlTransfer @ 0x140002954 (HUBHTX_AckPortChangeUsingControlTransfer.c)
 *     HUBHTX_ClearTTBuffer @ 0x140002E70 (HUBHTX_ClearTTBuffer.c)
 *     HUBHTX_DisablePortUsingControlTransfer @ 0x1400035E0 (HUBHTX_DisablePortUsingControlTransfer.c)
 *     HUBHTX_GetDescriptor @ 0x1400046D0 (HUBHTX_GetDescriptor.c)
 *     HUBHTX_GetHubStatusUsingControlTransfer @ 0x1400049B8 (HUBHTX_GetHubStatusUsingControlTransfer.c)
 *     HUBHTX_GetPortStatusForBootDevice @ 0x140004E88 (HUBHTX_GetPortStatusForBootDevice.c)
 *     HUBHTX_GetPortStatusUsingControlTransfer @ 0x1400050AC (HUBHTX_GetPortStatusUsingControlTransfer.c)
 *     HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x140005204 (HUBHTX_GetRequestedPortStatusUsingControlTransfer.c)
 *     HUBHTX_ResetPortUsingControlTransfer @ 0x140005B20 (HUBHTX_ResetPortUsingControlTransfer.c)
 *     HUBHTX_SetLinkStateToRxDetectUsingControlTransfer @ 0x1400060BC (HUBHTX_SetLinkStateToRxDetectUsingControlTransfer.c)
 *     HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer @ 0x1400061F4 (HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer.c)
 *     HUBHTX_SettingPortPowerUsingControlTransfer @ 0x140006328 (HUBHTX_SettingPortPowerUsingControlTransfer.c)
 *     HUBHTX_Suspend30PortUsingControlTransfer @ 0x140006460 (HUBHTX_Suspend30PortUsingControlTransfer.c)
 *     HUBHSM_GettingHubStatus @ 0x140009210 (HUBHSM_GettingHubStatus.c)
 *     HUBHSM_SendingAckForHubChange @ 0x140009DD0 (HUBHSM_SendingAckForHubChange.c)
 *     HUBHSM_SettingHubDepth @ 0x140009FA0 (HUBHSM_SettingHubDepth.c)
 *     HUBFDO_GetPortStatusForDebugging @ 0x14000E23C (HUBFDO_GetPortStatusForDebugging.c)
 *     HUBPSM20_InitiatingResume @ 0x140012AD0 (HUBPSM20_InitiatingResume.c)
 *     HUBPSM20_Suspending @ 0x1400135B0 (HUBPSM20_Suspending.c)
 *     HUBPSM30_DisablingRemoteWakeOnPort @ 0x1400139D0 (HUBPSM30_DisablingRemoteWakeOnPort.c)
 *     HUBPSM30_EnablingRemoteWakeOnPort @ 0x140013BC0 (HUBPSM30_EnablingRemoteWakeOnPort.c)
 *     HUBPSM30_InitiatingResume @ 0x140013D30 (HUBPSM30_InitiatingResume.c)
 *     HUBPSM30_InitiatingWarmResetPort @ 0x140013E70 (HUBPSM30_InitiatingWarmResetPort.c)
 *     HUBPSM30_SettingU1TImeOut @ 0x1400144C0 (HUBPSM30_SettingU1TImeOut.c)
 *     HUBPSM30_SettingU2TImeOut @ 0x140014620 (HUBPSM30_SettingU2TImeOut.c)
 *     HUBDSM_ArmingDeviceForWake @ 0x14001FCF0 (HUBDSM_ArmingDeviceForWake.c)
 *     HUBDSM_ConfiguringDevice @ 0x1400216E0 (HUBDSM_ConfiguringDevice.c)
 *     HUBDSM_DisablingU1 @ 0x140021FD0 (HUBDSM_DisablingU1.c)
 *     HUBDSM_DisablingU2 @ 0x1400220F0 (HUBDSM_DisablingU2.c)
 *     HUBDSM_EnablingLTM @ 0x1400222A0 (HUBDSM_EnablingLTM.c)
 *     HUBDSM_EnablingU1 @ 0x140022370 (HUBDSM_EnablingU1.c)
 *     HUBDSM_EnablingU2 @ 0x140022440 (HUBDSM_EnablingU2.c)
 *     HUBDSM_GettingRemoteWakeCapability @ 0x140023020 (HUBDSM_GettingRemoteWakeCapability.c)
 *     HUBDSM_SendingDisallowFirmwareUpdateCommand @ 0x140024080 (HUBDSM_SendingDisallowFirmwareUpdateCommand.c)
 *     HUBDSM_SendingFirmwareImageHashQuery @ 0x140024160 (HUBDSM_SendingFirmwareImageHashQuery.c)
 *     HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1400242E0 (HUBDSM_SendingUsbFeaturesVendorCmd.c)
 *     HUBDSM_SetttingIsochDelay @ 0x140024BD0 (HUBDSM_SetttingIsochDelay.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x14002A2F4 (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x14002B07C (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 *     HUBDTX_GetDescriptor @ 0x14002B54C (HUBDTX_GetDescriptor.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x14002B970 (HUBDTX_GetMsOsFeatureDescriptor.c)
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x14002BE5C (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x14002BF40 (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x14002C054 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x14002C11C (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 *     HUBDTX_SetSelUsingControlTransfer @ 0x14002C1FC (HUBDTX_SetSelUsingControlTransfer.c)
 *     FWUPDATE_GetMMIO @ 0x14004204C (FWUPDATE_GetMMIO.c)
 *     FWUPDATE_SetMMIO @ 0x1400424B4 (FWUPDATE_SetMMIO.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 */

__int64 __fastcall HUBMISC_ControlTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8,
        char a9)
{
  _QWORD *v9; // rbx
  int v10; // esi
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // edx
  __int64 v17; // rdx
  int v18; // ebx
  __int64 v19; // rax
  int v21; // [rsp+28h] [rbp-71h]
  _DWORD v22[3]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v23; // [rsp+3Ch] [rbp-5Dh]
  int v24; // [rsp+44h] [rbp-55h]
  _QWORD v25[9]; // [rsp+48h] [rbp-51h] BYREF

  v9 = a4 + 3;
  v10 = 0;
  a4[4] = a2;
  *((_DWORD *)a4 + 6) = 3276936;
  v14 = 8;
  *((_DWORD *)a4 + 14) = 8;
  if ( a8 )
  {
    v14 = 10;
    *((_DWORD *)a4 + 14) = 10;
  }
  if ( *((char *)a4 + 152) < 0 )
  {
    v14 |= 1u;
    *((_DWORD *)a4 + 14) = v14;
  }
  if ( a9 )
    *((_DWORD *)a4 + 14) = v14 | 0x10;
  a4[9] = 0LL;
  *((_DWORD *)a4 + 15) = a7;
  a4[8] = a6;
  *((_DWORD *)a4 + 20) = 5000;
  *((_DWORD *)a4 + 10) = *((_DWORD *)a4 + 40);
  memset(v25, 0, sizeof(v25));
  v15 = *a4;
  LOBYTE(v25[0]) = 15;
  LODWORD(v25[3]) = 2228227;
  v25[1] = v9;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v15,
    v25);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    *a4,
    a5,
    a3);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          *a4,
          *(_QWORD *)(a1 + 32),
          0LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v16, 3, 58, (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
    }
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, *a4);
    if ( v10 < 0 )
    {
      v23 = 0LL;
      v24 = 0;
      v22[1] = 0;
      v22[2] = 0;
      v17 = *a4;
      v22[0] = 24;
      v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
              WdfDriverGlobals,
              v17,
              v22);
      if ( v18 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                WdfDriverGlobals->Driver,
                off_14006C1E8);
        v21 = v18;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v19 + 64),
          2u,
          2u,
          0x3Bu,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
          v21);
      }
    }
  }
  return (unsigned int)v10;
}
