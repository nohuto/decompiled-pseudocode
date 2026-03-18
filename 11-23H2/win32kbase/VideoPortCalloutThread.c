/*
 * XREFs of VideoPortCalloutThread @ 0x1C00CCFE8
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C00B27C0 (xxxCreateSystemThreads.c)
 * Callees:
 *     xxxResetDisplayDevice @ 0x1C00138D0 (xxxResetDisplayDevice.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C0018FA8 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C001E190 (UserRemoteConnectedSessionUsingWddm.c)
 *     UserIsWddmConnectedSession @ 0x1C001EFF0 (UserIsWddmConnectedSession.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     xxxDwmControl @ 0x1C00862F0 (xxxDwmControl.c)
 *     PostWinlogonMessage @ 0x1C0086360 (PostWinlogonMessage.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x1C00874F4 (IsxxxDwmStopRedirectionSupported.c)
 *     InitSystemThread @ 0x1C00B46F0 (InitSystemThread.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00BA8D0 (DrvDxgkLogCodePointPacket.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00BD990 (GreIncrementDisplaySettingsUniqueness.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1C00BE7F0 (UpdateExternalMonitorConnectedStatus.c)
 *     DCompositionForceRender @ 0x1C00CA5F4 (DCompositionForceRender.c)
 *     IsSetPointerSupported @ 0x1C00CC610 (IsSetPointerSupported.c)
 *     SafeEnableMDEV @ 0x1C00CC6B0 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00CC700 (SafeDisableMDEV.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD1D4 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C00CDB9C (IsxxxSetCsrssThreadDesktopSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C00DF7A4 (McTemplateK0dq_EtwWriteTransfer.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013352C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C0136AC0 (xxxDisplayDiagBlackScreenDetected.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1C0167970 (DrvProcessDxgkDisplayCallout.c)
 *     DCompositionDDAChange @ 0x1C0209100 (DCompositionDDAChange.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x1C02331DC (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     IsxxxUserResetDisplayDeviceSupported @ 0x1C0233208 (IsxxxUserResetDisplayDeviceSupported.c)
 *     IszzzUpdateCursorImageSupported @ 0x1C0233234 (IszzzUpdateCursorImageSupported.c)
 */

