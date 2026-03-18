/*
 * XREFs of xxxRealInternalGetMessage @ 0x140107DFC
 * Callers:
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     NtUserRealInternalGetMessage @ 0x140107880 (NtUserRealInternalGetMessage.c)
 *     xxxInternalGetMessage @ 0x140107C10 (xxxInternalGetMessage.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U1@U2@U?$_tlgWrapperByVal@$01@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4334AEBU?$_tlgWrapperByVal@$01@@53@Z @ 0x140003AC0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U1@U2@U-$_tlgWrapperByVal@$01@@.c)
 *     xxxDoPaint @ 0x140033DBC (xxxDoPaint.c)
 *     ?xxxSendPostedMessage@@YAXAEBUtagMSG@@PEAU1@@Z @ 0x14004072C (-xxxSendPostedMessage@@YAXAEBUtagMSG@@PEAU1@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14004A50C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004B6E8 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSleepThread2 @ 0x140063CE4 (xxxSleepThread2.c)
 *     zzzWakeInputIdle @ 0x1400647B0 (zzzWakeInputIdle.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140064910 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     xxxDoSysExpungeIfNeeded @ 0x140065040 (xxxDoSysExpungeIfNeeded.c)
 *     xxxDrainQueueCompletions @ 0x140066030 (xxxDrainQueueCompletions.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1400777A0 (-SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     xxxCallCtfHook @ 0x14007FC80 (xxxCallCtfHook.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400845B0 (-FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14008B0C0 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x14008DD78 (-CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14008E06C (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1400904C0 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140092D78 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     IsMiPEnabledForWindow @ 0x14009B490 (IsMiPEnabledForWindow.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400A63D0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z @ 0x1400A7394 (-MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z.c)
 *     IsMiPPointerMessage @ 0x1400A7680 (IsMiPPointerMessage.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?TraceLoggingMiPSuppressedForWindow@@YAXQEBUtagWND@@IH@Z @ 0x140119128 (-TraceLoggingMiPSuppressedForWindow@@YAXQEBUtagWND@@IH@Z.c)
 *     ?WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z @ 0x14012E354 (-WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z.c)
 *     CalcWakeMask @ 0x14012E6A0 (CalcWakeMask.c)
 *     ?HasCoreMessagingWindow@tagTHREADINFO@@QEBA_NXZ @ 0x1401476C0 (-HasCoreMessagingWindow@tagTHREADINFO@@QEBA_NXZ.c)
 *     ?WaitMaskIncludesUserInput@@YA_NI@Z @ 0x1401476F0 (-WaitMaskIncludesUserInput@@YA_NI@Z.c)
 *     IsPointerInputMessageWithState @ 0x1401507E0 (IsPointerInputMessageWithState.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x140153110 (-HandleProcessSpinning@@YAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1401532E0 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     xxxProcessDelegateCapturedPointers @ 0x1401549A8 (xxxProcessDelegateCapturedPointers.c)
 *     IsTouchpadPointerInputMessage @ 0x1401554D4 (IsTouchpadPointerInputMessage.c)
 *     SlowAppThreadInShellFrame @ 0x140155EA4 (SlowAppThreadInShellFrame.c)
 *     IsShellFrameHangResilient @ 0x140156564 (IsShellFrameHangResilient.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1401565AC (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167D6C (-xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSleepThreadWithPwnd @ 0x140178B44 (xxxSleepThreadWithPwnd.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ?FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017AE18 (-FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ?UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017AEB4 (-UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140183234 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x14018D2A8 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14018DF04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     xxxClientCallDelegateThread @ 0x14019BBD0 (xxxClientCallDelegateThread.c)
 *     ?UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x1401A7258 (-UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxClientCallDefWindowProc @ 0x1401BF874 (xxxClientCallDefWindowProc.c)
 *     xxxClientCallDefaultInputHandler @ 0x1401C2748 (xxxClientCallDefaultInputHandler.c)
 *     ?CallShellHandwritingDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1401DB85C (-CallShellHandwritingDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     TryDetachShellFrame @ 0x140237D24 (TryDetachShellFrame.c)
 *     zzzReattachThreads @ 0x140237EEC (zzzReattachThreads.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x14023D790 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     zzzCalcStartCursorHide @ 0x14023E640 (zzzCalcStartCursorHide.c)
 *     DoTimer @ 0x14023E9B0 (DoTimer.c)
 *     ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x14023FF60 (-ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z.c)
 *     Feature_MTestAbSh1__private_ReportDeviceUsage @ 0x14026865C (Feature_MTestAbSh1__private_ReportDeviceUsage.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x14026AA20 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     ?xxxCompletePendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@@Z @ 0x14026B200 (-xxxCompletePendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?HijackHidData@RawInput@InputTraceLogging@@SAXPEAX@Z @ 0x14026CCA4 (-HijackHidData@RawInput@InputTraceLogging@@SAXPEAX@Z.c)
 *     ?FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x140271D08 (-FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14027251C (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14027A054 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?StrugglingInputQueueStop@Mouse@InputTraceLogging@@SAXPEBUtagQ@@@Z @ 0x14027A864 (-StrugglingInputQueueStop@Mouse@InputTraceLogging@@SAXPEBUtagQ@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x14027F22C (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_YieldInputQueue2__private_GetVariant @ 0x14027F2D4 (Feature_YieldInputQueue2__private_GetVariant.c)
 */

