/*
 * XREFs of HUBFDO_AssignUsb4PortMappingProperty @ 0x14007980C
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007A970 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     RtlStringCbPrintfExW @ 0x14000F744 (RtlStringCbPrintfExW.c)
 *     WPP_RECORDER_SF_DZd @ 0x14000FA2C (WPP_RECORDER_SF_DZd.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBFDO_AssignUsb4PortMappingProperty(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rax
  unsigned int v4; // ebx
  unsigned __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rax
  size_t v9; // rbx
  __int64 v10; // rdx
  wchar_t *Pool2; // r12
  int v12; // r9d
  __int64 v13; // rax
  wchar_t *v14; // rsi
  size_t v15; // r14
  __int64 v16; // r15
  __int64 v17; // r8
  __int64 v18; // r9
  NTSTRSAFE_PWSTR v19; // rsi
  __int64 v20; // rax
  size_t v21; // rbx
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  struct _DEVICE_OBJECT *v24; // rax
  int v25; // r9d
  int dwFlags; // [rsp+20h] [rbp-30h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-28h]
  PVOID Data; // [rsp+30h] [rbp-20h]
  __int128 v30; // [rsp+40h] [rbp-10h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp+40h] BYREF
  size_t pcbRemaining; // [rsp+98h] [rbp+48h] BYREF

  v1 = a1 + 2376;
  v2 = *(_QWORD *)(a1 + 2376);
  v4 = 0;
  v5 = 0LL;
  v30 = 0LL;
  v6 = v2 - 248;
  if ( a1 + 2376 == v2 )
    return v4;
  do
  {
    v7 = *(_QWORD *)(v6 + 1464);
    if ( v7 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v7,
        &v30);
      if ( v5 + (unsigned __int16)v30 + 14LL < v5 )
      {
        v4 = -1073741675;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v4;
        v12 = 35;
LABEL_35:
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v7, 3, v12, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
        return v4;
      }
      v5 += (unsigned __int16)v30 + 14LL;
      v4 = 0;
    }
    v8 = *(_QWORD *)(v6 + 248);
    v6 = v8 - 248;
  }
  while ( v1 != v8 );
  if ( !v5 )
    return v4;
  v9 = v5 + 2;
  if ( v5 + 2 < v5 )
  {
    v4 = -1073741675;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v12 = 36;
    goto LABEL_35;
  }
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, v5 + 2, 1748191317LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v13 = *(_QWORD *)(a1 + 2376);
  pcbRemaining = v5 + 2;
  v14 = Pool2;
  ppszDestEnd = Pool2;
  v15 = v9;
  v16 = v13 - 248;
  if ( a1 + 2376 == v13 )
  {
LABEL_18:
    if ( v9 < 2 )
    {
LABEL_24:
      v4 = -2147483643;
      goto LABEL_32;
    }
    v21 = v9 - 2;
    *v14 = 0;
    if ( v15 < v21 )
    {
      v4 = -1073741675;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v25 = 38;
    }
    else
    {
      v22 = v15 - v21;
      if ( v22 <= 0xFFFFFFFF )
      {
        v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                a1);
        v24 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                         WdfDriverGlobals,
                                         v23);
        v4 = IoSetDevicePropertyData(v24, &DEVPKEY_Device_Usb4HostRouterPortMappings, 0, 0, 0x2012u, v22, Pool2);
        if ( (v4 & 0x80000000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(pszFormat) = v4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2536),
            2u,
            3u,
            0x28u,
            (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
            pszFormat);
        }
        goto LABEL_32;
      }
      v4 = -1073741675;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v25 = 39;
    }
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v10, 3, v25, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
    goto LABEL_32;
  }
  while ( 2 )
  {
    v10 = *(_QWORD *)(v16 + 1464);
    if ( !v10 )
    {
LABEL_17:
      v20 = *(_QWORD *)(v16 + 248);
      v16 = v20 - 248;
      if ( a1 + 2376 == v20 )
        goto LABEL_18;
      continue;
    }
    break;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2472))(
    WdfDriverGlobals,
    v10,
    &v30);
  LODWORD(Data) = *(unsigned __int16 *)(v16 + 200);
  v4 = RtlStringCbPrintfExW(v14, v9, &ppszDestEnd, &pcbRemaining, 0x200u, L"%u#%wZ", Data, &v30);
  if ( (v4 & 0x80000000) == 0 )
  {
    if ( pcbRemaining < 4 )
      goto LABEL_24;
    v19 = ppszDestEnd;
    v9 = pcbRemaining - 2;
    pcbRemaining -= 2LL;
    *ppszDestEnd = 0;
    v14 = v19 + 1;
    ppszDestEnd = v14;
    goto LABEL_17;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DZd(*(_QWORD *)(a1 + 2536), v10, v17, v18, dwFlags);
LABEL_32:
  ExFreePoolWithTag(Pool2, 0x68334855u);
  return v4;
}
