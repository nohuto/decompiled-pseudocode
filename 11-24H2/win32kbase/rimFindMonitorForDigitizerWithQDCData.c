/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x1401E23E4
 * Callers:
 *     rimInUserCritCreatePointerDeviceInfo @ 0x1400C7140 (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMOnDisplayStateChange @ 0x14017B684 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1401D7170 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1401E1800 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserLogError @ 0x1400A6760 (UserLogError.c)
 *     RIMGetContainerId @ 0x1400A789C (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1400A7B30 (RIMGetPanelId.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6978 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvDxgkGetMonitorDeviceObject @ 0x1401462D0 (DrvDxgkGetMonitorDeviceObject.c)
 *     RIMGetDisplayMonitor @ 0x14014B4DC (RIMGetDisplayMonitor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _wcsnicmp @ 0x1401A07F0 (_wcsnicmp.c)
 *     wcsnlen @ 0x1401A08C0 (wcsnlen.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall rimFindMonitorForDigitizerWithQDCData(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r15d
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r11
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r10d
  int v15; // r14d
  _QWORD *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rsi
  ULONG v21; // r8d
  __int64 v22; // rcx
  unsigned __int16 *v23; // rax
  int v24; // ecx
  int v25; // edx
  unsigned __int16 *v26; // rax
  int v27; // ecx
  int v28; // edx
  int v29; // esi
  int v30; // eax
  _DWORD *v31; // rdx
  __int64 v32; // rdx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  char v37; // di
  bool v38; // si
  __int64 UserSessionState; // rax
  int v40; // r8d
  int v41; // edx
  int v42; // [rsp+40h] [rbp-C0h]
  int v43; // [rsp+44h] [rbp-BCh]
  int v44; // [rsp+4Ch] [rbp-B4h]
  int v45; // [rsp+50h] [rbp-B0h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h]
  struct _DEVICE_OBJECT *v50; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  PVOID Object; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v56; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v57[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-40h]
  int v59; // [rsp+C8h] [rbp-38h]
  _DWORD v60[3]; // [rsp+CCh] [rbp-34h] BYREF
  __int128 v61; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v62; // [rsp+E8h] [rbp-18h]
  _DWORD v63[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v64; // [rsp+108h] [rbp+8h]
  int v65; // [rsp+110h] [rbp+10h]
  _WORD v66[206]; // [rsp+114h] [rbp+14h] BYREF
  wchar_t Src[64]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v3 = 0;
  v6 = a1;
  v7 = 0LL;
  v56 = 0LL;
  if ( !*(_DWORD *)(a1 + 1336) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 829);
  if ( !a2 )
    goto LABEL_91;
  v8 = 0LL;
  v9 = 0LL;
  a1 = 0LL;
  v10 = 0LL;
  v48 = 0LL;
  v11 = 0LL;
  v49 = 0LL;
  v12 = 0LL;
  v46 = 0LL;
  v13 = 0LL;
  v52 = 0LL;
  v14 = 0;
  v53 = 0LL;
  v15 = 0;
  v54 = 0LL;
  v62 = 0LL;
  v47 = 0LL;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v42 = 0;
  if ( !*(_DWORD *)a2 )
    goto LABEL_60;
  v16 = (_QWORD *)(a2 + 8);
  v51 = (_QWORD *)(a2 + 8);
  while ( 1 )
  {
    if ( (*(_DWORD *)(v6 + 168) & 0x40) != 0 )
    {
      if ( !isChildPartition(a1) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 859);
        v51 = v16;
      }
      v17 = *v16;
      memset(v60, 0, sizeof(v60));
      v57[1] = 32;
      v18 = 216LL * v3;
      v58 = *(_QWORD *)(v18 + v17 + 16);
      v59 = *(_DWORD *)(v18 + v17 + 28);
      v57[0] = -24;
      if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v57, 0) >= 0
        && *(_DWORD *)(v6 + 1868) == v60[0]
        && __PAIR64__(*(_DWORD *)(v6 + 1880), *(_DWORD *)(v6 + 1872)) == *(_QWORD *)&v60[1] )
      {
        break;
      }
    }
    v19 = *v16;
    Object = 0LL;
    v50 = 0LL;
    v20 = 216LL * v3;
    v61 = 0LL;
    v51 = v16;
    if ( (int)DrvDxgkGetMonitorDeviceObject(
                v20 + v19 + 16,
                *(_DWORD *)(v20 + v19 + 28),
                (__int64)&Object,
                (__int64)&v50) >= 0 )
    {
      if ( (int)RIMGetContainerId(v50, &v61, 0LL) < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 903);
      RIMGetPanelId(v50, Src, v21);
      ObfDereferenceObject(Object);
    }
    memset(v66, 0, 0x190uLL);
    v22 = *v16;
    v64 = *(_QWORD *)(v20 + *v16 + 16);
    v65 = *(_DWORD *)(v20 + v22 + 28);
    v63[0] = 2;
    v63[1] = 420;
    if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v63, 0) >= 0 && v66[72] )
    {
      v23 = &v66[72];
      do
      {
        v24 = *(unsigned __int16 *)((char *)v23 + v6 + 1612 - (_QWORD)&v66[72]);
        v25 = *v23 - v24;
        if ( v25 )
          break;
        ++v23;
      }
      while ( v24 );
      if ( !v25 )
      {
        if ( v48 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 935);
        v48 = v20 + *v16;
      }
      v26 = &v66[72];
      do
      {
        v27 = *(unsigned __int16 *)((char *)v26 + v6 + 1356 - (_QWORD)&v66[72]);
        v28 = *v26 - v27;
        if ( v28 )
          break;
        ++v26;
      }
      while ( v27 );
      if ( !v28 )
      {
        if ( v49 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 941);
        v49 = v20 + *v16;
      }
    }
    if ( *(_OWORD *)(v6 + 2120) == v61 && v62 != *(_OWORD *)(v6 + 2120) )
    {
      ++v45;
      v54 = *(_QWORD *)(a2 + 8) + 216LL * v3;
    }
    v29 = wcsnlen((const wchar_t *)(v6 + 2140), 0x39uLL);
    v30 = wcsnlen(Src, 0x39uLL);
    if ( !v29 || v29 != v30 )
    {
      v15 = v42;
LABEL_41:
      v13 = v47;
      goto LABEL_42;
    }
    v15 = v42;
    if ( wcsnicmp((const wchar_t *)(v6 + 2140), Src, 0x39uLL) )
      goto LABEL_41;
    v13 = *(_QWORD *)(a2 + 8) + 216LL * v3;
    v15 = v42 + 1;
    v47 = v13;
    ++v42;
LABEL_42:
    if ( *(_DWORD *)(v6 + 1352) == 6 )
    {
      v31 = (_DWORD *)(*(_QWORD *)(a2 + 8) + 216LL * v3);
      if ( *(_DWORD *)(v6 + 1868) == v31[4] && *(_DWORD *)(v6 + 1872) == v31[5] && *(_DWORD *)(v6 + 1876) == v31[6] )
        v7 = *(_QWORD *)(a2 + 8) + 216LL * v3;
    }
    v32 = *(_QWORD *)(a2 + 8);
    v33 = *(_DWORD *)(v32 + 216LL * v3 + 80);
    if ( v33 == 0x80000000 || v33 == 11 || v33 == 13 )
    {
      ++v43;
      v10 = v32 + 216LL * v3;
      v14 = v44;
      v11 = v53;
      v52 = v10;
    }
    else
    {
      v11 = v32 + 216LL * v3;
      v10 = v52;
      v14 = ++v44;
      v53 = v11;
    }
    a1 = v46;
    if ( !v46 )
    {
      if ( *(_DWORD *)(216LL * v3 + v32 + 116) || *(_DWORD *)(216LL * v3 + v32 + 120) )
      {
        a1 = 0LL;
      }
      else
      {
        a1 = v32 + 216LL * v3;
        v46 = a1;
      }
    }
    if ( ++v3 >= *(_DWORD *)a2 )
      goto LABEL_59;
    v16 = (_QWORD *)(a2 + 8);
  }
  a1 = v46;
  v13 = v47;
  v14 = v44;
  v10 = v52;
  v7 = v18 + *v51;
  v11 = v53;
  v15 = v42;
LABEL_59:
  v12 = v54;
  v9 = v49;
  v8 = v48;
LABEL_60:
  if ( a3 )
  {
    *a3 = 0;
    if ( v14 )
      *a3 = 1;
  }
  if ( v7 )
  {
LABEL_86:
    if ( !(unsigned int)RIMGetDisplayMonitor(v7, (unsigned int *)a2, &v56) )
      goto LABEL_91;
    if ( v56 )
      v35 = *v56;
    else
      v35 = 0LL;
    *(_QWORD *)(v6 + 1344) = v35;
    *(_QWORD *)(v6 + 1868) = *(_QWORD *)(v7 + 16);
    *(_DWORD *)(v6 + 1880) = *(_DWORD *)(v7 + 28);
    *(_DWORD *)(v6 + 1876) = *(_DWORD *)(v7 + 24);
    goto LABEL_103;
  }
  if ( v8 )
  {
    v7 = v8;
    *(_DWORD *)(v6 + 1352) = 5;
    goto LABEL_86;
  }
  if ( v9 )
  {
    v7 = v9;
    *(_DWORD *)(v6 + 1352) = 1;
    goto LABEL_86;
  }
  if ( v13 && v15 == 1 )
  {
    v7 = v13;
    goto LABEL_71;
  }
  if ( v12 && v45 == 1 )
  {
    v7 = v12;
    goto LABEL_71;
  }
  v34 = *(_DWORD *)(v6 + 2136);
  if ( v34 )
  {
    if ( v34 != 1 || !v11 || v14 != 1 )
      goto LABEL_83;
    v7 = v11;
LABEL_71:
    *(_DWORD *)(v6 + 1352) = 2;
    goto LABEL_86;
  }
  if ( v10 && v43 == 1 )
  {
    v7 = v10;
    goto LABEL_71;
  }
LABEL_83:
  if ( a1 )
  {
    *(_DWORD *)(v6 + 1352) = 3;
    v7 = a1;
    if ( a3 )
      UserLogError(-2147483385);
    goto LABEL_86;
  }
LABEL_91:
  if ( a3 )
    UserLogError(-2147483385);
  v36 = *(_QWORD *)(W32GetUserSessionState(a1) + 57008);
  if ( *(_QWORD *)(v36 + 104) )
    v35 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v36) + 57008) + 104LL);
  else
    v35 = 0LL;
  *(_QWORD *)(v6 + 1344) = v35;
  *(_DWORD *)(v6 + 1352) = 4;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
  {
    v37 = 0;
  }
  v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v35);
    LOBYTE(v40) = v38;
    LOBYTE(v41) = v37;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v41,
      v40,
      *(_QWORD *)(UserSessionState + 19392),
      3,
      1,
      11,
      (__int64)&WPP_2aa4d20025f835b2fe1cb6898cbf8660_Traceguids);
    v35 = *(_QWORD *)(v6 + 1344);
  }
LABEL_103:
  if ( !v35 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1121);
}
