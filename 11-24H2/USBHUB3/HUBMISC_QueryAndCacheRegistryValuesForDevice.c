/*
 * XREFs of HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x140085F20
 * Callers:
 *     HUBDSM_QueryingRegistryValuesForDevice @ 0x1400236E0 (HUBDSM_QueryingRegistryValuesForDevice.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FE8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     HUBMISC_ConvertUsbDeviceIdsToString @ 0x14002EFDC (HUBMISC_ConvertUsbDeviceIdsToString.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     HUBREG_QueryUsbHardwareVerifierValue @ 0x140089248 (HUBREG_QueryUsbHardwareVerifierValue.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x140089810 (HUBREG_QueryUsbflagsValuesForDevice.c)
 */

__int64 __fastcall HUBMISC_QueryAndCacheRegistryValuesForDevice(__int64 a1)
{
  int v1; // ebx
  int UsbflagsValuesForDevice; // edi
  __int64 v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-48h]
  char v7[8]; // [rsp+40h] [rbp-28h] BYREF
  char v8[8]; // [rsp+48h] [rbp-20h] BYREF
  char v9[8]; // [rsp+50h] [rbp-18h] BYREF

  v1 = a1 + 1996;
  HUBMISC_ConvertUsbDeviceIdsToString((unsigned __int16 *)(a1 + 1996), v9, v8, v7);
  UsbflagsValuesForDevice = HUBREG_QueryUsbflagsValuesForDevice(a1, v9, v8, v7);
  HUBREG_QueryUsbHardwareVerifierValue(
    v1,
    (unsigned int)v9,
    (unsigned int)v8,
    (unsigned int)v7,
    (__int64)&g_HwVerifierDeviceName,
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    a1 + 2444);
  if ( UsbflagsValuesForDevice < 0 )
  {
    *(_DWORD *)(a1 + 2440) = 1073807366;
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    {
      LODWORD(v6) = UsbflagsValuesForDevice;
      McTemplateK0pq_EtwWriteTransfer(
        v4,
        &USBHUB3_ETW_EVENT_REGISTRY_FAILURE,
        (const GUID *)(a1 + 1524),
        *(_QWORD *)(a1 + 24),
        v6);
    }
  }
  return ((UsbflagsValuesForDevice >> 31) & 0xFFFFFFF4) + 4077;
}
