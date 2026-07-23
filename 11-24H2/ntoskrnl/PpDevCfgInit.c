/*
 * XREFs of PpDevCfgInit @ 0x140C26FC4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline @ 0x1405A3B10 (Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PpDevCfgRequestDeviceInstall @ 0x1406F8BD0 (PpDevCfgRequestDeviceInstall.c)
 *     PiDevCfgReadDriverPolicy @ 0x1407292E8 (PiDevCfgReadDriverPolicy.c)
 *     PiDrvDbEnumNodes @ 0x140734D1C (PiDrvDbEnumNodes.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140735C50 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408CE800 (PiDmEnumObjectsWithCallback.c)
 *     PipOpenServiceEnumKeys @ 0x1409B5D44 (PipOpenServiceEnumKeys.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409CA030 (PiDevCfgQueryObjectProperties.c)
 *     RtlIsStateSeparationEnabled @ 0x140A579B0 (RtlIsStateSeparationEnabled.c)
 *     PiDevCfgSetObjectProperty @ 0x140A70328 (PiDevCfgSetObjectProperty.c)
 */

__int64 PpDevCfgInit()
{
  char v0; // r14
  __int64 v1; // rcx
  int ObjectProperties; // esi
  int v3; // edi
  int v4; // ebx
  __int64 v5; // rcx
  int SyncNodesUpdated; // eax
  __int64 v8; // [rsp+30h] [rbp-D8h]
  int v9; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v10; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v11; // [rsp+70h] [rbp-98h] BYREF
  int v12; // [rsp+74h] [rbp-94h] BYREF
  int v13; // [rsp+78h] [rbp-90h] BYREF
  int v14; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v15; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  HANDLE v17; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v18; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v19; // [rsp+A8h] [rbp-60h] BYREF
  int v20; // [rsp+B0h] [rbp-58h]
  int *v21; // [rsp+B8h] [rbp-50h]
  int v22; // [rsp+C0h] [rbp-48h]
  int v23; // [rsp+C8h] [rbp-40h]
  __int64 *v24; // [rsp+D0h] [rbp-38h]
  int v25; // [rsp+D8h] [rbp-30h]
  int *v26; // [rsp+E0h] [rbp-28h]
  int v27; // [rsp+E8h] [rbp-20h]
  int v28; // [rsp+F0h] [rbp-18h]
  __int64 *v29; // [rsp+F8h] [rbp-10h]
  int v30; // [rsp+100h] [rbp-8h]
  int *v31; // [rsp+108h] [rbp+0h]
  int v32; // [rsp+110h] [rbp+8h]
  int v33; // [rsp+118h] [rbp+10h]

  v11 = 0;
  v13 = 0;
  v0 = 0;
  LOWORD(v9) = 0;
  *(_DWORD *)(&v18.MaximumLength + 1) = 0;
  v17 = 0LL;
  Handle = 0LL;
  v12 = 0;
  memset_0(&v19, 0, 0x78uLL);
  v20 = 7;
  v19 = DEVPKEY_DriverDatabase_ConfigMode;
  v22 = 4;
  v21 = &v11;
  v24 = DEVPKEY_DriverDatabase_ConfigOptions;
  v25 = 7;
  v26 = &v13;
  v27 = 4;
  v31 = &v9;
  v29 = DEVPKEY_DriverDatabase_Updated;
  v30 = 17;
  v32 = 1;
  ObjectProperties = PiDevCfgQueryObjectProperties(v1, (WCHAR *)L"SYSTEM", 7u, 0LL, (__int64)&v19, 3u);
  if ( ObjectProperties >= 0 )
  {
    if ( v23 >= 0 )
    {
      if ( (v11 & 3) == 0 )
        v11 = 0;
    }
    else
    {
      v11 = 3;
    }
    if ( v28 < 0 )
      v13 = 0;
    if ( v33 < 0 )
      LOBYTE(v9) = 0;
    *(_DWORD *)&v18.Length = 1835034;
    v18.Buffer = L"DeviceInstall";
    if ( PipOpenServiceEnumKeys(&v18, 0x20019u, &v17, 0LL, 0) >= 0 )
    {
      v3 = 1;
      v4 = 0;
      v14 = 1;
      v15 = 0;
      if ( (int)PnpCtxRegOpenKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)v17,
                  (__int64)L"Parameters",
                  0,
                  0x20019u,
                  (__int64)&Handle) >= 0 )
      {
        if ( RtlIsStateSeparationEnabled() )
        {
          v10 = 4;
          if ( (int)PnpCtxRegQueryValue(v5, Handle, L"DeviceInstallMode", &v12, &v14, &v10) < 0
            || v12 != 4
            || (v3 = v14, v10 != 4) )
          {
            v3 = 0;
          }
        }
        v10 = 4;
        if ( (int)PnpCtxRegQueryValue(v5, Handle, L"DriverUpdatesPending", &v12, &v15, &v10) >= 0
          && v12 == 4
          && v10 == 4 )
        {
          v4 = v15;
        }
        ZwClose(Handle);
      }
      ZwClose(v17);
      if ( v3 )
      {
        PiDevCfgFlags |= 2u;
        if ( v4 )
          PpDevCfgRequestDeviceInstall();
      }
    }
    PiDevCfgMode = v11;
    PiDevCfgOptions = v13;
    if ( (unsigned int)Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline() )
      PiDevCfgReadDriverPolicy(1, &PiDevCfgSystemDriverPolicy);
    if ( PiDevCfgMode )
    {
      if ( (PiDevCfgOptions & 0x20) != 0 || (PiDevCfgFlags & 2) == 0 )
      {
        SyncNodesUpdated = PiDrvDbQuerySyncNodesUpdated(0, (char *)&v9 + 1);
        v0 = BYTE1(v9);
        if ( SyncNodesUpdated >= 0 )
        {
          if ( BYTE1(v9) )
            PiDevCfgFlags |= 1u;
        }
      }
      if ( (_BYTE)v9 == 0xFF )
        PiDevCfgFlags |= 1u;
    }
    if ( (PiDevCfgFlags & 1) != 0 )
    {
      if ( !RtlIsStateSeparationEnabled() || (ObjectProperties = PiDrvDbEnumNodes(), ObjectProperties >= 0) )
      {
        ObjectProperties = PiDmEnumObjectsWithCallback(1, PiDevCfgInitDeviceCallback, 0LL);
        if ( ObjectProperties >= 0 )
        {
          if ( (_BYTE)v9 == 0xFF )
            PiDevCfgSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              0LL,
              L"SYSTEM",
              7,
              0LL,
              v8,
              (__int64)DEVPKEY_DriverDatabase_Updated,
              0,
              0LL,
              0,
              0);
          if ( v0 )
            PiDrvDbQuerySyncNodesUpdated(1, 0LL);
        }
      }
    }
  }
  return (unsigned int)ObjectProperties;
}