__int64 __fastcall xxxRealInternalGetMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rsi
  unsigned int v13; // r13d
  struct tagWND *v14; // rax
  struct tagTHREADINFO **v15; // r15
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v19; // rdx
  unsigned int v20; // eax
  _QWORD *v21; // r11
  unsigned int v22; // r13d
  __int64 v23; // rcx
  struct tagWND *v24; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v26; // ecx
  char v27; // bl
  unsigned __int64 v28; // rdx
  __int64 v29; // rdi
  struct tagTHREADINFO *v30; // rcx
  char v31; // r15
  bool v32; // r12
  __int64 v33; // rbx
  __int64 UserSessionState; // rax
  int v35; // r8d
  int v36; // edx
  __int64 v37; // rcx
  __int16 v38; // bx
  unsigned int v39; // r15d
  int v40; // edi
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  int v45; // eax
  const struct tagQ *v46; // rcx
  LARGE_INTEGER PerformanceCounter; // r15
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rbx
  int v52; // ecx
  unsigned __int64 v53; // rdi
  int v54; // r12d
  __int64 v55; // rax
  bool v56; // r15
  int v57; // ebx
  __int64 v58; // rcx
  struct tagWND *v59; // rdi
  int v60; // eax
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  int PostMessage; // eax
  int v65; // eax
  int v66; // r8d
  int v67; // r9d
  unsigned int v68; // ebx
  int v69; // ebx
  int v70; // eax
  unsigned __int64 v71; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rcx
  unsigned int v77; // eax
  bool v78; // zf
  bool v79; // r12
  __int64 v80; // rdi
  __int64 v81; // rbx
  __int64 v82; // rax
  int v83; // r8d
  int v84; // edx
  __int64 v85; // r8
  __int64 v86; // rcx
  struct tagTHREADINFO *v87; // rax
  int v88; // ebx
  __int64 v89; // rax
  __int64 v90; // rdi
  __int64 v91; // r15
  int v92; // eax
  __int64 v93; // rax
  int v94; // eax
  int v95; // r13d
  int v96; // eax
  int v97; // ecx
  int v98; // r15d
  int v99; // eax
  unsigned int v100; // eax
  int v101; // eax
  __int64 v102; // rax
  int v103; // r12d
  void *v104; // rdi
  __int64 v105; // rbx
  __int64 v106; // r15
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  struct tagHIDDATA *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rax
  struct tagHIDDATA **v117; // r8
  unsigned __int16 v118; // bx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rax
  int v122; // eax
  unsigned int v123; // ebx
  __int64 v124; // rdx
  __int64 v125; // rdx
  __int64 v126; // rax
  struct CEResourceLock *TouchProcessorLock; // rax
  void *v128; // r8
  __int64 **v129; // rcx
  unsigned int v130; // ebx
  __int64 v131; // rdx
  __int64 v132; // rax
  struct CEResourceLock *v133; // rax
  void *v134; // r8
  bool v135; // r12
  char v136; // r15
  __int16 v137; // bx
  int v138; // edi
  __int64 v139; // rax
  int v140; // r8d
  int v141; // edx
  __int64 v142; // rdx
  __int64 v143; // rdx
  __int64 v144; // rcx
  const struct tagWND *v145; // rcx
  __int64 v146; // rax
  _DWORD *v147; // rdx
  struct tagWND *v148; // rax
  struct tagBWND *v149; // r9
  __int64 *v150; // [rsp+20h] [rbp-268h]
  int *v151; // [rsp+28h] [rbp-260h]
  int *v152; // [rsp+30h] [rbp-258h]
  _QWORD *v153; // [rsp+40h] [rbp-248h]
  int *v154; // [rsp+48h] [rbp-240h]
  __int16 *v155; // [rsp+50h] [rbp-238h]
  __int16 *v156; // [rsp+58h] [rbp-230h]
  unsigned __int64 *v157; // [rsp+60h] [rbp-228h]
  int v158; // [rsp+70h] [rbp-218h]
  int v159; // [rsp+74h] [rbp-214h]
  __int16 v160; // [rsp+78h] [rbp-210h]
  int v161; // [rsp+7Ch] [rbp-20Ch]
  unsigned int v162; // [rsp+80h] [rbp-208h]
  struct tagQMSG *v163; // [rsp+88h] [rbp-200h] BYREF
  int v164; // [rsp+90h] [rbp-1F8h]
  unsigned int v165; // [rsp+94h] [rbp-1F4h]
  int v166; // [rsp+98h] [rbp-1F0h] BYREF
  int v167; // [rsp+9Ch] [rbp-1ECh]
  unsigned int v168; // [rsp+A0h] [rbp-1E8h]
  unsigned int v169; // [rsp+A4h] [rbp-1E4h]
  int v170; // [rsp+A8h] [rbp-1E0h]
  __int16 v171; // [rsp+ACh] [rbp-1DCh] BYREF
  int v172; // [rsp+B0h] [rbp-1D8h]
  struct tagWND *v173; // [rsp+B8h] [rbp-1D0h]
  int v174; // [rsp+C8h] [rbp-1C0h] BYREF
  int v175; // [rsp+CCh] [rbp-1BCh] BYREF
  int v176; // [rsp+D0h] [rbp-1B8h] BYREF
  struct tagHIDDATA **v177; // [rsp+E0h] [rbp-1A8h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+E8h] [rbp-1A0h] BYREF
  __int64 *v179; // [rsp+F8h] [rbp-190h] BYREF
  __int64 *v180; // [rsp+100h] [rbp-188h] BYREF
  signed __int32 v181; // [rsp+108h] [rbp-180h]
  unsigned __int64 v182; // [rsp+110h] [rbp-178h] BYREF
  _QWORD v183[2]; // [rsp+118h] [rbp-170h] BYREF
  __int64 v184; // [rsp+128h] [rbp-160h] BYREF
  __int64 *v185; // [rsp+138h] [rbp-150h] BYREF
  __int64 *v186; // [rsp+140h] [rbp-148h] BYREF
  __int64 *v187[3]; // [rsp+148h] [rbp-140h] BYREF
  _OWORD v188[9]; // [rsp+160h] [rbp-128h] BYREF
  PERESOURCE *v189[6]; // [rsp+1F0h] [rbp-98h] BYREF
  PERESOURCE *v190[13]; // [rsp+220h] [rbp-68h] BYREF
  __int16 v191; // [rsp+298h] [rbp+10h] BYREF
  unsigned int v192; // [rsp+2A0h] [rbp+18h]

  v192 = a3;
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  v166 = 0;
  v167 = 0;
  v164 = 0;
  v165 = 0;
  v9 = 0;
  v158 = 0;
  v12 = PtiCurrent(v11, v10);
  v13 = a6;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
    a2 = 1LL;
  if ( a2 < 2 )
  {
    v15 = (struct tagTHREADINFO **)a2;
    v173 = (struct tagWND *)a2;
    v170 = 0;
  }
  else
  {
    v14 = (struct tagWND *)ValidateHwnd(a2);
    v15 = (struct tagTHREADINFO **)v14;
    v173 = v14;
    if ( !v14 )
    {
      v16 = 0;
      *(_QWORD *)a1 = 0LL;
      *(_DWORD *)(a1 + 8) = 0;
      EtwTraceBeginAppMessageProcessing(v13, 16LL, a1);
      if ( v13 )
        v16 = -1;
      goto LABEL_7;
    }
    Win32HM_LockIntoThread<0>((__int64)v12, (__int64)v14, BugCheckParameter3);
    v170 = 1;
  }
  ++*(_QWORD *)(*((_QWORD *)v12 + 65) + 8LL);
  v19 = 0xFFFFFFFFLL;
  if ( a4 )
    v19 = a4;
  v168 = v19;
  _InterlockedExchange(
    (volatile __int32 *)(*((_QWORD *)v12 + 61) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v20 = CalcWakeMask(v192, v19, WORD1(a5));
  v22 = v20;
  v169 = v20;
  if ( (v20 & 0x1C07) != 0 )
    *((_DWORD *)v12 + 400) = (*v21 * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( WaitMaskIncludesUserInput(v20) )
  {
    if ( v170 )
    {
      if ( v15[2] != v12 )
        goto LABEL_21;
      v24 = (struct tagWND *)v15;
    }
    else
    {
      if ( a2 )
        goto LABEL_21;
      v24 = 0LL;
    }
    xxxUpdateInputHangInfo(v24, 1LL);
  }
LABEL_21:
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v26 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v26 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v26 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0LL);
  }
  xxxDoSysExpungeIfNeeded((__int64)v12);
  v27 = a5;
  v28 = 1LL;
  v159 = a5 & 1;
  if ( (a5 & 1) != 0
    && (v22 & 0x1CBF) != 0
    && (*((_DWORD *)v12 + 340) & 0x80000) != 0
    && (*(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL) & v22) != 0 )
  {
    TryAttachShellFrame(v12, 1u);
    v28 = 1LL;
  }
  v29 = *((_QWORD *)v12 + 59);
  if ( *((_QWORD *)v12 + 69) )
  {
LABEL_33:
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
      || (v31 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v31 = 0;
    }
    v28 = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
    v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v31 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v33 = *(_QWORD *)(v29 + 72);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v35) = v32;
      LOBYTE(v36) = v31;
      WPP_RECORDER_AND_TRACE_SF_qqq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v36,
        v35,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        18,
        20,
        (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
        v29,
        (char)v12,
        v33);
      v27 = a5;
    }
    *(_QWORD *)(v29 + 72) = 0LL;
    v30 = 0LL;
    v9 = 0;
