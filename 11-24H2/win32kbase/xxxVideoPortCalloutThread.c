/*
 * XREFs of xxxVideoPortCalloutThread @ 0x1401B08D4
 * Callers:
 *     xxxCreateSystemThreads @ 0x140091CD0 (xxxCreateSystemThreads.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x14004E190 (UserRemoteConnectedSessionUsingWddm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x140087D30 (GreIncrementDisplaySettingsUniqueness.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140092440 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x140092D10 (IsxxxDwmStopRedirectionSupported.c)
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1400C6C58 (UpdateExternalMonitorConnectedStatus.c)
 *     IsRemoteConnection @ 0x1400C88B4 (IsRemoteConnection.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1400E0740 (McTemplateK0dq_EtwWriteTransfer.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E5480 (DrvDxgkLogCodePointPacket.c)
 *     DCompositionForceRender @ 0x1400E8CF8 (DCompositionForceRender.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1400F7124 (DrvProcessDxgkDisplayCallout.c)
 *     ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x1400F78B8 (--0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EA98 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     zzzUpdateCursorImage @ 0x140129D00 (zzzUpdateCursorImage.c)
 *     IsxxxUserResetDisplayDeviceSupported @ 0x14012BA80 (IsxxxUserResetDisplayDeviceSupported.c)
 *     ?ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ @ 0x140130F7C (-ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ.c)
 *     SetPointer @ 0x140145A60 (SetPointer.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x140147990 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     SafeEnableMDEV @ 0x140147E70 (SafeEnableMDEV.c)
 *     ?ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ @ 0x14014AD80 (-ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ.c)
 *     IsSetPointerSupported @ 0x14014B3D4 (IsSetPointerSupported.c)
 *     xxxSetCsrssThreadDesktop @ 0x140150AF4 (xxxSetCsrssThreadDesktop.c)
 *     SafeDisableMDEV @ 0x140156D70 (SafeDisableMDEV.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x140157B50 (xxxRestoreCsrssThreadDesktop.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x14015837C (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     IszzzUpdateCursorImageSupported @ 0x14015AFEC (IszzzUpdateCursorImageSupported.c)
 *     PostWinlogonMessage @ 0x140167BB0 (PostWinlogonMessage.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     xxxDwmControl @ 0x14017A7C0 (xxxDwmControl.c)
 *     xxxUserResetDisplayDevice @ 0x14019E84C (xxxUserResetDisplayDevice.c)
 *     InitSystemThread @ 0x1401A7780 (InitSystemThread.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401ABAF0 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE8CC (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline @ 0x1401AEC80 (Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x1401AECD4 (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     ?zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1401F50FC (-zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     DCompositionEnableHwProtectionTeardown @ 0x1402229F4 (DCompositionEnableHwProtectionTeardown.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall xxxVideoPortCalloutThread(PRKEVENT *a1)
{
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS *v1; // rdi
  struct _LIST_ENTRY *Blink; // rbx
  LONG inited; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  int CalloutType; // r9d
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v10; // rsi
  _QWORD *UserSessionState; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebx
  int CurrentProcessSessionId; // eax
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  int (*v50)(void); // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  void (*v53)(void); // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v60; // rbx
  unsigned int v61; // edx
  DirectComposition::CConnection *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // [rsp+20h] [rbp-50h]
  int v68; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v69[2]; // [rsp+48h] [rbp-28h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v70[3]; // [rsp+58h] [rbp-18h] BYREF
  char v71; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int8 v72; // [rsp+B8h] [rbp+48h] BYREF
  bool v73; // [rsp+C0h] [rbp+50h] BYREF
  bool v74; // [rsp+C8h] [rbp+58h] BYREF

  v1 = (struct _VIDEO_WIN32K_CALLBACKS_PARAMS *)*a1;
  Blink = (*a1)->Header.WaitListHead.Blink;
  (*a1)->Header.WaitListHead.Blink = Blink->Flink;
  inited = InitSystemThread(0LL);
  CalloutType = v1->CalloutType;
  v1->Status = inited;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    LODWORD(v67) = inited;
    McTemplateK0dq_EtwWriteTransfer(v5, &StartVideoPortCalloutThread, v6, CalloutType, v67);
  }
  CDisplayScenarioContextScope::CDisplayScenarioContextScope(
    (CDisplayScenarioContextScope *)v70,
    (const struct _GUID **)&Blink->Blink);
  v10 = v70[1];
  if ( v1->Status >= 0 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(v8);
    v12 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            UserSessionState,
            1,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v12;
    if ( v12 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v12) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
    }
    if ( v1->CalloutType == VideoPnpNotifyCallout )
      *(_BYTE *)(W32GetUserGdiSessionState(v14) + 20) = 1;
    v15 = (unsigned int)v1->CalloutType;
    LOBYTE(v13) = (_DWORD)v15 == 7;
    if ( (((_DWORD)v15 - 7) & 0xFFFFFFFC) != 0 || (v16 = (_DWORD)v15 == 9, LOBYTE(v15) = 1, v16) )
      LOBYTE(v15) = 0;
    xxxWaitForVideoPortCalloutReady(v15, v13, v10);
    if ( (unsigned int)IsRemoteConnection(v18, v17) )
    {
      if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm(v19) )
      {
        if ( v1->CalloutType > (unsigned int)VideoDesktopDuplicationChange )
          goto LABEL_16;
        v19 = 33920LL;
        if ( !_bittest((const int *)&v19, v1->CalloutType) )
          goto LABEL_16;
      }
    }
    if ( *(_DWORD *)(W32GetUserGdiSessionState(v19) + 36) )
    {
      v22 = *(unsigned __int16 *)(W32GetUserSessionState(v21) + 69008);
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      DrvDxgkLogCodePointPacket(107LL, v1->CalloutType, CurrentProcessSessionId, v22);
    }
    v19 = (unsigned int)v1->CalloutType;
    if ( (int)v19 > 12 )
    {
      v55 = (unsigned int)(v19 - 13);
      if ( !(_DWORD)v55 )
      {
        if ( (int)IsSetPointerSupported(v55, v20) >= 0 && (int)IszzzUpdateCursorImageSupported(v19, v63) >= 0 )
        {
          SetPointer(1LL, v64);
          zzzUpdateCursorImage(v66, v65);
        }
        goto LABEL_86;
      }
      v56 = (unsigned int)(v55 - 1);
      if ( (_DWORD)v56 )
      {
        v57 = (unsigned int)(v56 - 1);
        if ( (_DWORD)v57 )
        {
          v19 = (unsigned int)(v57 - 1);
          if ( (_DWORD)v19 )
          {
            if ( (_DWORD)v19 != 1 )
              goto LABEL_16;
            Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline();
            DCompositionForceRender(v58);
          }
          else
          {
            xxxDisplayDiagBlackScreenDetected(8u, v1->Param & 1, (v1->Param & 2) != 0, 0LL, 0LL);
          }
LABEL_86:
          v1->Status = 0;
          goto LABEL_87;
        }
        DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v57);
        v60 = DefaultConnection;
        if ( !DefaultConnection )
          goto LABEL_87;
        DirectComposition::CConnection::ReevaluateDDA(DefaultConnection);
      }
      else
      {
        v62 = DirectComposition::CConnection::GetDefaultConnection(v56);
        v60 = v62;
        if ( !v62 )
          goto LABEL_87;
        DirectComposition::CConnection::ReevaluateMPOCapabilities(v62);
      }
      DirectComposition::CConnection::Release(v60, v61);
      goto LABEL_87;
    }
    if ( (_DWORD)v19 == 12 )
    {
      if ( (int)IsxxxUserResetDisplayDeviceSupported(v19, v20) >= 0 )
        xxxUserResetDisplayDevice(v19, v54);
      goto LABEL_86;
    }
    v24 = (unsigned int)(v19 - 4);
    if ( (_DWORD)v19 != 4 )
    {
      if ( (_DWORD)v19 == 7 )
      {
        v1->Status = Win32kPnpNotify(v1, (struct _GUID *)v10);
        goto LABEL_87;
      }
      if ( (_DWORD)v19 == 8 )
      {
        v69[1] = 0LL;
        v69[0] = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported(v19, (unsigned int)(v19 - 8)) < 0
          || (v25 = *(_QWORD *)(W32GetUserGdiSessionState(v19) + 40), PsGetCurrentProcess(v27, v26, v28, v29) != v25)
          || *(_QWORD *)(W32GetUserSessionState(v19) + 19200)
          && (v30 = W32GetUserSessionState(v19),
              (int)xxxSetCsrssThreadDesktop(*(_QWORD *)(v30 + 19200), (__int64)v69) >= 0) )
        {
          v71 = 1;
          do
          {
            v72 = 0;
            v73 = 0;
            v74 = 0;
            v31 = W32GetUserSessionState(v19);
            if ( (int)DrvProcessDxgkDisplayCallout(*(struct tagDESKTOP **)(v31 + 19200), &v72, &v73, &v74, &v71) < 0 )
            {
              v71 = 0;
            }
            else
            {
              if ( v72 )
              {
                GreIncrementDisplaySettingsUniqueness(v19);
                v68 = 0;
                v33 = W32GetUserSessionState(v32);
                xxxResetDisplayDevice(*(_QWORD *)(v33 + 19200), &v68, 0LL);
              }
              else if ( v73 )
              {
                v34 = W32GetUserSessionState(v19);
                CInputConfig::zzzOnDisplayStateChange(*(CInputConfig **)(v34 + 18688));
              }
              if ( v74 )
                PostWinlogonMessage(1027LL);
            }
          }
          while ( !v71 );
          v1->Status = 0;
          if ( !(unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline()
            && (unsigned int)UserIsWddmConnectedSession(v36) )
          {
            UpdateExternalMonitorConnectedStatus(0);
          }
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported(v36, v35) >= 0 )
          {
            v37 = *(_QWORD *)(W32GetUserGdiSessionState(v19) + 40);
            if ( PsGetCurrentProcess(v39, v38, v40, v41) == v37 )
              xxxRestoreCsrssThreadDesktop((__int64)v69, v42);
          }
        }
        goto LABEL_87;
      }
      v24 = (unsigned int)(v19 - 10);
      if ( (_DWORD)v19 != 10 )
      {
        if ( (_DWORD)v19 == 11 )
        {
          DCompositionEnableHwProtectionTeardown(LODWORD(v1->Param));
          goto LABEL_87;
        }
LABEL_16:
        v1->Status = -1073741823;
LABEL_87:
        if ( v1->CalloutType == VideoPnpNotifyCallout )
          *(_BYTE *)(W32GetUserGdiSessionState(v19) + 20) = 0;
        UserSessionSwitchLeaveCritWithNonPaged();
        goto LABEL_90;
      }
    }
    if ( (_DWORD)v19 != 10 )
    {
      if ( v1->Param )
      {
LABEL_54:
        if ( v1->CalloutType == VideoDxgkFindAdapterTdrCallout || v1->Param )
        {
          if ( (unsigned int)UserIsWddmConnectedSession(v19) )
            SafeEnableMDEV(1LL);
          if ( (int)IsxxxDwmStopRedirectionSupported(v44, v43) >= 0 )
          {
            v47 = 1038LL;
            if ( v1->CalloutType != VideoDxgkFindAdapterTdrCallout )
              v47 = 1035LL;
            xxxDwmControl(v47);
          }
          if ( (int)IsxxxUserResetDisplayDeviceSupported(v46, v45) >= 0 )
            xxxUserResetDisplayDevice(v49, v48);
          v50 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v49, v48) + 48) + 2504LL);
          if ( v50 )
          {
            if ( v50() >= 0 )
            {
              v53 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v52, v51) + 48) + 2512LL);
              if ( v53 )
                v53();
            }
          }
          ZwUpdateWnfStateData(&WNF_DXGK_ADAPTER_TDR_NOTIFICATION, 0LL, 0LL, 0LL, 0LL);
        }
        goto LABEL_86;
      }
      if ( (int)IsxxxDwmStopRedirectionSupported(v19, v24) >= 0 )
        xxxDwmControl(1034LL);
    }
    if ( (unsigned int)UserIsWddmConnectedSession(v19) )
      SafeDisableMDEV(1LL);
    goto LABEL_54;
  }
LABEL_90:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    LODWORD(v67) = v1->Status;
    McTemplateK0dq_EtwWriteTransfer((unsigned int)v67, &StopVideoPortCalloutThread, v9, v1->CalloutType, v67);
  }
  KeSetEvent(a1[1], 1, 0);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v70);
}
