/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x140031030 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x14003140C (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032E40 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14003C7B8 (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14003D210 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x14003E324 (-UnlockWorker@-$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14003E628 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14003F454 (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14003F498 (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14003F500 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004B6E8 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z @ 0x1400651C0 (-IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z.c)
 *     _PostTransformableMessage @ 0x1400664C4 (_PostTransformableMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140066FA0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140067238 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x14006E380 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     PtInRect @ 0x14006E460 (PtInRect.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400759F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxCallMouseHook @ 0x14007F274 (xxxCallMouseHook.c)
 *     xxxCallCtfHook @ 0x14007FC80 (xxxCallCtfHook.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z @ 0x14008A3DC (-IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     DelQEntry @ 0x14008E870 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x14008EC50 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x14009A5A4 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     xxxDefPointerProc @ 0x14009AE2C (xxxDefPointerProc.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x14009B380 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z @ 0x14009B440 (-ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z.c)
 *     IsMiPEnabledForWindow @ 0x14009B490 (IsMiPEnabledForWindow.c)
 *     SetMiPPromotion @ 0x14009B518 (SetMiPPromotion.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x14009B5B4 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F6DEC (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x14010F3F0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ??1Win32RawLockedW32Thread@@QEAA@XZ @ 0x1401197C0 (--1Win32RawLockedW32Thread@@QEAA@XZ.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x14012E24C (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     TransferWakeBit @ 0x14012E5F8 (TransferWakeBit.c)
 *     PtiMouseFromQ @ 0x140131DA8 (PtiMouseFromQ.c)
 *     CheckPwndFilter @ 0x140140F10 (CheckPwndFilter.c)
 *     ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x140147740 (--0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1401532E0 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     IsHiddenByInputService @ 0x140154910 (IsHiddenByInputService.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1401596DC (PhysicalToLogicalInPlacePointWithParent.c)
 *     ??0CManageInScanSysQueueBit@@QEAA@XZ @ 0x14015A77C (--0CManageInScanSysQueueBit@@QEAA@XZ.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x140167088 (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     ??1CManageInScanSysQueueBit@@QEAA@XZ @ 0x14016DCF4 (--1CManageInScanSysQueueBit@@QEAA@XZ.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x14016DEFC (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     IsMiPActive @ 0x140170128 (IsMiPActive.c)
 *     ?RedirectForCapture@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEAUHWND__@@@Z @ 0x140171380 (-RedirectForCapture@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEAUHWND__@@@Z.c)
 *     GetThreadDesktopWindow @ 0x140176140 (GetThreadDesktopWindow.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x140176A2C (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     xxxFindNCHitEx @ 0x14017FFB4 (xxxFindNCHitEx.c)
 *     FindNCHitEx @ 0x140180090 (FindNCHitEx.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x140185D10 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?Exchange@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x14018C3A8 (-Exchange@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x14018D2A8 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z @ 0x14018D704 (-DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z.c)
 *     ?SSQResult@RawInput@InputTraceLogging@@SAXPEAXW4SsqResult@12@@Z @ 0x140195AC8 (-SSQResult@RawInput@InputTraceLogging@@SAXPEAXW4SsqResult@12@@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x140195C2C (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x14019D10C (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401A5404 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     IsInsideMenuLoop @ 0x1401AEB6C (IsInsideMenuLoop.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@QEAAXPEAUtagQMSG@@P6AXPEAX@Z@Z @ 0x1401B3EA0 (--$ManualLock@X@-$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@QEAAXPEAUtagQMSG@@P6AXPEAX@Z@Z.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1401B9C78 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     xxxRetrievePointerInputMessage @ 0x1401B9D88 (xxxRetrievePointerInputMessage.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1401BB8BC (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     IsMenuStarted @ 0x1401BEA18 (IsMenuStarted.c)
 *     GetAppImeCompatFlags @ 0x1401D06BC (GetAppImeCompatFlags.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1401D109C (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     HotKeyToWindow @ 0x140210288 (HotKeyToWindow.c)
 *     xxxClientCallLocalMouseHooks @ 0x1402222C0 (xxxClientCallLocalMouseHooks.c)
 *     xxxCallHandleMenuMessages @ 0x1402270AC (xxxCallHandleMenuMessages.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x140236870 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x140236B90 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x140237020 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x140238600 (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 *     ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x14023FF60 (-ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z.c)
 *     xxxTrackMouseMove @ 0x140255AC4 (xxxTrackMouseMove.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x14026342C (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     xxxSnapWindow @ 0x1402641A0 (xxxSnapWindow.c)
 *     GetPenDoubleClickTime @ 0x1402681A4 (GetPenDoubleClickTime.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x140269664 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?IgnoreModalLoop@RawInput@InputTraceLogging@@SAXPEAXPEAUHWND__@@@Z @ 0x14026AB44 (-IgnoreModalLoop@RawInput@InputTraceLogging@@SAXPEAXPEAUHWND__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14026CD5C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x14027F280 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x1402AB060 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxScanSysQueue(
        __int64 a1,
        struct tagMSG *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6,
        int a7,
        struct tagQMSG **a8)
{
  int v9; // ebx
  void *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int16 v14; // r8
  __int64 v15; // r15
  char v16; // bl
  bool v17; // di
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  char v21; // r15
  __int64 v22; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r9
  char v27; // r12
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rdx
  int v34; // r13d
  __int64 v35; // rdx
  struct tagQMSG *NextSysMsg; // rdi
  _BOOL8 v37; // r8
  char v38; // r12
  __int64 v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  int v44; // eax
  struct tagQMSG **v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 i; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  char v51; // r12
  __int64 v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  __int64 v57; // rdx
  char v58; // r12
  __int64 v59; // rdi
  __int64 v60; // rbx
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  unsigned int v64; // r10d
  char *v65; // rax
  char v66; // cl
  int v67; // eax
  int v68; // ebx
  struct tagWND *CompositeAppFrameWindowOrSelf; // rdi
  __int64 v70; // rax
  bool v71; // zf
  BOOL v72; // ebx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  char v77; // r8
  unsigned int v78; // ecx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  struct tagWND *v85; // rdx
  __int64 v86; // rax
  struct tagWND *v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // r8
  struct tagWND *v90; // rcx
  __int64 v91; // rcx
  int v92; // eax
  int v93; // eax
  unsigned __int64 v94; // r8
  __int64 v95; // rbx
  ULONG_PTR v96; // r12
  __int64 v97; // rdx
  __int64 v98; // rcx
  int v99; // ebx
  int v100; // eax
  int v101; // ebx
  __int64 v102; // rax
  __int64 v103; // rax
  int v104; // r13d
  __int64 v105; // rcx
  __int64 v106; // rdi
  unsigned int v107; // ebx
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rdx
  char v111; // r12
  __int64 v112; // rdi
  __int64 v113; // rbx
  __int64 v114; // rax
  ULONG_PTR v115; // rbx
  int v116; // r8d
  int v117; // edx
  void *v118; // r8
  unsigned __int64 v119; // rdx
  __int64 v120; // rcx
  unsigned __int64 v121; // rax
  int v122; // r8d
  __int64 v123; // rdx
  __int64 v124; // rax
  __int64 v125; // rcx
  int v126; // r8d
  int v127; // edx
  HWND *v128; // rdx
  __int64 v129; // rdx
  int v130; // eax
  __int64 v131; // rcx
  __int64 v132; // r13
  unsigned int v133; // r12d
  int v134; // eax
  __int64 v135; // rdx
  struct tagWND *v136; // rcx
  unsigned __int8 v137; // bl
  HWND v138; // rbx
  __int64 v139; // rdx
  __int64 v140; // rdx
  struct tagWND *v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rcx
  int v145; // eax
  struct tagWND *v146; // rbx
  int v147; // eax
  int v148; // r9d
  _DWORD *v149; // rax
  _DWORD *v150; // rax
  unsigned int MouseKeyFlags; // eax
  __int64 v152; // rdx
  __int64 v153; // r8
  __int64 v154; // rcx
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // rcx
  bool v158; // zf
  int v159; // eax
  int v160; // eax
  int v161; // eax
  int v162; // r8d
  int v163; // r13d
  __int64 v164; // rax
  HWND *v165; // rdx
  __int64 v166; // rdx
  __int64 v167; // rcx
  struct tagWND *v168; // rbx
  unsigned int v169; // r9d
  int v170; // r10d
  __int64 v171; // rdx
  __int64 v172; // rbx
  struct tagWND *v173; // rax
  __int64 v174; // rdx
  __int64 v175; // rdx
  __int64 v176; // rcx
  int v177; // ebx
  __int64 v178; // rdx
  __int64 v179; // rcx
  struct tagWND *v180; // rax
  __int64 v181; // r8
  __int64 v182; // rax
  struct tagWND *v183; // r8
  unsigned int v184; // edx
  char v185; // di
  char v186; // bl
  __int64 v187; // rax
  __int64 v188; // rdx
  const struct tagUIPI_INFO *v189; // r8
  __int64 v190; // rcx
  __int64 v191; // rax
  __int64 v192; // rdx
  unsigned __int64 v193; // rbx
  __int64 v194; // rcx
  int v195; // edx
  struct tagWND *v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // rcx
  __int64 v199; // rdx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rcx
  BOOL v203; // edi
  Scrollbar::NonClient *v204; // rcx
  unsigned int NCHit; // eax
  __int64 v206; // r8
  int v207; // eax
  __int64 v208; // rdx
  int v209; // r13d
  __int64 v210; // rax
  char v211; // al
  __int64 v212; // rcx
  __int64 v213; // rcx
  __int64 v214; // rax
  __int64 v215; // rcx
  __int64 v216; // kr20_8
  __int64 v217; // kr28_8
  __int64 v218; // rax
  __int64 v219; // rcx
  unsigned int v220; // edx
  __int64 v221; // rcx
  int v222; // eax
  int v223; // ecx
  int TouchTimeFromCPLValue; // eax
  int v225; // eax
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // rcx
  struct tagTHREADINFO **v231; // rbx
  const struct tagWND *CompositionInputWindowUIOwner; // rcx
  const struct tagWND *TopLevelWindow; // rax
  __int64 v234; // rdx
  struct tagTHREADINFO *v235; // r8
  __int64 v236; // rdx
  unsigned __int64 v237; // r8
  __int64 v238; // rdx
  __int128 v239; // xmm12
  __int128 v240; // xmm13
  __int128 v241; // xmm14
  __int128 v242; // xmm15
  int v243; // r12d
  __int128 *v244; // rcx
  __int64 v245; // rcx
  int v246; // r9d
  unsigned int *v247; // rax
  _DWORD *v248; // rax
  __int64 v249; // r15
  unsigned __int64 v250; // rax
  __int64 v251; // rdx
  __int64 v252; // rax
  LARGE_INTEGER *v253; // rbx
  __int64 v254; // rdx
  struct tagQ **QuadPart; // rcx
  __int64 v256; // rcx
  __int128 v257; // xmm6
  __int128 v258; // xmm7
  __int128 v259; // xmm8
  __int128 v260; // xmm9
  __int128 v261; // xmm10
  __int128 v262; // xmm11
  unsigned __int64 v263; // rdi
  __int64 v264; // rdx
  struct tagTHREADINFO **v265; // rcx
  __int64 v266; // rax
  __int64 v267; // rdx
  unsigned __int64 v268; // rax
  int v269; // r13d
  unsigned __int64 v270; // rcx
  __int64 v271; // rax
  unsigned __int64 v272; // rcx
  const struct tagQMSG *v273; // r8
  __int64 v274; // rbx
  struct tagTHREADINFO *v275; // rcx
  unsigned __int64 v276; // rcx
  int v277; // ebx
  __int64 v278; // r9
  struct tagWND *v279; // rcx
  int v280; // ebx
  int v281; // ebx
  int v282; // ebx
  __int64 v283; // r8
  __int64 v284; // rdx
  __int64 MiPWindowFlags; // rax
  int v286; // edx
  __int64 v287; // r8
  __int64 v288; // r9
  int v289; // eax
  int InteractiveControlInputMessage; // eax
  char v291; // bl
  struct tagMSG *v292; // r12
  _QWORD *v293; // rax
  unsigned int v294; // ecx
  _DWORD *v295; // rax
  unsigned __int64 v296; // rax
  unsigned __int64 v297; // rax
  __int64 v298; // rdx
  __int64 v299; // rdx
  __int64 v300; // rdx
  __int64 v301; // rdx
  __int64 v302; // rdx
  __int64 v303; // rdx
  __int64 v304; // rdx
  unsigned int *v305; // rdx
  char v306; // r15
  bool v307; // r12
  __int64 v308; // rdi
  __int64 v309; // rbx
  __int64 v310; // rax
  int v311; // r8d
  int v312; // edx
  __int64 v313; // r15
  struct _W32THREAD *v314; // rdi
  struct _W32THREAD *v315; // rbx
  int v316; // edx
  int v317; // r8d
  __int64 v318; // rdx
  __int64 v319; // rdx
  __int64 v320; // rdx
  __int64 v321; // rdx
  __int64 v322; // rdx
  __int64 v323; // rdx
  __int64 v324; // [rsp+40h] [rbp-988h]
  __int64 v325; // [rsp+48h] [rbp-980h]
  char v326; // [rsp+48h] [rbp-980h]
  __int64 v327; // [rsp+50h] [rbp-978h]
  char v328; // [rsp+50h] [rbp-978h]
  __int64 v329; // [rsp+58h] [rbp-970h]
  unsigned int v330[2]; // [rsp+70h] [rbp-958h] BYREF
  struct tagWND *ThreadDesktopWindow; // [rsp+78h] [rbp-950h] BYREF
  unsigned int v332; // [rsp+80h] [rbp-948h]
  int v333; // [rsp+84h] [rbp-944h]
  BOOL v334; // [rsp+88h] [rbp-940h]
  bool v335; // [rsp+8Ch] [rbp-93Ch]
  struct tagPOINT v336; // [rsp+90h] [rbp-938h] BYREF
  void *v337; // [rsp+98h] [rbp-930h] BYREF
  unsigned __int64 v338; // [rsp+A0h] [rbp-928h] BYREF
  int v339; // [rsp+A8h] [rbp-920h] BYREF
  int v340; // [rsp+ACh] [rbp-91Ch] BYREF
  int v341; // [rsp+B0h] [rbp-918h]
  __int64 v342; // [rsp+B8h] [rbp-910h]
  bool v343; // [rsp+C0h] [rbp-908h]
  bool v344; // [rsp+C1h] [rbp-907h]
  _BYTE v345[2]; // [rsp+C2h] [rbp-906h] BYREF
  int v346; // [rsp+C4h] [rbp-904h]
  unsigned int v347; // [rsp+C8h] [rbp-900h]
  int v348; // [rsp+CCh] [rbp-8FCh]
  int v349; // [rsp+D0h] [rbp-8F8h]
  int v350; // [rsp+D4h] [rbp-8F4h]
  ULONG_PTR v351; // [rsp+D8h] [rbp-8F0h]
  struct tagQMSG *v352; // [rsp+E0h] [rbp-8E8h]
  struct tagQMSG **v353; // [rsp+E8h] [rbp-8E0h]
  struct _W32THREAD *v354; // [rsp+F0h] [rbp-8D8h]
  int v355[2]; // [rsp+F8h] [rbp-8D0h]
  int v356; // [rsp+100h] [rbp-8C8h]
  int v357; // [rsp+104h] [rbp-8C4h]
  __int64 v358; // [rsp+108h] [rbp-8C0h]
  __int128 v359; // [rsp+110h] [rbp-8B8h]
  struct _W32THREAD *v360; // [rsp+120h] [rbp-8A8h]
  int v361; // [rsp+128h] [rbp-8A0h]
  int v362; // [rsp+12Ch] [rbp-89Ch]
  int v363; // [rsp+130h] [rbp-898h]
  struct tagTHREADINFO *v364; // [rsp+138h] [rbp-890h]
  struct _W32THREAD *v365; // [rsp+140h] [rbp-888h]
  __int64 v366; // [rsp+148h] [rbp-880h]
  ULONG_PTR v367[2]; // [rsp+150h] [rbp-878h] BYREF
  __int64 v368; // [rsp+160h] [rbp-868h]
  struct tagMSG *v369; // [rsp+168h] [rbp-860h]
  int v370; // [rsp+178h] [rbp-850h]
  struct tagMSG *v371; // [rsp+180h] [rbp-848h]
  __int64 v372; // [rsp+198h] [rbp-830h]
  __int64 v373; // [rsp+1A0h] [rbp-828h]
  char v374[8]; // [rsp+1A8h] [rbp-820h] BYREF
  unsigned int v375; // [rsp+1B0h] [rbp-818h] BYREF
  unsigned int v376; // [rsp+1B4h] [rbp-814h]
  int v377; // [rsp+1B8h] [rbp-810h]
  int v378; // [rsp+1BCh] [rbp-80Ch]
  __int128 v379; // [rsp+1C0h] [rbp-808h] BYREF
  __int128 v380; // [rsp+1D0h] [rbp-7F8h]
  _DWORD v381[2]; // [rsp+1E0h] [rbp-7E8h] BYREF
  __int128 v382; // [rsp+1E8h] [rbp-7E0h]
  int *v383; // [rsp+1F8h] [rbp-7D0h]
  unsigned int v384; // [rsp+200h] [rbp-7C8h]
  char v385; // [rsp+204h] [rbp-7C4h]
  __int16 v386; // [rsp+205h] [rbp-7C3h]
  char v387; // [rsp+207h] [rbp-7C1h]
  char *v388; // [rsp+208h] [rbp-7C0h]
  char v389; // [rsp+210h] [rbp-7B8h]
  int v390; // [rsp+211h] [rbp-7B7h]
  __int16 v391; // [rsp+215h] [rbp-7B3h]
  char v392; // [rsp+217h] [rbp-7B1h]
  __int64 v393; // [rsp+218h] [rbp-7B0h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+230h] [rbp-798h] BYREF
  ULONG_PTR BugCheckParameter2[3]; // [rsp+240h] [rbp-788h] BYREF
  void (*v396[3])(void); // [rsp+258h] [rbp-770h] BYREF
  void (*v397[3])(void); // [rsp+270h] [rbp-758h] BYREF
  ULONG_PTR v398[3]; // [rsp+288h] [rbp-740h] BYREF
  __int128 v399; // [rsp+2A0h] [rbp-728h]
  void (*v400[3])(void); // [rsp+2B0h] [rbp-718h] BYREF
  void (*v401[3])(void); // [rsp+2C8h] [rbp-700h] BYREF
  void (*v402[4])(void); // [rsp+2E0h] [rbp-6E8h] BYREF
  __int128 v403; // [rsp+300h] [rbp-6C8h] BYREF
  __int128 v404; // [rsp+310h] [rbp-6B8h]
  __int128 v405; // [rsp+320h] [rbp-6A8h]
  __int128 v406; // [rsp+330h] [rbp-698h]
  __int128 v407; // [rsp+340h] [rbp-688h]
  __int128 v408; // [rsp+350h] [rbp-678h]
  ULONG_PTR v409[2]; // [rsp+380h] [rbp-648h] BYREF
  ULONG_PTR v410[2]; // [rsp+390h] [rbp-638h] BYREF
  ULONG_PTR v411[2]; // [rsp+3A0h] [rbp-628h] BYREF
  ULONG_PTR v412[2]; // [rsp+3B0h] [rbp-618h] BYREF
  __int128 v413[3]; // [rsp+3C0h] [rbp-608h] BYREF
  LARGE_INTEGER v414; // [rsp+3F0h] [rbp-5D8h]
  __int64 v415; // [rsp+3F8h] [rbp-5D0h]
  unsigned __int64 v416; // [rsp+400h] [rbp-5C8h]
  __int128 v417; // [rsp+408h] [rbp-5C0h]
  __int64 v418; // [rsp+418h] [rbp-5B0h]
  __int128 v419; // [rsp+428h] [rbp-5A0h] BYREF
  __int128 v420; // [rsp+438h] [rbp-590h]
  __int128 v421; // [rsp+448h] [rbp-580h]
  __int128 v422; // [rsp+458h] [rbp-570h]
  __int128 v423; // [rsp+468h] [rbp-560h]
  __int128 v424; // [rsp+478h] [rbp-550h]
  __int128 v425; // [rsp+490h] [rbp-538h] BYREF
  __int128 v426; // [rsp+4A0h] [rbp-528h]
  __int128 v427; // [rsp+4B0h] [rbp-518h]
  __int128 v428; // [rsp+4C0h] [rbp-508h]
  __int128 v429; // [rsp+4D0h] [rbp-4F8h]
  __int128 v430; // [rsp+4E0h] [rbp-4E8h] BYREF
  __int128 v431; // [rsp+4F0h] [rbp-4D8h]
  __int128 v432; // [rsp+500h] [rbp-4C8h] BYREF
  __int128 v433; // [rsp+510h] [rbp-4B8h] BYREF
  __int128 v434; // [rsp+520h] [rbp-4A8h]
  __int64 v435; // [rsp+530h] [rbp-498h]
  __int64 v436[2]; // [rsp+540h] [rbp-488h] BYREF
  __int128 v437; // [rsp+550h] [rbp-478h]
  __int64 v438; // [rsp+560h] [rbp-468h]
  __int128 v439; // [rsp+570h] [rbp-458h] BYREF
  __int128 v440; // [rsp+580h] [rbp-448h]
  __int128 v441; // [rsp+590h] [rbp-438h]
  __int128 v442; // [rsp+5A0h] [rbp-428h]
  __int128 v443; // [rsp+5B0h] [rbp-418h]
  __int128 v444; // [rsp+5C0h] [rbp-408h]
  __int128 v445; // [rsp+5D0h] [rbp-3F8h]
  __int128 v446; // [rsp+5E0h] [rbp-3E8h]
  _OWORD v447[2]; // [rsp+5F0h] [rbp-3D8h] BYREF
  __int64 v448; // [rsp+610h] [rbp-3B8h]
  __int128 v449; // [rsp+620h] [rbp-3A8h] BYREF
  __int128 v450; // [rsp+630h] [rbp-398h]
  __int128 v451; // [rsp+640h] [rbp-388h]
  __int128 v452; // [rsp+650h] [rbp-378h]
  __int128 v453; // [rsp+660h] [rbp-368h]
  __int128 v454; // [rsp+670h] [rbp-358h]
  __int128 v455; // [rsp+680h] [rbp-348h]
  __int128 v456; // [rsp+690h] [rbp-338h]
  __int128 v457; // [rsp+6A0h] [rbp-328h]
  __int128 v458; // [rsp+6B0h] [rbp-318h]
  __int64 v459; // [rsp+6C0h] [rbp-308h]
  _OWORD v460[10]; // [rsp+6D0h] [rbp-2F8h] BYREF
  __int64 v461; // [rsp+770h] [rbp-258h]
  _BYTE v462[24]; // [rsp+780h] [rbp-248h] BYREF
  int v463; // [rsp+798h] [rbp-230h]
  _OWORD v464[10]; // [rsp+830h] [rbp-198h] BYREF
  __int64 v465; // [rsp+8D0h] [rbp-F8h]

  v341 = a4;
  *(_QWORD *)v355 = a3;
  v371 = a2;
  v368 = a1;
  v372 = a1;
  v364 = (struct tagTHREADINFO *)a1;
  v366 = a1;
  v369 = a2;
  v373 = a3;
  v363 = a4;
  v353 = a8;
  memset_0(&v425, 0, 0xA8uLL);
  memset_0(&v439, 0, 0xA8uLL);
  v330[0] = 0;
  v338 = 0LL;
  v337 = 0LL;
  v336 = 0LL;
  v339 = 0;
  v340 = 0;
  *(_OWORD *)v436 = 0LL;
  v437 = 0LL;
  v438 = 0LL;
  v361 = 0;
  v9 = a6 & 1;
  v330[1] = v9;
  v357 = 0;
  v10 = memset_0(&v403, 0, 0x60uLL);
  v12 = 0;
  v332 = 0;
  v346 = 0;
  LOBYTE(v10) = 0;
  v334 = (int)v10;
  v335 = 0;
  v351 = 0LL;
  *a8 = 0LL;
  v13 = a1 + 472;
  v14 = a7;
  if ( a7 == 0x2000 && *(_QWORD *)(*(_QWORD *)v13 + 88LL) )
  {
    EtwTraceInputQueueLockedPeekRecursion();
    return 0LL;
  }
  v356 = 0;
  v348 = 0;
  v333 = 0;
  v15 = *(_QWORD *)v13;
  if ( *(_QWORD *)(*(_QWORD *)v13 + 72LL) )
  {
    v21 = 1;
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
      || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v16 = 0;
    }
    v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v11);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v16;
      WPP_RECORDER_AND_TRACE_SF_qqq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v20,
        v19,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        18,
        29,
        (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
        v15,
        a1,
        a1);
      v14 = a7;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 472) + 72LL) = a1;
    v21 = 1;
    **(_DWORD **)(a1 + 488) |= 1u;
    v9 = v330[1];
  }
  if ( (v14 & 0x1C07) != 0 )
  {
    v22 = *(_QWORD *)(a1 + 472);
    if ( v9 )
      *(_DWORD *)(v22 + 436) &= ~0x400u;
    else
      *(_DWORD *)(v22 + 436) |= 0x400u;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 472) + 72LL) != a1 )
  {
    EtwTraceInputQueueLocked();
    return 2LL;
  }
  v342 = 0LL;
  v365 = 0LL;
  v358 = 0LL;
  v360 = 0LL;
  v354 = 0LL;
  Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v396, 0LL);
  Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v397, 0LL);
  Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v402, 0LL);
  Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v401, 0LL);
  Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v400, 0LL);
  ThreadDesktopWindow = 0LL;
  Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(v367, a1, 0LL);
  CManageInScanSysQueueBit::CManageInScanSysQueueBit((CManageInScanSysQueueBit *)v345, v24);
LABEL_21:
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
    || (v27 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v27 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v21 = 0;
  }
  if ( v27 || v21 )
  {
    v28 = *(_QWORD *)(a1 + 472);
    v29 = *(_QWORD *)(v28 + 88);
    v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25);
    LOBYTE(v31) = v21;
    LOBYTE(v32) = v27;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v32,
      v31,
      *(_QWORD *)(v30 + 69416),
      5,
      18,
      30,
      (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
      v28,
      v29);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL) = 0LL;
LABEL_66:
  v21 = 1;
LABEL_755:
  LOBYTE(v37) = v334;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  v370 = (**(_DWORD **)(a1 + 520) >> 9) & 1;
                  v33 = *(_QWORD *)(a1 + 472);
                  if ( *(_QWORD *)(v33 + 88) )
                  {
                    if ( !v37 )
                    {
                      v334 = ((v12 - 1) & 0xFFFFFFFD) == 0;
                      v335 = ((v12 - 1) & 0xFFFFFFFD) == 0;
                    }
                  }
                  else
                  {
                    v332 = 0;
                    v346 = 0;
                    v334 = 0;
                    v335 = 0;
                  }
                  v34 = 0;
                  v347 = 0;
                  v338 = 0LL;
                  v349 = 0;
                  v350 = 0;
                  NextSysMsg = xxxGetNextSysMsg(
                                 (struct tagTHREADINFO *)a1,
                                 *(struct tagQMSG **)(v33 + 88),
                                 (struct tagQMSG *)&v425,
                                 v26);
                  v352 = NextSysMsg;
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
                    || (v38 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                  {
                    v38 = 0;
                  }
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
                  {
                    v21 = 0;
                  }
                  if ( v38 || v21 )
                  {
                    v39 = *(_QWORD *)(a1 + 472);
                    v40 = *(_QWORD *)(v39 + 88);
                    v41 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v35);
                    v326 = v39;
                    NextSysMsg = v352;
                    LOBYTE(v42) = v21;
                    LOBYTE(v43) = v38;
                    WPP_RECORDER_AND_TRACE_SF_qqq(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v43,
                      v42,
                      *(_QWORD *)(v41 + 69416),
                      5,
                      18,
                      31,
                      (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
                      (char)v352,
                      v326,
                      v40);
                  }
                  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL) = NextSysMsg;
                  if ( !NextSysMsg )
                    goto LABEL_67;
                  v44 = DWORD1(v431);
                  if ( (BYTE4(v431) & 0x20) != 0 )
                  {
                    v45 = v353;
                    *v353 = NextSysMsg;
                    *((_DWORD *)NextSysMsg + 25) |= 0x100u;
                    v330[1] = 0;
                    v44 = DWORD1(v431);
                    if ( (DWORD1(v431) & 0x8000000) != 0 )
                    {
                      *((_DWORD *)*v45 + 25) |= 0x8000000u;
                      v44 = DWORD1(v431);
                    }
                  }
                  if ( (v44 & 0x2000) == 0 )
                    break;
                  v12 = v332;
                  v21 = 1;
                  if ( *((_QWORD *)&v431 + 1) == a1 )
                    v12 = 1;
                  v332 = v12;
                  v346 = v12;
                  LOBYTE(v37) = 1;
                  v334 = v37;
                  v335 = 1;
                }
                LOBYTE(v37) = v334;
                if ( (v44 & 0x10000) == 0 )
                  break;
                v21 = 1;
                v12 = v332;
                if ( *((_QWORD *)&v431 + 1) == a1 )
                {
                  v12 = 3;
                  v332 = 3;
                  v346 = 3;
                  goto LABEL_755;
                }
              }
              if ( (_DWORD)v431 == 4 && v334 )
              {
                DeferSysPeekMsg(a1, 3LL);
                v21 = 1;
                goto LABEL_754;
              }
              if ( (v44 & 0x4000) == 0 )
                break;
              v21 = 1;
              v12 = v332;
              if ( *((_QWORD *)&v431 + 1) == a1 )
              {
                v12 = 2;
                v332 = 2;
                v346 = 2;
              }
            }
            if ( (unsigned int)ShouldDeferMessage(v332, &v425, v334) )
            {
              DeferSysPeekMsg(a1, 3LL);
              v12 = 3;
              v332 = 3;
              v346 = 3;
              goto LABEL_66;
            }
LABEL_67:
            if ( !*(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL) )
            {
              if ( a7 == 0x2000 )
                ClearWakeBit((struct tagTHREADINFO *)a1, 0x2000, 0);
              goto LABEL_819;
            }
            Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v367, v35);
            v21 = 1;
            LOBYTE(v46) = 1;
            ThreadDesktopWindow = (struct tagWND *)HMValidateHandleNoSecure(v426, v46);
            Win32HM_LockIntoThread<1>(a1, (__int64)ThreadDesktopWindow, (__int64 *)v367);
            v47 = (unsigned int)v431;
            if ( !(_DWORD)v431 )
              break;
            if ( (_DWORD)v431 == 4 )
            {
              v12 = v332;
              v37 = v334;
              if ( *(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL) != *(_QWORD *)(*(_QWORD *)(a1 + 472) + 24LL) )
                continue;
            }
            if ( (_DWORD)v431 != 9 || DWORD2(v426) != 96 )
              goto LABEL_81;
            for ( i = *((_QWORD *)&v425 + 1); i && IsHiddenByInputService(i); i = *(_QWORD *)(i + 8) )
              ;
            v12 = v332;
            v37 = v334;
            if ( !i )
            {
LABEL_81:
              if ( !*((_QWORD *)&v431 + 1) || *((_QWORD *)&v431 + 1) == a1 )
              {
                EtwTraceRetrieveQueueEventMessage(
                  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL),
                  *((_QWORD *)&v431 + 1),
                  v37);
                DelQEntry(*(_QWORD *)(a1 + 472) + 24LL, *(__int64 **)(*(_QWORD *)(a1 + 472) + 88LL), 1);
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
                  || (v58 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                {
                  v58 = 0;
                }
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
                {
                  v21 = 0;
                }
                if ( v58 || v21 )
                {
                  v59 = *(_QWORD *)(a1 + 472);
                  v60 = *(_QWORD *)(v59 + 88);
                  v61 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v57);
                  LOBYTE(v62) = v21;
                  LOBYTE(v63) = v58;
                  WPP_RECORDER_AND_TRACE_SF_qq(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v63,
                    v62,
                    *(_QWORD *)(v61 + 69416),
                    5,
                    18,
                    33,
                    (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
                    v59,
                    v60);
                }
                *(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL) = 0LL;
                xxxProcessEventMessage(a1, (__int64)&v425);
                v21 = 1;
              }
              else
              {
                v49 = *(_QWORD *)(a1 + 472);
                if ( *(_QWORD *)(*((_QWORD *)&v431 + 1) + 472LL) == v49 )
                {
                  v358 = *((_QWORD *)&v431 + 1);
                  Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v402, *((struct _W32THREAD **)&v431 + 1));
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
                    || (v51 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                  {
                    v51 = 0;
                  }
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
                  {
                    v21 = 0;
                  }
                  if ( v51 || v21 )
                  {
                    v52 = *(_QWORD *)(a1 + 472);
                    v53 = *(_QWORD *)(v52 + 88);
                    v54 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v50);
                    LOBYTE(v55) = v21;
                    LOBYTE(v56) = v51;
                    WPP_RECORDER_AND_TRACE_SF_qq(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v56,
                      v55,
                      *(_QWORD *)(v54 + 69416),
                      5,
                      18,
                      32,
                      (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
                      v52,
                      v53);
                  }
                  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL) = 0LL;
                  goto LABEL_819;
                }
                CleanEventMessage(*(struct tagQMSG **)(v49 + 88));
                DelQEntry(*(_QWORD *)(a1 + 472) + 24LL, *(__int64 **)(*(_QWORD *)(a1 + 472) + 88LL), 1);
              }
LABEL_84:
              v12 = v332;
              goto LABEL_21;
            }
          }
          LOBYTE(v37) = v334;
          if ( a7 == 0x2000 )
            goto LABEL_32;
          v64 = DWORD2(v426);
          v330[0] = DWORD2(v426);
          if ( DWORD2(v426) > 0x24A )
          {
            if ( DWORD2(v426) <= 0x2ED )
            {
              if ( DWORD2(v426) == 749 )
                goto LABEL_776;
              if ( DWORD2(v426) == 593 || DWORD2(v426) == 594 || DWORD2(v426) == 595 )
              {
LABEL_411:
                v133 = v341;
                goto LABEL_740;
              }
              v159 = DWORD2(v426) - 744;
              v158 = DWORD2(v426) == 744;
              goto LABEL_482;
            }
            if ( DWORD2(v426) != 750 && DWORD2(v426) != 751 && DWORD2(v426) != 752 )
            {
              v159 = DWORD2(v426) - 753;
              v158 = DWORD2(v426) == 753;
LABEL_482:
              if ( v158 )
                goto LABEL_776;
              v160 = v159 - 1;
              if ( !v160 )
                goto LABEL_776;
              v161 = v160 - 1;
              if ( !v161 || (unsigned int)(v161 - 1) < 2 )
                goto LABEL_776;
              goto LABEL_486;
            }
LABEL_776:
            if ( !v341 && a5 == -1 )
            {
LABEL_786:
              if ( !(unsigned int)IsInsideMenuLoop(a1) )
              {
                if ( v330[1] )
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v425, 1);
                if ( !ThreadDesktopWindow )
                  ThreadDesktopWindow = *(struct tagWND **)(*(_QWORD *)(a1 + 472) + 120LL);
                v337 = (void *)*((_QWORD *)&v427 + 1);
                v338 = v427;
                InteractiveControlInputMessage = xxxRetrieveInteractiveControlInputMessage(
                                                   (unsigned __int16)v427,
                                                   WORD1(v427));
                if ( InteractiveControlInputMessage == 1 )
                  goto LABEL_345;
                if ( InteractiveControlInputMessage == 2 )
                  goto LABEL_819;
              }
              goto LABEL_275;
            }
            if ( v341 <= a5 )
            {
              if ( DWORD2(v426) >= v341 )
              {
                v289 = 1;
                if ( DWORD2(v426) <= a5 )
                {
LABEL_785:
                  if ( !v289 )
                    goto LABEL_819;
                  goto LABEL_786;
                }
              }
            }
            else if ( DWORD2(v426) < a5 || DWORD2(v426) > v341 )
            {
              v289 = 1;
              goto LABEL_785;
            }
            v289 = 0;
            goto LABEL_785;
          }
          if ( DWORD2(v426) == 586 )
            goto LABEL_411;
          if ( DWORD2(v426) > 0x11B )
            break;
          switch ( DWORD2(v426) )
          {
            case 0x11B:
              goto LABEL_121;
            case 0x23:
              v338 = 0LL;
              v337 = (void *)*((_QWORD *)&v427 + 1);
              if ( !ThreadDesktopWindow || (v131 = *((_QWORD *)ThreadDesktopWindow + 2), v131 == a1) )
              {
                if ( !(unsigned int)MiPCheckMsgFilter(NextSysMsg, DWORD2(v426), (unsigned int)v341, a5) )
                  goto LABEL_819;
LABEL_401:
                if ( v330[1] )
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v425, 1);
                goto LABEL_345;
              }
              if ( *(_QWORD *)(v131 + 472) == *(_QWORD *)(a1 + 472) )
              {
                v132 = v342;
                if ( !v342 )
                {
                  v132 = *((_QWORD *)ThreadDesktopWindow + 2);
                  Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v397, (struct _W32THREAD *)v131);
                }
                goto LABEL_820;
              }
              goto LABEL_275;
            case 0xFE:
LABEL_126:
              v337 = (void *)*((_QWORD *)&v427 + 1);
              v338 = v427;
              if ( !ThreadDesktopWindow )
                goto LABEL_275;
              if ( (unsigned int)CheckCrossThreadInput(
                                   (struct tagTHREADINFO **)ThreadDesktopWindow,
                                   NextSysMsg,
                                   &v339,
                                   (int *)&v330[1],
                                   v353) )
                goto LABEL_819;
              if ( v339 )
                goto LABEL_275;
              if ( !v341 && a5 == -1 )
                goto LABEL_416;
              if ( v341 <= a5 )
              {
                if ( v330[0] >= v341 )
                {
                  v67 = 1;
                  if ( v330[0] <= a5 )
                    goto LABEL_415;
                }
LABEL_414:
                v67 = 0;
                goto LABEL_415;
              }
              if ( v330[0] >= a5 && v330[0] <= v341 )
                goto LABEL_414;
              v67 = 1;
LABEL_415:
              v12 = v332;
              LOBYTE(v37) = v334;
              if ( v67 )
              {
LABEL_416:
                v134 = CheckPwndFilter((__int64)ThreadDesktopWindow, *(__int64 *)v355);
                v12 = v332;
                LOBYTE(v37) = v334;
                if ( v134 )
                  goto LABEL_401;
              }
              break;
            case 0xFF:
              v337 = (void *)*((_QWORD *)&v427 + 1);
              v338 = v427;
              if ( DeleteHidDataIfAlreadyHandledByGRIB((struct tagTHREADINFO *)a1, *((__int64 *)&v427 + 1)) )
                goto LABEL_275;
              ThreadDesktopWindow = 0LL;
              v123 = 0LL;
              if ( v337 )
              {
                LOBYTE(v123) = 18;
                v124 = HMValidateHandleNoSecure((__int64)v337, v123);
                v123 = v124;
                if ( v124 )
                  ThreadDesktopWindow = *(struct tagWND **)(v124 + 24);
              }
              if ( !ThreadDesktopWindow )
              {
                v125 = *(_QWORD *)(a1 + 472);
                ThreadDesktopWindow = *(struct tagWND **)(v125 + 120);
                if ( !ThreadDesktopWindow )
                {
                  ThreadDesktopWindow = *(struct tagWND **)(v125 + 128);
                  if ( !ThreadDesktopWindow )
                  {
                    InputTraceLogging::RawInput::SSQResult((__int64)v337, 0, v122);
                    goto LABEL_275;
                  }
                }
              }
              if ( v123 && *(_QWORD *)(v123 + 16) != *((_QWORD *)ThreadDesktopWindow + 2) )
              {
                v362 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10356);
              }
              Win32HM_ExchangeThreadLock<1>((__int64)ThreadDesktopWindow, (__int64)v367);
              if ( (unsigned int)CheckCrossThreadInput(
                                   (struct tagTHREADINFO **)ThreadDesktopWindow,
                                   NextSysMsg,
                                   &v339,
                                   (int *)&v330[1],
                                   v353) )
              {
                v127 = 0;
                goto LABEL_366;
              }
              if ( !v339 )
                goto LABEL_378;
              if ( *(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 472LL) != *(_QWORD *)(a1 + 472) )
                goto LABEL_275;
              if ( (unsigned int)IsInsideMenuLoop(a1) )
              {
                v128 = *(HWND **)(**(_QWORD **)(a1 + 648) + 8LL);
              }
              else
              {
                v129 = *(_QWORD *)(a1 + 712);
                if ( v129 )
                  v128 = *(HWND **)(v129 + 16);
                else
                  v128 = 0LL;
              }
              if ( v128 )
                InputTraceLogging::RawInput::IgnoreModalLoop(v337, *v128);
              if ( !v360 )
              {
                v360 = (struct _W32THREAD *)*((_QWORD *)ThreadDesktopWindow + 2);
                Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v401, v360);
              }
LABEL_378:
              if ( v341 || a5 != -1 )
              {
                if ( v341 <= a5 )
                {
                  if ( v330[0] >= v341 )
                  {
                    v130 = 1;
                    if ( v330[0] <= a5 )
                    {
LABEL_387:
                      if ( !v130 )
                        goto LABEL_394;
                      goto LABEL_388;
                    }
                  }
                }
                else if ( v330[0] < a5 || v330[0] > v341 )
                {
                  v130 = 1;
                  goto LABEL_387;
                }
                v130 = 0;
                goto LABEL_387;
              }
LABEL_388:
              if ( (unsigned int)CheckPwndFilter((__int64)ThreadDesktopWindow, *(__int64 *)v355) )
              {
                if ( !v339 )
                {
                  if ( v330[1] )
                    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v425, 1);
                  InputTraceLogging::RawInput::SSQResult((__int64)v337, 4, v126);
                  goto LABEL_345;
                }
                v127 = 3;
LABEL_366:
                InputTraceLogging::RawInput::SSQResult((__int64)v337, v127, v126);
                goto LABEL_819;
              }
LABEL_394:
              InputTraceLogging::RawInput::SSQResult((__int64)v337, 2, v126);
LABEL_754:
              v12 = v332;
              goto LABEL_755;
            case 0x100:
              goto LABEL_136;
            default:
              if ( DWORD2(v426) != 257 )
              {
                if ( DWORD2(v426) == 258 )
                  goto LABEL_193;
                if ( DWORD2(v426) != 260 )
                {
                  if ( DWORD2(v426) != 261 )
                  {
                    if ( DWORD2(v426) == 281 )
                      goto LABEL_121;
                    goto LABEL_486;
                  }
                  goto LABEL_169;
                }
LABEL_136:
                v356 = 1;
                if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x400) != 0
                  && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
                {
                  goto LABEL_819;
                }
                v338 = (unsigned __int8)v427;
                if ( !v330[1] || (WORD2(v431) & 0x8000) == 0 )
                {
                  if ( v338 != 18 )
                    *(_DWORD *)(*(_QWORD *)(a1 + 472) + 436LL) &= 0xFFFFFFF3;
                  v68 = *(_BYTE *)(*(_QWORD *)(a1 + 472) + 284LL) & 0x10;
                  if ( v338 == 44 )
                  {
                    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 472) + 284LL) & 0x10) != 0 )
                    {
                      if ( (*(_DWORD *)(a1 + 924) & 0x10) == 0 )
                        goto LABEL_147;
                      goto LABEL_155;
                    }
                    if ( (*(_DWORD *)(a1 + 924) & 0x20) == 0 )
                    {
LABEL_147:
                      xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v425, 1);
                      if ( !v68 && (DWORD2(v427) & 0xFF0000) != 0x10000LL )
                      {
                        CompositeAppFrameWindowOrSelf = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a1 + 496) + 8LL)
                                                                          + 24LL);
                        goto LABEL_152;
                      }
                      v70 = *(_QWORD *)(a1 + 472);
                      CompositeAppFrameWindowOrSelf = *(struct tagWND **)(v70 + 128);
                      v71 = CompositeAppFrameWindowOrSelf == 0LL;
                      if ( CompositeAppFrameWindowOrSelf )
                      {
                        CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(
                                                          *(const struct tagWND **)(v70 + 128),
                                                          v25);
LABEL_152:
                        v71 = CompositeAppFrameWindowOrSelf == 0LL;
                      }
                      v12 = v332;
                      if ( !v71 )
                      {
                        v72 = v433 != 1;
                        Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(
                          v409,
                          a1,
                          (__int64)CompositeAppFrameWindowOrSelf);
                        xxxSnapWindow((__int64)CompositeAppFrameWindowOrSelf, v72);
                        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v409, v73);
                      }
                      goto LABEL_21;
                    }
                  }
LABEL_155:
                  if ( *(_DWORD *)(W32GetUserSessionState(16LL, v47) + 16312)
                    && (!*(_DWORD *)(W32GetUserSessionState(v74, v47) + 14708)
                     || (*(_BYTE *)(W32GetUserSessionState(v76, v75) + 14704) & 2) == 0) )
                  {
                    v77 = *(_BYTE *)(*(_QWORD *)(a1 + 472) + 284LL);
                    v78 = v338 | 0x400;
                    if ( (v77 & 0x10) == 0 )
                      v78 = v338;
                    v79 = v78;
                    LODWORD(v79) = v78 | 0x200;
                    if ( (v77 & 4) == 0 )
                      v79 = v78;
                    v80 = (unsigned int)v79;
                    LODWORD(v80) = v79 | 0x100;
                    if ( (v77 & 1) == 0 )
                      v80 = (unsigned int)v79;
                    v81 = (__int64 *)HotKeyToWindow(v80, v79);
                    if ( v81 )
                    {
                      if ( *(_QWORD *)(a1 + 496) == *(_QWORD *)(v81[2] + 496) )
                      {
                        PostTransformableMessage(
                          *(struct tagWND **)(*(_QWORD *)(a1 + 472) + 128LL),
                          0x112u,
                          0xF150uLL,
                          *v81,
                          0);
LABEL_674:
                        xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v425, 1);
                        goto LABEL_84;
                      }
                    }
                  }
                }
                if ( v338 == 231 )
                {
                  *(_WORD *)(a1 + 922) = WORD1(v427);
                  *(_QWORD *)&v427 = 231LL;
                }
              }
LABEL_169:
              v82 = v427;
              v338 = (unsigned __int8)v427;
              if ( (unsigned __int8)v427 == 231LL )
                v82 = 231LL;
              *(_QWORD *)&v427 = v82;
              if ( !v330[1] || (WORD2(v431) & 0x8000) == 0 )
              {
                if ( *(_DWORD *)(W32GetUserSessionState(v82, v47) + 14280) )
                {
                  if ( (GetAppImeCompatFlags(0LL, v83) & 0x800000) == 0 && BYTE10(v427) == 41 )
                  {
                    if ( v330[1] )
                    {
                      v84 = *(_QWORD *)(a1 + 472);
                      if ( (*(_BYTE *)(v84 + 284) & 0x15) == 0
                        && (*(_BYTE *)(v84 + 302) & 0x40) == 0
                        && (*(_BYTE *)(v84 + 303) & 1) == 0 )
                      {
                        if ( (ThreadDesktopWindow = *(struct tagWND **)(v84 + 120), (v85 = ThreadDesktopWindow) == 0LL)
                          && (ThreadDesktopWindow = *(struct tagWND **)(v84 + 128), (v85 = ThreadDesktopWindow) == 0LL)
                          || *((_QWORD *)v85 + 2) == a1 )
                        {
                          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v425, 1);
                          v12 = v332;
                          if ( !v356 && ThreadDesktopWindow )
                          {
                            *(_QWORD *)&v413[0] = *(_QWORD *)ThreadDesktopWindow;
                            *((_QWORD *)&v413[0] + 1) = 80LL;
                            memset(&v413[1], 0, 32);
                            xxxCallCtfHook(3LL, 0LL, 1LL, v413);
                          }
                          goto LABEL_21;
                        }
                      }
                    }
                  }
                }
              }
              if ( v338 == 121 )
                v330[0] |= 4u;
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 472) + 284LL) & 4) != 0 && v338 == 27 )
                v330[0] |= 4u;
              if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 8) == 0 )
                *((_QWORD *)&v427 + 1) &= ~0x2000000uLL;
