/*
 * XREFs of UsbhGetGlobalUxdSettings @ 0x1C0059EA0
 * Callers:
 *     UsbhRegPnpStart @ 0x1C0046820 (UsbhRegPnpStart.c)
 *     UsbhDeleteUxdSettings @ 0x1C0059BF8 (UsbhDeleteUxdSettings.c)
 *     UsbhUpdateUxdSettings @ 0x1C005ACF0 (UsbhUpdateUxdSettings.c)
 *     UsbhUxdShutdown @ 0x1C005B1D0 (UsbhUxdShutdown.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B830 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C00485E4 (WPP_RECORDER_SF_SD.c)
 */

__int64 __fastcall UsbhGetGlobalUxdSettings(__int64 a1, _OWORD *a2)
{
  unsigned int v2; // edi
  PVOID SystemRoutineAddress; // rax
  int v4; // eax
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // esi
  _QWORD *v9; // rbx
  int v11; // [rsp+20h] [rbp-E0h]
  __int64 v12; // [rsp+30h] [rbp-D0h]
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall *v15)(__int64, __int64, _DWORD *, int, __int64, _DWORD *); // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+68h] [rbp-98h]
  const wchar_t *v17; // [rsp+70h] [rbp-90h]
  _OWORD *v18; // [rsp+78h] [rbp-88h] BYREF
  int v19; // [rsp+80h] [rbp-80h]
  _OWORD *v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v22)(__int64, __int64, _DWORD *, int, __int64, _DWORD *); // [rsp+98h] [rbp-68h]
  int v23; // [rsp+A0h] [rbp-60h]
  const wchar_t *v24; // [rsp+A8h] [rbp-58h]
  char *v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+B8h] [rbp-48h]
  char *v27; // [rsp+C0h] [rbp-40h]
  int v28; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v29)(__int64, __int64, _DWORD *, int, __int64, _DWORD *); // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+D8h] [rbp-28h]
  const wchar_t *v31; // [rsp+E0h] [rbp-20h]
  char *v32; // [rsp+E8h] [rbp-18h]
  int v33; // [rsp+F0h] [rbp-10h]
  char *v34; // [rsp+F8h] [rbp-8h]
  int v35; // [rsp+100h] [rbp+0h]
  __int64 (__fastcall *v36)(__int64, __int64, _DWORD *, int, __int64, _DWORD *); // [rsp+108h] [rbp+8h]
  int v37; // [rsp+110h] [rbp+10h]
  const wchar_t *v38; // [rsp+118h] [rbp+18h]
  char *v39; // [rsp+120h] [rbp+20h]
  int v40; // [rsp+128h] [rbp+28h]
  int *v41; // [rsp+130h] [rbp+30h]
  int v42; // [rsp+138h] [rbp+38h]
  __int64 v43; // [rsp+140h] [rbp+40h]
  int v44; // [rsp+148h] [rbp+48h]
  __int128 v45; // [rsp+150h] [rbp+50h]
  int v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  int v48; // [rsp+170h] [rbp+70h]

  v18 = a2;
  v13 = 0;
  v15 = UsbhQueryGlobalHubValue;
  v17 = L"UxdGlobalDeleteOnShutdown";
  v16 = 0;
  v19 = 4;
  v24 = L"UxdGlobalDeleteOnReload";
  v2 = 280;
  v20 = a2;
  v25 = (char *)a2 + 4;
  v27 = (char *)a2 + 4;
  v31 = L"UxdGlobalDeleteOnDisconnect";
  v32 = (char *)a2 + 8;
  v34 = (char *)a2 + 8;
  v38 = L"UxdGlobalEnable";
  v39 = (char *)a2 + 12;
  v41 = &v13;
  *a2 = 0LL;
  v21 = 4;
  v22 = UsbhQueryGlobalHubValue;
  v23 = 0;
  v26 = 4;
  v28 = 4;
  v29 = UsbhQueryGlobalHubValue;
  v30 = 0;
  v33 = 4;
  v35 = 4;
  v36 = UsbhQueryGlobalHubValue;
  v37 = 0;
  v40 = 4;
  v42 = 4;
  v43 = 0LL;
  v44 = 0;
  v45 = 0LL;
  v46 = 0;
  v47 = 0LL;
  v48 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x3Du,
      (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  v11 = 0;
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v4 = ((__int64 (__fastcall *)(__int64, const wchar_t *, __int64 (__fastcall **)(__int64, __int64, _DWORD *, int, __int64, _DWORD *)))SystemRoutineAddress)(
         1LL,
         L"usbhub\\uxd_control\\policy",
         &v15);
  v8 = v4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x3Eu,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        v4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        v6,
        63,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        (__int64)L"usbhub\\uxd_control\\policy");
  }
  v9 = &v18;
  do
  {
    if ( !*(v9 - 3) )
      break;
    if ( *((_DWORD *)v9 + 2) == 4
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v12) = *(_DWORD *)*v9;
      WPP_RECORDER_SF_SD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v12,
        v6,
        v7,
        v11,
        (const wchar_t *)*(v9 - 1),
        v12);
    }
    v9 += 7;
    v2 -= 56;
  }
  while ( v2 >= 0x38 );
  return v8;
}
