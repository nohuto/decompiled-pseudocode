/*
 * XREFs of UsbhRegDriverEntry @ 0x1400523B0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhRegQueryGlobalKey @ 0x140025D7C (UsbhRegQueryGlobalKey.c)
 *     WPP_RECORDER_SF_S @ 0x140048F98 (WPP_RECORDER_SF_S.c)
 *     UsbhRegCreateUsbflagsKey @ 0x140052350 (UsbhRegCreateUsbflagsKey.c)
 */

__int64 __fastcall UsbhRegDriverEntry(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r8
  unsigned __int16 v5; // di
  const WCHAR *Pool2; // rax
  __int64 v7; // r8
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  DestinationString = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      a3,
      91,
      (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
      *(_QWORD *)(a2 + 8));
  v10 = 0LL;
  KseQueryDeviceFlags(L"USBHUB:GLOBAL_FLAGS", L"USBHUB", &v10);
  if ( (v10 & 1) != 0 )
    dword_14006F70C = 1;
  UsbhRegQueryGlobalKey(1u, (__int64)L"usb", v4, (__int64)&GlobalUsbhubLegacyValues, 0x70u);
  v5 = *(_WORD *)a2 + 12;
  Pool2 = (const WCHAR *)ExAllocatePool2(256LL, v5, 1112885333LL);
  if ( Pool2 )
  {
    RtlInitUnicodeString(&DestinationString, Pool2);
    DestinationString.MaximumLength = v5;
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)a2);
    if ( RtlAppendUnicodeToString(&DestinationString, L"\\hubg") >= 0 )
      UsbhRegQueryGlobalKey(0, (__int64)DestinationString.Buffer, v7, (__int64)&GlobalUsbhubValues, 0x460u);
    RtlFreeUnicodeString(&DestinationString);
  }
  if ( (UsbhRegCreateUsbflagsKey() & 0xC0000000) == 0xC0000000 )
    HIDWORD(qword_14006F5BC) = 2;
  return 0LL;
}