LABEL_193:
              v338 = (unsigned __int8)v427;
              v86 = *(_QWORD *)(a1 + 472);
              v87 = *(struct tagWND **)(v86 + 120);
              ThreadDesktopWindow = v87;
              if ( !*(_QWORD *)(v86 + 120) )
              {
                v87 = *(struct tagWND **)(v86 + 128);
                ThreadDesktopWindow = v87;
                if ( !v87 )
                  goto LABEL_275;
                if ( v330[0] - 256 <= 3 )
                  v330[0] += 4;
              }
              Win32HM_ExchangeThreadLock<1>((__int64)v87, (__int64)v367);
              v88 = *((_QWORD *)ThreadDesktopWindow + 2);
              v339 = v88 != v366;
              if ( v88 != v368 )
              {
                if ( *(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 472LL) != *(_QWORD *)(a1 + 472) )
                  goto LABEL_275;
                if ( (unsigned int)IsInsideMenuLoop(a1) )
                {
                  v90 = *(struct tagWND **)(**(_QWORD **)(a1 + 648) + 8LL);
                }
                else
                {
                  v91 = *(_QWORD *)(a1 + 712);
                  if ( v91 )
                    v90 = *(struct tagWND **)(v91 + 16);
                  else
                    v90 = 0LL;
                }
                if ( v90 )
                {
                  ThreadDesktopWindow = v90;
                  v339 = *((_QWORD *)v90 + 2) != v89;
                  Win32HM_ExchangeThreadLock<1>((__int64)v90, (__int64)v367);
                }
                if ( !v365 )
                {
                  v365 = (struct _W32THREAD *)*((_QWORD *)ThreadDesktopWindow + 2);
                  Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v396, v365);
                }
              }
              if ( !v341 && a5 == -1 )
                goto LABEL_218;
              if ( v341 > a5 )
              {
                if ( v330[0] < a5 || v330[0] > v341 )
                {
                  v92 = 1;
                  goto LABEL_217;
                }
LABEL_216:
                v92 = 0;
                goto LABEL_217;
              }
              if ( v330[0] < v341 )
                goto LABEL_216;
              v92 = 1;
              if ( v330[0] > a5 )
                goto LABEL_216;