LONG __fastcall VideoPortCalloutThread(PRKEVENT *a1)
{
  unsigned int *v1; // rdi
  struct _LIST_ENTRY *Blink; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // rsi
  unsigned int inited; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v13; // rbx
  unsigned __int8 v14; // cl
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  int v24; // edx
  int v26; // ebx
  int CurrentProcessSessionId; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _MDEV *v32; // rcx
  CInputConfig *v33; // rcx
  void (*v34)(void); // rax
  _QWORD v35[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+48h] BYREF
  char v37; // [rsp+A8h] [rbp+50h]
  char v38; // [rsp+B0h] [rbp+58h]
  __int64 v39; // [rsp+B8h] [rbp+60h] BYREF

  v1 = (unsigned int *)*a1;
  Blink = (*a1)->Header.WaitListHead.Blink;
  v4 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)Blink->Blink;
  (*a1)->Header.WaitListHead.Blink = Blink->Flink;
  inited = InitSystemThread(0LL);
  v9 = *v1;
  v1[6] = inited;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v7, &StartVideoPortCalloutThread, v8, v9, inited);
  if ( (v1[6] & 0x80000000) == 0 )
  {
    v10 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v6, v8, v9);
    gptiCurrent = v10;
    if ( v10 )
    {
      *((_DWORD *)v10 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            v11 = gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v13 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v28 = *v13;
                v13[2] = 0LL;
                if ( !*(_DWORD *)(v28 + 8) )
                {
                  LODWORD(v36) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                }
                HMUnlockObject(*v13);
              }
            }
          }
        }
      }
    }
    if ( *v1 == 7 )
      *(_BYTE *)(SGDGetUserGdiSessionState(v11) + 20) = 1;
    if ( ((*v1 - 7) & 0xFFFFFFFC) != 0 || (v14 = 1, *v1 == 9) )
      v14 = 0;
    xxxWaitForVideoPortCalloutReady(v14, *v1 == 7, v4);
    if ( qword_1C02962C0 )
    {
      if ( (unsigned int)qword_1C02962C0(v16) )
      {
        if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
        {
          if ( *v1 > 0xF )
            goto LABEL_34;
          v19 = 33920LL;
          if ( !_bittest((const int *)&v19, *v1) )
            goto LABEL_34;
        }
      }
    }
    if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
    {
      v26 = (unsigned __int16)gProtocolType;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      DrvDxgkLogCodePointPacket(107LL, *v1, CurrentProcessSessionId, v26);
    }
    v19 = *v1;
    if ( (int)v19 <= 12 )
    {
      if ( (_DWORD)v19 != 12 )
      {
        v15 = (unsigned int)(v19 - 4);
        if ( (_DWORD)v19 != 4 )
        {
          if ( (_DWORD)v19 == 7 )
          {
            v1[6] = Win32kPnpNotify((struct _VIDEO_WIN32K_CALLBACKS_PARAMS *)v1, v4);
            goto LABEL_24;
          }
          if ( (_DWORD)v19 == 8 )
          {
            v35[1] = 0LL;
            v35[0] = 0LL;
            if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
              || (PVOID)PsGetCurrentProcess(v30, v29, v31) != gpepCSRSS
              || (v19 = (__int64)grpdeskRitInput) != 0
              && qword_1C0295A28
              && (int)qword_1C0295A28(grpdeskRitInput, v35) >= 0 )
            {
              LOBYTE(v36) = 1;
              do
              {
                v37 = 0;
                v38 = 0;
                v32 = (struct _MDEV *)*((_QWORD *)gpDispInfo + 2);
                LOBYTE(v39) = 0;
                if ( (int)DrvProcessDxgkDisplayCallout(v32, (__int64)&v39, (__int64)&v36) < 0 )
                {
                  LOBYTE(v36) = 0;
                }
                else
                {
                  if ( v37 )
                  {
                    GreIncrementDisplaySettingsUniqueness((__int64)v33);
                    xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0, 0LL);
                  }
                  else if ( v38 )
                  {
                    CInputConfig::OnDisplayStateChange(v33);
                  }
                  if ( (_BYTE)v39 )
                    PostWinlogonMessage(0x403u, 0LL);
                }
              }
              while ( !(_BYTE)v36 );
              v1[6] = 0;
              if ( (unsigned int)UserIsWddmConnectedSession() )
                UpdateExternalMonitorConnectedStatus(0);
              if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0
                && (PVOID)PsGetCurrentProcess(v19, v15, v17) == gpepCSRSS
                && qword_1C0295A38 )
              {
                qword_1C0295A38(v35, 0LL);
              }
            }
            goto LABEL_24;
          }
          v15 = (unsigned int)(v19 - 10);
          if ( (_DWORD)v19 != 10 )
          {
            if ( (_DWORD)v19 != 11 )
            {
LABEL_34:
              v1[6] = -1073741823;
              goto LABEL_24;
            }
            v22 = v1[4];
            v23 = 0;
            v24 = 1;
LABEL_23:
            DCompositionForceRender(0LL, v24, v22, v23);
LABEL_24:
            if ( *v1 == 7 )
              *(_BYTE *)(SGDGetUserGdiSessionState(v19) + 20) = 0;
            UserSessionSwitchLeaveCrit(v19, v15, v17, v18);
            goto LABEL_27;
          }
        }
        if ( (_DWORD)v19 == 10 || !*((_QWORD *)v1 + 2) )
        {
          if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
            xxxDwmControl(1034LL, 0);
          if ( (unsigned int)UserIsWddmConnectedSession() )
            SafeDisableMDEV(1u);
        }
        if ( *v1 == 10 || *((_QWORD *)v1 + 2) )
        {
          if ( (unsigned int)UserIsWddmConnectedSession() )
            SafeEnableMDEV(1u);
          if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
            xxxDwmControl(1035LL, 0);
          if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 && qword_1C0295A48 )
            qword_1C0295A48();
          if ( qword_1C0295A50 && (int)qword_1C0295A50() >= 0 && qword_1C0295A58 )
            qword_1C0295A58();
          ZwUpdateWnfStateData(&WNF_DXGK_ADAPTER_TDR_NOTIFICATION, 0LL, 0LL, 0LL, 0LL);
        }
LABEL_102:
        v1[6] = 0;
        goto LABEL_24;
      }
      if ( (int)IsxxxUserResetDisplayDeviceSupported() < 0 )
        goto LABEL_102;
      v34 = (void (*)(void))qword_1C0295A48;
    }
    else
    {
      v20 = v19 - 13;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( !v21 )
        {
          v22 = 0;
          v23 = 1;
          v24 = 0;
          goto LABEL_23;
        }
        v19 = (unsigned int)(v21 - 1);
        if ( !(_DWORD)v19 )
        {
          DCompositionDDAChange();
          goto LABEL_24;
        }
        if ( (_DWORD)v19 != 1 )
          goto LABEL_34;
        LOBYTE(v17) = (*((_QWORD *)v1 + 2) & 2) != 0;
        LOBYTE(v15) = *((_QWORD *)v1 + 2) & 1;
        xxxDisplayDiagBlackScreenDetected(8, v15, v17, 0, 0LL);
        goto LABEL_102;
      }
      if ( (int)IsSetPointerSupported() < 0 || (int)IszzzUpdateCursorImageSupported() < 0 )
        goto LABEL_102;
      if ( qword_1C02959E8 )
        qword_1C02959E8(1LL);
      v34 = (void (*)(void))qword_1C0296010;
    }
    if ( v34 )
      v34();
    goto LABEL_102;
  }
LABEL_27:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v1[6], &StopVideoPortCalloutThread, v8, *v1, v1[6]);
  return KeSetEvent(a1[1], 1, 0);
}