LABEL_41:
    if ( v30 == v12 )
      goto LABEL_43;
    goto LABEL_42;
  }
  v30 = *(struct tagTHREADINFO **)(v29 + 72);
  if ( v30 == v12 )
  {
    if ( *(_QWORD *)(v29 + 80) != *((_QWORD *)v12 + 77) )
      goto LABEL_41;
    goto LABEL_33;
  }
LABEL_42:
  **((_DWORD **)v12 + 61) &= ~1u;
LABEL_43:
  *((_WORD *)v12 + 460) = 0;
  v37 = v27 & 2;
  v172 = v27 & 2;
  if ( (v27 & 2) == 0 )
  {
    v172 = v27 & 2;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v12 + 132, 0, 0) & 0x80000) != 0 )
    {
      v181 = _InterlockedCompareExchange((volatile signed __int32 *)v12 + 132, 0, 0);
      v37 = *((_QWORD *)v12 + 65);
      *(_DWORD *)(v37 + 28) = v181 & 0xFFF7FFFF;
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)v12 + 61) + 8LL), 0x2000u);
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)v12 + 61) + 4LL), 0x2000u);
      _InterlockedAnd((volatile signed __int32 *)v12 + 132, 0xFFF7FFFF);
      v172 = v27 & 2;
    }
  }
  v38 = v22 & 0xFFBF;
  v160 = v22 & 0xFFBF;
  v39 = ~(v22 & 0xFFFFFFBF);
  v162 = v39;
  v40 = v22 & 0x1C07;
  v161 = v40;
  while ( 1 )
  {
    v163 = 0LL;
    v41 = *(_QWORD *)(W32GetUserSessionState(v37, v28) + 16912);
    if ( *((_QWORD *)v12 + 62) == v41 )
    {
      *(_QWORD *)(W32GetUserSessionState(v41, v28) + 16912) = 0LL;
      if ( *((_QWORD *)v12 + 62) )
        zzzReattachThreads(2LL, 0LL, 0LL);
    }
    *((_WORD *)v12 + 460) |= v38 & (unsigned __int16)*(_DWORD *)(*((_QWORD *)v12 + 61) + 4LL);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v12 + 61) + 4LL), v39);
    if ( ((unsigned __int8)v22 & *(_BYTE *)(*((_QWORD *)v12 + 61) + 8LL) & 0x40) != 0 )
    {
      xxxReceiveMessages(v12);
    }
    else if ( (*(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL) & 0x40) != 0 )
    {
      v54 = v9 | 0x80;
LABEL_75:
      v158 = v54;
      goto LABEL_76;
    }
    if ( v40 != 0 && (v22 & 0x40) != 0 )
      xxxProcessDelegateCapturedPointers(v12);
    if ( tagTHREADINFO::HasCoreMessagingWindow(v12) && (v22 & 8) != 0 )
      xxxDrainQueueCompletions(0x80000000uLL, v28);
    v44 = *((_QWORD *)v12 + 59);
    v45 = *(_DWORD *)(v44 + 436);
    if ( (v45 & 0x1000) != 0 && !*(_DWORD *)(v44 + 40) && (v45 & 0x20) == 0 )
    {
      *(_DWORD *)(v44 + 436) = v45 & 0xFFFFEFFF;
      if ( (unsigned int)Feature_YieldInputQueue2__private_GetVariant(v44, v28, v42, v43) == 3 )
      {
        v46 = (const struct tagQ *)*((_QWORD *)v12 + 59);
        if ( *((_WORD *)v46 + 274) > 1u )
        {
          InputTraceLogging::Mouse::StrugglingInputQueueStop(v46);
          if ( dword_140398BB8 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_140398BB8, 0x400000000000LL, v42, v43) )
            {
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              v50 = W32GetUserSessionState(v49, v48);
              v51 = v50 + 69432;
              v52 = *(_DWORD *)(v50 + 69436);
              if ( !v52 )
                *(LARGE_INTEGER *)(v50 + 69440) = PerformanceCounter;
              *(_DWORD *)(v50 + 69436) = v52 + 1;
              v28 = PerformanceCounter.QuadPart - *(_QWORD *)(*((_QWORD *)v12 + 59) + 552LL);
              *(_QWORD *)(v50 + 69448) += v28;
              if ( v28 > *(_QWORD *)(v50 + 69456) )
              {
                *(_QWORD *)(v50 + 69456) = v28;
                *(_DWORD *)(v50 + 69464) = *(_DWORD *)(*((_QWORD *)v12 + 58) + 56LL);
                *(_DWORD *)(v50 + 69468) = *(_DWORD *)(*((_QWORD *)v12 + 59) + 544LL);
                *(_WORD *)(v50 + 69472) = *(_WORD *)(*((_QWORD *)v12 + 59) + 550LL);
                *(_WORD *)(v50 + 69474) = *(_WORD *)(*((_QWORD *)v12 + 59) + 548LL);
              }
              v53 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              if ( (unsigned int)(v53 - *(_DWORD *)v51) >= 0xEA60 )
              {
                if ( (unsigned int)dword_140398BB8 > 5
                  && (unsigned __int8)tlgKeywordOn(&dword_140398BB8, 0x400000000000LL, v42, v43) )
                {
                  v182 = (unsigned __int64)(1000LL * *(_QWORD *)(v51 + 24)) / gliQpcFreq;
                  v191 = *(_WORD *)(v51 + 42);
                  v171 = *(_WORD *)(v51 + 40);
                  v174 = *(_DWORD *)(v51 + 36);
                  v183[0] = (unsigned __int64)(1000LL * *(_QWORD *)(v51 + 16)) / gliQpcFreq;
                  v183[1] = (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - *(_QWORD *)(v51 + 8))) / gliQpcFreq;
                  v175 = *(_DWORD *)(v51 + 4);
                  v176 = *(_DWORD *)(v51 + 32);
                  v184 = 0x1000000LL;
                  v157 = &v182;
                  v156 = &v191;
                  v155 = &v171;
                  v154 = &v174;
                  v153 = v183;
                  v152 = &v175;
                  v151 = &v176;
                  v150 = &v184;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>>(
                    gliQpcFreq,
                    (__int64)&unk_1403661B0);
                }
                *(_DWORD *)v51 = v53;
                *(_QWORD *)(v51 + 24) = 0LL;
                *(_DWORD *)(v51 + 4) = 0;
                *(_QWORD *)(v51 + 16) = 0LL;
              }
            }
          }
        }
      }
    }
    if ( (*(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL) & v22) == 0 )
    {
      v54 = v9 | 0x100;
      goto LABEL_75;
    }
    v57 = *(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL);
    v58 = *((_QWORD *)v12 + 59);
    if ( *(struct tagTHREADINFO **)(v58 + 72) != v12 || (*(_DWORD *)(v58 + 436) & 0x400) == 0 )
      goto LABEL_91;
    EtwTraceInputQueueNoRemoveLocker(v58, v28, v42, v43);
    if ( ((unsigned __int16)v57 & (unsigned __int16)v22 & 0x3C07) == 0 )
    {
      if ( (v57 & 0x2000) != 0 )
      {
        v54 = v9 | 0x200;
        goto LABEL_75;
      }
LABEL_91:
      v59 = v173;
      goto LABEL_92;
    }
    LODWORD(v152) = (unsigned __int16)v57 & (unsigned __int16)v22 & 0x3C07;
    LODWORD(v151) = a5;
    LODWORD(v150) = v168;
    v59 = v173;
    v60 = xxxScanSysQueue(v12, a1, v173, v192, v150, v151, v152, &v163, v153, v154, v155, v156, v157);
    v63 = 1LL;
    if ( v60 == 1 )
    {
      v9 |= 2u;
      goto LABEL_131;
    }
    if ( !v60 )
      UnblockDeferredInput(v12);