LABEL_217:
              LOBYTE(v37) = v334;
              if ( !v92 )
                goto LABEL_32;
LABEL_218:
              v93 = CheckPwndFilter((__int64)ThreadDesktopWindow, *(__int64 *)v355);
              LOBYTE(v37) = v334;
              if ( !v93 )
                goto LABEL_32;
              if ( v339 )
                goto LABEL_819;
              if ( v330[1] )
              {
                if ( (WORD2(v431) & 0x8000) != 0 )
                  goto LABEL_242;
                if ( !(unsigned int)IsInsideMenuLoop(a1) )
                {
                  if ( v338 == 93 && v330[0] == 257 )
                  {
                    if ( ThreadDesktopWindow )
                      v94 = *(_QWORD *)ThreadDesktopWindow;
                    else
                      v94 = 0LL;
                    PostTransformableMessage(ThreadDesktopWindow, 0x7Bu, v94, -1LL, 0);
                  }
                  if ( v338 == 112 && v330[0] == 256 )
                    _PostTransformableMessageExtended(ThreadDesktopWindow, 0x4Du, 0LL, 0LL, 0LL, 1);
                }
              }
              if ( v338 == 16 )
              {
                v95 = DWORD2(v427) & 0x1000000;
                if ( !v356
                  && (*(_BYTE *)(*(_QWORD *)(a1 + 472) + 320LL) & (unsigned __int8)((unsigned int)v95 != 0LL ? 1 : 4)) != 0
                  && (unsigned int)IsDesktopApp(*(_QWORD *)(a1 + 464))
                  && (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 8) == 0 )
                {
                  *(_QWORD *)&v427 = (v95 != 0) + 160LL;
                  goto LABEL_674;
                }
              }
              v361 = (1 << (2 * (v338 & 3))) & *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)v338 >> 2)
                                                                  + *(_QWORD *)(a1 + 472)
                                                                  + 280);
              if ( v361 )
              {
                if ( !v330[1] )
                  goto LABEL_248;
                if ( NextSysMsg )
                  *((_QWORD *)NextSysMsg + 5) |= 0x40000000uLL;
              }
