/*
 * XREFs of Controller_PopulateDeviceFlagsFromKse @ 0x140041408
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140076BD8 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_diS @ 0x140033B10 (WPP_RECORDER_SF_diS.c)
 *     RtlStringCchPrintfW @ 0x140044390 (RtlStringCchPrintfW.c)
 *     WPP_RECORDER_SF_S @ 0x140044728 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlagsFromKse(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v5; // r14
  unsigned int v6; // esi
  char *v7; // r12
  _QWORD *v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // edx
  int v19; // r8d
  int v20; // [rsp+28h] [rbp-E0h]
  int v21; // [rsp+28h] [rbp-E0h]
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v29[3]; // [rsp+80h] [rbp-88h] BYREF
  wchar_t pszDest[64]; // [rsp+98h] [rbp-70h] BYREF

  v29[0] = L"USBXHCI";
  result = (__int64)L"USBXHCI2";
  v22 = 0LL;
  v29[1] = L"USBXHCI2";
  v5 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
  {
    v6 = 0;
    v7 = (char *)v29 - a1;
    v8 = (_QWORD *)(a1 + 736);
    do
    {
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ALL");
      v9 = *(_QWORD *)((char *)v8 + (_QWORD)v7 - 736);
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v22) >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v10, v11, 0x9Fu, v20, v6, v22, pszDest);
        *v8 |= v22;
      }
      if ( *(_DWORD *)(a1 + 644) == 1 )
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X", *(unsigned __int16 *)(a1 + 648));
      else
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S", a1 + 704);
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v23) >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v12, v13, 0xA0u, v20, v6, v23, pszDest);
        v5 = 1;
        *v8 |= v23;
      }
      if ( *(_DWORD *)(a1 + 644) == 1 )
      {
        v21 = *(unsigned __int16 *)(a1 + 652);
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X", *(unsigned __int16 *)(a1 + 648));
      }
      else
      {
        v21 = a1 + 709;
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S", a1 + 704);
      }
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v24) >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v14, v15, 0xA1u, v21, v6, v24, pszDest);
        v5 = 1;
        *v8 |= v24;
      }
      if ( *(_DWORD *)(a1 + 644) == 1 )
      {
        v20 = *(unsigned __int16 *)(a1 + 652);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X",
          *(unsigned __int16 *)(a1 + 648));
      }
      else
      {
        v20 = a1 + 709;
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S", a1 + 704);
      }
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v25) >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v16, a3, 0xA2u, v20, v6, v25, pszDest);
        v5 = 1;
        *v8 |= v25;
      }
      v17 = *(_QWORD *)(a1 + 728);
      if ( v17 != -1 )
      {
        if ( *(_DWORD *)(a1 + 644) == 1 )
        {
          v20 = *(unsigned __int16 *)(a1 + 652);
          RtlStringCchPrintfW(
            pszDest,
            0x3CuLL,
            L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X&%I64X",
            *(unsigned __int16 *)(a1 + 648));
        }
        else
        {
          v20 = a1 + 709;
          RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S&%I64X", a1 + 704);
        }
        if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v26) >= 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v17, a3, 0xA3u, v20, v6, v26, pszDest);
          v5 = 1;
          *v8 |= v26;
        }
      }
      if ( *(_DWORD *)(a1 + 644) == 1 )
      {
        v20 = *(unsigned __int16 *)(a1 + 652);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X",
          *(unsigned __int16 *)(a1 + 648));
        if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v27) >= 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v17, a3, 0xA4u, v20, v6, v27, pszDest);
          v5 = 1;
          *v8 |= v27;
        }
        if ( *(_DWORD *)(a1 + 644) == 1 )
        {
          v20 = *(unsigned __int16 *)(a1 + 652);
          RtlStringCchPrintfW(
            pszDest,
            0x3CuLL,
            L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X",
            *(unsigned __int16 *)(a1 + 648));
          if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v28) >= 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v17, a3, 0xA5u, v20, v6, v28, pszDest);
            v5 = 1;
            *v8 |= v28;
          }
        }
      }
      ++v6;
      ++v8;
    }
    while ( v6 < 2 );
    result = *(_QWORD *)(a1 + 736);
    if ( (result & 0x10) != 0 )
    {
      v18 = 4;
      v19 = 4108;
    }
    else
    {
      if ( (result & 0x1000000) == 0 )
        goto LABEL_54;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v17, 4, 166, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      }
      Controller_HwVerifierBreakIfEnabled(
        a1,
        0,
        0,
        1LL,
        "Controller Firmware has known issues, and newer firmware is available",
        0LL,
        0LL);
      v18 = 0;
      v19 = 4111;
    }
    result = Controller_ReportFatalError(a1, v18, v19, 0, 0LL, 0LL, 0LL);
LABEL_54:
    if ( v5 )
      return result;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_S(*(_QWORD *)(a1 + 72), 3, a3, 167, v20, (__int64)pszDest);
  return result;
}
