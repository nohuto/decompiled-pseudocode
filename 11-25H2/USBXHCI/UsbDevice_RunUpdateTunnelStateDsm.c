/*
 * XREFs of UsbDevice_RunUpdateTunnelStateDsm @ 0x14004E6F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     UsbDevice_UpdateUsbDevice @ 0x14003BBF8 (UsbDevice_UpdateUsbDevice.c)
 *     WPP_RECORDER_SF_di @ 0x140044FA8 (WPP_RECORDER_SF_di.c)
 *     Feature_UTSP__private_IsEnabledDeviceUsageNoInline @ 0x14004DF34 (Feature_UTSP__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     Controller_ExecuteDSM @ 0x140081BA8 (Controller_ExecuteDSM.c)
 */

__int64 __fastcall UsbDevice_RunUpdateTunnelStateDsm(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // edx

  v2 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_14006B060);
  v3 = *v2;
  v4 = v2[2];
  v5 = v2[1];
  v6 = Controller_ExecuteDSM(*(_QWORD *)(*v2 + 8), &GUID_USB_ACPI_DSM, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_di(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      4u,
      0xCu,
      0x1Du,
      (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
      *(_DWORD *)(v3 + 44),
      v6);
  if ( (unsigned int)Feature_UTSP__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v6 == 1 )
    {
      *(_BYTE *)(v5 + 67) = 3;
    }
    else if ( v6 == 2 )
    {
      *(_BYTE *)(v5 + 67) = 2;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v7,
          12,
          30,
          (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
          *(_DWORD *)(v3 + 44));
      }
      *(_BYTE *)(v5 + 67) = 4;
    }
  }
  *(_BYTE *)(v5 + 66) = v6 == 1;
  UsbDevice_UpdateUsbDevice(v3, v5);
  *(_QWORD *)(v3 + 424) = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(WdfDriverGlobals, v4, 0LL);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 1664))(WdfDriverGlobals, a1);
}
