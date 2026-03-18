/*
 * XREFs of xxxResetDisplayDevice @ 0x1400A2770
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1401BEA84 (UserNotifyUniversalScaleFactorChanged.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x140041C90 (ReferenceDwmApiPort.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140060DA0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140060DC8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140092790 (McTemplateK0_EtwWriteTransfer.c)
 *     PopAndFreeW32ThreadLock @ 0x1400991CC (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsCreateBitmapStripSupported @ 0x1400A0E00 (IsCreateBitmapStripSupported.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1400A0E38 (-ResetSystemColors@@YAXXZ.c)
 *     ApiSeEditionDeferWinEventNotify @ 0x1400A2BC0 (ApiSeEditionDeferWinEventNotify.c)
 *     ApiSetEditionEndDeferWinEventNotify @ 0x1400A2C18 (ApiSetEditionEndDeferWinEventNotify.c)
 *     DestroyMonitorDCs @ 0x1400A2C70 (DestroyMonitorDCs.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x1400A3748 (IsPostIAMShellHookMessageExSupported.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1400A37E8 (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1400A3820 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     PostIAMShellHookMessageEx @ 0x1400A3894 (PostIAMShellHookMessageEx.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x1400A3A40 (DwmAsyncNotifyDisplayModeChange.c)
 *     CreateBitmapStrip @ 0x1400A3C1C (CreateBitmapStrip.c)
 *     zzzResetSharedDesktops @ 0x14014DEB8 (zzzResetSharedDesktops.c)
 *     ApiSetEditionGetCurrentMonitorTopology @ 0x1401544CC (ApiSetEditionGetCurrentMonitorTopology.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1401559AC (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     CacheRotationInfo @ 0x140157C78 (CacheRotationInfo.c)
 *     IsxxxBroadcastDisplaySettingsChangeSupported @ 0x14023B550 (IsxxxBroadcastDisplaySettingsChangeSupported.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x14023B8F8 (xxxBroadcastDisplaySettingsChange.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxResetDisplayDevice(__int64 a1, int *a2, __int64 a3)
{
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // eax
  unsigned __int16 v10; // r14
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int updated; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int (*v18)(void); // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  CMonitorTopology *v24; // rcx
  int (*v25)(void); // rax
  void (__fastcall *v26)(__int64); // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int (*v29)(void); // rax
  int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // rcx
  int (*v33)(void); // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  void (__fastcall *v36)(__int64, __int64, __int64); // rax
  int (*v38)(void); // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  void (*v41)(void); // rax
  int v42; // ebx
  __int64 UserSessionState; // rax
  __int64 v44; // rax
  int (*v45)(void); // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int (__fastcall *v48)(__int64); // rax
  __int64 v49; // rcx
  volatile signed __int32 *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  _BYTE v53[16]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v54[4]; // [rsp+50h] [rbp-20h] BYREF
  int CurrentProcessSessionId; // [rsp+A8h] [rbp+38h] BYREF
  volatile signed __int32 *v56; // [rsp+B8h] [rbp+48h] BYREF

  v6 = 0LL;
  v8 = *(_QWORD *)(W32GetUserSessionState(a1) + 19928);
  v9 = *a2;
  v10 = *(_WORD *)(v8 + 6996);
  v56 = 0LL;
  if ( (v9 & 1) == 0 )
  {
    if ( a1 && (v6 = *(volatile signed __int32 **)(a1 + 264)) != 0LL )
    {
      *(_QWORD *)(a1 + 264) = 0LL;
      v56 = v6;
    }
    else
    {
      ApiSetEditionGetCurrentMonitorTopology(&v56);
      v6 = v56;
    }
  }
  v11 = PtiCurrent(v7);
  v54[0] = *((_QWORD *)v11 + 48);
  *((_QWORD *)v11 + 48) = v54;
  v54[2] = _lambda_fd77beed04b6b1a39114e0f43ae1b0ce_::_lambda_invoker_cdecl_;
  v54[1] = v6;
  DestroyMonitorDCs();
  ApiSeEditionDeferWinEventNotify();
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v53);
  updated = zzzUpdateUserScreen();
  if ( updated >= 0 )
  {
    v38 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 48) + 3696LL);
    if ( v38 )
    {
      if ( v38() >= 0 )
      {
        v41 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v40, v39) + 48) + 3704LL);
        if ( v41 )
          v41();
      }
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v53);
  ApiSetEditionEndDeferWinEventNotify();
  if ( updated < 0 )
  {
    PopAndFreeW32ThreadLock((__int64)v54);
    return (unsigned int)updated;
  }
  else
  {
    v17 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v16, v15) + 48);
    v18 = *(int (**)(void))(v17 + 3712);
    if ( v18 && v18() >= 0 )
    {
      v42 = *a2;
      UserSessionState = W32GetUserSessionState(v17);
      zzzResetSharedDesktops(
        a1,
        v10 != *(_WORD *)(*(_QWORD *)(UserSessionState + 19928) + 6996LL),
        (unsigned int)-__CFSHR__(v42, 2),
        (unsigned int)-__CFSHR__(v42, 4));
    }
    ResetSystemColors(v17);
    if ( (int)IsCreateBitmapStripSupported(v20, v19) >= 0 )
      CreateBitmapStrip();
    if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
    {
      v44 = ReferenceDwmApiPort();
      DwmAsyncNotifyDisplayModeChange(v44);
    }
    v24 = *(CMonitorTopology **)(W32GetWin32kBaseApiSetTable(v22, v21) + 48);
    v25 = (int (*)(void))*((_QWORD *)v24 + 470);
    if ( v25 )
    {
      if ( v25() >= 0 )
      {
        v24 = *(CMonitorTopology **)(W32GetWin32kBaseApiSetTable(v24, v23) + 48);
        v26 = (void (__fastcall *)(__int64))*((_QWORD *)v24 + 471);
        if ( v26 )
          v26(a1);
      }
    }
    if ( a1 )
    {
      v24 = *(CMonitorTopology **)(a1 + 264);
      if ( v24 )
      {
        CMonitorTopology::Release(v24);
        *(_QWORD *)(a1 + 264) = 0LL;
      }
    }
    if ( (*a2 & 2) != 0
      && (v45 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v24, v23) + 48) + 3776LL)) != 0LL
      && v45() >= 0
      && (v48 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v47, v46) + 48) + 3784LL)) != 0LL
      && v48(a1) )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        McTemplateK0_EtwWriteTransfer(v49, &ChangeDisplayModeDeferral, 0LL);
      *(_DWORD *)(**(_QWORD **)(a1 + 8) + 64LL) |= 2u;
      v50 = v56;
      if ( v56 )
      {
        *(_QWORD *)(a1 + 264) = v56;
        _InterlockedIncrement(v50);
      }
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
        PostIAMShellHookMessageEx(a1, 35LL, 1LL);
      if ( (int)IsxxxBroadcastDisplaySettingsChangeSupported() >= 0 )
        xxxBroadcastDisplaySettingsChange(a1, v51, v52, 2LL);
    }
    else
    {
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
        PostIAMShellHookMessageEx(a1, 35LL, 0LL);
      v29 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v28, v27) + 48) + 3824LL);
      if ( v29 && v29() >= 0 )
        xxxDesktopsRecalcAndBroadcastDisplayChange(a1, (_DWORD)v56, v10, v30, (__int64)a2, a3);
    }
    PopAndFreeW32ThreadLock((__int64)v54);
    v33 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v32, v31) + 48) + 3840LL);
    if ( v33 )
    {
      if ( v33() >= 0 )
      {
        v36 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v35, v34) + 48)
                                                               + 3848LL);
        if ( v36 )
          v36(a1, 1LL, 1LL);
      }
    }
    if ( (*a2 & 2) == 0 )
      CacheRotationInfo();
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId);
    return 0LL;
  }
}