LABEL_242:
              if ( !v330[1] )
                goto LABEL_248;
              if ( (WORD2(v431) & 0x8000) != 0 || !NextSysMsg || (*(_DWORD *)(a1 + 1360) & 0x10000000) == 0 )
              {
                xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v425, 1);
LABEL_248:
                v96 = v351;
                goto LABEL_249;
              }
              v96 = (ULONG_PTR)xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v425, 0);
              v351 = v96;
LABEL_249:
              v337 = (void *)*((_QWORD *)&v427 + 1);
              v338 = v427;
              if ( v361 )
                v337 = (void *)(*((_QWORD *)&v427 + 1) | 0x40000000LL);
              if ( v330[0] == 257 || v330[0] == 261 )
                v337 = (void *)((unsigned __int64)v337 | 0x80000000);
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 472) + 284LL) & 0x10) != 0 )
                v337 = (void *)((unsigned __int64)v337 | 0x20000000);
              if ( (unsigned int)IsMenuStarted(a1) )
                v337 = (void *)((unsigned __int64)v337 | 0x10000000);
              if ( (*(_DWORD *)(v97 + 436) & 0x4000) != 0 )
                v337 = (void *)((unsigned __int64)v337 | 0x8000000);
              if ( !v370 && !*(_QWORD *)(W32GetUserSessionState(v98, v97) + 12944) || (WORD2(v431) & 0x8000) != 0 )
                goto LABEL_289;
              if ( !v330[1] )
                goto LABEL_294;
              if ( (unsigned int)IsMenuStarted(a1)
                || (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x2000000) != 0
                || !ThreadDesktopWindow )
              {
LABEL_289:
                if ( !v330[1] )
                {
LABEL_294:
                  LOBYTE(v99) = v349;
                  goto LABEL_295;
                }
                v99 = v349;
                if ( (WORD2(v431) & 0x8000) != 0 )
                {
                  if ( (DWORD1(v431) & 0x4000000) != 0 )
                    v99 = 2;
                  v349 = v99;
                  v350 = v99;
                }
              }
              else
              {
                LOWORD(v99) = v338;
                if ( v338 == 231 )
                  LOWORD(v99) = 231;
                tagTHREADINFO::UpdateInputSource(
                  (tagTHREADINFO *)a1,
                  (const struct tagINPUT_MESSAGE_SOURCE *)((char *)&v432 + 12));
                tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
                if ( v96 )
                  Win32RawLockedItemBase<tagQMSG,0,1,1,1>::ManualLock<void>(BugCheckParameter2, v96);
                v100 = xxxImmProcessKey(*(struct tagQ **)(a1 + 472), ThreadDesktopWindow, v330[0], v99, (__int64)v337);
                LOBYTE(v99) = v100;
                v349 = v100;
                v350 = v100;
                if ( (v100 & 0x11) != 0 )
                {
                  if ( v96 )
                  {
                    Win32RawLockedItemBase<tagQMSG,0,1,1,1>::UnlockWorker(BugCheckParameter2, 0, 1);
                    v351 = 0LL;
                  }
                  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
                  goto LABEL_275;
                }
                if ( v96 )
                  Win32RawLockedItemBase<tagQMSG,0,1,1,1>::UnlockWorker(BugCheckParameter2, 0, 0);
                Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
              }
