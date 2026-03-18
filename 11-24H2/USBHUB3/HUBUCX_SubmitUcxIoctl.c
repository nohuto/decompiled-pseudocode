/*
 * XREFs of HUBUCX_SubmitUcxIoctl @ 0x140028C5C
 * Callers:
 *     HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure @ 0x14001F7B0 (HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x14001FF40 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x140023BF0 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x140023D90 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_SettingNonZeroAddress @ 0x140024960 (HUBDSM_SettingNonZeroAddress.c)
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x140024F40 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 *     HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl @ 0x140026210 (HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl.c)
 *     HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x140026E98 (HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x140026FE0 (HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x14002709C (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x140028664 (HUBUCX_NotifyDeviceResetUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl @ 0x14002896C (HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoUsingUCXIoctl @ 0x140028A20 (HUBUCX_PurgeDeviceIoUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl @ 0x140028AD0 (HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl.c)
 *     HUBUCX_StartDeviceIoUsingUCXIoctl @ 0x140028BAC (HUBUCX_StartDeviceIoUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x140029784 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x1400298C8 (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x140018F24 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_SubmitUcxIoctl(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v6; // rbp
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v15; // [rsp+28h] [rbp-60h]
  _DWORD v16[3]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v17; // [rsp+6Ch] [rbp-1Ch]
  int v18; // [rsp+74h] [rbp-14h]

  v17 = 0LL;
  v2 = *a1;
  v4 = a1[53];
  v18 = 0;
  v16[1] = 0;
  v6 = *(_QWORD *)(v2 + 32);
  v16[2] = 0;
  v16[0] = 24;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v4,
         v16);
  if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_14006C1E8);
    v15 = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      v15);
  }
  v9 = a1[55];
  v10 = a1[53];
  *((_DWORD *)a1 + 112) = a2;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
          WdfDriverGlobals,
          v6,
          v10,
          a2,
          v9,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    *((_DWORD *)a1 + 392) = v11;
    *((_DWORD *)a1 + 393) = HUBPDO_GetUSBDErrorFromNTStatus(v11);
LABEL_8:
    HUBSM_AddEvent((__int64)(a1 + 64), 4020);
    return (unsigned int)v12;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64 *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    a1[53],
    HUBUCX_UCXIoctlComplete,
    a1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          a1[53],
          v6,
          0LL) )
  {
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
            WdfDriverGlobals,
            a1[53]);
    *((_DWORD *)a1 + 392) = v13;
    v12 = v13;
    *((_DWORD *)a1 + 393) = HUBPDO_GetUSBDErrorFromNTStatus(v13);
    if ( v12 < 0 )
      goto LABEL_8;
  }
  return (unsigned int)v12;
}
