/*
 * XREFs of InitVideo @ 0x1401B2E18
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x14013264C (-UserInitialize@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 * Callees:
 *     DrvCloseGraphicsDevices @ 0x14004E5F0 (DrvCloseGraphicsDevices.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1400C6C58 (UpdateExternalMonitorConnectedStatus.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1400C7B00 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     GreUpdateSharedDevCaps @ 0x14011F320 (GreUpdateSharedDevCaps.c)
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401483DC (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     CacheRotationInfo @ 0x140157C78 (CacheRotationInfo.c)
 *     InitUserScreen @ 0x140162CD0 (InitUserScreen.c)
 *     DrvInitConsole @ 0x1401794EC (DrvInitConsole.c)
 *     ??4?$SGRDPgProtocolType@G@@QEAAAEAGAEBG@Z @ 0x14019E4F8 (--4-$SGRDPgProtocolType@G@@QEAAAEAGAEBG@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1401A8EC8 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x1401AECD4 (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     GreReinitializePerUserDpiSetting @ 0x1401CCB74 (GreReinitializePerUserDpiSetting.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

struct _MDEV *__fastcall InitVideo(__int64 a1)
{
  int v2; // edi
  __int16 v3; // si
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  struct _MDEV *v15; // rbx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int (*v20)(void); // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int16 v24; // [rsp+B8h] [rbp+10h] BYREF
  struct _MDEV *v25; // [rsp+C0h] [rbp+18h] BYREF

  v25 = 0LL;
  v2 = 0;
  v3 = *(_WORD *)(W32GetUserSessionState(a1) + 69008);
  if ( (int)DrvInitConsole(v4) < 0 )
    return 0LL;
  if ( !*(_DWORD *)(W32GetUserSessionState(v5) + 68864) && !*(_DWORD *)(W32GetUserSessionState(v6) + 68868) )
  {
    v24 = -1;
    SGRDPgProtocolType<unsigned short>::operator=(v6, &v24);
    *(_DWORD *)(W32GetUserSessionState(v7) + 316) = 0xFFFF;
    v2 = 1;
    v6 = *(_QWORD *)(W32GetSessionState(v8) + 88);
    *(_DWORD *)(v6 + 1060) = 0;
  }
  DispBrokerUpdateKernelDisplayPolicies(v6);
  GreReinitializePerUserDpiSetting();
  IsEnabledDeviceUsageNoInline = Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline();
  v10 = 2191;
  if ( !IsEnabledDeviceUsageNoInline )
    v10 = 2447;
  if ( (int)DrvSetDisplayConfig(0, 0LL, v10, 0x802u, 0LL, 0, 0LL, 0LL, 0LL, &v25, 0LL, 0LL, 0LL, 0LL, 0LL, a1, 0LL) < 0 )
    return 0LL;
  if ( !(unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline()
    && !*(_WORD *)(W32GetUserSessionState(v11) + 69008) )
  {
    UpdateExternalMonitorConnectedStatus(1);
  }
  v12 = *(_QWORD *)(W32GetSessionState(v11) + 88);
  *(_DWORD *)(v12 + 1060) = 0;
  v13 = *(_QWORD *)v25;
  v14 = *(_QWORD *)(W32GetUserSessionState(v12) + 57008);
  *(_QWORD *)(v14 + 48) = v13;
  v15 = v25;
  v16 = *(_QWORD *)(W32GetUserSessionState(v14) + 57008);
  *(_QWORD *)(v16 + 16) = v15;
  UserSessionState = W32GetUserSessionState(v16);
  GreUpdateSharedDevCaps(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  if ( !(unsigned int)InitUserScreen() )
    return 0LL;
  if ( v2 )
  {
    if ( !v3 )
      RtlSetActiveConsoleId(0xFFFFFFFFLL);
    DrvCloseGraphicsDevices(1LL);
  }
  else
  {
    v20 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, v18) + 48) + 3072LL);
    if ( v20 && v20() >= 0 )
      CacheRotationInfo(v22, v21);
  }
  HYDRA_HINT(4LL);
  return v25;
}