LABEL_295:
              if ( !v330[1] )
                goto LABEL_336;
              v333 = 1;
              v104 = 0;
              if ( (WORD2(v431) & 0x8000) == 0 )
              {
                v105 = *(_QWORD *)(a1 + 472);
                v106 = *(_QWORD *)(v105 + 448);
                *(_QWORD *)(v105 + 448) = *((_QWORD *)&v429 + 1);
                v107 = v99 & 2;
                tagTHREADINFO::UpdateInputSource(
                  (tagTHREADINFO *)a1,
                  (const struct tagINPUT_MESSAGE_SOURCE *)((char *)&v432 + 12));
                *(_QWORD *)&v379 = 0LL;
                v380 = 0LL;
                *((_QWORD *)&v379 + 1) = v337;
                *(_QWORD *)&v359 = (unsigned int)Feature_WebThreatDefenseToggle__private_featureState;
                if ( (Feature_WebThreatDefenseToggle__private_featureState & 0x10) == 0 )
                {
                  LODWORD(v359) = Feature_WebThreatDefenseToggle__private_featureState | 1;
                  wil_details_FeatureReporting_ReportUsageToService(
                    (__int64)&Feature_WebThreatDefenseToggle__private_descriptor,
                    Feature_WebThreatDefenseToggle__private_featureState | 1,
                    3u,
                    1LL);
                  wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
                    v359,
                    3,
                    (__int64)&Feature_WebThreatDefenseToggle__private_descriptor);
                }
                v108 = *(_QWORD *)(a1 + 1376);
                v109 = *(_QWORD *)(a1 + 464);
                v110 = *(unsigned int *)(v109 + 276);
                if ( (v110 & 4) != 0 )
                {
                  if ( (_DWORD)v108 != 1 || (LODWORD(v108) = 1, (v108 & 0x500000000LL) == 0) )
                    LODWORD(v108) = 0;
                  if ( (_DWORD)v108
                    && *(_QWORD *)(a1 + 496) != *(_QWORD *)(W32GetUserSessionState(v109, v110) + 63016)
                    && CheckImEnabled() )
                  {
                    LOWORD(v380) = 1;
                  }
                }
                tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)v398);
                if ( v351 )
                  Win32RawLockedItemBase<tagQMSG,0,1,1,1>::ManualLock<void>(v398, v351);
                v104 = xxxCallCtfHook(2LL, v107, v338, &v379);
                if ( (BYTE2(v380) & 1) != 0 )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 464) + 816LL) & 0x30) == 0x10 )
                    WORD1(v380) |= 0x10u;
                  ProcessTranslatedChar((struct _CHARHOOKSTRUCT *)&v379);
                }
                *(_QWORD *)(*(_QWORD *)(a1 + 472) + 448LL) = v106;
                if ( v351 )
                {
                  if ( (unsigned int)(v104 - 2) <= 1
                    && (*(_DWORD *)(a1 + 1360) & 0x20000000) == 0
                    && AllocQEntryEx(*(_QWORD *)(a1 + 472) + 24LL, (_DWORD *)v351, 2) )
                  {
                    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
                      || (v111 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                    {
                      v111 = 0;
                    }
                    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
                    {
                      v21 = 0;
                    }
                    if ( v111 || v21 )
                    {
                      v112 = *(_QWORD *)(a1 + 472);
                      v113 = *(_QWORD *)(v112 + 88);
                      v114 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
                      v328 = v113;
                      v115 = v351;
                      LOBYTE(v116) = v21;
                      LOBYTE(v117) = v111;
                      WPP_RECORDER_AND_TRACE_SF_qqq(
                        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                        v117,
                        v116,
                        *(_QWORD *)(v114 + 69416),
                        5,
                        18,
                        35,
                        (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
                        v351,
                        v112,
                        v328);
                    }
                    else
                    {
                      v115 = v351;
                    }
                    Win32RawLockedItemBase<tagQMSG,0,1,1,1>::UnlockWorker(v398, 0, 0);
                    *(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL) = v115;
                    v21 = 1;
                    if ( v104 == 2 )
                    {
                      v12 = 1;
                    }
                    else
                    {
                      v71 = v104 == 3;
                      v12 = v332;
                      if ( v71 )
                        v12 = 2;
                    }
                    v346 = v12;
                    v332 = v12;
                    DeferSysPeekMsg(a1, v12);
                    v351 = 0LL;
                    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v398);
                    goto LABEL_755;
                  }
                  v351 = 0LL;
                }
                Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v398);
                NextSysMsg = v352;
              }
              if ( v104 )
              {
                v101 = 1;
                goto LABEL_276;
              }
LABEL_336:
              if ( ((*(_BYTE *)(a1 + 720) | *(_BYTE *)(**(_QWORD **)(a1 + 504) + 16LL)) & 8) == 0 )
              {
                v101 = v333;
LABEL_340:
                if ( v101
                  && v330[1]
                  && ((*(_BYTE *)(a1 + 720) | *(_BYTE *)(**(_QWORD **)(a1 + 504) + 16LL)) & 0x40) != 0 )
                {
                  v118 = v337;
                  v119 = v338;
                  v120 = 7LL;
                  goto LABEL_344;
                }
                goto LABEL_345;
              }
              v101 = 1;
              v333 = 1;
              if ( !(unsigned int)xxxCallHook(v330[1] == 0 ? 3 : 0, v338, (__int64)v337, 2) )
                goto LABEL_340;
LABEL_276:
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v425, 1);
              if ( v348 )
              {
                v102 = *(_QWORD *)(a1 + 504);
                v25 = (unsigned int)(*(_DWORD *)(a1 + 720) | *(_DWORD *)(*(_QWORD *)v102 + 16LL));
                if ( ((*(_BYTE *)(a1 + 720) | *(_BYTE *)(*(_QWORD *)v102 + 16LL)) & 0x40) != 0 )
                  xxxCallHook(6LL, v330[0], (__int64)v436, 5);
                v348 = 0;
              }
              if ( v101 )
              {
                v103 = *(_QWORD *)(a1 + 504);
                v25 = (unsigned int)(*(_DWORD *)(a1 + 720) | *(_DWORD *)(*(_QWORD *)v103 + 16LL));
                if ( ((*(_BYTE *)(a1 + 720) | *(_BYTE *)(*(_QWORD *)v103 + 16LL)) & 0x40) != 0 )
                  xxxCallHook(7LL, v338, (__int64)v337, 5);
                v333 = 0;
              }
              v12 = v332;
              LOBYTE(v37) = v334;
              if ( v330[1] )
                goto LABEL_21;
              break;
          }
        }
        if ( DWORD2(v426) != 522 && DWORD2(v426) != 526 )
          break;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x400) != 0
          && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
        {
          goto LABEL_819;
        }
        if ( (unsigned int)IsInsideMenuLoop(a1) )
          goto LABEL_275;
        if ( (DWORD1(v431) & 0x100000) != 0 )
        {
          v136 = *(struct tagWND **)(*(_QWORD *)(a1 + 472) + 120LL);
          ThreadDesktopWindow = v136;
        }
        else
        {
          if ( !ThreadDesktopWindow || (v137 = 1, !IsCompositionInputWindowForHitTest(ThreadDesktopWindow, v135)) )
            v137 = 0;
          if ( v137 )
          {
            if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(ThreadDesktopWindow, v135) )
              goto LABEL_275;
          }
          else
          {
            ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(0LL, v135);
          }
          Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v411, (__int64)ThreadDesktopWindow);
          v138 = xxxDCEWindowHitTest(
                   ThreadDesktopWindow,
                   512,
                   v427,
                   *((__int64 *)&v427 + 1),
                   (struct tagPOINT)v430,
                   (__int64)&v340,
                   4 * (unsigned int)v137 + 9);
          LOBYTE(v139) = 1;
          ThreadDesktopWindow = (struct tagWND *)HMValidateHandleNoSecure((__int64)v138, v139);
          LOBYTE(v140) = 1;
          v141 = (struct tagWND *)HMValidateHandleNoSecure((__int64)v138, v140);
          InputTraceLogging::Mouse::SecondaryHitTest(
            (const struct tagQMSG *)&v425,
            (const struct tagPOINT *)&v430,
            v141);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v411, v142);
          v136 = ThreadDesktopWindow;
        }
        if ( !v136 )
          goto LABEL_275;
        Win32HM_ExchangeThreadLock<1>((__int64)v136, (__int64)v367);
        v143 = *((_QWORD *)ThreadDesktopWindow + 2);
        v339 = v143 != v366;
        if ( v143 != v368 )
        {
          v144 = *((_QWORD *)ThreadDesktopWindow + 2);
          if ( *(_QWORD *)(v144 + 472) != *(_QWORD *)(a1 + 472) )
            goto LABEL_275;
          if ( !v365 )
          {
            v365 = (struct _W32THREAD *)*((_QWORD *)ThreadDesktopWindow + 2);
            Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v396, (struct _W32THREAD *)v144);
          }
        }
        v133 = v341;
        v145 = MiPCheckMsgFilter(NextSysMsg, v330[0], (unsigned int)v341, a5);
        v12 = v332;
        LOBYTE(v37) = v334;
        if ( v145 )
        {
          v146 = ThreadDesktopWindow;
          v147 = CheckPwndFilter((__int64)ThreadDesktopWindow, *(__int64 *)v355);
          LOBYTE(v37) = v334;
          if ( v147 )
          {
            if ( v339 )
              goto LABEL_819;
            if ( NextSysMsg && (unsigned int)IsMiPActive(a1, (__int64)NextSysMsg) )
            {
              if ( (*((_DWORD *)NextSysMsg + 25) & 0x400) != 0 )
              {
                memset_0(v460, 0, 0xA8uLL);
                if ( ShouldGenerateMipMessage((struct tagTHREADINFO *)a1, NextSysMsg, v146)
                  && (unsigned int)GeneratePointerMessageFromMouse(
                                     (struct tagQMSG *)v460,
                                     v330[0],
                                     NextSysMsg,
                                     v146,
                                     v148) )
                {
                  v425 = v460[0];
                  v426 = v460[1];
                  v427 = v460[2];
                  v428 = v460[3];
                  v429 = v460[4];
                  v430 = v460[5];
                  v431 = v460[6];
                  v432 = v460[7];
                  v433 = v460[8];
                  v434 = v460[9];
                  v435 = v461;
                  v34 = 1;
                  v347 = 1;
                  if ( v330[1] )
                    *((_DWORD *)NextSysMsg + 25) &= ~0x400u;
                  goto LABEL_739;
                }
                if ( v330[1] )
                {
                  *((_DWORD *)NextSysMsg + 25) &= ~0x400u;
                  goto LABEL_456;
                }
LABEL_458:
                MouseKeyFlags = GetMouseKeyFlags(*(_QWORD *)(a1 + 472));
                v338 = v427 | MouseKeyFlags;
                v337 = (void *)*((_QWORD *)&v427 + 1);
                v336.x = SWORD4(v427);
                v336.y = SWORD5(v427);
                PhysicalToLogicalDPIPointWithHitTest(&v336, &v336, 0LL, ThreadDesktopWindow);
                v337 = (void *)((LOWORD(v336.y) << 16) | LOWORD(v336.x));
                *(struct tagPOINT *)((char *)&v428 + 4) = v336;
                v436[0] = (__int64)v336;
                if ( ThreadDesktopWindow )
                  v436[1] = *(_QWORD *)ThreadDesktopWindow;
                else
                  v436[1] = 0LL;
                LODWORD(v437) = 0;
                *((_QWORD *)&v437 + 1) = *((_QWORD *)&v429 + 1);
                LODWORD(v438) = v427;
                if ( !v330[1] || (v348 = 1, !(unsigned int)xxxCallCtfHook(7LL, 0LL, v330[0], (__int128 *)v436)) )
                {
                  v154 = **(_QWORD **)(a1 + 504);
                  if ( ((*(_DWORD *)(a1 + 720) | *(_DWORD *)(v154 + 16)) & 0x100) == 0
                    || (v348 = 1, !xxxCallMouseHook(v330[0], (__int64)v436, v330[1])) )
                  {
                    if ( (unsigned int)PsGetWin32KFilterSet(v154, v152, v153) != 5
                      || (v157 = *((_QWORD *)PtiCurrent(v156, v155) + 65),
                          v343 = 0,
                          !(v343 = *(_QWORD *)(v157 + 248) != 0LL))
                      || !xxxClientCallLocalMouseHooks(v330[0], (__int64)v436, v330[1]) )
                    {
                      if ( v348
                        && v330[1]
                        && ((*(_BYTE *)(a1 + 720) | *(_BYTE *)(**(_QWORD **)(a1 + 504) + 16LL)) & 0x40) != 0 )
                      {
                        v119 = v330[0];
                        v118 = v436;
                        v120 = 6LL;
LABEL_344:
                        xxxCallHook(v120, v119, (__int64)v118, 5);
                      }
LABEL_345:
                      if ( *(_QWORD *)(a1 + 796) != *(_QWORD *)((char *)&v428 + 4) )
                        _InterlockedOr((volatile signed __int32 *)(a1 + 528), 0x100000u);
                      if ( NextSysMsg && ((BYTE4(v431) & 0x20) != 0 || (DWORD1(v431) & 0x8000000) != 0) )
                      {
                        if ( *((_DWORD *)NextSysMsg + 6) == 512 )
                        {
                          if ( ThreadDesktopWindow )
                            v121 = *(_QWORD *)ThreadDesktopWindow;
                          else
                            v121 = 0LL;
                          *((_QWORD *)NextSysMsg + 2) = v121;
                          *((_DWORD *)NextSysMsg + 25) |= 0x200u;
                        }
                        *((_QWORD *)NextSysMsg + 8) = v337;
                      }
                      *(_QWORD *)(a1 + 796) = *(_QWORD *)((char *)&v428 + 4);
                      *(_DWORD *)(a1 + 804) = *(_DWORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 288LL);
                      *(_QWORD *)(a1 + 808) = v430;
                      *(_DWORD *)(a1 + 608) = v428;
                      *(_QWORD *)(*(_QWORD *)(a1 + 472) + 448LL) = *((_QWORD *)&v429 + 1);
                      if ( v330[0] == 514 || v330[0] == 162 )
                        *(_QWORD *)(a1 + 816) = v430;
                      *(_QWORD *)(*(_QWORD *)(a1 + 472) + 80LL) = 1LL;
                      *(_QWORD *)(a1 + 616) = 1LL;
                      tagTHREADINFO::UpdateLastInputData((tagTHREADINFO *)a1, (const struct tagQMSG *)&v425);
                      **(_DWORD **)(a1 + 488) &= ~8u;
                      **(_QWORD **)(a1 + 520) &= 0x7FFFFFFFuLL;
                      v291 = v349;
                      v292 = v371;
                      if ( v330[1] )
                      {
                        v293 = *(_QWORD **)(a1 + 520);
                        if ( (BYTE4(v431) & 1) != 0 )
                          *v293 |= 0x1000uLL;
                        else
                          *v293 &= ~0x1000uLL;
                      }
                      TransferWakeBit(a1, v330[0]);
                      ClearWakeBit((struct tagTHREADINFO *)a1, 31751, 1);
                      v294 = v330[1];
                      if ( v330[1] )
                      {
                        if ( v347 )
                        {
                          v295 = *(_DWORD **)(a1 + 1512);
                          if ( v295 )
                          {
                            if ( (*v295 & 1) != 0 && (*v295 & 4) != 0 )
                            {
                              SetMiPWakeBit((struct tagTHREADINFO *)a1);
                              v294 = v330[1];
                            }
                          }
                        }
                      }
                      if ( ThreadDesktopWindow )
                        v296 = *(_QWORD *)ThreadDesktopWindow;
                      else
                        v296 = 0LL;
                      *(_QWORD *)v292 = v296;
                      *((_DWORD *)v292 + 2) = v330[0];
                      v297 = v338;
                      if ( (v291 & 2) != 0 )
                        v297 = 229LL;
                      *((_QWORD *)v292 + 2) = v297;
                      *((_QWORD *)v292 + 3) = v337;
                      *((_DWORD *)v292 + 8) = v428;
                      *(_QWORD *)((char *)v292 + 36) = *(_QWORD *)((char *)&v428 + 4);
                      InputTraceLogging::Delivery::ScanSysQueue(
                        (const struct tagQMSG *)&v425,
                        v292,
                        (const struct tagTHREADINFO *)a1,
                        v294 != 0);
                      if ( v330[1] )
                      {
                        EtwTraceInputProcessDelay(a1);
                        *(_DWORD *)(*(_QWORD *)(a1 + 472) + 456LL) = (MEMORY[0xFFFFF78000000320]
                                                                    * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                      }
                      EtwTraceRetrieveInputMessage(v292);
                      CManageInScanSysQueueBit::~CManageInScanSysQueueBit((CManageInScanSysQueueBit *)v345, v298);
                      Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v367, v299);
                      Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v400, v300);
                      Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v401, v301);
                      Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v402, v302);
                      Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v397, v303);
                      Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v396, v304);
                      return 1LL;
                    }
                  }
                }
