/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x14004D070
 * Callers:
 *     DrvSetGraphicsDevices @ 0x14004C8A0 (DrvSetGraphicsDevices.c)
 *     UpdateGraphicsDeviceList @ 0x14004CAB0 (UpdateGraphicsDeviceList.c)
 *     DrvInitConsole @ 0x1401794EC (DrvInitConsole.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401ADE38 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE8CC (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x140012F70 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserIsConsoleConnection @ 0x140013950 (UserIsConsoleConnection.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x140017264 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14001975C (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001A960 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14004CB14 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     UserIsDisconnectConnection @ 0x14004DE60 (UserIsDisconnectConnection.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x14004E238 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x14004E4EC (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     bSetDeviceSessionUsage @ 0x14004E670 (bSetDeviceSessionUsage.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x14004E834 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x14004F730 (DrvCleanupOneGraphicsDevice.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140136080 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x14013CFD4 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     ?DrvUpdateRemoteDriverFlags@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x14014ED18 (-DrvUpdateRemoteDriverFlags@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?VerifyRemoteVidPnSourceIdsAreValid@@YAHXZ @ 0x140150D18 (-VerifyRemoteVidPnSourceIdsAreValid@@YAHXZ.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x140155484 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14015BCB8 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     wcsncmp @ 0x1401A04E4 (wcsncmp.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A2654 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvUpdateGraphicsDeviceList(int a1)
{
  __int64 v1; // rbx
  _BOOL8 IsConsoleConnection; // r12
  int v3; // r13d
  __int64 v4; // rsi
  __int64 v5; // r14
  char v6; // bl
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rcx
  const wchar_t *v15; // r9
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // r14
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // r9d
  __int64 result; // rax
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v26; // rcx
  bool v27; // zf
  PDEVICE_OBJECT v28; // rcx
  __int64 v29; // rcx
  NTSTATUS Status; // ebx
  struct _DEVICE_OBJECT *v31; // r15
  PIRP v32; // r14
  __int64 v33; // rcx
  struct _DEVICE_OBJECT *v34; // rcx
  __int64 v35; // rcx
  __int64 UserSessionState; // rax
  __int64 v37; // rax
  struct _DEVICE_OBJECT *v38; // rbx
  wchar_t *v39; // rax
  HANDLE RegistryHandleFromDeviceMap; // rax
  __int64 DxgkWin32kInterface; // rax
  int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // ecx
  wchar_t *v45; // rcx
  int PruneFlag; // eax
  unsigned int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 SessionState; // rax
  __int64 v52; // rcx
  struct _FILE_OBJECT *v53; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  HANDLE v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // eax
  unsigned int v60; // eax
  PVOID Environment; // [rsp+28h] [rbp-E0h]
  char v62; // [rsp+58h] [rbp-B0h]
  NTSTATUS updated; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v64; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+68h] [rbp-A0h]
  __int64 v66; // [rsp+70h] [rbp-98h] BYREF
  void *DeviceRegKey; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v68; // [rsp+80h] [rbp-88h] BYREF
  unsigned int Information; // [rsp+84h] [rbp-84h] BYREF
  PFILE_OBJECT FileObject; // [rsp+88h] [rbp-80h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp-78h] BYREF
  __int64 v72; // [rsp+98h] [rbp-70h] BYREF
  PVOID P; // [rsp+A0h] [rbp-68h] BYREF
  __int128 OutputBuffer; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v75; // [rsp+B8h] [rbp-50h]
  __int64 v76; // [rsp+C8h] [rbp-40h]
  __int128 v77; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v78; // [rsp+E0h] [rbp-28h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F0h] [rbp-18h] BYREF
  struct _KEVENT Event; // [rsp+100h] [rbp-8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+118h] [rbp+10h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+128h] [rbp+20h] BYREF
  __int64 v83; // [rsp+160h] [rbp+58h]
  int v84; // [rsp+168h] [rbp+60h]
  __int64 v85; // [rsp+170h] [rbp+68h]
  __int128 v86; // [rsp+178h] [rbp+70h]
  __int128 v87; // [rsp+188h] [rbp+80h]
  wchar_t Str1[56]; // [rsp+198h] [rbp+90h] BYREF

  v1 = a1;
  LODWORD(v66) = 0;
  DeviceObject = 0LL;
  FileObject = 0LL;
  IsConsoleConnection = UserIsConsoleConnection();
  P = 0LL;
  v76 = 0LL;
  v3 = 1;
  updated = 0;
  v4 = 0LL;
  DeviceRegKey = 0LL;
  OutputBuffer = 0LL;
  Information = 0;
  v75 = 0LL;
  v65 = v1;
  v5 = v1;
  WdLogSingleEntry2(4LL, v1, IsConsoleConnection);
  v6 = 0;
  WdLogGlobalForLineNumber = 9295;
  v62 = 0;
  v8 = *(_QWORD *)(W32GetSessionState(v7) + 88);
  if ( IsConsoleConnection )
  {
    v9 = *(_DWORD *)(v8 + 1244);
    v10 = *(_DWORD *)(v8 + 1240);
    v11 = *(_QWORD *)(v8 + 1208);
    v12 = *(_QWORD *)(v8 + 1192);
    v13 = *(_DWORD *)(v8 + 1180);
  }
  else
  {
    v9 = *(_DWORD *)(v8 + 1252);
    v10 = *(_DWORD *)(v8 + 1248);
    v11 = *(_QWORD *)(v8 + 1200);
    v12 = *(_QWORD *)(v8 + 1184);
    v13 = *(_DWORD *)(v8 + 1176);
  }
  *(_DWORD *)(v8 + 1084) = v13;
  *(_QWORD *)(v8 + 1096) = v12;
  *(_QWORD *)(v8 + 1104) = v11;
  *(_DWORD *)(v8 + 1088) = v10;
  *(_DWORD *)(v8 + 1092) = v9;
  if ( IsConsoleConnection )
  {
    LODWORD(v72) = 0;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.Flags = 288;
    QueryTable.EntryContext = &v66;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultData = &v72;
    v83 = 0LL;
    QueryTable.DefaultLength = 4;
    v84 = 0;
    v85 = 0LL;
    v86 = 0LL;
    v87 = 0LL;
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    goto LABEL_5;
  }
  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    v68 = 0;
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
    v42 = (*(__int64 (__fastcall **)(unsigned int *, __int64 *))(DxgkWin32kInterface + 768))(&v68, &v66);
    updated = v42;
    if ( v42 < 0 )
    {
      WdLogSingleEntry1(2LL, v42);
      LODWORD(v66) = *(_DWORD *)(v8 + 1084);
      WdLogGlobalForLineNumber = 9357;
    }
    v43 = *(_DWORD *)(v8 + 1084);
    v44 = v68;
    if ( v68 > v43 )
    {
      *(_DWORD *)(v8 + 1084) = v68;
      v43 = v44;
    }
    if ( (unsigned int)v66 >= v43 + 16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    goto LABEL_5;
  }
  if ( !(unsigned int)UserIsDisconnectConnection() )
    LODWORD(v66) = *(_DWORD *)(v8 + 2856) - 1;
  if ( *(_DWORD *)(v8 + 2920) )
  {
    updated = DrvUpdateRemoteAdapterInfo(0LL);
    if ( updated < 0 )
      return 0LL;
  }
LABEL_5:
  while ( !(unsigned int)UserIsDisconnectConnection() && *(_DWORD *)(v8 + 1084) <= (unsigned int)v66 )
  {
    if ( !v5 )
    {
      WdLogSingleEntry0(5LL);
      WdLogGlobalForLineNumber = 9416;
      return 0LL;
    }
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( IsConsoleConnection )
      {
        v16 = StringCchPrintfW(Str1, 50LL, L"\\Device\\Video%d", *(unsigned int *)(v8 + 1084));
        goto LABEL_11;
      }
      v15 = L"RemoteVideo";
    }
    else
    {
      v15 = *(const wchar_t **)(v8 + 2912);
    }
    LODWORD(Environment) = *(_DWORD *)(v8 + 1084);
    v16 = StringCchPrintfW(Str1, 50LL, L"\\Device\\%s%d", v15, Environment);
LABEL_11:
    if ( v16 < 0 )
      return 0LL;
    v17 = *(_QWORD *)(v8 + 1096);
    if ( IsConsoleConnection )
      v18 = *(_QWORD *)(v8 + 1208);
    else
      v18 = *(_QWORD *)(v8 + 1200);
    while ( v17 )
    {
      if ( !wcsncmp(Str1, (const wchar_t *)v17, 0x40uLL) )
        goto LABEL_41;
      if ( v17 == v18 )
        break;
      v17 = *(_QWORD *)(v17 + 128);
    }
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, Str1);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
    updated = DeviceObjectPointer;
    if ( DeviceObjectPointer < 0 )
    {
      if ( IsConsoleConnection )
        goto LABEL_79;
      if ( *(_DWORD *)(W32GetUserSessionState(v26) + 68960) || *(_DWORD *)(v8 + 2856) != 1 )
      {
        DeviceObjectPointer = updated;
LABEL_79:
        WdLogSingleEntry1(5LL, DeviceObjectPointer);
        WdLogGlobalForLineNumber = 9578;
LABEL_41:
        ++*(_DWORD *)(v8 + 1084);
LABEL_42:
        v6 = v62;
LABEL_43:
        v5 = v65;
        continue;
      }
      v53 = *(struct _FILE_OBJECT **)(v8 + 2864);
      FileObject = v53;
      if ( !v53 || (DeviceObject = IoGetRelatedDeviceObject(v53), !FileObject) || !DeviceObject )
      {
        v6 = v62;
        updated = -1073741772;
        goto LABEL_106;
      }
      updated = 0;
      FileObject = 0LL;
    }
    v27 = v4 == 0;
    if ( !v4 )
    {
      v4 = PALLOCMEM(304LL, 1986291527LL);
      v27 = v4 == 0;
    }
    v6 = v62;
    v5 = v65;
    if ( !v27 )
    {
      v28 = DeviceObject;
      *(_QWORD *)(v4 + 136) = DeviceObject;
      v29 = *(unsigned __int16 *)(W32GetUserSessionState(v28) + 69008);
      *(_WORD *)(v4 + 216) = v29;
      *(_QWORD *)(v4 + 264) = 0LL;
      if ( !IsConsoleConnection )
        *(_DWORD *)(v4 + 160) |= 0x4000000u;
      *(_QWORD *)(v4 + 224) = FileObject;
      if ( !IsConsoleConnection && !*(_DWORD *)(W32GetUserSessionState(v29) + 68960)
        || (*(_DWORD *)(v4 + 252) = 0, !IsConsoleConnection) )
      {
        if ( !*(_DWORD *)(W32GetUserSessionState(v29) + 68960) )
        {
          *(_QWORD *)(v4 + 240) = 0xFFFFFFFFLL;
          *(_QWORD *)(v4 + 232) = 0LL;
          *(_DWORD *)(v4 + 248) = *(_DWORD *)(v8 + 1084);
          goto LABEL_67;
        }
      }
      v76 = 0LL;
      *(_QWORD *)&OutputBuffer = v4;
      *((_QWORD *)&OutputBuffer + 1) = VideoPortCallout;
      Status = -1073741822;
      v75 = 0LL;
      v31 = *(struct _DEVICE_OBJECT **)(v4 + 136);
      IoStatusBlock = 0LL;
      memset(&Event, 0, sizeof(Event));
      if ( v31 )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v32 = IoBuildDeviceIoControlRequest(
                0x23201Fu,
                v31,
                &OutputBuffer,
                0x28u,
                &OutputBuffer,
                0x28u,
                1u,
                &Event,
                &IoStatusBlock);
        if ( v32 )
        {
          if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
          {
            CurrentStackLocation = v32->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)(*(_QWORD *)(W32GetSessionState(v33) + 88) + 2864LL);
          }
          Status = IofCallDriver(v31, v32);
          if ( Status == 259 )
          {
            while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
              ;
            Status = IoStatusBlock.Status;
          }
          Information = IoStatusBlock.Information;
        }
        updated = Status;
        if ( Status >= 0 )
        {
          if ( (_DWORD)v75 )
            *(_DWORD *)(v4 + 160) |= 0x40000000u;
          if ( (v76 & 0xC0000001) != 0 )
          {
            updated = -1073741637;
            WdLogSingleEntry2(5LL, (unsigned int)v76, -1073741637LL);
            WdLogGlobalForLineNumber = 9659;
            goto LABEL_40;
          }
          if ( (v76 & 0x20000000) != 0 )
            *(_DWORD *)(v4 + 160) |= 0x100000u;
          v34 = *(struct _DEVICE_OBJECT **)(v4 + 136);
          *(_QWORD *)(v4 + 144) = *((_QWORD *)&v75 + 1);
          *(_DWORD *)(v4 + 248) = 0;
          v77 = 0LL;
          v78 = 0LL;
          updated = GreDeviceIoControlImpl(v34, 0x232033u, 0LL, 0, &v77, 0x20u, &Information, 1u, 1);
          if ( updated >= 0 )
          {
            if ( (_DWORD)v77 != 2 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 9706;
            }
            UserSessionState = W32GetUserSessionState(v35);
            if ( *(_QWORD *)(UserSessionState + 68952) == *((_QWORD *)&v78 + 1) )
            {
              v37 = *((_QWORD *)&v77 + 1);
              if ( *((_QWORD *)&v77 + 1) )
              {
                *(_DWORD *)(v4 + 160) |= 0x800000u;
                *(_QWORD *)(v4 + 232) = v37;
                *(_DWORD *)(v4 + 248) = DWORD1(v77);
                *(_QWORD *)(v4 + 240) = v78;
                goto LABEL_67;
              }
            }
LABEL_40:
            DrvCleanupOneGraphicsDevice((PVOID)v4);
            v4 = 0LL;
            goto LABEL_41;
          }
          if ( !IsConsoleConnection )
            goto LABEL_40;
LABEL_67:
          updated = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
          if ( updated >= 0 )
          {
            v38 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
            ExFreePoolWithTag(P, 0);
            updated = IoOpenDeviceRegistryKey(v38, 2u, 0x2000000u, &DeviceRegKey);
            if ( updated >= 0 )
            {
              DrvGetDeviceConfigurationInformation((PVOID)v4, (PCWSTR)DeviceRegKey, 1);
              ZwClose(DeviceRegKey);
            }
            ObfDereferenceObject(v38);
          }
          swprintf_s((wchar_t *)v4, 0x20uLL, Str1);
          ++*(_DWORD *)(v8 + 1084);
          if ( updated >= 0
            || (v55 = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)v4, 0, 0LL, 0LL, 0, &updated),
                DeviceRegKey = v55,
                updated >= 0)
            && (DrvGetDeviceConfigurationInformation((PVOID)v4, (PCWSTR)v55, 0), ZwClose(DeviceRegKey), updated >= 0) )
          {
            if ( !*(_QWORD *)(v4 + 208) )
            {
              v39 = (wchar_t *)PALLOCNOZ(32LL, 0x73726447u);
              *(_QWORD *)(v4 + 208) = v39;
              if ( v39 )
              {
                RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap(
                                                (unsigned __int16 *)v4,
                                                0,
                                                0LL,
                                                v39,
                                                0x10u,
                                                &updated);
                DeviceRegKey = RegistryHandleFromDeviceMap;
                if ( RegistryHandleFromDeviceMap )
                  ZwClose(RegistryHandleFromDeviceMap);
              }
              else
              {
                updated = -1073741670;
              }
            }
          }
          v45 = (wchar_t *)(v4 + 64);
          if ( (*(_DWORD *)(v4 + 160) & 8) != 0 )
          {
            ++*(_DWORD *)(v8 + 1092);
            swprintf_s(v45, 0x20uLL, L"\\\\.\\DISPLAYV%d");
          }
          else
          {
            ++*(_DWORD *)(v8 + 1088);
            swprintf_s(v45, 0x20uLL, L"\\\\.\\DISPLAY%d");
          }
          PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v4);
          v47 = *(_DWORD *)(v4 + 160) & 0xFFF7FFFF;
          if ( !PruneFlag )
            v47 = *(_DWORD *)(v4 + 160) | 0x80000;
          *(_DWORD *)(v4 + 160) = v47;
          if ( (unsigned int)bSetDeviceSessionUsage(v4, 1LL) )
          {
            if ( !IsConsoleConnection )
              goto LABEL_108;
          }
          else
          {
            if ( IsConsoleConnection || *(_DWORD *)(W32GetUserSessionState(v48) + 68960) )
            {
              DrvCleanupOneGraphicsDevice((PVOID)v4);
              v4 = 0LL;
              goto LABEL_42;
            }
LABEL_108:
            if ( !*(_DWORD *)(W32GetUserSessionState(v48) + 68960) )
            {
              v56 = *(_QWORD *)(W32GetSessionState(v52) + 88);
              *(_QWORD *)(v4 + 272) = 0LL;
              v57 = *(_DWORD *)(v56 + 2920) ? *(_QWORD *)(v56 + 2924) : 0LL;
              *(_QWORD *)(v4 + 288) = v57;
              *(_QWORD *)(v4 + 296) = 0LL;
              LOBYTE(v64) = 0;
              v58 = DxDdGetDxgkWin32kInterface();
              if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(v58 + 392))(
                     v4 + 272,
                     v4 + 288,
                     v4 + 296,
                     v4 + 280,
                     &v64) >= 0 )
              {
                v59 = *(_DWORD *)(v4 + 164);
                if ( (_BYTE)v64 )
                  v60 = v59 | 4;
                else
                  v60 = v59 & 0xFFFFFFFB;
                *(_DWORD *)(v4 + 164) = v60;
                DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)v4);
              }
            }
            if ( !*(_DWORD *)(W32GetUserSessionState(v52) + 68960) && updated < 0 )
            {
              DrvCleanupOneGraphicsDevice((PVOID)v4);
              --*(_DWORD *)(v8 + 1088);
              v3 = 0;
              v6 = v62;
LABEL_103:
              v4 = 0LL;
              goto LABEL_43;
            }
          }
          v49 = v8 + 1104;
          if ( *(_QWORD *)(v8 + 1096) )
          {
            *(_QWORD *)(*(_QWORD *)v49 + 128LL) = v4;
            v49 = v8 + 1104;
          }
          else
          {
            *(_QWORD *)(v8 + 1096) = v4;
          }
          *(_QWORD *)v49 = v4;
          if ( (*(_DWORD *)(v4 + 160) & 0x800000) != 0 )
            DrvAddAdapterLuid(*(struct _LUID *)(v4 + 240));
          v6 = 1;
          v62 = 1;
          goto LABEL_103;
        }
      }
      else
      {
        Status = -1073741816;
        updated = -1073741816;
      }
      WdLogSingleEntry1(5LL, Status);
      WdLogGlobalForLineNumber = 9639;
      goto LABEL_40;
    }
  }
  if ( !IsConsoleConnection )
  {
LABEL_106:
    if ( !*(_DWORD *)(W32GetUserSessionState(v14) + 68960) )
    {
      SessionState = W32GetSessionState(v50);
      DrvUpdateRemoteDriverFlags((struct tagREMOTE_CONTEXT *)(*(_QWORD *)(SessionState + 88) + 2856LL));
    }
  }
  if ( (unsigned int)DrvSetDisconnectedGraphicsDevice(IsConsoleConnection) )
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 10019;
  }
  else
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 10022;
  }
  if ( v6 )
    DrvSortGraphicsDeviceList();
  v19 = *(_DWORD *)(v8 + 1084);
  v20 = *(_QWORD *)(v8 + 1096);
  v21 = *(_QWORD *)(v8 + 1104);
  v22 = *(_DWORD *)(v8 + 1088);
  v23 = *(_DWORD *)(v8 + 1092);
  if ( IsConsoleConnection )
  {
    *(_DWORD *)(v8 + 1180) = v19;
    *(_QWORD *)(v8 + 1192) = v20;
    *(_QWORD *)(v8 + 1208) = v21;
    *(_DWORD *)(v8 + 1240) = v22;
    *(_DWORD *)(v8 + 1244) = v23;
  }
  else
  {
    *(_DWORD *)(v8 + 1176) = v19;
    *(_QWORD *)(v8 + 1184) = v20;
    *(_QWORD *)(v8 + 1200) = v21;
    *(_DWORD *)(v8 + 1248) = v22;
    *(_DWORD *)(v8 + 1252) = v23;
    if ( !(unsigned int)VerifyRemoteVidPnSourceIdsAreValid() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10046;
    }
  }
  v65 = (unsigned int)Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState;
  if ( (Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState & 0x10) == 0 )
  {
    LODWORD(v65) = Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor,
      v65,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v65,
      3LL,
      &Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor);
  }
  WdLogSingleEntry1(5LL, v3);
  result = (unsigned int)v3;
  WdLogGlobalForLineNumber = 10072;
  return result;
}
