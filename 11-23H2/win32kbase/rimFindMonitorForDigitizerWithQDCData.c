/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x1C01907BC
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C007298C (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0177150 (RIMEnableMonitorMappingForDevice.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C018CBD8 (RIMVirtCreatePointerDeviceInfo.c)
 *     rimInUserCritCreatePointerDeviceInfo @ 0x1C018E700 (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C018F630 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0194448 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetContainerId @ 0x1C006D15C (RIMGetContainerId.c)
 *     DrvDxgkGetMonitorDeviceObject @ 0x1C006D2C0 (DrvDxgkGetMonitorDeviceObject.c)
 *     RIMGetPanelId @ 0x1C006D320 (RIMGetPanelId.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00C5450 (DrvDisplayConfigGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1C00CE408 (_wcsnicmp.c)
 *     wcsnlen @ 0x1C00CE5EC (wcsnlen.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     UserLogError @ 0x1C014F480 (UserLogError.c)
 *     RIMGetDisplayMonitor @ 0x1C018F7CC (RIMGetDisplayMonitor.c)
 */

void __fastcall rimFindMonitorForDigitizerWithQDCData(__int64 a1, unsigned int *a2, int *a3)
{
  int v3; // r12d
  int *v4; // r13
  unsigned int *v5; // r15
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r9
  _QWORD *v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r15
  ULONG v19; // r8d
  __int64 v20; // rcx
  unsigned __int16 *v21; // rax
  int v22; // ecx
  int v23; // edx
  unsigned __int16 *v24; // rax
  int v25; // ecx
  int v26; // edx
  int v27; // esi
  int v28; // eax
  _DWORD *v29; // rcx
  unsigned int *v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 *v34; // rcx
  int v35; // [rsp+40h] [rbp-C0h]
  unsigned int v36; // [rsp+48h] [rbp-B8h]
  int v37; // [rsp+4Ch] [rbp-B4h]
  int v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h]
  int v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+70h] [rbp-90h]
  struct _DEVICE_OBJECT *v42; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v43; // [rsp+88h] [rbp-78h]
  unsigned int *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  PVOID Object; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v50; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v51; // [rsp+C8h] [rbp-38h]
  _DWORD v52[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+E0h] [rbp-20h]
  _DWORD v55[3]; // [rsp+E4h] [rbp-1Ch] BYREF
  __int128 v56; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v57; // [rsp+100h] [rbp+0h]
  _DWORD v58[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v59; // [rsp+118h] [rbp+18h]
  int v60; // [rsp+120h] [rbp+20h]
  _WORD v61[206]; // [rsp+124h] [rbp+24h] BYREF
  wchar_t Src[64]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v3 = 0;
  v51 = a2;
  v4 = a3;
  v5 = a2;
  v7 = 0LL;
  v50 = 0LL;
  if ( !*(_DWORD *)(a1 + 1336) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 829);
  if ( !v5 )
    goto LABEL_91;
  v8 = 0;
  v39 = 0LL;
  a2 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v47 = 0LL;
  v12 = 0LL;
  v44 = 0LL;
  v13 = 0LL;
  v45 = 0LL;
  v14 = 0LL;
  v46 = 0LL;
  LODWORD(a3) = 0;
  v48 = 0LL;
  v41 = 0LL;
  v35 = 0;
  v37 = 0;
  v40 = 0;
  v38 = 0;
  v57 = 0LL;
  v36 = 0;
  if ( !*v5 )
    goto LABEL_59;
  v15 = v5 + 2;
  v43 = v5 + 2;
  while ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
  {
LABEL_14:
    v43 = v15;
    Object = 0LL;
    v42 = 0LL;
    v18 = 216LL * v36;
    v56 = 0LL;
    if ( (int)DrvDxgkGetMonitorDeviceObject(
                *v15 + v18 + 16,
                *(unsigned int *)(v18 + *v15 + 28),
                (__int64)&Object,
                (__int64)&v42) >= 0 )
    {
      if ( (int)RIMGetContainerId(v42, &v56, 0LL) < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 903);
      RIMGetPanelId(v42, Src, v19);
      ObfDereferenceObject(Object);
    }
    memset(v61, 0, 0x190uLL);
    v20 = *v15;
    v59 = *(_QWORD *)(v18 + *v15 + 16);
    v60 = *(_DWORD *)(v18 + v20 + 28);
    v58[0] = 2;
    v58[1] = 420;
    if ( (int)DrvDisplayConfigGetDeviceInfo((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v58) >= 0 && v61[72] )
    {
      v21 = &v61[72];
      do
      {
        v22 = *(unsigned __int16 *)((char *)v21 + a1 + 1612 - (_QWORD)&v61[72]);
        v23 = *v21 - v22;
        if ( v23 )
          break;
        ++v21;
      }
      while ( v22 );
      if ( !v23 )
      {
        if ( v10 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 935);
        v39 = v18 + *v15;
      }
      v24 = &v61[72];
      do
      {
        v25 = *(unsigned __int16 *)((char *)v24 + a1 + 1356 - (_QWORD)&v61[72]);
        v26 = *v24 - v25;
        if ( v26 )
          break;
        ++v24;
      }
      while ( v25 );
      if ( !v26 )
      {
        if ( v11 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 941);
        v47 = v18 + *v15;
      }
    }
    if ( *(_OWORD *)(a1 + 2120) == v56 && v57 != *(_OWORD *)(a1 + 2120) )
    {
      ++v40;
      v48 = v18 + *v15;
    }
    v27 = wcsnlen((const wchar_t *)(a1 + 2140), 0x39uLL);
    v28 = wcsnlen(Src, 0x39uLL);
    if ( v27 && v27 == v28 && !wcsnicmp((const wchar_t *)(a1 + 2140), Src, 0x39uLL) )
    {
      v14 = v18 + *v15;
      ++v38;
      v41 = v14;
    }
    else
    {
      v14 = v41;
    }
    if ( *(_DWORD *)(a1 + 1352) == 6 )
    {
      v29 = (_DWORD *)(v18 + *v15);
      if ( *(_DWORD *)(a1 + 1868) == v29[4] && *(_DWORD *)(a1 + 1872) == v29[5] && *(_DWORD *)(a1 + 1876) == v29[6] )
        v7 = v18 + *v15;
    }
    v30 = (unsigned int *)(v18 + *v15);
    v31 = v30[20];
    if ( v31 == 0x80000000 || v31 == 11 || v31 == 13 )
    {
      ++v35;
      v12 = v18 + *v15;
      LODWORD(a3) = v37;
      v13 = v46;
      v45 = v12;
    }
    else
    {
      v13 = v18 + *v15;
      v12 = v45;
      LODWORD(a3) = ++v37;
      v46 = v13;
    }
    a2 = v44;
    if ( !v44 && !v30[29] )
    {
      if ( !v30[30] )
        a2 = v30;
      v44 = a2;
    }
    v5 = v51;
    v10 = v39;
    v11 = v47;
    if ( ++v36 >= *v51 )
      goto LABEL_58;
  }
  if ( !isChildPartition() )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 859);
    v43 = v15;
  }
  v16 = *v15;
  memset(v55, 0, sizeof(v55));
  v17 = 216LL * v36;
  v52[1] = 32;
  v53 = *(_QWORD *)(v17 + v16 + 16);
  v54 = *(_DWORD *)(v17 + v16 + 28);
  v52[0] = -24;
  if ( (int)DrvDisplayConfigGetDeviceInfo((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v52) < 0
    || *(_DWORD *)(a1 + 1868) != v55[0]
    || __PAIR64__(*(_DWORD *)(a1 + 1880), *(_DWORD *)(a1 + 1872)) != *(_QWORD *)&v55[1] )
  {
    v10 = v39;
    goto LABEL_14;
  }
  a2 = v44;
  LODWORD(a3) = v37;
  v14 = v41;
  v12 = v45;
  v7 = v17 + *v43;
  v10 = v39;
  v13 = v46;
LABEL_58:
  v3 = v38;
  v8 = 0;
  v9 = v48;
LABEL_59:
  if ( v4 )
  {
    *v4 = 0;
    if ( (_DWORD)a3 )
      v8 = 1;
    *v4 = v8;
  }
  if ( v7 )
  {
LABEL_66:
    if ( !(unsigned int)RIMGetDisplayMonitor(v7, v5, &v50) )
      goto LABEL_91;
    if ( v50 )
      v32 = *v50;
    else
      v32 = 0LL;
    *(_QWORD *)(a1 + 1344) = v32;
    *(_QWORD *)(a1 + 1868) = *(_QWORD *)(v7 + 16);
    *(_DWORD *)(a1 + 1880) = *(_DWORD *)(v7 + 28);
    *(_DWORD *)(a1 + 1876) = *(_DWORD *)(v7 + 24);
    goto LABEL_103;
  }
  if ( v10 )
  {
    v7 = v10;
    *(_DWORD *)(a1 + 1352) = 5;
    goto LABEL_66;
  }
  if ( v11 )
  {
    v7 = v11;
    *(_DWORD *)(a1 + 1352) = 1;
    goto LABEL_66;
  }
  if ( v14 && v3 == 1 )
  {
    v7 = v14;
    *(_DWORD *)(a1 + 1352) = 2;
    goto LABEL_66;
  }
  if ( v9 && v40 == 1 )
  {
    v7 = v9;
    goto LABEL_77;
  }
  v33 = *(_DWORD *)(a1 + 2136);
  if ( v33 )
  {
    if ( v33 != 1 || !v13 || (_DWORD)a3 != 1 )
      goto LABEL_86;
    v7 = v13;
LABEL_77:
    *(_DWORD *)(a1 + 1352) = 2;
    goto LABEL_66;
  }
  if ( v12 && v35 == 1 )
  {
    v7 = v12;
    goto LABEL_77;
  }
LABEL_86:
  if ( a2 )
  {
    *(_DWORD *)(a1 + 1352) = 3;
    v7 = (__int64)a2;
    if ( v4 )
      UserLogError(-2147483385);
    goto LABEL_66;
  }
LABEL_91:
  if ( v4 )
    UserLogError(-2147483385);
  v34 = (__int64 *)*((_QWORD *)gpDispInfo + 12);
  if ( v34 )
    v32 = *v34;
  else
    v32 = 0LL;
  *(_QWORD *)(a1 + 1344) = v32;
  *(_DWORD *)(a1 + 1352) = 4;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      3,
      1,
      11,
      (__int64)&WPP_2aa4d20025f835b2fe1cb6898cbf8660_Traceguids);
    v32 = *(_QWORD *)(a1 + 1344);
  }
LABEL_103:
  if ( !v32 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1121);
}