LABEL_92:
    if ( ((unsigned __int8)v57 & (unsigned __int8)v22 & 8) == 0 )
      goto LABEL_104;
    PostMessage = xxxReadPostMessage(v12, (struct tagMSG *)a1, v59, v192, v168, v159);
    v63 = 0LL;
    if ( PostMessage )
      break;
    if ( (v59 || v192 <= v168 && v168 >= 0x200 && v192 <= 0x20E && (v192 || v168 != -1) && v192 > 0x60)
      && (*((_DWORD *)v12 + 340) & 0x20000000) != 0 )
    {
      memset(v188, 0, 48);
      if ( (unsigned int)xxxReadPostMessage(v12, (struct tagMSG *)v188, 0LL, 0x60u, 0x60u, 1) )
        xxxSendPostedMessage((const struct tagMSG *)v188, (struct tagMSG *)v188);
    }
LABEL_104:
    if ( v59 == (struct tagWND *)1 )
    {
      v54 = v9 | 0x400;
      goto LABEL_75;
    }
    if ( ((unsigned __int16)v57 & (unsigned __int16)v22 & 0x3C07) != 0 )
    {
      LODWORD(v152) = (unsigned __int16)v57 & (unsigned __int16)v22 & 0x3C07;
      LODWORD(v151) = a5;
      LODWORD(v150) = v168;
      v65 = xxxScanSysQueue(v12, a1, v59, v192, v150, v151, v152, &v163, v153, v154, v155, v156, v157);
      if ( v65 == 2 )
      {
        if ( (unsigned int)IsShellFrameHangResilient(v12)
          && ((unsigned __int8)v57 & (unsigned __int8)v22 & 1) != 0
          && a6 )
        {
          v66 = v167;
          if ( v167 )
          {
            v68 = v165;
            v67 = v164;
          }
          else
          {
            v67 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v164 = v67;
            v66 = v67;
            v167 = v67;
            v68 = 0;
            v165 = 0;
          }
          v28 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v66;
          if ( (unsigned int)v28 < 0xFA )
          {
            xxxSleepThread2(v22, 10LL, 1, 0, (enum SLEEP_STATUS *)&v166);
            v165 = v68 + 1;
            goto LABEL_248;
          }
          if ( v67 == v66 )
          {
            TraceLoggingSysQueueLockedRetryFailed(v68, v28);
            v164 = 0;
          }
        }
      }
      else
      {
        v164 = 0;
        v165 = 0;
        v167 = 0;
        if ( v65 == 1 )
        {
          v9 |= 2u;
          goto LABEL_131;
        }
      }
    }
    else if ( (v57 & 0x2000) != 0 )
    {
      v54 = v9 | 0x800;
      goto LABEL_75;
    }
    if ( ((unsigned __int8)v22 & *(_BYTE *)(*((_QWORD *)v12 + 61) + 8LL) & 0x40) != 0 )
    {
      xxxReceiveMessages(v12);
    }
    else if ( (*(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL) & 0x40) != 0 )
    {
      v54 = v9 | 0x1000;
      goto LABEL_75;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL) & v22) == 0 )
    {
      v54 = v9 | 0x2000;
      goto LABEL_75;
    }
    v69 = *(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL);
    if ( ((unsigned __int8)v69 & (unsigned __int8)v22 & 0x20) != 0 )
    {
      v70 = xxxDoPaint(v59, a1);
      v63 = 0LL;
      if ( v70 )
      {
        v9 |= 4u;
        goto LABEL_131;
      }
    }
    if ( !v172 )
    {
      zzzWakeInputIdle((__int64)v12);
      xxxReceiveMessages(v12);
      if ( ((unsigned __int8)v22 & *(_BYTE *)(*((_QWORD *)v12 + 61) + 8LL) & 0x40) != 0 )
      {
        xxxReceiveMessages(v12);
      }
      else if ( (*(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL) & 0x40) != 0 )
      {
        v54 = v9 | 0x4000;
        goto LABEL_75;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL) & v22) == 0 )
      {
        v54 = v9 | 0x8000;
        goto LABEL_75;
      }
      v69 = *(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL);
    }
    if ( ((unsigned __int8)v69 & (unsigned __int8)v22 & 0x10) != 0 && (unsigned int)DoTimer(v59) )
    {
      v9 |= 8u;
      v158 = v9;
      goto LABEL_248;
    }
