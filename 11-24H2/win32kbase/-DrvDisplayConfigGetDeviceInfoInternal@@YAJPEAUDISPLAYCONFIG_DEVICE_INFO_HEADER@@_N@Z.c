/*
 * XREFs of ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6978
 * Callers:
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1400F64B4 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1400F6960 (DrvDisplayConfigGetDeviceInfo.c)
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x14016B770 (NtUserDisplayConfigGetDeviceInfo.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E23E4 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x140012F70 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserIsConsoleConnection @ 0x140013950 (UserIsConsoleConnection.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x140023B1C (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     UserIsDisconnectConnection @ 0x14004DE60 (UserIsDisconnectConnection.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     DrvIsWddmDriverPresent @ 0x14004E138 (DrvIsWddmDriverPresent.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x14004E190 (UserRemoteConnectedSessionUsingWddm.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x14008D980 (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400CAB04 (-AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14016AE9C (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14016AF84 (-RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x1401B7614 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x1401B76BC (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     UserGetIsSwitchInProgress @ 0x1401BE980 (UserGetIsSwitchInProgress.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1401C9CC0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfoInternal(struct DISPLAYCONFIG_DEVICE_INFO_HEADER *a1, char a2)
{
  int v4; // ecx
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned int *v10; // rsi
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebp
  __int64 v14; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // esi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 UserSessionState; // rax
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  __int64 v40; // rcx
  int IsWddmConnectedSession; // eax
  BOOL IsConsoleConnection; // eax
  __int64 v43; // rcx
  BOOL IsDisconnectConnection; // eax
  __int64 v45; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  int v52; // [rsp+50h] [rbp+8h] BYREF

  WdLogSingleEntry1(4LL, *(int *)a1);
  v4 = *(_DWORD *)a1;
  WdLogGlobalForLineNumber = 17817;
  v6 = 0;
  if ( !DispConfigTypes::AllowInAnySession(v4)
    && (!(unsigned int)UserIsWddmConnectedSession(v5)
     || (unsigned __int8)DispConfigTypes::RequiresUserCritShared(*(unsigned int *)a1)
     && !(unsigned int)DrvIsWddmDriverPresent(v7)) )
  {
    return 3221225659LL;
  }
  if ( (unsigned int)DispConfigTypes::GetGetterTypeSize(*(unsigned int *)a1) != *((_DWORD *)a1 + 1) )
    return 3221225485LL;
  v10 = (unsigned int *)((char *)a1 + 16);
  if ( *((_DWORD *)a1 + 4) == -1
    || (v11 = DxDdGetDxgkWin32kInterface(v9),
        v12 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, char *))(v11 + 552))(
                (char *)a1 + 8,
                *v10,
                (char *)a1 + 8,
                (char *)a1 + 16),
        v13 = v12,
        v12 >= 0) )
  {
    if ( (unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline()
      && *(_DWORD *)a1 == -46 )
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v14);
      LOBYTE(v16) = 1;
      v17 = (*(__int64 (__fastcall **)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(DxgkWin32kInterface + 248))(
              v16,
              a1);
      v18 = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry2(3LL, a1, v17);
        WdLogGlobalForLineNumber = 17875;
      }
    }
    else
    {
      v19 = *(_DWORD *)a1;
      if ( *(int *)a1 > 100 )
      {
        return (unsigned int)-1073741811;
      }
      else if ( v19 == 100 )
      {
LABEL_52:
        v49 = DxDdGetDxgkWin32kInterface(v14);
        LOBYTE(v50) = 1;
        v51 = (*(__int64 (__fastcall **)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(v49 + 248))(v50, a1);
        v18 = v51;
        if ( v51 < 0 )
        {
          WdLogSingleEntry2(3LL, a1, v51);
          WdLogGlobalForLineNumber = 17959;
        }
      }
      else
      {
        switch ( v19 )
        {
          case -44:
            if ( !(unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
              return (unsigned int)-1073741811;
            v22 = DxDdGetDxgkWin32kInterface(v21);
            LOBYTE(v23) = 1;
            v24 = (*(__int64 (__fastcall **)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(v22 + 248))(v23, a1);
            v18 = v24;
            if ( v24 < 0 )
            {
              WdLogSingleEntry2(3LL, a1, v24);
              WdLogGlobalForLineNumber = 17973;
            }
            return v18;
          case -42:
          case -37:
          case -36:
          case -34:
          case -33:
          case -26:
          case -24:
          case -22:
          case -14:
          case -13:
          case -12:
          case -10:
          case -5:
          case 2:
          case 3:
          case 4:
          case 6:
          case 7:
          case 9:
          case 11:
          case 12:
          case 15:
            goto LABEL_52;
          case -39:
            UserSessionState = W32GetUserSessionState(v14);
            v37 = *(unsigned int *)(UserSessionState + 68960);
            *((_DWORD *)a1 + 5) = v37 ^ (*((_DWORD *)a1 + 5) ^ *(_DWORD *)(UserSessionState + 68960)) & 0xFFFFFFFE;
            v38 = UserRemoteConnectedSessionUsingWddm(v37);
            *((_DWORD *)a1 + 5) = (2 * v38) ^ (*((_DWORD *)a1 + 5) ^ (2 * v38)) & 0xFFFFFFFD;
            v39 = UserRemoteConnectedSessionUsingXddm();
            v40 = (4 * v39) ^ (*((_DWORD *)a1 + 5) ^ (4 * v39)) & 0xFFFFFFFB;
            *((_DWORD *)a1 + 5) = v40;
            IsWddmConnectedSession = UserIsWddmConnectedSession(v40);
            *((_DWORD *)a1 + 5) = (8 * IsWddmConnectedSession) ^ (*((_DWORD *)a1 + 5) ^ (8 * IsWddmConnectedSession)) & 0xFFFFFFF7;
            IsConsoleConnection = UserIsConsoleConnection();
            v43 = (16 * IsConsoleConnection) ^ (*((_DWORD *)a1 + 5) ^ (16 * IsConsoleConnection)) & 0xFFFFFFEF;
            *((_DWORD *)a1 + 5) = v43;
            IsDisconnectConnection = UserIsDisconnectConnection(v43);
            v45 = (32 * IsDisconnectConnection) ^ (*((_DWORD *)a1 + 5) ^ (32 * IsDisconnectConnection)) & 0xFFFFFFDF;
            *((_DWORD *)a1 + 5) = v45;
            UserGdiSessionState = W32GetUserGdiSessionState(v45);
            *((_DWORD *)a1 + 5) = (*(_DWORD *)(UserGdiSessionState + 28) << 6) ^ (*((_DWORD *)a1 + 5) ^ (*(_DWORD *)(UserGdiSessionState + 28) << 6)) & 0xFFFFFFBF;
            v47 = *((_DWORD *)a1 + 5) & 0xFFFFFF7F | ((unsigned __int8)UserGetIsSwitchInProgress() != 0 ? 0x80 : 0);
            *((_DWORD *)a1 + 5) = v47;
            v48 = *(unsigned __int16 *)(W32GetUserSessionState(v47) + 69008);
            *((_WORD *)a1 + 12) = v48;
            *(_QWORD *)((char *)a1 + 28) = *(_QWORD *)(W32GetUserSessionState(v48) + 68952);
            goto LABEL_28;
          case -30:
          case -21:
          case -11:
          case -2:
            return (unsigned int)DrvpDisplayConfigGetDisplayDeviceInfo((int *)a1);
          case -25:
            if ( *((_DWORD *)a1 + 1) < 0x28u )
              return 3221225507LL;
            v26 = DxDdGetDxgkWin32kInterface(v14);
            return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(v26 + 776))(
                                   *((_QWORD *)a1 + 1),
                                   *((unsigned int *)a1 + 4),
                                   a1);
          case -20:
            v31 = *(unsigned int *)(W32GetUserSessionState(v14) + 68960);
            *((_DWORD *)a1 + 5) = v31;
            *((_DWORD *)a1 + 6) = UserRemoteConnectedSessionUsingWddm(v31);
            *((_DWORD *)a1 + 7) = UserRemoteConnectedSessionUsingXddm();
            *((_DWORD *)a1 + 8) = UserIsWddmConnectedSession(v32);
            *((_DWORD *)a1 + 9) = UserIsConsoleConnection();
            *((_DWORD *)a1 + 10) = UserIsDisconnectConnection(v33);
            v35 = *(unsigned __int16 *)(W32GetUserSessionState(v34) + 69008);
            *((_WORD *)a1 + 22) = v35;
            *((_QWORD *)a1 + 6) = *(_QWORD *)(W32GetUserSessionState(v35) + 68952);
            goto LABEL_28;
          case -15:
            if ( *((_DWORD *)a1 + 1) < 0x20u )
              return 3221225507LL;
            v52 = 0;
            v30 = DxDdGetDxgkWin32kInterface(v14);
            v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, _QWORD))(v30 + 704))(
                    *((_QWORD *)a1 + 1),
                    *((unsigned int *)a1 + 4),
                    *((unsigned int *)a1 + 5),
                    &v52,
                    *((_QWORD *)a1 + 3));
            *((_DWORD *)a1 + 5) = v52;
            return v18;
          case -9:
            if ( *((_DWORD *)a1 + 1) < 0x18u )
              return 3221225507LL;
            v52 = 0;
            v29 = DxDdGetDxgkWin32kInterface(v14);
            v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, _QWORD))(v29 + 264))(
                    *((_QWORD *)a1 + 1),
                    *((unsigned int *)a1 + 4),
                    0LL,
                    &v52,
                    0LL);
            if ( (v18 & 0x80000000) == 0 )
            {
              LOBYTE(v6) = v52 == 2;
              *((_DWORD *)a1 + 5) = v6;
            }
            return v18;
          case -8:
            if ( *((_DWORD *)a1 + 1) < 0x518u )
              return 3221225507LL;
            v28 = DxDdGetDxgkWin32kInterface(v14);
            return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, char *))(v28 + 672))(
                                   *((_QWORD *)a1 + 1),
                                   *((unsigned int *)a1 + 4),
                                   1280LL,
                                   (char *)a1 + 20,
                                   (char *)a1 + 24);
          case -7:
            if ( *((_DWORD *)a1 + 1) < 0x3B0u )
              return 3221225507LL;
            v27 = DxDdGetDxgkWin32kInterface(v14);
            v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *, _QWORD, _QWORD))(v27 + 264))(
                    *((_QWORD *)a1 + 1),
                    *((unsigned int *)a1 + 4),
                    a1,
                    0LL,
                    0LL);
            if ( a2 )
              GetMonitorBrightnessCaps(a1);
            return v18;
          case -3:
            if ( *((_DWORD *)a1 + 1) != 32 )
              return 3221225485LL;
            return (unsigned int)DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
          case 1:
            v20 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v14) + 88) + 1096LL);
            if ( *((_DWORD *)a1 + 1) < 0x54u )
              return 3221225507LL;
            if ( !v20 )
              goto LABEL_29;
            do
            {
              if ( *((_DWORD *)a1 + 2) == *(_DWORD *)(v20 + 240)
                && *((_DWORD *)a1 + 3) == *(_DWORD *)(v20 + 244)
                && *(_DWORD *)(v20 + 248) == *((_DWORD *)a1 + 4) )
              {
                break;
              }
              v20 = *(_QWORD *)(v20 + 128);
            }
            while ( v20 );
            if ( !v20 )
            {
LABEL_29:
              WdLogSingleEntry0(3LL);
              result = 3221226021LL;
              WdLogGlobalForLineNumber = 17912;
              return result;
            }
            *(_OWORD *)((char *)a1 + 20) = *(_OWORD *)(v20 + 64);
            *(_OWORD *)((char *)a1 + 36) = *(_OWORD *)(v20 + 80);
            *(_OWORD *)((char *)a1 + 52) = *(_OWORD *)(v20 + 96);
            *(_OWORD *)((char *)a1 + 68) = *(_OWORD *)(v20 + 112);
LABEL_28:
            v18 = 0;
            break;
          default:
            return (unsigned int)-1073741811;
        }
      }
    }
    return v18;
  }
  else
  {
    if ( *(_DWORD *)a1 == -21 )
    {
      *((_DWORD *)a1 + 506) = 1144084231;
      WdLogSingleEntry5(2LL, *((int *)a1 + 3), *((unsigned int *)a1 + 2), *v10, v12, 1144084231LL);
      WdLogGlobalForLineNumber = 17862;
    }
    return v13;
  }
}
