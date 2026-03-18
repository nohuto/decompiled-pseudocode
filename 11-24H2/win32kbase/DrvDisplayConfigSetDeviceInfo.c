/*
 * XREFs of DrvDisplayConfigSetDeviceInfo @ 0x1401C9DD0
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016BDA0 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     DrvIsWddmDriverPresent @ 0x14004E138 (DrvIsWddmDriverPresent.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14008D940 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x14008E088 (GetPathsModality.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1401A8EC8 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1401B7220 (-GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x1401B7614 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1401CA940 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDisplayConfigSetDeviceInfo(int *a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 DxgkWin32kInterface; // rax
  unsigned int *v7; // r14
  unsigned int *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v20; // r8d
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  __int64 v43; // rax
  int v44; // eax
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rcx
  int v50; // r10d
  char *v51; // rsi
  int PathsModality; // eax
  int v53; // ebx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // eax
  int v64; // eax
  char *v65; // [rsp+90h] [rbp+18h] BYREF

  if ( !(unsigned int)DrvIsWddmDriverPresent((__int64)a1) )
    return 3221225659LL;
  if ( (unsigned int)DispConfigTypes::GetSetterTypeSize(*a1) != a1[1] )
    return 3221225485LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v5);
  v7 = (unsigned int *)(a1 + 4);
  v8 = (unsigned int *)(a1 + 2);
  result = (*(__int64 (__fastcall **)(int *, _QWORD, int *, int *))(DxgkWin32kInterface + 552))(
             a1 + 2,
             (unsigned int)a1[4],
             a1 + 2,
             a1 + 4);
  if ( (int)result < 0 )
    return result;
  v10 = *a1;
  if ( (int)v10 <= -16 )
  {
    switch ( (_DWORD)v10 )
    {
      case 0xFFFFFFF0:
        if ( a1[1] == 68 )
        {
          v32 = DxDdGetDxgkWin32kInterface(v9);
          v33 = (*(__int64 (__fastcall **)(_QWORD, int *))(v32 + 248))(0LL, a1);
          v13 = v33;
          if ( v33 >= 0 )
          {
            if ( v33 == 259 )
            {
              if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
                return 0;
              }
              else
              {
                v35 = xxxUserSetDisplayConfig(0, 0LL, 0x98Fu, 0, 0LL, 1, 0LL, 0LL, 0LL, a2, 0LL);
                v13 = v35;
                if ( v35 < 0 )
                {
                  WdLogSingleEntry1(3LL, v35);
                  WdLogGlobalForLineNumber = 18523;
                }
              }
            }
            else if ( v33 == 255 )
            {
              v36 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v34) + 88) + 1768LL);
              if ( v36 )
                _InterlockedIncrement((volatile signed __int32 *)(v36 + 1573008));
            }
          }
          else
          {
            WdLogSingleEntry2(3LL, a1, v33);
            WdLogGlobalForLineNumber = 18496;
          }
          return v13;
        }
        return 3221225485LL;
      case 0xFFFFFFD5:
        if ( !(unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
        {
          v13 = -1073741811;
          WdLogSingleEntry5(2LL, -1073741811LL, *a1, a1[3], *v8, *v7);
          WdLogGlobalForLineNumber = 18606;
          return v13;
        }
        if ( a1[1] == 24 )
        {
          v30 = DxDdGetDxgkWin32kInterface(v29);
          v31 = (*(__int64 (__fastcall **)(_QWORD, int *))(v30 + 248))(0LL, a1);
          v13 = v31;
          if ( v31 < 0 )
          {
            WdLogSingleEntry2(3LL, a1, v31);
            WdLogGlobalForLineNumber = 18594;
          }
          return v13;
        }
        return 3221225485LL;
      case 0xFFFFFFD7:
        if ( a1[1] == 24 )
        {
          v27 = DxDdGetDxgkWin32kInterface(v9);
          v28 = (*(__int64 (__fastcall **)(_QWORD, int *))(v27 + 248))(0LL, a1);
          v13 = v28;
          if ( v28 < 0 )
          {
            WdLogSingleEntry2(3LL, a1, v28);
            WdLogGlobalForLineNumber = 18764;
          }
          return v13;
        }
        return 3221225485LL;
      case 0xFFFFFFD8:
        if ( a1[1] == 24 )
        {
          v25 = DxDdGetDxgkWin32kInterface(v9);
          v26 = (*(__int64 (__fastcall **)(_QWORD, int *))(v25 + 248))(0LL, a1);
          v13 = v26;
          if ( v26 < 0 )
          {
            WdLogSingleEntry2(3LL, a1, v26);
            WdLogGlobalForLineNumber = 18746;
          }
          return v13;
        }
        return 3221225485LL;
      case 0xFFFFFFDA:
        if ( a1[1] == 28 )
        {
          v23 = DxDdGetDxgkWin32kInterface(v9);
          v24 = (*(__int64 (__fastcall **)(_QWORD, int *))(v23 + 248))(0LL, a1);
          v13 = v24;
          if ( v24 < 0 )
          {
            WdLogSingleEntry2(3LL, a1, v24);
            WdLogGlobalForLineNumber = 18728;
          }
          return v13;
        }
        return 3221225485LL;
      case 0xFFFFFFDD:
        if ( (unsigned int)a1[1] >= 0x18 )
        {
          v21 = DxDdGetDxgkWin32kInterface(v9);
          v22 = (*(__int64 (__fastcall **)(_QWORD, int *))(v21 + 248))(0LL, a1);
          v13 = v22;
          if ( v22 < 0 )
          {
            WdLogSingleEntry2(3LL, a1, v22);
            WdLogGlobalForLineNumber = 18710;
          }
          return v13;
        }
        break;
      case 0xFFFFFFE5:
        if ( (unsigned int)a1[1] >= 0x18 )
        {
          v18 = DxDdGetDxgkWin32kInterface(v9);
          v13 = (*(__int64 (__fastcall **)(_QWORD, int *))(v18 + 248))(0LL, a1);
          if ( v13 == -1073741802 )
          {
            IsEnabledDeviceUsageNoInline = Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline();
            v20 = 2191;
            if ( !IsEnabledDeviceUsageNoInline )
              v20 = 2447;
            v13 = xxxUserSetDisplayConfig(0, 0LL, v20, 0, 0LL, 1, 0LL, 0LL, 0LL, a2, 0LL);
          }
          if ( (v13 & 0x80000000) != 0 )
          {
            WdLogSingleEntry2(3LL, a1, (int)v13);
            WdLogGlobalForLineNumber = 18692;
          }
          return v13;
        }
        break;
      default:
        switch ( (_DWORD)v10 )
        {
          case 0xFFFFFFE9:
            if ( a1[1] == 48 )
            {
              v16 = DxDdGetDxgkWin32kInterface(v9);
              v17 = (*(__int64 (__fastcall **)(_QWORD, int *))(v16 + 248))(0LL, a1);
              v13 = v17;
              if ( v17 < 0 )
              {
                WdLogSingleEntry2(3LL, a1, v17);
                WdLogGlobalForLineNumber = 18624;
              }
              return v13;
            }
            break;
          case 0xFFFFFFED:
            if ( a1[1] == 24 )
            {
              v14 = DxDdGetDxgkWin32kInterface(v9);
              v15 = (*(__int64 (__fastcall **)(_QWORD, int *))(v14 + 248))(0LL, a1);
              v13 = v15;
              if ( v15 < 0 )
              {
                WdLogSingleEntry2(3LL, a1, v15);
                WdLogGlobalForLineNumber = 18575;
              }
              return v13;
            }
            break;
          case 0xFFFFFFEE:
            if ( a1[1] == 28 )
            {
              v11 = DxDdGetDxgkWin32kInterface(v9);
              v12 = (*(__int64 (__fastcall **)(_QWORD, int *))(v11 + 248))(0LL, a1);
              v13 = v12;
              if ( v12 < 0 )
              {
                WdLogSingleEntry2(3LL, a1, v12);
                WdLogGlobalForLineNumber = 18558;
              }
              return v13;
            }
            return 3221225485LL;
          default:
            goto LABEL_68;
        }
        return 3221225485LL;
    }
    return 3221225507LL;
  }
  if ( (_DWORD)v10 == -6 )
  {
    if ( a1[1] == 28 )
    {
      v62 = DxDdGetDxgkWin32kInterface(v9);
      v63 = (*(__int64 (__fastcall **)(_QWORD, int *))(v62 + 248))(0LL, a1);
      v13 = v63;
      if ( v63 >= 0 )
      {
        if ( a1[6] )
        {
          v64 = xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 4u, 0LL, 1, 0LL, 0LL, 0LL, a2, 0LL);
          v13 = v64;
          if ( v64 < 0 )
          {
            WdLogSingleEntry1(3LL, v64);
            WdLogGlobalForLineNumber = 18423;
          }
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, a1, v63);
        WdLogGlobalForLineNumber = 18403;
      }
      return v13;
    }
    return 3221225485LL;
  }
  if ( (_DWORD)v10 == -4 )
  {
    if ( a1[1] == 24 )
      return (unsigned int)DrvDisplayConfigSetScaleFactorOverride(a1, 0LL);
    return 3221225485LL;
  }
  if ( (_DWORD)v10 != 5 )
  {
    if ( (_DWORD)v10 != 8 )
    {
      if ( (_DWORD)v10 != 10 )
      {
        if ( (_DWORD)v10 == 13 )
        {
          if ( a1[1] == 312 )
          {
            v37 = DxDdGetDxgkWin32kInterface(v9);
            v38 = (*(__int64 (__fastcall **)(_QWORD, int *))(v37 + 248))(0LL, a1);
            v13 = v38;
            if ( v38 < 0 )
            {
              WdLogSingleEntry2(3LL, a1, v38);
              WdLogGlobalForLineNumber = 18641;
            }
            return v13;
          }
          return 3221225485LL;
        }
        if ( (unsigned int)(v10 - 16) > 1 )
        {
LABEL_68:
          v13 = -1073741811;
          WdLogSingleEntry5(2LL, -1073741811LL, *a1, a1[3], *v8, *v7);
          WdLogGlobalForLineNumber = 18777;
          return v13;
        }
      }
      v39 = DxDdGetDxgkWin32kInterface(v9);
      v40 = (*(__int64 (__fastcall **)(_QWORD, int *))(v39 + 248))(0LL, a1);
      v13 = v40;
      if ( v40 >= 0 )
      {
        if ( v40 != 255 )
        {
          v41 = Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline();
          v42 = xxxUserSetDisplayConfig(0, 0LL, v41 != 0 ? 2191 : 2447, 0, 0LL, 1, 0LL, 0LL, 0LL, a2, 0LL);
          v13 = v42;
          if ( v42 < 0 )
          {
            WdLogSingleEntry1(3LL, v42);
            WdLogGlobalForLineNumber = 18476;
          }
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, a1, v40);
        WdLogGlobalForLineNumber = 18438;
      }
      return v13;
    }
    if ( a1[1] == 24 )
    {
      v43 = DxDdGetDxgkWin32kInterface(v9);
      v44 = (*(__int64 (__fastcall **)(_QWORD, int *))(v43 + 248))(0LL, a1);
      v13 = v44;
      if ( v44 >= 0 )
      {
        v45 = xxxUserSetDisplayConfig(0, 0LL, 0x98Fu, 0, 0LL, 1, 0LL, 0LL, 0LL, a2, 0LL);
        v13 = v45;
        if ( v45 < 0 )
        {
          WdLogSingleEntry1(3LL, v45);
          WdLogGlobalForLineNumber = 18381;
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, a1, v44);
        WdLogGlobalForLineNumber = 18362;
      }
      return v13;
    }
    return 3221225485LL;
  }
  if ( a1[1] != 24 )
    return 3221225485LL;
  WdLogSingleEntry5(4LL, v10, a1[3], *v8, *v7, a1[5] & 1);
  WdLogGlobalForLineNumber = 18241;
  v47 = DxDdGetDxgkWin32kInterface(v46);
  v48 = (*(__int64 (**)(void))(v47 + 272))();
  v50 = a1[5];
  v13 = v48;
  if ( v48 < 0 )
  {
    WdLogSingleEntry5(2LL, v48, a1[3], *v8, *v7, v50 & 1);
    WdLogGlobalForLineNumber = 18251;
    return v13;
  }
  v65 = 0LL;
  v51 = 0LL;
  if ( (v50 & 1) == 0 )
  {
LABEL_93:
    v55 = DxDdGetDxgkWin32kInterface(v49);
    v56 = (a1[5] & 1) == 0;
    LODWORD(v56) = v56 | 0x80000000;
    v57 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v55 + 224))(*(_QWORD *)v8, *v7, v56, 0LL);
    v13 = v57;
    if ( v57 >= 0 )
    {
      if ( v51 )
      {
        v59 = DxDdGetDxgkWin32kInterface(v58);
        v60 = (*(__int64 (__fastcall **)(__int64, char *))(v59 + 176))(0x40000000LL, v51);
        if ( v60 < 0 )
        {
          WdLogSingleEntry5(2LL, v60, a1[3], *v8, *v7, a1[5] & 1);
          WdLogGlobalForLineNumber = 18324;
        }
      }
    }
    else
    {
      WdLogSingleEntry5(2LL, v57, a1[3], *v8, *v7, a1[5] & 1);
      WdLogGlobalForLineNumber = 18305;
    }
    v61 = DxDdGetDxgkWin32kInterface(v58);
    if ( (*(int (**)(void))(v61 + 280))() < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 18330;
    }
    FreePathsModality(v51);
    return v13;
  }
  PathsModality = GetPathsModality(v49, &v65, 0x40u, 0);
  v53 = PathsModality;
  if ( PathsModality >= 0
    || (WdLogSingleEntry5(2LL, PathsModality, a1[3], *v8, *v7, a1[5] & 1),
        WdLogGlobalForLineNumber = 18269,
        v53 != -1073741801) )
  {
    v51 = v65;
    goto LABEL_93;
  }
  v54 = DxDdGetDxgkWin32kInterface(v49);
  if ( (*(int (**)(void))(v54 + 280))() < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 18274;
  }
  return 3221225495LL;
}