LABEL_76:
    v55 = *((_QWORD *)v12 + 59);
    if ( *(struct tagTHREADINFO **)(v55 + 72) == v12 )
    {
      *(_QWORD *)(v55 + 80) = 0LL;
      v56 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v79 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v56 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v80 = *((_QWORD *)v12 + 59);
        v81 = *(_QWORD *)(v80 + 72);
        v82 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v28);
        LOBYTE(v83) = v79;
        LOBYTE(v84) = v56;
        WPP_RECORDER_AND_TRACE_SF_qqq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v84,
          v83,
          *(_QWORD *)(v82 + 69416),
          4,
          18,
          21,
          (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
          v80,
          (char)v12,
          v81);
      }
      *(_QWORD *)(*((_QWORD *)v12 + 59) + 72LL) = 0LL;
      **((_DWORD **)v12 + 61) &= ~1u;
    }
    if ( tagQ::AreMultipleThreadsAttached(*((tagQ **)v12 + 59)) )
    {
      v86 = *(_QWORD *)(v85 + 24);
      if ( v86 )
      {
        if ( (*(_DWORD *)(v86 + 100) & 0x10) == 0 )
        {
          v87 = *(struct tagTHREADINFO **)(v86 + 104);
          if ( v87 )
          {
            if ( v87 != v12 )
              WakeSomeoneAfterUnlockingOrUndeferring((struct tagQMSG *)v86);
          }
        }
      }
    }
    if ( !a6 )
    {
      if ( (a5 & 2) == 0 )
      {
        zzzWakeInputIdle((__int64)v12);
        xxxReceiveMessages(v12);
      }
      v9 = v158;
LABEL_285:
      LOBYTE(v98) = v159;
LABEL_286:
      v16 = 0;
      goto LABEL_287;
    }
    if ( v170 )
    {
      v88 = xxxSleepThreadWithPwnd(v173, v22);
LABEL_169:
      if ( !v88 )
      {
        v9 = v158 | 0x10000;
        goto LABEL_285;
      }
      v9 = 0;
      v158 = 0;
LABEL_248:
      v40 = v161;
      v39 = v162;
      goto LABEL_249;
    }
    v166 = 0;
    v89 = *((_QWORD *)v12 + 59);
    v90 = *(_QWORD *)(v89 + 80);
    v91 = *(_QWORD *)(v89 + 72);
    v92 = IsShellFrameHangResilient(v12);
    if ( v92 )
    {
      v164 = 0;
      v165 = 0;
      v167 = 0;
    }
    v88 = xxxSleepThread2(v22, v92 != 0 ? 0x7530 : 0, 1, 0, (enum SLEEP_STATUS *)&v166);
    if ( !(unsigned int)IsShellFrameHangResilient(v12) )
      goto LABEL_169;
    v37 = *(_QWORD *)(*((_QWORD *)v12 + 59) + 128LL);
    if ( v37 != *((_QWORD *)v12 + 198) )
    {
      if ( v37 )
        goto LABEL_169;
    }
    if ( !v166 )
      goto LABEL_169;
    v146 = SlowAppThreadInShellFrame(v12, v91, v90, v166 == 2);
    v9 = v158;
    v38 = v160;
    v40 = v161;
    v39 = v162;
    if ( v146 )
    {
      TryDetachShellFrame(v12, v146, v166 == 2, 0LL);
LABEL_249:
      v38 = v160;
    }
  }
  if ( v159 )
  {
    v93 = *(unsigned int *)(a1 + 8);
    if ( (unsigned int)v93 < 0x400 )
      v63 = (unsigned __int16)MessageTable[v93] >> 15;
    if ( (_DWORD)v63 )
      xxxSendPostedMessage((const struct tagMSG *)a1, (struct tagMSG *)a1);
  }
  v9 |= 1u;
