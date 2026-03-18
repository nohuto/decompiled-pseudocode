/*
 * XREFs of HUBREG_WriteValueToDeviceHardwareKey @ 0x14008C350
 * Callers:
 *     HUBMISC_InstallMsOs20RegistryProperties @ 0x140030774 (HUBMISC_InstallMsOs20RegistryProperties.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1400815B0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBMISC_ParseAndWriteCustomPropertiesInRegistry @ 0x140085E24 (HUBMISC_ParseAndWriteCustomPropertiesInRegistry.c)
 *     HUBMISC_SetExtPropDescSemaphoreInRegistry @ 0x14008635C (HUBMISC_SetExtPropDescSemaphoreInRegistry.c)
 *     HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended @ 0x1400870C0 (HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended.c)
 *     HUBREG_UpdateSqmEnumerationFailureCode @ 0x14008B864 (HUBREG_UpdateSqmEnumerationFailureCode.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBREG_WriteValueToDeviceHardwareKey(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v9; // rax
  int v10; // ebx
  unsigned __int16 v11; // r9
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
          WdfDriverGlobals,
          v9,
          1LL,
          131078LL,
          0LL,
          &v14);
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_8;
    v11 = 96;
    goto LABEL_7;
  }
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, int, __int64))(WdfFunctions_01015
                                                                                               + 1928))(
          WdfDriverGlobals,
          v14,
          a2,
          a3,
          a4,
          a5);
  if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 97;
LABEL_7:
    LODWORD(v13) = v10;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v11,
      (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
      v13);
  }
LABEL_8:
  if ( v14 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v10;
}
