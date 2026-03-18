/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoInit @ 0x140043CE0
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x140004238 (CommonBuffer_AcquireBuffer.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x14002CE68 (WPP_RECORDER_SF_q.c)
 *     Controller_InUseByDebugger @ 0x14003CC8C (Controller_InUseByDebugger.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x140077520 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x14007887C (Controller_SetDeviceDescription.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoInit(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 v3; // rbx
  int v4; // edx
  NTSTATUS v5; // eax
  int v6; // edx
  __int64 v7; // rax
  int v8; // edx

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  *(_BYTE *)(v3 + 16) = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 72), v2, 4, 56, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v1);
  }
  if ( Controller_InUseByDebugger((_QWORD *)v3) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 72), v4, 4, 57, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v1);
    }
    v5 = PoRegisterPowerSettingCallback(
           0LL,
           &GUID_LOW_POWER_EPOCH,
           (PPOWER_SETTING_CALLBACK)Controller_LPEEnterExitCallback,
           (PVOID)v3,
           (PVOID *)(v3 + 992));
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 72), v6, 4, 58, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v5);
    }
  }
  Controller_SetDeviceDescription(v3);
  Controller_PopulateHardwareVerifierFlags(v3);
  Controller_PopulateDeviceFlags(v3);
  if ( _bittest64((const signed __int64 *)(v3 + 736), 0x22u) )
  {
    v7 = CommonBuffer_AcquireBuffer(*(char **)(v3 + 120), 512LL, v3, 829584451LL);
    *(_QWORD *)(v3 + 856) = v7;
    if ( !v7 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 72), v8, 4, 59, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v1);
    }
  }
  return 0LL;
}
