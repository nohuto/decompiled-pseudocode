/*
 * XREFs of UsbhGetPersistedUsbFlagsPath @ 0x1400263B0
 * Callers:
 *     UsbhGetRegPersistedUsbDeviceFlags @ 0x140026268 (UsbhGetRegPersistedUsbDeviceFlags.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1400275C4 (UsbhGetInitRegUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     RtlStringCbPrintfW @ 0x140025D00 (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

wchar_t *__fastcall UsbhGetPersistedUsbFlagsPath(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rdi
  wchar_t *v3; // rbx
  int PersistedStateLocation; // eax
  __int64 Pool2; // rax
  int v6; // eax
  char v7; // si
  NTSTATUS v8; // edi
  __int64 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]

  v13 = HIDWORD(a1);
  v12 = 0;
  v2 = (unsigned __int16 *)PdoExt(a2);
  v3 = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"usbflags",
                             0LL,
                             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
                             0LL,
                             0LL,
                             0,
                             &v12);
  if ( PersistedStateLocation == -2147483643 )
  {
    Pool2 = ExAllocatePool2(64LL, v12 + 26, 1112885333LL);
    v3 = (wchar_t *)Pool2;
    if ( Pool2 )
    {
      v6 = RtlGetPersistedStateLocation(
             L"usbflags",
             0LL,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
             0LL,
             Pool2,
             v12,
             0LL);
      v7 = v6;
      if ( v6 >= 0 )
      {
        LODWORD(v11) = v2[706];
        LODWORD(v10) = v2[705];
        v8 = RtlStringCbPrintfW(&v3[((unsigned __int64)v12 >> 1) - 1], 0x1CuLL, L"\\%04X%04X%04X", v2[704], v10, v11);
        if ( v8 < 0 )
        {
          ExFreePoolWithTag(v3, 0);
          v3 = 0LL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                76,
                (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
                v8);
          }
        }
      }
      else
      {
        ExFreePoolWithTag(v3, 0);
        v3 = 0LL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            75,
            (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
            v7);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
           && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        77,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      78,
      (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
      PersistedStateLocation);
  }
  return v3;
}
