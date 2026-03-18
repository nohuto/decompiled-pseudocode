/*
 * XREFs of ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0015D50
 * Callers:
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0013E38 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001E910 (NtUserDisplayConfigGetDeviceInfo.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00C5450 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C001E190 (UserRemoteConnectedSessionUsingWddm.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C001E410 (UserRemoteConnectedSessionUsingXddm.c)
 *     ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C001EE50 (-AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C001EEB8 (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C001EFF0 (UserIsWddmConnectedSession.c)
 *     DrvIsWddmDriverPresent @ 0x1C001F210 (DrvIsWddmDriverPresent.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0034688 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1C00B896C (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C01665A0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfoInternal(struct DISPLAYCONFIG_DEVICE_INFO_HEADER *a1, char a2)
{
  int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rdi
  __int64 DxgkWin32kInterface; // rax
  unsigned int *v10; // r14
  int v11; // eax
  unsigned int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // [rsp+50h] [rbp+8h] BYREF

  WdLogSingleEntry1(4LL, *(int *)a1);
  v4 = 0;
  if ( !(unsigned __int8)DispConfigTypes::AllowInAnySession(*(unsigned int *)a1)
    && !(unsigned int)DrvIsWddmDriverPresent() )
  {
    return 3221225659LL;
  }
  if ( (unsigned int)DispConfigTypes::GetGetterTypeSize(*(unsigned int *)a1) != *((_DWORD *)a1 + 1) )
    return 3221225485LL;
  v8 = (_DWORD *)((char *)a1 + 16);
  if ( *((_DWORD *)a1 + 4) == -1 )
  {
    v10 = (unsigned int *)((char *)a1 + 8);
    goto LABEL_11;
  }
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v7, v6);
  v10 = (unsigned int *)((char *)a1 + 8);
  v11 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, char *))(DxgkWin32kInterface + 552))(
          (char *)a1 + 8,
          (unsigned int)*v8,
          (char *)a1 + 8,
          (char *)a1 + 16);
  v12 = v11;
  if ( v11 >= 0 )
  {
LABEL_11:
    v13 = *(unsigned int *)a1;
    if ( (int)v13 <= -8 )
    {
      if ( (_DWORD)v13 == -8 )
      {
        if ( *((_DWORD *)a1 + 1) >= 0x518u )
        {
          v19 = DxDdGetDxgkWin32kInterface(v13, v6);
          return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, char *))(v19 + 672))(
                                 *(_QWORD *)v10,
                                 (unsigned int)*v8,
                                 1280LL,
                                 (char *)a1 + 20,
                                 (char *)a1 + 24);
        }
        return 3221225507LL;
      }
      if ( (int)v13 <= -15 )
      {
        switch ( (_DWORD)v13 )
        {
          case 0xFFFFFFF1:
            if ( *((_DWORD *)a1 + 1) >= 0x20u )
            {
              v24 = 0;
              v16 = DxDdGetDxgkWin32kInterface(v13, v6);
              v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, _QWORD))(v16 + 704))(
                      *((_QWORD *)a1 + 1),
                      (unsigned int)*v8,
                      *((unsigned int *)a1 + 5),
                      &v24,
                      *((_QWORD *)a1 + 3));
              *((_DWORD *)a1 + 5) = v24;
              return (unsigned int)v17;
            }
            break;
          case 0xFFFFFFE1:
          case 0xFFFFFFE6:
            goto LABEL_70;
          case 0xFFFFFFE7:
            if ( *((_DWORD *)a1 + 1) >= 0x28u )
            {
              v14 = DxDdGetDxgkWin32kInterface(v13, v6);
              return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(v14 + 776))(
                                     *((_QWORD *)a1 + 1),
                                     (unsigned int)*v8,
                                     a1);
            }
            break;
          default:
            if ( (((_DWORD)v13 + 24) & 0xFFFFFFFD) != 0 )
            {
              if ( (_DWORD)v13 != -21 )
              {
                if ( (_DWORD)v13 == -20 )
                {
                  *((_DWORD *)a1 + 5) = gRemoteSessionUseWddm;
                  *((_DWORD *)a1 + 6) = UserRemoteConnectedSessionUsingWddm();
                  *((_DWORD *)a1 + 7) = UserRemoteConnectedSessionUsingXddm();
                  *((_DWORD *)a1 + 8) = UserIsWddmConnectedSession();
                  *((_DWORD *)a1 + 9) = gProtocolType == 0;
                  *((_DWORD *)a1 + 10) = gProtocolType == -1;
                  *((_WORD *)a1 + 22) = gProtocolType;
                  *((_QWORD *)a1 + 6) = gRemoteTerminalLuid;
                  return 0;
                }
                return (unsigned int)-1073741811;
              }
              return (unsigned int)DrvpDisplayConfigGetDisplayDeviceInfo(a1);
            }
LABEL_70:
            v22 = DxDdGetDxgkWin32kInterface(v13, v6);
            LOBYTE(v23) = 1;
            v17 = (*(__int64 (__fastcall **)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(v22 + 248))(v23, a1);
            if ( v17 < 0 )
              WdLogSingleEntry2(3LL, a1);
            return (unsigned int)v17;
        }
        return 3221225507LL;
      }
      if ( (unsigned int)(v13 + 14) <= 2 )
        goto LABEL_70;
      if ( (_DWORD)v13 != -11 )
      {
        if ( (_DWORD)v13 == -10 )
          goto LABEL_70;
        if ( (_DWORD)v13 == -9 )
        {
          if ( *((_DWORD *)a1 + 1) >= 0x18u )
          {
            v24 = 0;
            v18 = DxDdGetDxgkWin32kInterface(v13, v6);
            v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, _QWORD))(v18 + 264))(
                    *((_QWORD *)a1 + 1),
                    (unsigned int)*v8,
                    0LL,
                    &v24,
                    0LL);
            if ( v17 >= 0 )
            {
              LOBYTE(v4) = v24 == 2;
              *((_DWORD *)a1 + 5) = v4;
            }
            return (unsigned int)v17;
          }
          return 3221225507LL;
        }
        return (unsigned int)-1073741811;
      }
      return (unsigned int)DrvpDisplayConfigGetDisplayDeviceInfo(a1);
    }
    if ( (int)v13 > 100 )
      return (unsigned int)-1073741811;
    if ( (_DWORD)v13 == 100 )
      goto LABEL_70;
    if ( (int)v13 > 3 )
    {
      v13 = (unsigned int)(v13 - 4);
      if ( !(_DWORD)v13 )
        goto LABEL_70;
      v13 = (unsigned int)(v13 - 2);
      if ( !(_DWORD)v13 )
        goto LABEL_70;
      v13 = (unsigned int)(v13 - 1);
      if ( !(_DWORD)v13 )
        goto LABEL_70;
      v13 = (unsigned int)(v13 - 2);
      if ( !(_DWORD)v13 )
        goto LABEL_70;
      v13 = (unsigned int)(v13 - 2);
      if ( (unsigned int)v13 <= 1 )
        goto LABEL_70;
      return (unsigned int)-1073741811;
    }
    switch ( (_DWORD)v13 )
    {
      case 3:
        goto LABEL_70;
      case 0xFFFFFFF9:
        if ( *((_DWORD *)a1 + 1) >= 0x3ACu )
        {
          v21 = DxDdGetDxgkWin32kInterface(v13, v6);
          v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *, _QWORD, _QWORD))(v21 + 264))(
                  *(_QWORD *)v10,
                  (unsigned int)*v8,
                  a1,
                  0LL,
                  0LL);
          if ( a2 )
            GetMonitorBrightnessCaps(a1);
          return (unsigned int)v17;
        }
        return 3221225507LL;
      case 0xFFFFFFFB:
        goto LABEL_70;
    }
    if ( (_DWORD)v13 != -3 )
    {
      if ( (_DWORD)v13 != -2 )
      {
        if ( (_DWORD)v13 == 1 )
        {
          v20 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState() + 24) + 1264LL);
          if ( *((_DWORD *)a1 + 1) >= 0x54u )
          {
            if ( !v20 )
              goto LABEL_56;
            do
            {
              if ( *v10 == *(_DWORD *)(v20 + 240) && v10[1] == *(_DWORD *)(v20 + 244) && *(_DWORD *)(v20 + 248) == *v8 )
                break;
              v20 = *(_QWORD *)(v20 + 128);
            }
            while ( v20 );
            if ( !v20 )
            {
LABEL_56:
              WdLogSingleEntry0(3LL);
              return 3221226021LL;
            }
            *(_OWORD *)((char *)a1 + 20) = *(_OWORD *)(v20 + 64);
            *(_OWORD *)((char *)a1 + 36) = *(_OWORD *)(v20 + 80);
            *(_OWORD *)((char *)a1 + 52) = *(_OWORD *)(v20 + 96);
            *(_OWORD *)((char *)a1 + 68) = *(_OWORD *)(v20 + 112);
            return 0;
          }
          return 3221225507LL;
        }
        if ( (_DWORD)v13 == 2 )
          goto LABEL_70;
        return (unsigned int)-1073741811;
      }
      return (unsigned int)DrvpDisplayConfigGetDisplayDeviceInfo(a1);
    }
    if ( *((_DWORD *)a1 + 1) == 32 )
      return (unsigned int)DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
    return 3221225485LL;
  }
  if ( *(_DWORD *)a1 == -21 )
  {
    *((_DWORD *)a1 + 506) = 1144084231;
    WdLogSingleEntry5(2LL, *((int *)a1 + 3), *v10, (unsigned int)*v8, v11, 1144084231LL);
  }
  return v12;
}
