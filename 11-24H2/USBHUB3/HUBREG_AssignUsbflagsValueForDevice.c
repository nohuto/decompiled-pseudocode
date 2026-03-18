/*
 * XREFs of HUBREG_AssignUsbflagsValueForDevice @ 0x1400865B4
 * Callers:
 *     HUBDSM_MarkingDeviceAsNotSupportingContainerIdBasedOnMSOSDescriptor @ 0x140023470 (HUBDSM_MarkingDeviceAsNotSupportingContainerIdBasedOnMSOSDescriptor.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1400815B0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBMISC_MarkDeviceAsNotSupportingMSOSDescriptor @ 0x140085DEC (HUBMISC_MarkDeviceAsNotSupportingMSOSDescriptor.c)
 *     HUBMISC_StoreDeviceMSOSVendorCodeInRegsitry @ 0x1400864AC (HUBMISC_StoreDeviceMSOSVendorCodeInRegsitry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ConvertUsbDeviceIdsToString @ 0x14002EFDC (HUBMISC_ConvertUsbDeviceIdsToString.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x140087604 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 */

__int64 __fastcall HUBREG_AssignUsbflagsValueForDevice(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rax
  int UsbflagsDeviceKey; // ebx
  __int64 v11; // [rsp+28h] [rbp-70h]
  __int64 v12; // [rsp+40h] [rbp-58h] BYREF
  char v13[8]; // [rsp+48h] [rbp-50h] BYREF
  char v14[8]; // [rsp+50h] [rbp-48h] BYREF
  char v15[8]; // [rsp+58h] [rbp-40h] BYREF

  HUBMISC_ConvertUsbDeviceIdsToString((unsigned __int16 *)(a1 + 1996), v15, v14, v13);
  v8 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  UsbflagsDeviceKey = HUBREG_OpenCreateUsbflagsDeviceKey(
                        (unsigned int)v15,
                        (unsigned int)v14,
                        (unsigned int)v13,
                        131078,
                        0LL,
                        (__int64)&v12,
                        1,
                        *(_QWORD *)(v8 + 1432));
  if ( UsbflagsDeviceKey >= 0 )
  {
    UsbflagsDeviceKey = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                          WdfDriverGlobals,
                          v12,
                          a2,
                          3LL,
                          a4,
                          a3);
    if ( UsbflagsDeviceKey < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = UsbflagsDeviceKey;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x13u,
        (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
        v11);
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)UsbflagsDeviceKey;
}