LABEL_131:
  v158 = v9;
  if ( *(_DWORD *)(a1 + 8) != 595 || (v71 = -1LL, *(_QWORD *)(a1 + 24) != -1LL) )
    v71 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline(v63, v28, v61, v62);
  v75 = *(unsigned int *)(a1 + 8);
  v76 = 0LL;
  v78 = IsEnabledDeviceUsageNoInline == 0;
  v77 = v75 - 571;
  if ( v78 )
  {
    LOBYTE(v76) = v77 <= 1;
    if ( !(_DWORD)v76
      && (!(unsigned int)IsTouchpadPointerInputMessage((unsigned int)v75)
       || !(unsigned int)IsPointerMessageTouchpad(v12, v71, *(_WORD *)(a1 + 16))) )
    {
      goto LABEL_184;
    }
    v94 = 1;
  }
  else
  {
    LOBYTE(v76) = v77 <= 1;
    if ( (_DWORD)v76 )
    {
      v76 = 0x2000002000LL;
      if ( (*((_QWORD *)v12 + 170) & 0x2000002000LL) == 0 )
      {
        v78 = *(_QWORD *)(a1 + 24) == 1LL;
        goto LABEL_188;
      }
      goto LABEL_189;
    }
    if ( !(unsigned int)IsTouchpadPointerInputMessage((unsigned int)v75)
      || (v78 = (unsigned int)IsPointerMessageTouchpad(v12, v71, *(_WORD *)(a1 + 16)) == 0, v94 = 1, v78) )
    {
LABEL_184:
      v94 = 0;
    }
  }
  if ( !v94 )
    goto LABEL_189;
  v78 = !ShouldReceiveTouchpadMessages(v12, *(HWND *)a1);