LABEL_275:
                v101 = v333;
                goto LABEL_276;
              }
              if ( !v330[1] )
                goto LABEL_458;
              if ( !(unsigned int)IsMiPMouseMessage(*((unsigned int *)NextSysMsg + 6)) )
                goto LABEL_456;
              if ( (unsigned int)IsGenuineMouseInput((char *)NextSysMsg + 124) )
              {
                v149 = *(_DWORD **)(a1 + 1512);
                if ( v149 )
                {
                  if ( (*v149 & 2) == 0 && (*v149 & 4) == 0 )
                  {
                    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v425, 1);
                    goto LABEL_21;
                  }
                }
              }
              v150 = *(_DWORD **)(a1 + 1512);
              if ( v150 )
                *v150 &= ~2u;
            }
LABEL_456:
            if ( v330[1] )
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v425, 1);
            goto LABEL_458;
          }
        }
      }
      switch ( DWORD2(v426) )
      {
        case 0x238:
          goto LABEL_126;
        case 0x240:
LABEL_121:
          if ( !ThreadDesktopWindow )
            goto LABEL_275;
          v65 = (char *)*((_QWORD *)ThreadDesktopWindow + 5);
          if ( v65[20] < 0 )
            goto LABEL_275;
          if ( v65[19] < 0 )
            goto LABEL_275;
          v66 = v65[31];
          if ( (v66 & 8) != 0 || (v66 & 0x10) == 0 )
            goto LABEL_275;
          goto LABEL_126;
        case 0x245:
        case 0x246:
        case 0x247:
        case 0x249:
          goto LABEL_411;
      }
LABEL_486:
      v336.x = SWORD4(v427);
      v336.y = SWORD5(v427);
      v340 = 1;
      if ( (BYTE4(v431) & 0x20) == 0 && (DWORD1(v431) & 0x8000000) == 0
        || !ThreadDesktopWindow
        || (v47 = *(_DWORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 288LL) >> 8,
            (((unsigned __int16)v47 ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2)
                                                                               + 464LL)
                                                                   + 268LL) >> 8)) & 0x1FF) != 0) )
      {
        v162 = (int)ThreadDesktopWindow;
        if ( !ThreadDesktopWindow || (v163 = 1, !IsCompositionInputWindowForHitTest(ThreadDesktopWindow, v47)) )
          v163 = 0;
        v357 = v163;
        v164 = *(_QWORD *)(a1 + 472);
        v165 = *(HWND **)(v164 + 112);
        if ( v165 )
        {
          ThreadDesktopWindow = *(struct tagWND **)(v164 + 112);
          InputTraceLogging::Mouse::RedirectForCapture((const struct tagQMSG *)&v425, *v165, v162, v26);
        }
        else
        {
          Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
          if ( v163 )
          {
            v168 = ThreadDesktopWindow;
          }
          else
          {
            v168 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v167, v166) + 18704)
                                                             + 496LL)
                                                 + 8LL)
                                     + 24LL);
            Win32HM_LockIntoThread<1>(a1, (__int64)v168, (__int64 *)BugCheckParameter3);
          }
          if ( (unsigned int)IsThreadDesktopComposed((const struct tagTHREADINFO *)a1) )
          {
            v381[0] = v170;
            v381[1] = 0;
            v382 = v427;
            v383 = &v340;
            v384 = v169;
            v385 = 0;
            v386 = 0;
            v387 = 0;
            v388 = (char *)&v430 + 8;
            v389 = 0;
            v390 = 0;
            v391 = 0;
            v392 = 0;
            v393 = 0LL;
            v172 = xxxDCEWindowHitTestIndirect(
                     v168,
                     (struct tagPOINT)v430,
                     0,
                     (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v381);
            if ( v172 && v389 )
            {
              *((_QWORD *)&v427 + 1) = *((_QWORD *)&v382 + 1);
              DWORD1(v428) = SWORD4(v382);
              DWORD2(v428) = SWORD5(v382);
              v336 = *(struct tagPOINT *)((char *)&v428 + 4);
            }
          }
          else
          {
            v172 = xxxWindowHitTest((__int64)v168, *(_QWORD *)&v336, (__int64)&v340, v169);
          }
          LOBYTE(v171) = 1;
          v173 = (struct tagWND *)HMValidateHandleNoSecure(v172, v171);
          InputTraceLogging::Mouse::SecondaryHitTest((const struct tagQMSG *)&v425, &v336, v173);
          if ( !v163 )
            Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v174);
          LOBYTE(v174) = 1;
          ThreadDesktopWindow = (struct tagWND *)HMValidateHandleNoSecure(v172, v174);
          if ( !ThreadDesktopWindow )
          {
            v176 = *(_QWORD *)(*(_QWORD *)(a1 + 496) + 8LL);
            ThreadDesktopWindow = *(struct tagWND **)(v176 + 24);
            if ( !ThreadDesktopWindow )
              ThreadDesktopWindow = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(
                                                                                              v176,
                                                                                              v175)
                                                                                          + 18704)
                                                                              + 496LL)
                                                                  + 8LL)
                                                      + 24LL);
          }
          v177 = 0;
          if ( (unsigned int)IsMiPActive(a1, 0LL) )
          {
            v179 = *(_QWORD *)(*(_QWORD *)(a1 + 472) + 488LL);
            if ( v179 )
            {
              v180 = (struct tagWND *)ValidateHwnd(v179);
              if ( v180 )
              {
                v178 = *((_QWORD *)v180 + 2);
                v181 = *(_QWORD *)(a1 + 472);
                if ( *(_QWORD *)(v178 + 472) == v181 || *(_QWORD *)(v178 + 464) == *(_QWORD *)(a1 + 464) )
                {
                  ThreadDesktopWindow = v180;
                  v340 = 1;
                  *(_DWORD *)(v181 + 156) = 0;
                  v177 = 1;
                }
              }
            }
          }
          if ( !v177 )
            *(_DWORD *)(*(_QWORD *)(v366 + 472) + 156LL) = v340 != 1;
          Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v178);
        }
        if ( ThreadDesktopWindow == *(struct tagWND **)(*(_QWORD *)(a1 + 472) + 112LL) )
        {
          v182 = PtiMouseFromQ(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 472LL));
          if ( (((unsigned __int16)(v184 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v182 + 464) + 268LL) >> 8)) & 0x1FF) != 0
            || (unsigned int)IsOleDragDropCaptureWindow(v183) )
          {
            v336 = (struct tagPOINT)v430;
            PhysicalToLogicalInPlacePointWithParent(ThreadDesktopWindow, (int *)&v336, (int *)&v430 + 2);
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
              || (v185 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
            {
              v185 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (v186 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
            {
              v186 = 0;
            }
            if ( v185 || v186 )
            {
              v187 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
              LODWORD(v329) = v336.y;
              LODWORD(v327) = v336.x;
              LODWORD(v325) = DWORD1(v430);
              LODWORD(v324) = v430;
              WPP_RECORDER_AND_TRACE_SF_dddd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v185,
                v186,
                *(_QWORD *)(v187 + 69416),
                5u,
                0x14u,
                0x22u,
                (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
                v324,
                v325,
                v327,
                v329);
            }
            v337 = (void *)((LOWORD(v336.y) << 16) | LOWORD(v336.x));
            *(struct tagPOINT *)((char *)&v428 + 4) = v336;
            NextSysMsg = v352;
          }
        }
      }
      Win32HM_ExchangeThreadLock<1>((__int64)ThreadDesktopWindow, (__int64)v367);
      if ( (unsigned int)CheckCrossThreadInput(
                           (struct tagTHREADINFO **)ThreadDesktopWindow,
                           NextSysMsg,
                           &v339,
                           (int *)&v330[1],
                           v353) )
        goto LABEL_819;
      if ( v339 )
      {
        v190 = *((_QWORD *)ThreadDesktopWindow + 2);
        if ( *(_QWORD *)(v190 + 472) != *(_QWORD *)(a1 + 472) )
          goto LABEL_534;
        if ( !v342 )
        {
          v342 = *((_QWORD *)ThreadDesktopWindow + 2);
          Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v397, (struct _W32THREAD *)v190);
        }
      }
      else if ( (WORD2(v431) & 0x800) != 0
             && !UIPrivilegeIsolation::CheckAccess(
                   (UIPrivilegeIsolation *)&v432,
                   (const struct tagUIPI_INFO *)(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 464LL) + 872LL),
                   v189) )
      {
        EtwTraceUIPIMsgError(
          0LL,
          *(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 464LL),
          v330[0],
          v427,
          *((_QWORD *)&v427 + 1));
LABEL_534:
        v191 = W32GetUserSessionState(v190, v188);
        zzzSetCursor(*(struct tagCURSOR **)(v191 + 21936), v192);
        goto LABEL_275;
      }
      v193 = (unsigned __int64)v336;
      v194 = *(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 472LL);
      v195 = *(_DWORD *)(v194 + 156);
      if ( !v195 || (v196 = (struct tagWND *)(unsigned int)(v195 - 2), !(_DWORD)v196) )
      {
        v196 = ThreadDesktopWindow;
        v198 = *((_QWORD *)ThreadDesktopWindow + 5);
        if ( (*(_BYTE *)(v198 + 26) & 0x40) != 0 )
          v336.x = *(_DWORD *)(v198 + 112) - v336.x;
        else
          v336.x -= *(_DWORD *)(v198 + 104);
        v194 = *(unsigned int *)(*((_QWORD *)ThreadDesktopWindow + 5) + 108LL);
        goto LABEL_551;
      }
      if ( (_DWORD)v196 == 1 )
      {
        v197 = *((_QWORD *)ThreadDesktopWindow + 5);
        if ( (*(_BYTE *)(v197 + 26) & 0x40) != 0 )
          v336.x = *(_DWORD *)(v197 + 96) - v336.x;
        else
          v336.x -= *(_DWORD *)(v197 + 88);
        v194 = *(unsigned int *)(*((_QWORD *)ThreadDesktopWindow + 5) + 92LL);
LABEL_551:
        v336.y -= v194;
      }
      if ( !v339 && *(_QWORD *)(a1 + 472) == *(_QWORD *)(W32GetUserSessionState(v194, v196) + 19232) )
      {
        v202 = *(_QWORD *)(a1 + 496);
        v203 = *(_QWORD *)(v202 + 192) != (_QWORD)ThreadDesktopWindow;
        if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline(
                             v202,
                             v199,
                             v200,
                             v201)
          && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v204) )
        {
          NCHit = xxxFindNCHitEx(ThreadDesktopWindow, v340, v336);
        }
        else
        {
          NCHit = FindNCHitEx(ThreadDesktopWindow, v340, v336);
        }
        if ( v330[0] != 512 || v203 || *(_DWORD *)(*(_QWORD *)(a1 + 496) + 200LL) != NCHit )
          xxxTrackMouseMove(ThreadDesktopWindow, NCHit, v330[0], (__int64)&v432 + 12);
        if ( !v203 )
        {
          v206 = *(_QWORD *)(a1 + 496);
          if ( (*(_DWORD *)(v206 + 48) & 0x40) != 0 && (v330[0] != 512 || !PtInRect((_DWORD *)(v206 + 204), v193)) )
            ResetMouseHover((struct tagDESKTOP *)v206, (struct tagPOINT)v193);
        }
        NextSysMsg = v352;
      }
      v207 = CheckPwndFilter((__int64)ThreadDesktopWindow, *(__int64 *)v355);
      v12 = v332;
      LOBYTE(v37) = v334;
    }
    while ( !v207 );
    v209 = 0;
    LODWORD(v359) = 0;
    switch ( v330[0] )
    {
      case 0x201u:
        v71 = (unsigned __int8)IsMessageInputSourceTouch(&v425, v208, v334) == 0;
        v210 = *(_QWORD *)(a1 + 472);
        if ( v71 )
          *(_DWORD *)(v210 + 436) &= ~0x800000u;
        else
          *(_DWORD *)(v210 + 436) |= 0x800000u;
        v211 = IsMessageInputSourcePen(&v425);
        v212 = *(_QWORD *)(v366 + 472);
        if ( v211 )
          *(_DWORD *)(v212 + 436) |= 0x1000000u;
        else
          *(_DWORD *)(v212 + 436) &= ~0x1000000u;
LABEL_584:
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 17) + 8LL) + 8LL) & 8) != 0
          || *(_DWORD *)(*(_QWORD *)(a1 + 472) + 156LL) == 1
          || (unsigned int)IsMenuStarted(a1) )
        {
          v209 = 1;
          LODWORD(v359) = 1;
          v213 = *(_QWORD *)(a1 + 472);
          if ( (unsigned int)v428 <= *(_DWORD *)(v213 + 168) && !*(_DWORD *)(W32GetUserSessionState(v213, v208) + 16272) )
          {
            v214 = ThreadDesktopWindow ? *(_QWORD *)ThreadDesktopWindow : 0LL;
            v215 = *(_QWORD *)(a1 + 472);
            if ( v214 == *(_QWORD *)(v215 + 176)
              && v330[0] == *(_DWORD *)(v215 + 160)
              && (v330[0] != 523 || WORD1(v427) == *(_WORD *)(v215 + 164)) )
            {
              v216 = *(int *)(*(_QWORD *)(W32GetUserSessionState(v215, v208) + 19928) + 2040LL);
              v375 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 184LL) - (((int)v216 - HIDWORD(v216)) >> 1);
              v217 = *(int *)(*(_QWORD *)(W32GetUserSessionState(v375, HIDWORD(v216)) + 19928) + 2044LL);
              v376 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 188LL) - (((int)v217 - HIDWORD(v217)) >> 1);
              v218 = W32GetUserSessionState(v376, HIDWORD(v217));
              v219 = *(_QWORD *)(a1 + 472);
              v220 = *(int *)(*(_QWORD *)(v218 + 19928) + 2040LL) >> 31;
              v377 = *(_DWORD *)(v219 + 184) + *(_DWORD *)(*(_QWORD *)(v218 + 19928) + 2040LL) / 2;
              v378 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 188LL)
                   + *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v219, v220) + 19928) + 2044LL) / 2;
              if ( PtInRect(&v375, *(unsigned __int64 *)((char *)&v428 + 4)) )
              {
                v330[0] += 2;
                v209 = 2;
                LODWORD(v359) = 2;
              }
            }
          }
        }
