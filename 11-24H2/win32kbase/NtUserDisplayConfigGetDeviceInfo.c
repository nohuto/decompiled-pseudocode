/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x14016B770
 * Callers:
 *     <none>
 * Callees:
 *     ??0MaybeEnterLeaveCritSharedOnly@@QEAA@_N@Z @ 0x140010C58 (--0MaybeEnterLeaveCritSharedOnly@@QEAA@_N@Z.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     DrvSampleDisplayState @ 0x1400C8DA0 (DrvSampleDisplayState.c)
 *     ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400CAB04 (-AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1400CFFC4 (_DeviceInfoTranslateStatusDefault.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6978 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14016AE9C (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14016AF84 (-RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DrvCreateLiveDumpWithWdLogs @ 0x1401C9C64 (DrvCreateLiveDumpWithWdLogs.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(char *a1)
{
  _DWORD *v2; // r14
  void *v3; // r12
  signed int DeviceInfoInternal; // edi
  unsigned int *v5; // rdx
  size_t v6; // rbx
  unsigned __int64 v7; // r13
  _DWORD *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // eax
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // rcx
  int GetterTypeSize; // eax
  volatile void *v15; // rbx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  BOOL v19; // r13d
  __int64 UserSessionState; // rax
  unsigned int v22; // [rsp+30h] [rbp-D8h]
  _DWORD v23[3]; // [rsp+34h] [rbp-D4h] BYREF
  int v24; // [rsp+50h] [rbp-B8h] BYREF
  int v25[5]; // [rsp+54h] [rbp-B4h] BYREF
  _DWORD v26[4]; // [rsp+68h] [rbp-A0h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-90h]
  __int128 v28; // [rsp+80h] [rbp-88h] BYREF
  __int64 v29; // [rsp+90h] [rbp-78h]
  int v30; // [rsp+98h] [rbp-70h]
  _DWORD *v31; // [rsp+B0h] [rbp-58h]
  char v32; // [rsp+118h] [rbp+10h] BYREF
  int v33; // [rsp+120h] [rbp+18h]
  int Src; // [rsp+128h] [rbp+20h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  Address = 0LL;
  v22 = 0;
  memset(v23, 0, sizeof(v23));
  DeviceInfoInternal = 0;
  v33 = 0;
  if ( !*(_DWORD *)(W32GetUserGdiSessionState(a1) + 32) )
  {
    DeviceInfoInternal = -1073741823;
LABEL_3:
    v33 = DeviceInfoInternal;
LABEL_56:
    if ( v23[0] )
    {
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0;
      DrvSampleDisplayState((__int64)&v28);
      v19 = *(_QWORD *)&v23[1] == __PAIR64__(v28, DWORD2(v28));
      if ( *(_QWORD *)&v23[1] != __PAIR64__(v28, DWORD2(v28)) )
      {
        v26[0] = 0;
        RtlCopyToUser(a1 + 2024, v26, 4uLL);
        WdLogSingleEntry5(2LL, v23[2], v23[1], (unsigned int)v28, DWORD2(v28), (int)v22);
        WdLogGlobalForLineNumber = 2382;
        WdLogSingleEntry2(2LL, DeviceInfoInternal, (int)v22);
        WdLogGlobalForLineNumber = 2387;
      }
      UserSessionState = W32GetUserSessionState(v18);
      if ( *(_DWORD *)(UserSessionState + 57040) )
      {
        WdLogSingleEntry2(2LL, DeviceInfoInternal, (int)v22);
        WdLogGlobalForLineNumber = 2417;
      }
      else if ( v19 )
      {
        *(_DWORD *)(UserSessionState + 57040) = 1;
        DrvCreateLiveDumpWithWdLogs((unsigned int)DeviceInfoInternal, v22);
      }
      else
      {
        WdLogSingleEntry2(2LL, DeviceInfoInternal, (int)v22);
        WdLogGlobalForLineNumber = 2409;
      }
    }
    goto LABEL_64;
  }
  v5 = (unsigned int *)(a1 + 4);
  if ( (unsigned __int64)(a1 + 4) >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  v6 = *v5;
  if ( (unsigned int)v6 < 0x14 )
    ExRaiseStatus(-1073741811);
  v7 = *v5;
  v2 = (_DWORD *)Win32AllocPoolWithQuotaZInitImpl(MmUserProbeAddress, v7, 0x63447355u);
  v31 = v2;
  if ( !v2 )
  {
    v8 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    if ( *v8 == -21 && (_DWORD)v6 == 2056 )
    {
      Src = 0;
      RtlCopyToUser(a1 + 2016, &Src, 4uLL);
      v24 = 0;
      RtlCopyToUser(a1 + 2020, &v24, 4uLL);
      v25[0] = 1144084230;
      RtlCopyToUser(a1 + 2024, v25, 4uLL);
    }
    WdLogSingleEntry2(2LL, v7, 1144084230LL);
    WdLogGlobalForLineNumber = 2205;
    ExRaiseStatus(-1073741801);
  }
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  RtlCopyVolatileMemory(v2, a1, v6);
  v2[1] = v6;
  v9 = (unsigned int)*v2;
  if ( (_DWORD)v9 == -21 )
  {
    if ( (_DWORD)v6 != 2056 )
      goto LABEL_20;
    v23[2] = v2[504];
    v23[1] = v2[505];
    v2[504] = 0;
    v2[505] = 0;
    v23[0] = 1;
  }
  else if ( (_DWORD)v9 == -15 )
  {
    if ( (_DWORD)v6 != 32 )
    {
LABEL_20:
      DeviceInfoInternal = -1073741811;
      goto LABEL_3;
    }
    v10 = v2[5];
    if ( v10 )
    {
      v3 = (void *)Win32AllocPoolWithQuotaZInitImpl(v9, v10, 0x63447355u);
      if ( !v3 )
      {
        DeviceInfoInternal = -1073741801;
        goto LABEL_3;
      }
      Address = (volatile void *)*((_QWORD *)v2 + 3);
      *((_QWORD *)v2 + 3) = v3;
      LODWORD(v9) = *v31;
    }
  }
  v11 = DispConfigTypes::RequiresUserCritShared(v9);
  MaybeEnterLeaveCritSharedOnly::MaybeEnterLeaveCritSharedOnly((MaybeEnterLeaveCritSharedOnly *)&v32, v11);
  if ( !DispConfigTypes::AllowInAnySession(*v2) )
  {
    if ( *(_DWORD *)(W32GetUserGdiSessionState(v12) + 36) )
    {
      DeviceInfoInternal = -1073741823;
      v33 = -1073741823;
      goto LABEL_39;
    }
    if ( !(unsigned int)UserIsWddmConnectedSession(v13) )
      DeviceInfoInternal = -1073741790;
    v33 = DeviceInfoInternal;
  }
  if ( DeviceInfoInternal >= 0 )
  {
    GetterTypeSize = DispConfigTypes::GetGetterTypeSize(*v2);
    if ( !GetterTypeSize || v2[1] != GetterTypeSize )
    {
      DeviceInfoInternal = -1073741811;
      v33 = -1073741811;
    }
    if ( DeviceInfoInternal >= 0 )
    {
      DeviceInfoInternal = DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v2, 1);
      v33 = DeviceInfoInternal;
    }
  }
LABEL_39:
  if ( v32 )
    UserSessionSwitchLeaveCritWithNonPaged();
  if ( DeviceInfoInternal < 0 && v23[0] )
    v22 = v2[506];
  if ( DeviceInfoInternal == -2147483643 )
  {
    DeviceInfoInternal = -1073741789;
    v33 = -1073741789;
  }
  else if ( DeviceInfoInternal != -1073741789 )
  {
    DeviceInfoInternal = DeviceInfoTranslateStatusDefault(*v2, DeviceInfoInternal);
    v33 = DeviceInfoInternal;
  }
  if ( *v2 == -15 )
  {
    v15 = Address;
    *((_QWORD *)v2 + 3) = Address;
    if ( DeviceInfoInternal >= 0 )
    {
      if ( v2[5] )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
        ProbeForWrite(v15, (unsigned int)v2[5], CurrentProcessWow64Process != 0 ? 1 : 4);
        memmove((void *)v15, v3, (unsigned int)v2[5]);
      }
    }
  }
  if ( *v2 == 3 && DeviceInfoInternal >= 0 )
    v2[7] = 0;
  v17 = PsGetCurrentProcessWow64Process();
  ProbeForWrite(a1, (unsigned int)v2[1], v17 != 0 ? 1 : 4);
  RtlCopyVolatileMemory(a1, v2, (unsigned int)v2[1]);
  if ( DeviceInfoInternal < 0 )
    goto LABEL_56;
LABEL_64:
  if ( v3 )
    GreDeleteFastMutex((char *)v3);
  if ( v2 )
    GreDeleteFastMutex((char *)v2);
  return (unsigned int)DeviceInfoInternal;
}