LABEL_188:
  v95 = 1;
  if ( !v78 )
LABEL_189:
    v95 = 0;
  v96 = *(_DWORD *)(a1 + 8);
  if ( v96 == 842 || v96 == 537 || v96 == 568 )
  {
    Feature_MTestAbSh1__private_ReportDeviceUsage(v76, v75, v73, v74);
    v97 = 1;
  }
  else
  {
    v97 = 0;
  }
  v98 = v159;
  if ( !v159 )
    goto LABEL_303;
  v99 = *(_DWORD *)(a1 + 8);
  if ( v99 == 258
    || (v100 = v99 - 578, v100 <= 5) && (v75 = 51LL, _bittest((const int *)&v75, v100))
    || v97
    || *(_WORD *)(a1 + 8) >= 0xC000u )
  {
    if ( (unsigned int)xxxCallCtfHook(3LL, 0LL, (unsigned int)a5, (__int128 *)a1) )
    {
      v101 = *(_DWORD *)(a1 + 8);
      if ( v101 == 258 )
      {
        *(_DWORD *)(a1 + 8) = 0;
        goto LABEL_205;
      }
      if ( v101 == 842 )
      {
LABEL_205:
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
      }
    }
  }
  if ( !v163 || !*((_QWORD *)v12 + 183) && !*((_QWORD *)v12 + 185) )
  {
LABEL_303:
    if ( !v95 )
    {
      v102 = *((_QWORD *)v12 + 63);
      v75 = (unsigned int)(*((_DWORD *)v12 + 180) | *(_DWORD *)(*(_QWORD *)v102 + 16LL));
      if ( ((*((_BYTE *)v12 + 720) | *(_BYTE *)(*(_QWORD *)v102 + 16LL)) & 0x10) != 0 )
      {
        v103 = *(_DWORD *)(a1 + 8);
        v104 = *(void **)(a1 + 24);
        v105 = 0LL;
        v106 = 0LL;
        v177 = 0LL;
        if ( v103 == 255 )
        {
          if ( v104 )
          {
            LOBYTE(v75) = 18;
            v105 = HMValidateHandleNoSecure((__int64)v104, v75);
            if ( v105 )
            {
              if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline(
                                   v108,
                                   v107,
                                   v109,
                                   v110) )
              {
                FlushPostedRawInput(v12);
                v111 = UnlinkHidData(v12, (struct tagHIDDATA *)v105, &v177);
              }
              else
              {
                v111 = FlushPostedRawInputAndUnlinkThisOne(v12, (struct tagHIDDATA *)v105, &v177);
              }
              v105 = (__int64)v111;
              if ( v111 )
              {
                if ( !(unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline(
                                      v113,
                                      v112,
                                      v114,
                                      v115) )
                  *(_DWORD *)(v105 + 48) |= 1u;
                v106 = *((_QWORD *)v12 + 143);
                *((_QWORD *)v12 + 143) = v105;
              }
            }
          }
        }
        xxxCallHook(0LL, (unsigned int)a5, a1, 3);
        if ( v105 )
        {
          *((_QWORD *)v12 + 143) = v106;
          if ( *(_DWORD *)(a1 + 8) == 255 )
          {
            LOBYTE(v75) = 18;
            v116 = HMValidateHandleNoSecure((__int64)v104, v75);
            if ( v116 )
            {
              *(_DWORD *)(v116 + 48) &= ~1u;
              v117 = v177;
              v75 = (__int64)*v177;
              *(_QWORD *)(v116 + 32) = *v177;
              *v117 = (struct tagHIDDATA *)v116;
            }
          }
        }
        if ( v103 == 255 && v104 && !*(_DWORD *)(a1 + 8) )
          InputTraceLogging::RawInput::HijackHidData(v104);
        v98 = v159;
        v9 = v158;
      }
    }
  }
  if ( v98 )
  {
    if ( *((_DWORD *)v12 + 310) )
      PointerPromotion::xxxCompletePendingPromotion(v12, (struct tagTHREADINFO *)v75);
    if ( *(_DWORD *)(a1 + 8) == 583 && _bittest16((const signed __int16 *)(a1 + 18), 0xDu) )
      PointerPromotion::MarkPendingPromotion(v12, (struct tagTHREADINFO *)*(unsigned __int16 *)(a1 + 16));
    v118 = 0;
    if ( (unsigned int)IsPointerInputMessageWithState(*(unsigned int *)(a1 + 8)) )
      v118 = *(_WORD *)(a1 + 16);
    v121 = W32GetUserSessionState(v120, v119);
    CTouchProcessor::UpdateThreadPointerList(
      *(CTouchProcessor **)(v121 + 3264),
      (struct tagTHREADINFO *)((char *)v12 + 1208),
      v118);
  }
  if ( v163 )
  {
    v122 = *((_DWORD *)v163 + 25);
    if ( (v122 & 0x100) != 0 )
    {
      if ( v98 )
      {
        if ( *((_QWORD *)v12 + 185) )
        {
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v179, "ShellHandwriting Delegation", 0LL);
          InputTraceLogging::Delivery::CallShellHandwritingDelegateThread(v163);
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
            v187,
            "ShellHandwriting DelegationCallout",
            (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v179);
          v123 = xxxClientCallDelegateThread(*((_QWORD *)v12 + 185), a1, *((_QWORD *)v12 + 184));
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
            (InputTraceLogging::ThreadLockedPerfRegion *)v187,
            v124);
          v125 = *((unsigned int *)v163 + 25);
          if ( (v125 & 0x20) != 0 )
          {
            v126 = W32GetUserSessionState(v163, v125);
            TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v126 + 3264));
            CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v189, TouchProcessorLock, v128);
            *((_DWORD *)v163 + 25) &= ~0x100u;
            _HandleShellHandwritingDelegatedInputWorker(v12, v123, v163);
            CInpLockGuardExclusive::~CInpLockGuardExclusive(v189);
          }
          v129 = &v179;
          goto LABEL_246;
        }
        if ( *((_QWORD *)v12 + 183) )
        {
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v180, "Delegation", 0LL);
          EtwTraceBeginDelegateInputCallback(v163, a1);
          InputTraceLogging::Delivery::CallDelegateThread(v163);
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
            &v185,
            "DelegationCallout",
            (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v180);
          v130 = xxxClientCallDelegateThread(*((_QWORD *)v12 + 183), a1, *((_QWORD *)v12 + 184));
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
            (InputTraceLogging::ThreadLockedPerfRegion *)&v185,
            v131);
          EtwTraceEndDelegateInputCallback(v163, a1);
          v125 = *((unsigned int *)v163 + 25);
          if ( (v125 & 0x20) != 0 )
          {
            v132 = W32GetUserSessionState(v163, v125);
            v133 = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v132 + 3264));
            CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v190, v133, v134);
            *((_DWORD *)v163 + 25) &= ~0x100u;
            _HandleDelegatedInputWorker(v12, v130, v163);
            CInpLockGuardExclusive::~CInpLockGuardExclusive(v190);
          }
          v129 = &v180;