LABEL_598:
        v221 = *(_QWORD *)(a1 + 472);
        v222 = *(_DWORD *)(v221 + 436);
        if ( (v222 & 8) != 0 )
          *(_DWORD *)(v221 + 436) = v222 | 4;
        if ( v330[0] - 514 <= 0xA )
        {
          v223 = 1097;
          if ( _bittest(&v223, v330[0] - 514) )
          {
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 472) + 168LL) && ((HIDWORD(v432) - 4) & 0xFFFFFFFB) == 0 )
            {
              if ( HIDWORD(v432) == 4 )
                TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(300LL, 180LL, 5LL, 1LL);
              else
                TouchTimeFromCPLValue = GetPenDoubleClickTime(HIDWORD(v432), v208);
              *(_DWORD *)(*(_QWORD *)(a1 + 472) + 168LL) = v435 + TouchTimeFromCPLValue;
            }
          }
        }
        break;
      case 0x202u:
        goto LABEL_598;
      case 0x204u:
        goto LABEL_584;
      case 0x205u:
        goto LABEL_598;
      case 0x207u:
        goto LABEL_584;
      case 0x208u:
        goto LABEL_598;
      case 0x20Bu:
        goto LABEL_584;
      case 0x20Cu:
        goto LABEL_598;
    }
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 472LL) + 156LL) == 1 )
    {
      v330[0] -= 352;
      v338 = (unsigned int)v340;
    }
    v225 = MiPCheckMsgFilter(NextSysMsg, v330[0], (unsigned int)v341, a5);
    v37 = v334;
    if ( v225 )
    {
      if ( v339 )
        goto LABEL_819;
      if ( v330[0] - 512 > 0xE
        || (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x8000) == 0 )
      {
        break;
      }
    }
LABEL_32:
    v12 = v332;
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x100000) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 528), 0xFFEFFFFF);
    xxxWindowEvent(0x800Bu, 0LL, -9, 0, 1);
  }
  v436[0] = *(_QWORD *)((char *)&v428 + 4);
  if ( ThreadDesktopWindow )
    v436[1] = *(_QWORD *)ThreadDesktopWindow;
  else
    v436[1] = 0LL;
  LODWORD(v437) = v340;
  *((_QWORD *)&v437 + 1) = *((_QWORD *)&v429 + 1);
  LODWORD(v438) = v427;
  if ( v330[1] )
  {
    if ( v330[0] != 512 && v330[0] != 160 )
    {
      v348 = 1;
      if ( (unsigned int)xxxCallCtfHook(7LL, 0LL, v330[0], (__int128 *)v436) )
        goto LABEL_275;
    }
  }
  v227 = **(_QWORD **)(a1 + 504);
  if ( ((*(_DWORD *)(a1 + 720) | *(_DWORD *)(v227 + 16)) & 0x100) != 0 )
  {
    v348 = 1;
    if ( xxxCallMouseHook(v330[0], (__int64)v436, v330[1]) )
      goto LABEL_275;
  }
  if ( (unsigned int)PsGetWin32KFilterSet(v227, v226, v37) == 5 )
  {
    v230 = *((_QWORD *)PtiCurrent(v229, v228) + 65);
    v344 = 0;
    v344 = *(_QWORD *)(v230 + 248) != 0LL;
    if ( v344 )
    {
      if ( xxxClientCallLocalMouseHooks(v330[0], (__int64)v436, v330[1]) )
        goto LABEL_275;
    }
  }
  if ( (*(_DWORD *)(a1 + 1360) & 0x2000LL) == 0 && ((v340 + 2) & 0xFFFFFFFD) == 0 )
  {
    v231 = 0LL;
    if ( v357 )
    {
      if ( (unsigned int)IsIndependentInputWindow(ThreadDesktopWindow) )
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
      TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
      v231 = (struct tagTHREADINFO **)TopLevelWindow;
      if ( TopLevelWindow )
      {
        v231 = (struct tagTHREADINFO **)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(TopLevelWindow, v234);
        Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(v410, a1, (__int64)v231);
        v235 = 0LL;
        if ( v231 )
          v235 = *v231;
        xxxSendTransformableMessageTimeout(
          v231,
          32LL,
          (unsigned __int64)v235,
          (struct tagDRAWITEMSTRUCT *)((unsigned __int16)v340 | (WORD4(v426) << 16)),
          0,
          0,
          0LL,
          1,
          1);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v410, v236);
      }
    }
    if ( !v231 )
    {
      if ( ThreadDesktopWindow )
        v237 = *(_QWORD *)ThreadDesktopWindow;
      else
        v237 = 0LL;
      xxxSendTransformableMessageTimeout(
        (struct tagTHREADINFO **)ThreadDesktopWindow,
        32LL,
        v237,
        (struct tagDRAWITEMSTRUCT *)((unsigned __int16)v340 | (WORD4(v426) << 16)),
        0,
        0,
        0LL,
        1,
        1);
    }
    if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 472) + 88LL) == NextSysMsg
      && NextSysMsg
      && (unsigned int)IsMiPActive(a1, (__int64)NextSysMsg)
      && (*((_DWORD *)NextSysMsg + 25) & 0x400) != 0
      && (unsigned int)IsGenuineMouseInput((char *)NextSysMsg + 124)
      && (unsigned int)IsMiPMouseMessage(*((unsigned int *)NextSysMsg + 6)) )
    {
      memset_0(v462, 0, 0xA8uLL);
      GeneratePointerMessageFromMouse((struct tagQMSG *)v462, v330[0], NextSysMsg, ThreadDesktopWindow, v330[1]);
      SetMiPPromotion(*((struct tagTHREADINFO **)ThreadDesktopWindow + 2), v463);
    }
    goto LABEL_275;
  }
  if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 472) + 88LL) != NextSysMsg )
    goto LABEL_819;
  memset_0(&v419, 0, 0x60uLL);
  v239 = v419;
  v403 = v419;
  v240 = v420;
  v404 = v420;
  v241 = v421;
  v405 = v421;
  v242 = v422;
  v406 = v422;
  v359 = v423;
  v407 = v423;
  v399 = v424;
  v408 = v424;
  v243 = 0;
  v439 = v425;
  v440 = v426;
  v441 = v427;
  v442 = v428;
  v443 = v429;
  v444 = v430;
  v445 = v431;
  v244 = v447;
  v446 = v432;
  v447[0] = v433;
  v447[1] = v434;
  v448 = v435;
  if ( NextSysMsg && (unsigned int)IsMiPActive(a1, (__int64)NextSysMsg) )
  {
    DWORD2(v440) = v330[0];
    *(_QWORD *)&v441 = v338;
    if ( (*((_DWORD *)NextSysMsg + 25) & 0x400) != 0 )
    {
      memset_0(&v449, 0, 0xA8uLL);
      if ( ShouldGenerateMipMessage((struct tagTHREADINFO *)a1, NextSysMsg, ThreadDesktopWindow) )
      {
        v245 = *(_QWORD *)(a1 + 1512);
        if ( v245 && (*(_DWORD *)v245 & 1) != 0 )
        {
          v239 = *(_OWORD *)(v245 + 24);
          v403 = v239;
          v240 = *(_OWORD *)(v245 + 40);
          v404 = v240;
          v241 = *(_OWORD *)(v245 + 56);
          v405 = v241;
          v242 = *(_OWORD *)(v245 + 72);
          v406 = v242;
          v359 = *(_OWORD *)(v245 + 88);
          v407 = v359;
          v399 = *(_OWORD *)(v245 + 104);
          v408 = v399;
          v243 = 1;
        }
        if ( (unsigned int)GeneratePointerMessageFromMouse(
                             (struct tagQMSG *)&v449,
                             v330[0],
                             NextSysMsg,
                             ThreadDesktopWindow,
                             v330[1]) )
        {
          v425 = v449;
          v426 = v450;
          v427 = v451;
          v428 = v452;
          v429 = v453;
          v430 = v454;
          v431 = v455;
          v244 = &v433;
          v432 = v456;
          v433 = v457;
          v434 = v458;
          v435 = v459;
          v347 = 1;
          v246 = DWORD2(v450);
          if ( DWORD2(v450) == 582 && IsMiPEnabledForWindow((__int64)ThreadDesktopWindow) )
          {
            if ( v244 )
              v244 = *(__int128 **)ThreadDesktopWindow;
            else
              v244 = 0LL;
            *(_QWORD *)(*(_QWORD *)(a1 + 472) + 488LL) = v244;
          }
          else if ( ((v246 - 579) & 0xFFFFFFFB) == 0 )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 472) + 488LL) = 0LL;
          }
        }
      }
      if ( v330[1] )
      {
        *((_DWORD *)NextSysMsg + 25) &= ~0x400u;
        goto LABEL_677;
      }
LABEL_716:
      v34 = v347;
      goto LABEL_717;
    }
    if ( !v330[1] )
      goto LABEL_716;
    if ( (unsigned int)IsMiPMouseMessage(*((unsigned int *)NextSysMsg + 6)) )
    {
      if ( (unsigned int)IsGenuineMouseInput((char *)NextSysMsg + 124) )
      {
        v247 = *(unsigned int **)(a1 + 1512);
        if ( v247 )
        {
          v244 = (__int128 *)*v247;
          if ( ((unsigned __int8)v244 & 2) == 0 && ((unsigned __int8)v244 & 4) == 0 )
            goto LABEL_674;
        }
      }
      v248 = *(_DWORD **)(a1 + 1512);
      if ( v248 )
        *v248 &= ~2u;
    }
  }
LABEL_677:
  if ( !v330[1] )
    goto LABEL_716;
  v249 = W32GetUserSessionState(v244, v238);
  if ( (DWORD2(v440) == 512 || DWORD2(v440) == 160)
    && (ThreadDesktopWindow ? (v250 = *(_QWORD *)ThreadDesktopWindow) : (v250 = 0LL),
        v250 != *(_QWORD *)(v249 + 16344) && (unsigned int)IsGenuineMouseInput((char *)NextSysMsg + 124)) )
  {
    LOBYTE(v251) = 1;
    v252 = HMValidateHandleNoSecure(*(_QWORD *)(v249 + 16344), v251);
    v253 = (LARGE_INTEGER *)v252;
    if ( v252
      && (unsigned int)IsMiPActive(*(_QWORD *)(v252 + 16), 0LL)
      && (GetMiPWindowFlags((struct tagWND *)v253, v254) & 1) == 0 )
    {
      QuadPart = (struct tagQ **)v253[2].QuadPart;
      if ( QuadPart == (struct tagQ **)a1 )
      {
        v256 = *(_QWORD *)(a1 + 1512);
        v257 = *(_OWORD *)(v256 + 24);
        v258 = *(_OWORD *)(v256 + 40);
        v259 = *(_OWORD *)(v256 + 56);
        v260 = *(_OWORD *)(v256 + 72);
        v261 = *(_OWORD *)(v256 + 88);
        v262 = *(_OWORD *)(v256 + 104);
        if ( v243 )
        {
          *(_OWORD *)(v256 + 24) = v239;
          *(_OWORD *)(v256 + 40) = v240;
          *(_OWORD *)(v256 + 56) = v241;
          *(_OWORD *)(v256 + 72) = v242;
          *(_OWORD *)(v256 + 88) = v359;
          *(_OWORD *)(v256 + 104) = v399;
          v256 = *(_QWORD *)(a1 + 1512);
        }
        v414 = *v253;
        v415 = 586LL;
        v263 = ((*(_DWORD *)(v256 + 36) & 0xFFFFE1F7) << 16) | 1LL;
        v416 = v263;
        v417 = 0LL;
        v418 = 0LL;
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v412, (__int64)v253);
        FindTimer((__int64)v253, 65523LL, 2u, 1, 0LL);
        if ( IsMiPEnabledForWindow((__int64)v253) )
          xxxSendTransformableMessageTimeout(v265, 586LL, v263, 0LL, 0, 0, 0LL, 1, 0);
        if ( v243 )
        {
          v266 = *(_QWORD *)(a1 + 1512);
          *(_OWORD *)(v266 + 24) = v257;
          *(_OWORD *)(v266 + 40) = v258;
          *(_OWORD *)(v266 + 56) = v259;
          *(_OWORD *)(v266 + 72) = v260;
          *(_OWORD *)(v266 + 88) = v261;
          *(_OWORD *)(v266 + 104) = v262;
        }
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v412, v264);
        NextSysMsg = v352;
      }
      else
      {
        PostEventMessageEx((struct tagTHREADINFO *)QuadPart, QuadPart[59], 0x15u, v253, 0, 0LL, 0LL, 0LL);
      }
    }
    v267 = v347;
    if ( v347 )
    {
      if ( ThreadDesktopWindow )
        v268 = *(_QWORD *)ThreadDesktopWindow;
      else
        v268 = 0LL;
      *(_QWORD *)(v249 + 16344) = v268;
    }
    else
    {
      *(_QWORD *)(v249 + 16344) = 0LL;
    }
  }
  else
  {
    v267 = v347;
  }
  if ( !(_DWORD)v267 )
  {
    v269 = v209 - 1;
    if ( v269 )
    {
      if ( v269 == 1 )
        *(_DWORD *)(*(_QWORD *)(a1 + 472) + 168LL) = 0;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 472) + 160LL) = DWORD2(v426);
      v270 = (unsigned __int64)v427 >> 16;
      *(_WORD *)(*(_QWORD *)(a1 + 472) + 164LL) = WORD1(v427);
      v271 = W32GetUserSessionState(v270, v267);
      *(_DWORD *)(*(_QWORD *)(a1 + 472) + 168LL) = *(_DWORD *)(v271 + 14720) + v428;
      if ( ThreadDesktopWindow )
        v272 = *(_QWORD *)ThreadDesktopWindow;
      else
        v272 = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 472) + 176LL) = v272;
      *(_QWORD *)(*(_QWORD *)(a1 + 472) + 184LL) = *(_QWORD *)((char *)&v428 + 4);
    }
  }
  v273 = (const struct tagQMSG *)&v439;
  v34 = v347;
  if ( !v347 )
    v273 = (const struct tagQMSG *)&v425;
  if ( (unsigned int)xxxMouseActivate((struct tagTHREADINFO *)a1, ThreadDesktopWindow, v273, v340) == 1 )
  {
    v21 = 1;
    goto LABEL_275;
  }
LABEL_717:
  v21 = 1;
  if ( v330[1] )
  {
    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v425, 1);
    if ( v330[1] )
    {
      if ( v348 && ((*(_BYTE *)(a1 + 720) | *(_BYTE *)(**(_QWORD **)(a1 + 504) + 16LL)) & 0x40) != 0 )
        xxxCallHook(6LL, v330[0], (__int64)v436, 5);
    }
  }
  v348 = 0;
  v337 = (void *)((LOWORD(v336.y) << 16) | LOWORD(v336.x));
  if ( v330[0] >= 0x200 )
    v338 = (unsigned int)GetMouseKeyFlags(*(_QWORD *)(a1 + 472));
  if ( (v330[0] - 171 <= 2 || v330[0] - 523 <= 2) && !v34 )
    v338 |= v427;
  v274 = *(_QWORD *)(a1 + 648);
  if ( v340 == 5
    && v330[1]
    && v274
    && (*(_DWORD *)(v274 + 8) & 0x100) != 0
    && *(_QWORD *)v274
    && (**(_DWORD **)v274 & 1) != 0 )
  {
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)v374,
      *(struct tagTHREADINFO ***)(a1 + 648));
    if ( (unsigned int)xxxCallHandleMenuMessages(v274, (__int64 *)ThreadDesktopWindow, v330[0], v338, (__int64)v337) )
    {
      MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v374);
      goto LABEL_84;
    }
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v374);
  }
  if ( !v34 )
    goto LABEL_345;
  v133 = v341;
LABEL_739:
  v64 = DWORD2(v426);
LABEL_740:
  if ( ((HIDWORD(v432) - 2) & 0xFFFFFFCF) == 0 && HIDWORD(v432) != 50 )
  {
    v330[0] = v64;
    v337 = (void *)*((_QWORD *)&v427 + 1);
    v338 = v427;
LABEL_743:
    if ( v330[1] )
    {
      if ( (unsigned int)IsMiPActive(a1, 0LL) && v34 )
      {
        if ( ThreadDesktopWindow )
          v276 = *(_QWORD *)ThreadDesktopWindow;
        else
          v276 = 0LL;
        *(_QWORD *)(*(_QWORD *)(a1 + 1512) + 48LL) = v276;
        v283 = *(_QWORD *)(a1 + 1512);
        v284 = *(unsigned int *)(v283 + 36);
        if ( (v284 & 0x400000) != 0 && (*((_DWORD *)ThreadDesktopWindow + 95) & 0x40000000) == 0 )
        {
          LODWORD(v284) = v284 & 0xFFBFFFFF;
          *(_DWORD *)(v283 + 36) = v284;
        }
        MiPWindowFlags = GetMiPWindowFlags(ThreadDesktopWindow, v284);
        SetMiPWindowFlags(ThreadDesktopWindow, MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
        if ( ((DWORD2(v426) - 578) & 0xFFFFFFFB) != 0 )
        {
          if ( ((DWORD2(v426) - 579) & 0xFFFFFFFB) == 0 )
            **(_DWORD **)(a1 + 1512) &= ~8u;
        }
        else
        {
          v286 = 0;
          if ( DWORD2(v426) == 578 )
            v286 = 8;
          **(_DWORD **)(a1 + 1512) = v286 | **(_DWORD **)(a1 + 1512) & 0xFFFFFFF7;
        }
      }
      else
      {
        xxxSkipSysMsgEx(v275, (struct tagQMSG *)&v425, 1);
      }
    }
    if ( IsPointerMessageTouchpad((struct tagTHREADINFO *)a1, *((unsigned __int64 *)&v427 + 1), v34) )
    {
      if ( !v330[1] && !ShouldReceiveTouchpadMessages((const struct tagTHREADINFO *)a1, v426, v287, v288) )
        xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v425, 1);
      if ( v330[0] == 595 )
        v337 = (void *)-1LL;
    }
    goto LABEL_345;
  }
  EtwTraceBeginPointerMessageRetrieve(NextSysMsg, (unsigned __int16)v427, v64);
  v464[0] = *(_OWORD *)NextSysMsg;
  v464[1] = *((_OWORD *)NextSysMsg + 1);
  v464[2] = *((_OWORD *)NextSysMsg + 2);
  v464[3] = *((_OWORD *)NextSysMsg + 3);
  v464[4] = *((_OWORD *)NextSysMsg + 4);
  v464[5] = *((_OWORD *)NextSysMsg + 5);
  v464[6] = *((_OWORD *)NextSysMsg + 6);
  v464[7] = *((_OWORD *)NextSysMsg + 7);
  v464[8] = *((_OWORD *)NextSysMsg + 8);
  v464[9] = *((_OWORD *)NextSysMsg + 9);
  v465 = *((_QWORD *)NextSysMsg + 20);
  v277 = xxxRetrievePointerInputMessage(
           a1,
           *(__int64 *)v355,
           v133,
           a5,
           1,
           0,
           (int *)&v330[1],
           NextSysMsg,
           (__int64 *)&ThreadDesktopWindow,
           v330,
           &v338,
           (unsigned __int64 *)&v337,
           &v339,
           v353);
  InputTraceLogging::Pointer::RetrieveMessage((__int64)v464, 0LL, v277, v278);
  EtwTraceEndPointerMessageRetrieve(v464, (unsigned __int16)v427, DWORD2(v426));
  v279 = ThreadDesktopWindow;
  if ( ThreadDesktopWindow )
    Win32HM_ExchangeThreadLock<1>((__int64)ThreadDesktopWindow, (__int64)v367);
  v280 = v277 - 1;
  if ( !v280 )
    goto LABEL_743;
  v281 = v280 - 1;
  if ( v281 )
  {
    v282 = v281 - 1;
    if ( v282 )
    {
      *v353 = 0LL;
      if ( v282 == 1 )
        goto LABEL_754;
    }
    else
    {
      xxxDefPointerProc((__int64)v279, DWORD2(v426), v427, *((unsigned __int64 *)&v427 + 1));
      *v353 = 0LL;
    }
    goto LABEL_275;
  }
  if ( v339 )
  {
    v354 = (struct _W32THREAD *)*((_QWORD *)ThreadDesktopWindow + 2);
    Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v400, v354);
  }
LABEL_819:
  v132 = v342;
LABEL_820:
  v305 = &WPP_RECORDER_INITIALIZED;
  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 80LL) = 0LL;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
    || (v306 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v306 = 0;
  }
  v307 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v306 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v308 = *(_QWORD *)(a1 + 472);
    v309 = *(_QWORD *)(v308 + 72);
    v310 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v311) = v307;
    LOBYTE(v312) = v306;
    WPP_RECORDER_AND_TRACE_SF_qqq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v312,
      v311,
      *(_QWORD *)(v310 + 69416),
      4,
      18,
      36,
      (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
      v308,
      a1,
      v309);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 72LL) = 0LL;
  **(_DWORD **)(a1 + 488) &= ~1u;
  v313 = v358;
  v314 = v360;
  v315 = v354;
  if ( v365 )
  {
    SetWakeBit((__int64)v365, 16385LL);
    ClearWakeBit((struct tagTHREADINFO *)a1, 16385, 0);
  }
  else if ( !v132 && !v358 && !v360 && !v354 )
  {
    v316 = 31751;
    v317 = (_DWORD)v365 + 1;
    goto LABEL_843;
  }
  if ( v132 )
  {
    SetWakeBit(v132, 16390LL);
    ClearWakeBit((struct tagTHREADINFO *)a1, 16390, 0);
  }
  if ( v314 )
  {
    SetWakeBit((__int64)v314, 17408LL);
    ClearWakeBit((struct tagTHREADINFO *)a1, 17408, 0);
  }
  if ( v315 )
  {
    SetWakeBit((__int64)v315, 20480LL);
    ClearWakeBit((struct tagTHREADINFO *)a1, 20480, 0);
  }
  if ( v313 )
  {
    SetWakeBit(v313, 8256LL);
    v317 = 0;
    v316 = 0x2000;
LABEL_843:
    ClearWakeBit((struct tagTHREADINFO *)a1, v316, v317);
  }
  CManageInScanSysQueueBit::~CManageInScanSysQueueBit((CManageInScanSysQueueBit *)v345, (__int64)v305);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v367, v318);
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v400, v319);
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v401, v320);
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v402, v321);
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v397, v322);
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v396, v323);
  return 0LL;
}