LABEL_246:
          v9 = 0x20000;
          v158 = 0x20000;
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
            (InputTraceLogging::ThreadLockedPerfRegion *)v129,
            v125);
LABEL_247:
          v22 = v169;
          goto LABEL_248;
        }
      }
      *((_DWORD *)v163 + 25) = v122 & 0xFFFFFEFF;
    }
  }
  if ( v95 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v186, "PTPDownleveling", 0LL);
    v135 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v136 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v136 = 0;
    }
    if ( v135 || v136 )
    {
      v137 = *(_WORD *)(a1 + 16);
      v138 = *(_DWORD *)(a1 + 8);
      v139 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v140) = v136;
      LOBYTE(v141) = v135;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v141,
        v140,
        *(_QWORD *)(v139 + 69416),
        5,
        10,
        22,
        (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
        v138,
        v137);
    }
    xxxClientCallDefaultInputHandler(a1);
    memset(&v188[3], 0, 48);
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)&v186,
      v142);
    v9 = v158;
    goto LABEL_247;
  }
  if ( IsMiPPointerMessage(*(unsigned int *)(a1 + 8), *(_QWORD *)(a1 + 16)) )
  {
    LOBYTE(v143) = 1;
    v144 = HMValidateHandleNoSecure(*(_QWORD *)a1, v143);
    if ( v144 )
    {
      if ( !IsMiPEnabledForWindow(v144) )
      {
        TraceLoggingMiPSuppressedForWindow(v145, *(_DWORD *)(a1 + 8), v98);
        if ( v98 )
          xxxClientCallDefWindowProc(a1);
        memset(&v188[6], 0, 48);
        *(_OWORD *)a1 = 0LL;
        *(_OWORD *)(a1 + 16) = 0LL;
        *(_OWORD *)(a1 + 32) = 0LL;
        goto LABEL_247;
      }
    }
  }
  if ( a6 && *(_DWORD *)(a1 + 8) == 18 )
  {
    v9 |= 0x40000u;
    goto LABEL_286;
  }
  v16 = 1;
  if ( v98 )
  {
    FreeSavedMessageInfoHandles(v12);
    SaveMessageInfoHandle(v12, (struct tagMSG *)a1);
  }
LABEL_287:
  if ( v170 )
    Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)BugCheckParameter3);
  if ( !(unsigned int)HandleProcessSpinning() )
  {
    v16 = 0;
    goto LABEL_298;
  }
  if ( v16 )
  {
    if ( *(_DWORD *)(a1 + 8) == 512 && (*((_DWORD *)v12 + 340) & 0x40000LL) != 0 )
    {
      v147 = (_DWORD *)*((_QWORD *)v12 + 89);
      if ( v147 )
      {
        if ( (v147[50] & 0x8000) != 0 && v147[67] )
        {
          v147[68] += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v147[67];
          ++v147[69];
          v147[67] = 0;
        }
      }
    }
LABEL_298:
    if ( v16 )
    {
      *((_QWORD *)v12 + 164) = *(_QWORD *)a1;
      *((_DWORD *)v12 + 330) = *(_DWORD *)(a1 + 8);
      *((_QWORD *)v12 + 166) = *(_QWORD *)(a1 + 16);
      LOBYTE(v147) = 1;
      v148 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)a1, (__int64)v147);
      InputTraceLogging::Delivery::GetMessageW((const struct tagMSG *)a1, v12, v148, v149, v98);
    }
  }
  EtwTraceBeginAppMessageProcessing(a6, v9, a1);
LABEL_7:
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v17);
  return v16;
}
