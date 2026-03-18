/*
 * XREFs of xxxRealInternalGetMessage @ 0x1C01287E0
 * Callers:
 *     NtUserRealInternalGetMessage @ 0x1C00050A0 (NtUserRealInternalGetMessage.c)
 *     xxxInternalGetMessage @ 0x1C002B4E0 (xxxInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C0126DC0 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C0128630 (NtUserPeekMessage.c)
 * Callees:
 *     IsShellFrameHangResilient @ 0x1C0006E08 (IsShellFrameHangResilient.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006E7C (IsAdaptiveQueueDetachExempted.c)
 *     FreeHidData @ 0x1C000E950 (FreeHidData.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00156E0 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0015724 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     _IsChild @ 0x1C0016C3C (_IsChild.c)
 *     zzzReattachThreads @ 0x1C0038F98 (zzzReattachThreads.c)
 *     PhkFirstGlobalValid @ 0x1C003C7B4 (PhkFirstGlobalValid.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     xxxDoPaint @ 0x1C00619B8 (xxxDoPaint.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0062E20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0063088 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00B29B8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C00D81C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     HMValidateHandleNoRip @ 0x1C00DEAEC (HMValidateHandleNoRip.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     zzzCalcStartCursorHide @ 0x1C00EF950 (zzzCalcStartCursorHide.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C0116644 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     SetWakeBit @ 0x1C01190C0 (SetWakeBit.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C011E840 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C011F900 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqdd @ 0x1C011FC50 (WPP_RECORDER_AND_TRACE_SF_qqdd.c)
 *     fnHkINLPMSG @ 0x1C0125540 (fnHkINLPMSG.c)
 *     xxxSleepThread2 @ 0x1C0126570 (xxxSleepThread2.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C01266D0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxReceiveMessage @ 0x1C0126ED0 (xxxReceiveMessage.c)
 *     ?xxxSendPostedMessage@@YAXAEBUtagMSG@@PEAU1@@Z @ 0x1C01277E4 (-xxxSendPostedMessage@@YAXAEBUtagMSG@@PEAU1@@Z.c)
 *     CalcWakeMask @ 0x1C012AB70 (CalcWakeMask.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C012AE20 (-HandleProcessSpinning@@YAHXZ.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x1C012AEB0 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1C012AFD0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C012B8E0 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C012BA20 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     Feature_AlwaysWakeTargetThread_2__private_IsEnabledDeviceUsage @ 0x1C0139DA8 (Feature_AlwaysWakeTargetThread_2__private_IsEnabledDeviceUsage.c)
 *     Feature_LParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage @ 0x1C0139E50 (Feature_LParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage.c)
 *     Feature_MTestAbSh1__private_IsEnabledDeviceUsage @ 0x1C0139EA4 (Feature_MTestAbSh1__private_IsEnabledDeviceUsage.c)
 *     Feature_WParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage @ 0x1C0139EF8 (Feature_WParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x1C013AB80 (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     xxxDoSysExpungeIfNeeded @ 0x1C013CFEC (xxxDoSysExpungeIfNeeded.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0150288 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     IsMiPEnabledForWindow @ 0x1C01505CA (IsMiPEnabledForWindow.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0152A4E (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     xxxClientCallDefWindowProc @ 0x1C0156034 (xxxClientCallDefWindowProc.c)
 *     xxxClientCallDelegateThread @ 0x1C015614E (xxxClientCallDelegateThread.c)
 *     _FreeTouchInputInfo @ 0x1C01AFD80 (_FreeTouchInputInfo.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01B47C0 (-CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?CallShellHandwritingDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01B48D8 (-CallShellHandwritingDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B5470 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01B57D8 (-UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01B5B50 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     SlowAppThreadInShellFrame @ 0x1C01B629C (SlowAppThreadInShellFrame.c)
 *     TryDetachShellFrame @ 0x1C01B655C (TryDetachShellFrame.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01C521C (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01C582C (-PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01C5AB4 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01F74DC (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z @ 0x1C01F768C (-MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01F7F68 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C0201EBC (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     _FreeGestureInfo @ 0x1C02042E0 (_FreeGestureInfo.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C0210AD8 (xxxClientCallDefaultInputHandler.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRealInternalGetMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  struct tagWND *v9; // rsi
  int v11; // r11d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r11d
  unsigned int v15; // r13d
  struct tagWND *v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ecx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _UNKNOWN **v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rsi
  _QWORD *v28; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  _QWORD *v31; // rdi
  __int64 v32; // rsi
  int v33; // ecx
  int v34; // ebx
  unsigned int v35; // eax
  unsigned int v36; // r12d
  int v37; // r15d
  int v38; // r13d
  unsigned int v39; // r14d
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 j; // rcx
  char v43; // bl
  unsigned __int64 i; // rax
  PERESOURCE *v45; // rax
  _QWORD **ThreadWin32Thread; // rax
  int v47; // ebx
  int v48; // esi
  int v49; // eax
  unsigned int v50; // r13d
  bool v51; // zf
  int v52; // edi
  __int16 v53; // bx
  int v54; // eax
  int v55; // eax
  unsigned __int64 v56; // rbx
  int v57; // r12d
  unsigned int v58; // edx
  unsigned int v59; // r15d
  int v60; // ebx
  struct tagWND *v61; // r14
  _QWORD *v62; // rax
  _QWORD *v63; // rbx
  __int64 v64; // rax
  struct _KEVENT *v65; // rcx
  int v66; // eax
  _QWORD *k; // rbx
  _QWORD *v68; // r15
  __int64 v69; // rdx
  unsigned __int64 v70; // r14
  int v71; // r8d
  int v72; // r9d
  unsigned int v73; // edx
  _DWORD *v74; // rax
  __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rbx
  _DWORD *v79; // rdi
  __int64 v80; // rsi
  _DWORD *v81; // rax
  __int64 v82; // r8
  unsigned int *v83; // rax
  int v84; // eax
  _DWORD *v85; // rbx
  __int64 v86; // rax
  _DWORD *v87; // rax
  int v88; // eax
  _QWORD *v89; // rax
  int v90; // r9d
  char v91; // dl
  __int64 v92; // r10
  unsigned int v93; // edx
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  int v98; // r8d
  _QWORD *v99; // rax
  __int64 v100; // rdx
  _QWORD *v101; // rcx
  int v102; // eax
  __int64 v103; // rax
  char v104; // r14
  int IsEnabledDeviceUsage; // eax
  __int64 m; // rcx
  int v107; // eax
  tagQ *v108; // rbx
  __int64 v109; // rbx
  __int64 v110; // rax
  unsigned int v111; // edx
  int v112; // r11d
  int v113; // eax
  unsigned int v114; // ebx
  struct tagWND *v115; // r14
  int v116; // edi
  tagQ *v117; // rcx
  __int64 v118; // rsi
  __int64 v119; // r14
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  BOOL v129; // eax
  __int64 v130; // rax
  __int64 v132; // rbx
  int v133; // edx
  unsigned __int64 v134; // r9
  int v135; // eax
  unsigned int v136; // r12d
  unsigned __int16 *v137; // rsi
  __int64 v138; // r15
  int v139; // eax
  int v140; // edi
  int v141; // eax
  int v142; // eax
  __int64 v143; // rcx
  int v144; // eax
  int v145; // eax
  __int64 *v146; // rax
  int v147; // ebx
  __int64 v148; // rbx
  __int64 v149; // rcx
  __int64 v150; // rcx
  unsigned __int16 v151; // bx
  __int64 v152; // rcx
  int v153; // eax
  int v154; // eax
  int v155; // eax
  __int64 v156; // rax
  int v157; // eax
  unsigned int v158; // ebx
  __int64 v159; // rax
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v161; // r8
  unsigned int v162; // ebx
  __int64 v163; // rax
  struct CInpLockGuard *v164; // rax
  void *v165; // r8
  __int64 v166; // r14
  int v167; // eax
  int v168; // eax
  int v169; // eax
  int v170; // eax
  __int64 v171; // rax
  __int64 v172; // r8
  __int64 v173; // rax
  __int64 v174; // rcx
  char *v175; // rax
  __int64 v176; // rcx
  int v177; // eax
  _QWORD *v178; // rax
  _QWORD *v179; // rbx
  __int64 v180; // rax
  struct _KEVENT *v181; // rcx
  int v182; // eax
  _DWORD *v183; // rdx
  __int64 v184; // rbx
  struct tagBWND *v185; // r9
  __int64 v186; // rdi
  __int64 v187; // rdx
  __int64 v188; // rcx
  struct tagWND **v189; // rsi
  __int64 v190; // r8
  struct tagWND *v191; // r8
  enum SLEEP_STATUS *v192; // [rsp+20h] [rbp-2D8h]
  __int64 v193; // [rsp+28h] [rbp-2D0h]
  unsigned __int64 v194; // [rsp+30h] [rbp-2C8h]
  __int64 v195; // [rsp+38h] [rbp-2C0h]
  int v196; // [rsp+70h] [rbp-288h]
  char v197; // [rsp+74h] [rbp-284h]
  unsigned int v198; // [rsp+78h] [rbp-280h]
  unsigned int v200; // [rsp+88h] [rbp-270h]
  int v201; // [rsp+98h] [rbp-260h]
  struct tagQMSG *v202; // [rsp+A0h] [rbp-258h] BYREF
  int v203; // [rsp+A8h] [rbp-250h]
  unsigned int v204; // [rsp+ACh] [rbp-24Ch]
  int v205; // [rsp+B0h] [rbp-248h] BYREF
  int v206; // [rsp+B4h] [rbp-244h]
  struct tagWND *v207; // [rsp+B8h] [rbp-240h]
  unsigned int v208; // [rsp+C0h] [rbp-238h]
  unsigned __int64 v209; // [rsp+C8h] [rbp-230h]
  int v210; // [rsp+D0h] [rbp-228h]
  int v211; // [rsp+D4h] [rbp-224h]
  int v212; // [rsp+D8h] [rbp-220h]
  __int64 *v213; // [rsp+E0h] [rbp-218h] BYREF
  int v214; // [rsp+E8h] [rbp-210h] BYREF
  int v215; // [rsp+ECh] [rbp-20Ch] BYREF
  int v216; // [rsp+F0h] [rbp-208h] BYREF
  int v217[3]; // [rsp+F4h] [rbp-204h] BYREF
  int v218; // [rsp+100h] [rbp-1F8h]
  unsigned int v219; // [rsp+110h] [rbp-1E8h]
  unsigned int v220; // [rsp+114h] [rbp-1E4h]
  int v221; // [rsp+118h] [rbp-1E0h]
  __int64 *v222[2]; // [rsp+120h] [rbp-1D8h] BYREF
  int v223; // [rsp+130h] [rbp-1C8h]
  __int64 v224; // [rsp+138h] [rbp-1C0h] BYREF
  __int64 *v225; // [rsp+140h] [rbp-1B8h] BYREF
  __int64 *v226; // [rsp+148h] [rbp-1B0h] BYREF
  __int64 *v227; // [rsp+150h] [rbp-1A8h] BYREF
  _UNKNOWN **v228; // [rsp+158h] [rbp-1A0h] BYREF
  __int128 v229; // [rsp+160h] [rbp-198h] BYREF
  __int64 v230; // [rsp+170h] [rbp-188h]
  _OWORD v231[3]; // [rsp+178h] [rbp-180h] BYREF
  _OWORD v232[9]; // [rsp+1A8h] [rbp-150h] BYREF
  _BYTE v233[48]; // [rsp+238h] [rbp-C0h] BYREF
  _BYTE v234[48]; // [rsp+268h] [rbp-90h] BYREF
  __int64 v235[3]; // [rsp+298h] [rbp-60h] BYREF
  int v236; // [rsp+2B0h] [rbp-48h]
  int v237; // [rsp+2B4h] [rbp-44h]

  v204 = a3;
  v213 = (__int64 *)a1;
  v229 = 0LL;
  v230 = 0LL;
  v197 = 0;
  v205 = 0;
  v209 = 0LL;
  v203 = 0;
  v200 = 0;
  v196 = 0;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
  {
    a2 = 1LL;
LABEL_8:
    v9 = (struct tagWND *)a2;
    v207 = (struct tagWND *)a2;
    v11 = 0;
    goto LABEL_9;
  }
  if ( a2 < 2 )
    goto LABEL_8;
  v9 = (struct tagWND *)ValidateHwnd(a2);
  v207 = v9;
  if ( !v9 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    EtwTraceBeginAppMessageProcessing(a6, 16LL, a1);
    return (unsigned int)-(a6 != 0);
  }
  *(_QWORD *)&v229 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v229;
  *((_QWORD *)&v229 + 1) = v9;
  HMLockObject(v9);
  v11 = 1;
LABEL_9:
  v206 = v11;
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL);
  v12 = 0xFFFFFFFFLL;
  if ( a4 )
    v12 = a4;
  v208 = v12;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v15 = CalcWakeMask(v204, v12, WORD1(a5));
  v198 = v15;
  v221 = v15 & 0x1C07;
  if ( (v15 & 0x1C07) != 0 )
  {
    v13 = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(gptiCurrent + 1448LL) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  v218 = v15 & 7;
  if ( v218 != 7 )
  {
    if ( (v15 & 6) == 0 )
      goto LABEL_22;
    v13 = gptiCurrent;
    if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) )
      goto LABEL_22;
  }
  if ( v14 )
  {
    if ( *((_QWORD *)v9 + 2) != gptiCurrent )
      goto LABEL_22;
    v16 = v9;
  }
  else
  {
    if ( a2 )
      goto LABEL_22;
    v16 = 0LL;
  }
  xxxUpdateInputHangInfo(v16, 1LL);
LABEL_22:
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
    CurrentProcessWin32Process = 0LL;
  v21 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v21 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v21 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0LL);
  }
  xxxDoSysExpungeIfNeeded(gptiCurrent, v18, v19, v20);
  v201 = a5 & 1;
  if ( (a5 & 1) != 0
    && (v15 & 0x1CBF) != 0
    && (*(_DWORD *)(gptiCurrent + 1272LL) & 0x80000) != 0
    && (v15 & *(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL)) != 0 )
  {
    v26 = *((_QWORD *)PtiCurrentShared(v23, v22, v24, (__int64)v25) + 58);
    if ( !*(_QWORD *)(v26 + 56) && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v26, v22, v24, (__int64)v25) + 58) + 48LL) )
      TryAttachShellFrame(gptiCurrent, v22);
  }
  v27 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(gptiCurrent + 512LL)
    || (v28 = (_QWORD *)(v27 + 72), v29 = *(_QWORD *)(v27 + 72), v29 == gptiCurrent)
    && *(_QWORD *)(v27 + 80) == *(_QWORD *)(gptiCurrent + 576LL) )
  {
    LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v25 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = (_QWORD *)(v27 + 72);
      WPP_RECORDER_AND_TRACE_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        v24,
        (_DWORD)gFullLog,
        4,
        18,
        20,
        (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
        v27,
        gptiCurrent,
        *(_QWORD *)(v27 + 72));
    }
    else
    {
      v30 = (_QWORD *)(v27 + 72);
    }
    v31 = 0LL;
    *v30 = 0LL;
    v197 = 1;
  }
  else
  {
    v30 = (_QWORD *)(v27 + 72);
    if ( v29 && !*(_DWORD *)(v29 + 908) && PhkFirstGlobalValid(gptiCurrent, 1) )
    {
      LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          v22,
          v24,
          (_DWORD)gFullLog,
          4,
          18,
          21,
          (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
          v27,
          gptiCurrent,
          *v28);
      *v28 = 0LL;
    }
    v31 = 0LL;
  }
  v32 = gptiCurrent;
  if ( *v30 != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 448LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 880LL) = 0;
  v212 = a5 & 2;
  if ( (a5 & 2) == 0 )
  {
    v33 = *(_DWORD *)(gptiCurrent + 488LL);
    if ( (v33 & 0x80000) != 0 )
    {
      v223 = *(_DWORD *)(gptiCurrent + 488LL);
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 28LL) = v33 & 0xFFF7FFFF;
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL), 0x2000u);
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL), 0x2000u);
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x80000u;
    }
  }
  v219 = v15 & 0xFFFFFFBF;
  v220 = ~(v15 & 0xFFFFFFBF);
  while ( 2 )
  {
    while ( 2 )
    {
      v34 = v196;
LABEL_67:
      while ( 2 )
      {
        while ( 2 )
        {
          v35 = v200;
          while ( 1 )
          {
            v36 = v35;
            v37 = v209;
            v38 = v203;
            v39 = v209;
            v202 = 0LL;
            _InterlockedOr(
              (volatile signed __int32 *)(*(_QWORD *)(v32 + 448) + 8LL),
              *(_DWORD *)(*(_QWORD *)(v32 + 448) + 12LL));
            if ( *(_QWORD *)(v32 + 456) == gpdeskRecalcQueueAttach )
            {
              gpdeskRecalcQueueAttach = 0LL;
              if ( *(_QWORD *)(v32 + 456) )
              {
                v40 = *((_QWORD *)PtiCurrentShared(gpdeskRecalcQueueAttach, v22, v24, (__int64)v25) + 58);
                if ( !*(_QWORD *)(v40 + 48)
                  && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v40, v22, v24, (__int64)v25) + 58) + 56LL) )
                {
                  zzzReattachThreads(2, 0LL, 0LL);
                }
              }
            }
            v41 = *(_QWORD *)(v32 + 448);
            *(_WORD *)(v32 + 880) |= *(_WORD *)(v41 + 4) & (unsigned __int16)v219;
            _InterlockedAnd((volatile signed __int32 *)(v41 + 4), v220);
            j = *(unsigned int *)(*(_QWORD *)(v32 + 448) + 8LL);
            if ( (j & 0x40) != 0 )
            {
              if ( ((unsigned __int8)v198 & (unsigned __int8)*(_DWORD *)(*(_QWORD *)(v32 + 448) + 8LL) & 0x40) == 0 )
              {
                v196 = v34 | 0x80;
                v50 = v34 | 0x80;
                goto LABEL_252;
              }
              do
              {
                xxxReceiveMessage(v32);
                j = *(unsigned int *)(*(_QWORD *)(v32 + 448) + 8LL);
              }
              while ( (j & 0x40) != 0 );
            }
            LOBYTE(j) = v221 != 0;
            v43 = v198;
            if ( v221 != 0 && (v198 & 0x40) != 0 && *(_DWORD *)(v32 + 1164) )
            {
              do
              {
                *(_DWORD *)(v32 + 1164) = 0;
                for ( i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(v32 + 1128));
                      i;
                      i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(v32 + 1128)) )
                {
                  xxxNotifyCaptureChangeIfCaptured(i, (struct tagWND *)v22, v24);
                }
              }
              while ( *(_DWORD *)(v32 + 1164) );
              v43 = v198;
            }
            if ( *(_QWORD *)(v32 + 1504) && (v43 & 8) != 0 )
            {
              v45 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(j, v22, v24, v25);
              if ( !ExIsResourceAcquiredSharedLite(*v45) )
              {
                v210 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
              }
              ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( ThreadWin32Thread )
                v31 = *ThreadWin32Thread;
              memset(v231, 0, 32);
              v47 = 0;
              v214 = 0;
              v224 = 0LL;
              v48 = 0;
              ZwSetIoCompletionEx(v31[183], v31[187], 0LL, 2LL, 0, 0LL);
              do
              {
                while ( 1 )
                {
                  LOBYTE(v193) = 0;
                  v49 = ZwRemoveIoCompletionEx(v31[183], v231, 1LL, &v214, &v224, v193);
                  if ( v49 )
                  {
                    if ( v49 == 258 )
                      v47 = 1;
                  }
                  else if ( DWORD2(v231[0]) == 1 )
                  {
                    v47 = 3;
                  }
                  else if ( DWORD2(v231[0]) == 2 )
                  {
                    v47 = 2;
                  }
                  else if ( !DWORD2(v231[0]) && v31[188] )
                  {
                    v47 = DWORD2(v231[0]) + 4;
                    xxxHandleCoreMessagingQueueCompletion(
                      (__int64)v31,
                      (ULONG64 *)v231,
                      (unsigned int)(DWORD2(v231[0]) + 1));
                  }
                  if ( v47 != 3 )
                    break;
                  v48 = 1;
                  v47 = 0;
                }
                v51 = v47 == 4;
                v47 = 0;
              }
              while ( v51 );
              if ( v48 )
                ZwAssociateWaitCompletionPacket(v31[186], v31[183], v31[185], 0LL, 1LL, 0, 0LL, 0LL);
              v32 = gptiCurrent;
            }
            v52 = *(_DWORD *)(*(_QWORD *)(v32 + 448) + 8LL);
            v53 = v198 & v52;
            if ( (v198 & v52) == 0 )
            {
              v50 = v196 | 0x100;
              v196 |= 0x100u;
              v31 = 0LL;
              goto LABEL_252;
            }
            j = *(_QWORD *)(v32 + 432);
            if ( *(_QWORD *)(j + 72) == v32 && (*(_DWORD *)(j + 396) & 0x400) != 0 )
            {
              EtwTraceInputQueueNoRemoveLocker();
              if ( (v53 & 0x3C07) != 0 )
              {
                v54 = xxxScanSysQueue(v32, a1, v207, v204, v208, a5, v53 & 0x3C07, &v202);
                if ( v54 == 1 )
                  goto LABEL_146;
                if ( !v54 )
                  UnblockDeferredInput((struct tagTHREADINFO *)v32);
              }
              else if ( (v52 & 0x2000) != 0 )
              {
                v50 = v196 | 0x200;
                v196 |= 0x200u;
                v31 = 0LL;
                goto LABEL_252;
              }
            }
            if ( (v53 & 8) != 0 )
            {
              if ( (unsigned int)xxxReadPostMessage(
                                   (struct tagTHREADINFO *)v32,
                                   (struct tagMSG *)a1,
                                   v207,
                                   v204,
                                   v208,
                                   v201) )
              {
                if ( (a5 & 1) != 0 )
                {
                  v130 = *(unsigned int *)(a1 + 8);
                  if ( (unsigned int)v130 >= 0x400 ? 0 : (unsigned __int16)MessageTable[v130] >> 15 )
                    xxxSendPostedMessage((const struct tagMSG *)a1, (struct tagMSG *)a1);
                }
                v50 = v196 | 1;
                goto LABEL_322;
              }
              if ( v207
                || (j = v204, v204 <= v208) && v208 >= 0x200 && v204 <= 0x20E && (v204 || v208 != -1) && v204 > 0x60 )
              {
                if ( (*(_DWORD *)(v32 + 1272) & 0x20000000) != 0 )
                {
                  memset(v232, 0, 48);
                  if ( (unsigned int)xxxReadPostMessage(
                                       (struct tagTHREADINFO *)v32,
                                       (struct tagMSG *)v232,
                                       0LL,
                                       0x60u,
                                       0x60u,
                                       1) )
                    xxxSendPostedMessage((const struct tagMSG *)v232, (struct tagMSG *)v232);
                }
              }
            }
            v24 = (__int64)v207;
            if ( v207 == (struct tagWND *)1 )
            {
              v50 = v196 | 0x400;
              v196 |= 0x400u;
              v31 = 0LL;
              goto LABEL_252;
            }
            if ( (v53 & 0x3C07) == 0 )
            {
              if ( (v52 & 0x2000) == 0 )
              {
LABEL_149:
                v31 = 0LL;
                goto LABEL_150;
              }
              v50 = v196 | 0x800;
              v196 |= 0x800u;
              v31 = 0LL;
LABEL_252:
              v59 = v198;
              goto LABEL_253;
            }
            v55 = xxxScanSysQueue(v32, a1, v207, v204, v208, a5, v53 & 0x3C07, &v202);
            if ( v55 != 2 )
              break;
            if ( !(unsigned int)IsShellFrameHangResilient(v32) || (v53 & 1) == 0 )
              goto LABEL_149;
            v31 = 0LL;
            if ( !a6 )
              goto LABEL_150;
            v56 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v24 = 0LL;
            if ( v37 )
              v24 = v36;
            v200 = v24;
            v57 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            if ( v39 )
              v57 = v38;
            v203 = v57;
            if ( v39 )
              v56 = v39;
            v209 = v56;
            v58 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v56;
            if ( v58 >= 0xFA )
            {
              if ( v57 == (_DWORD)v56 )
              {
                TraceLoggingSysQueueLockedRetryFailed(v24, v58);
                v203 = 0;
                v209 = v56;
                v24 = v200;
              }
LABEL_150:
              j = *(_QWORD *)(v32 + 448);
              v22 = *(_DWORD *)(j + 8) & 0x40;
              v59 = v198;
              if ( ((unsigned __int8)v198 & *(_BYTE *)(j + 8) & 0x40) == 0 )
              {
                if ( !(_DWORD)v22 )
                  goto LABEL_153;
                v50 = v196 | 0x1000;
                v196 |= 0x1000u;
                goto LABEL_253;
              }
              if ( (_DWORD)v22 )
              {
                do
                {
                  xxxReceiveMessage(v32);
                  j = *(_QWORD *)(v32 + 448);
                }
                while ( (*(_DWORD *)(j + 8) & 0x40) != 0 );
              }
LABEL_153:
              v60 = *(_DWORD *)(j + 8);
              if ( (v198 & v60) == 0 )
              {
                v50 = v196 | 0x2000;
                v196 |= 0x2000u;
                goto LABEL_253;
              }
              v61 = v207;
              if ( ((unsigned __int8)v198 & (unsigned __int8)v60 & 0x20) != 0
                && (unsigned int)xxxDoPaint((__int64)v207, a1) )
              {
                v50 = v196 | 4;
                goto LABEL_322;
              }
              if ( v212 )
                goto LABEL_181;
              v62 = (_QWORD *)PsGetCurrentProcessWin32Process(j);
              v63 = v62;
              if ( v62 && !*v62 )
                v63 = 0LL;
              v64 = *(_QWORD *)(v32 + 424);
              if ( !*(_QWORD *)(v64 + 336) )
                *(_QWORD *)(v64 + 336) = v32;
              if ( *(_QWORD *)(*(_QWORD *)(v32 + 424) + 336LL) == v32 )
              {
                EtwTraceWakeInputIdle(0LL, v32);
                v65 = (struct _KEVENT *)v63[2];
                if ( !v65 )
                  goto LABEL_169;
                if ( v65 != (struct _KEVENT *)-1LL )
                {
                  KeSetEvent(v65, 1, 0);
                  ObfDereferenceObject((PVOID)v63[2]);
LABEL_169:
                  v63[2] = -1LL;
                }
              }
              v66 = *((_DWORD *)v63 + 3);
              if ( (v66 & 4) != 0 )
              {
                *((_DWORD *)v63 + 3) = v66 & 0xFFFFFFFB;
                zzzCalcStartCursorHide(0LL, 0LL);
              }
              for ( j = *(_QWORD *)(v32 + 448); (*(_DWORD *)(j + 8) & 0x40) != 0; j = *(_QWORD *)(v32 + 448) )
                xxxReceiveMessage(v32);
              v22 = *(_DWORD *)(j + 8) & 0x40;
              if ( ((unsigned __int8)v198 & *(_BYTE *)(j + 8) & 0x40) != 0 )
              {
                if ( (_DWORD)v22 )
                {
                  do
                  {
                    xxxReceiveMessage(v32);
                    j = *(_QWORD *)(v32 + 448);
                  }
                  while ( (*(_DWORD *)(j + 8) & 0x40) != 0 );
                }
LABEL_177:
                v60 = *(_DWORD *)(j + 8);
                if ( (v60 & v198) == 0 )
                {
                  v50 = v196 | 0x8000;
                  v196 |= 0x8000u;
                  goto LABEL_253;
                }
LABEL_181:
                if ( ((unsigned __int8)v60 & (unsigned __int8)v198 & 0x10) != 0 )
                {
                  for ( k = *(_QWORD **)(gptiCurrent + 1256LL); ; k = (_QWORD *)*k )
                  {
                    while ( 1 )
                    {
                      if ( k == (_QWORD *)(gptiCurrent + 1256LL) )
                      {
                        v31 = 0LL;
                        v102 = 0;
                        goto LABEL_248;
                      }
                      v68 = k - 7;
                      if ( (*(_DWORD *)(k - 1) & 0x1000) == 0 )
                        break;
                      v211 = 0x20000;
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1290LL);
                      k = (_QWORD *)*k;
                    }
                    v69 = v68[11];
                    if ( !v61 || v61 == (struct tagWND *)v69 || (unsigned int)IsChild((__int64)v61, v69) )
                      break;
                  }
                  if ( (gdwExtraInstrumentations & 2) != 0 )
                  {
                    v70 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                    v71 = v70 - *((_DWORD *)v68 + 32);
                    v72 = dword_1C035E364;
                    if ( !dword_1C035E364 )
                      v72 = v70;
                    dword_1C035E364 = v72;
                    v73 = 0;
                    v74 = &unk_1C0312EB8;
                    do
                    {
                      if ( *((_DWORD *)v68 + 10) <= *v74 )
                        break;
                      ++v73;
                      ++v74;
                    }
                    while ( v73 < 7 );
                    v75 = 8 * (v73 + 8LL * gTimerCoalCurrentState);
                    ++*(_DWORD *)((char *)&gaTimerDeliveryDistribution + v75);
                    v76 = v71 + *(_DWORD *)((char *)&gaTimerDeliveryDistribution + v75 + 4) - *((_DWORD *)v68 + 10);
                    *(_DWORD *)((char *)&gaTimerDeliveryDistribution + v75 + 4) = v76;
                    if ( *(_DWORD *)((char *)&gaTimerDeliveryDistribution + v75) >= 0x7FFFFFFFu
                      || (v77 = 0LL, v76 >= 0x3FFFFFFF) )
                    {
                      v77 = 1LL;
                    }
                    if ( (_DWORD)v77 || (unsigned int)(v70 - v72) >= 0xEA60 )
                    {
                      v78 = 0LL;
                      v79 = &unk_1C035DC08;
                      v80 = 4LL;
                      do
                      {
                        v81 = (_DWORD *)SGDGetUserSessionState(v77);
                        v82 = 0LL;
                        v77 = gServiceSessionId;
                        if ( *v81 != gServiceSessionId )
                          v82 = 4LL;
                        *v79 = *((_DWORD *)&gTimerCoalescingSpec + v78 + v82);
                        ++v78;
                        v79 += 16;
                        --v80;
                      }
                      while ( v80 );
                      v83 = (unsigned int *)SGDGetUserSessionState(gServiceSessionId);
                      EtwTraceTimerDelayStatistics(*v83, 8LL, 4LL, &unk_1C0312EB8, 32, 8, &gaTimerDeliveryDistribution);
                      dword_1C035E364 = v70;
                      LODWORD(v77) = 1;
                      v32 = gptiCurrent;
                    }
                    if ( (_DWORD)v77 )
                      memset_0(&gaTimerDeliveryDistribution, 0, 0x100uLL);
                  }
                  v84 = *((_DWORD *)v68 + 33);
                  if ( *((_DWORD *)v68 + 32) == v84 )
                    *((_DWORD *)v68 + 32) = v84;
                  if ( *(_DWORD *)(gptiCurrent + 824LL) < gUserPostMessageLimit )
                  {
                    v86 = SGDGetUserSessionState(gUserPostMessageLimit);
                    v87 = (_DWORD *)Win32AllocateFromPagedLookasideList(*(_QWORD *)(v86 + 16872));
                    v85 = v87;
                    if ( v87 )
                    {
                      memset_0(v87, 0, 0xA0uLL);
                      v88 = 8;
                      if ( *(_DWORD *)(gptiCurrent + 828LL) != 2 )
                        v88 = 4;
                      v85[25] |= v88;
                      v89 = *(_QWORD **)(gptiCurrent + 816LL);
                      if ( v89 )
                      {
                        *v89 = v85;
                        *((_QWORD *)v85 + 1) = *(_QWORD *)(gptiCurrent + 816LL);
                      }
                      else
                      {
                        *(_QWORD *)(gptiCurrent + 808LL) = v85;
                        *(_QWORD *)(gptiCurrent + 840LL) = 0LL;
                      }
                      *(_QWORD *)(gptiCurrent + 816LL) = v85;
                      v90 = *(_DWORD *)(gptiCurrent + 824LL) + 1;
                      *(_DWORD *)(gptiCurrent + 824LL) = v90;
                      v91 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                      if ( v91 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        WPP_RECORDER_AND_TRACE_SF_qqdd(
                          (__int64)WPP_GLOBAL_Control->AttachedDevice,
                          v91,
                          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                          v90,
                          (__int64)v192,
                          v193,
                          v194,
                          v195);
                      v31 = 0LL;
                    }
                    else
                    {
                      UserSetLastError(8);
                      v31 = 0LL;
                      v85 = 0LL;
                    }
                  }
                  else
                  {
                    UserSetLastError(1816);
                    v31 = 0LL;
                    v85 = 0LL;
                  }
                  if ( v85 )
                  {
                    v92 = v68[11];
                    if ( v92 )
                    {
                      v93 = *(_DWORD *)(*(_QWORD *)(v92 + 40) + 288LL);
                    }
                    else
                    {
                      v94 = *(_QWORD *)(gptiCurrent + 432LL);
                      v95 = *(_QWORD *)(v94 + 128);
                      if ( v95 )
                        v96 = *(_QWORD *)(v95 + 16);
                      else
                        v96 = *(_QWORD *)(v94 + 104);
                      v93 = *(_DWORD *)(*(_QWORD *)(v96 + 424) + 280LL);
                    }
                    if ( (v68[6] & 2) == 0 || (v97 = 280LL, !v68[4]) )
                      v97 = v68[4];
                    v98 = 280;
                    if ( (v68[6] & 2) == 0 )
                      v98 = 275;
                    StoreQMessage(
                      (struct tagQMSG *)v85,
                      (struct _EX_PUSH_LOCK **)v92,
                      v98,
                      v68[12],
                      v97,
                      0,
                      0LL,
                      0,
                      0LL,
                      0,
                      0LL,
                      v93,
                      0LL,
                      0LL);
                    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
                    {
                      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL), 0x108u);
                      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL), 0x108u);
                      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL) & 0x108) != 0 )
                        KeSetEvent(*(PRKEVENT *)(gptiCurrent + 736LL), 2, 0);
                    }
                  }
                  DecTimerCountAndClearReadyFlag((struct tagTIMER *)v68);
                  v99 = v68 + 9;
                  v100 = v68[9];
                  v101 = (_QWORD *)v68[10];
                  if ( *(_QWORD **)(v100 + 8) != v68 + 9
                    || (_QWORD *)*v101 != v99
                    || (*v101 = v100,
                        *(_QWORD *)(v100 + 8) = v101,
                        j = gtmrListHead[0],
                        v22 = gtmrListHead[1],
                        *(_QWORD *)v22 != gtmrListHead[0]) )
                  {
                    __fastfail(3u);
                  }
                  *v99 = gtmrListHead[0];
                  v68[10] = v22;
                  *(_QWORD *)v22 = v99;
                  gtmrListHead[1] = v99;
                  v102 = 1;
LABEL_248:
                  if ( v102 )
                  {
                    v34 = v196 | 8;
                    v196 |= 8u;
                    goto LABEL_67;
                  }
                  v50 = v196;
                  goto LABEL_252;
                }
                v50 = v196;
              }
              else
              {
                if ( !(_DWORD)v22 )
                  goto LABEL_177;
                v50 = v196 | 0x4000;
                v196 |= 0x4000u;
              }
LABEL_253:
              v103 = *(_QWORD *)(v32 + 432);
              if ( *(_QWORD *)(v103 + 72) == v32 )
              {
                *(_QWORD *)(v103 + 80) = 0LL;
                LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_AND_TRACE_SF_qqq(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v22,
                    v24,
                    (_DWORD)gFullLog,
                    4,
                    18,
                    22,
                    (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
                    *(_QWORD *)(v32 + 432),
                    v32,
                    *(_QWORD *)(*(_QWORD *)(v32 + 432) + 72LL));
                *(_QWORD *)(*(_QWORD *)(v32 + 432) + 72LL) = 0LL;
                **(_DWORD **)(v32 + 448) &= ~1u;
                v104 = 1;
                v197 = 1;
              }
              else
              {
                v104 = v197;
              }
              IsEnabledDeviceUsage = Feature_AlwaysWakeTargetThread_2__private_IsEnabledDeviceUsage(j, v22, v24);
              m = IsEnabledDeviceUsage != 0;
              if ( IsEnabledDeviceUsage )
              {
                if ( (unsigned int)Feature_WParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage()
                  || (v107 = Feature_LParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage(), m = v107 != 0, v107) )
                {
                  v197 = 1;
                  goto LABEL_269;
                }
              }
              if ( v104 )
              {
LABEL_269:
                v108 = *(tagQ **)(v32 + 432);
                if ( tagQ::AreMultipleThreadsAttached(v108) )
                {
                  v22 = 0LL;
                  v109 = *((_QWORD *)v108 + 3);
                  if ( !v109 )
                    goto LABEL_279;
                  if ( (*(_DWORD *)(v109 + 100) & 0x10) != 0 )
                    goto LABEL_279;
                  v110 = *(_QWORD *)(v109 + 104);
                  if ( v110 == v32 )
                    goto LABEL_279;
                  v31 = *(_QWORD **)(v109 + 104);
                  if ( !v110 )
                    goto LABEL_279;
                  v111 = CalcWakeMask(*(unsigned int *)(v109 + 24), *(unsigned int *)(v109 + 24), 0LL);
                  v113 = -8265;
                  if ( *(_DWORD *)(v109 + 96) )
                    v113 = -73;
                  v22 = v113 & v111;
                  if ( v112 != 786 )
                    LODWORD(v22) = v22 & 0xFFFFFF7F;
                  m = (unsigned int)v22 & *(_DWORD *)(v31[56] + 4LL);
                  if ( (_DWORD)m != (_DWORD)v22 )
                  {
LABEL_279:
                    if ( v31 )
                      SetWakeBit((__int64)v31, v22);
                  }
                }
              }
              if ( !a6 )
              {
                if ( v212 )
                  goto LABEL_477;
                v178 = (_QWORD *)PsGetCurrentProcessWin32Process(m);
                v179 = v178;
                if ( v178 && !*v178 )
                  v179 = 0LL;
                v180 = *(_QWORD *)(v32 + 424);
                if ( !*(_QWORD *)(v180 + 336) )
                  *(_QWORD *)(v180 + 336) = v32;
                if ( *(_QWORD *)(*(_QWORD *)(v32 + 424) + 336LL) == v32 )
                {
                  EtwTraceWakeInputIdle(0LL, v32);
                  v181 = (struct _KEVENT *)v179[2];
                  if ( !v181 )
                    goto LABEL_472;
                  if ( v181 != (struct _KEVENT *)-1LL )
                  {
                    KeSetEvent(v181, 1, 0);
                    ObfDereferenceObject((PVOID)v179[2]);
LABEL_472:
                    v179[2] = -1LL;
                  }
                }
                v182 = *((_DWORD *)v179 + 3);
                if ( (v182 & 4) != 0 )
                {
                  *((_DWORD *)v179 + 3) = v182 & 0xFFFFFFFB;
                  zzzCalcStartCursorHide(0LL, 0LL);
                }
                for ( m = *(unsigned int *)(*(_QWORD *)(v32 + 448) + 8LL);
                      (m & 0x40) != 0;
                      m = *(unsigned int *)(*(_QWORD *)(v32 + 448) + 8LL) )
                {
                  xxxReceiveMessage(v32);
                }
                goto LABEL_477;
              }
              v114 = 0;
              if ( v206 )
              {
                if ( v218 == 7 || (v59 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) )
                {
                  v115 = v207;
                  if ( *((_QWORD *)v207 + 2) == gptiCurrent )
                  {
                    v114 = 1;
                    xxxUpdateInputHangInfo(v207, 0LL);
                  }
                }
                else
                {
                  v115 = v207;
                }
                v116 = xxxRealSleepThread(v59, 0LL, 1, 0, 0LL);
                if ( v114 )
                  xxxUpdateInputHangInfo(v115, 1LL);
LABEL_312:
                if ( v116 )
                {
                  v31 = 0LL;
                  v34 = 0;
                  v196 = 0;
                  goto LABEL_67;
                }
                v50 |= 0x10000u;
LABEL_477:
                v166 = a1;
                v138 = gptiCurrent;
LABEL_478:
                v136 = 0;
                v137 = (unsigned __int16 *)(v166 + 16);
                goto LABEL_479;
              }
              v205 = 0;
              v117 = *(tagQ **)(v32 + 432);
              v118 = *((_QWORD *)v117 + 10);
              v119 = *((_QWORD *)v117 + 9);
              if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x40000) != 0 && tagQ::AreMultipleThreadsAttached(v117) )
              {
                v125 = *((_QWORD *)PtiCurrentShared(v121, v120, v122, v123) + 58);
                if ( !*(_QWORD *)(v125 + 48)
                  && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v125, v124, v126, v127) + 58) + 56LL)
                  && !(unsigned int)IsAdaptiveQueueDetachExempted(gptiCurrent) )
                {
                  v114 = gdwMDAQTimeoutDefenseInDepth;
                  v203 = 0;
                  v200 = 0;
                  LODWORD(v209) = 0;
                }
              }
              v116 = xxxSleepThread2(v198, v114, 1, 0, (enum SLEEP_STATUS *)&v205);
              v129 = 0;
              if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x40000) != 0
                && tagQ::AreMultipleThreadsAttached(*(tagQ **)(gptiCurrent + 432LL)) )
              {
                m = *((_QWORD *)PtiCurrentShared(m, v22, v24, (__int64)v25) + 58);
                if ( !*(_QWORD *)(m + 48) )
                {
                  m = *((_QWORD *)PtiCurrentShared(m, v22, v24, (__int64)v25) + 58);
                  if ( !*(_QWORD *)(m + 56) && !(unsigned int)IsAdaptiveQueueDetachExempted(gptiCurrent) )
                    v129 = 1;
                }
              }
              if ( !v129
                || (m = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL), m != *(_QWORD *)(gptiCurrent + 1432LL))
                && m
                || !v205 )
              {
                v32 = gptiCurrent;
                goto LABEL_312;
              }
              v31 = 0LL;
              v172 = v118;
              v32 = gptiCurrent;
              v173 = SlowAppThreadInShellFrame(gptiCurrent, v119, v172, v205 == 2);
              v34 = v196;
              if ( v173 )
                TryDetachShellFrame(gptiCurrent, v173, v205 == 2, 0LL);
              goto LABEL_67;
            }
            xxxSleepThread2(v198, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v205);
            v35 = ++v200;
            v209 = v56;
            v203 = v57;
            v34 = v196;
          }
          v31 = 0LL;
          v203 = 0;
          v200 = 0;
          v209 = 0LL;
          if ( v55 != 1 )
            goto LABEL_150;
LABEL_146:
          v50 = v196 | 2;
LABEL_322:
          v196 = v50;
          v132 = a1;
          v133 = *(_DWORD *)(a1 + 8);
          if ( v133 == 595 && *(_QWORD *)(a1 + 24) == -1LL )
            v134 = -1LL;
          else
            v134 = 0LL;
          if ( (unsigned int)(v133 - 571) <= 1 )
          {
            v137 = (unsigned __int16 *)(a1 + 16);
            v138 = gptiCurrent;
            v136 = 1;
LABEL_336:
            v139 = 1;
            goto LABEL_337;
          }
          if ( (unsigned int)(v133 - 577) <= 3 || (unsigned int)(v133 - 581) <= 5 || (unsigned int)(v133 - 593) <= 2 )
          {
            v136 = 1;
            v135 = 1;
          }
          else
          {
            v135 = 0;
            v136 = 1;
          }
          v137 = (unsigned __int16 *)(a1 + 16);
          v138 = gptiCurrent;
          if ( v135 && (unsigned int)IsPointerMessageTouchpad(gptiCurrent, v134, *v137) )
            goto LABEL_336;
          v139 = 0;
LABEL_337:
          if ( !v139
            || (*(_DWORD *)(v138 + 1272) & 0x2000) != 0
            || (*(_DWORD *)(v138 + 1276) & 0x40) != 0
            || (v140 = 1,
                (unsigned int)IsPTPAllowedOnThread((struct tagTHREADINFO *)v138, *(_DWORD *)(a1 + 8), *(_QWORD *)v137)) )
          {
            v140 = 0;
          }
          v141 = *(_DWORD *)(a1 + 8);
          if ( v141 != 842 && v141 != 537 && v141 != 568
            || (v142 = Feature_MTestAbSh1__private_IsEnabledDeviceUsage(), v143 = 1LL, !v142) )
          {
            v143 = 0LL;
          }
          if ( (a5 & 1) != 0 )
          {
            v144 = *(_DWORD *)(a1 + 8);
            if ( v144 == 258
              || v144 == 582
              || v144 == 578
              || v144 == 583
              || v144 == 579
              || (_DWORD)v143
              || (v143 = 49152LL, (unsigned __int16)v144 >= 0xC000u) )
            {
              v24 = (unsigned int)a5;
              v215 = 0;
              v143 = gpsi;
              if ( !gpsi || !*(_QWORD *)(gpsi + 856LL) )
              {
                v132 = a1;
                goto LABEL_370;
              }
              if ( gptiCurrent == gptiRit
                || (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000000D) != 0
                || !*(_QWORD *)(gptiCurrent + 456LL)
                || ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x400) != 0
                && (v237 = 0,
                    v235[0] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
                    v236 = 0,
                    v235[2] = (unsigned int)a5,
                    v235[1] = a1,
                    (unsigned int)xxxCallHook(0LL, 3uLL, (__int64)v235, 9LL)) )
              {
                v132 = a1;
              }
              else
              {
                v132 = a1;
                if ( (unsigned int)fnHkINLPMSG(
                                     196608LL,
                                     (unsigned int)a5,
                                     (__int128 *)a1,
                                     0LL,
                                     *(_QWORD *)(gpsi + 856LL),
                                     0,
                                     &v215) )
                {
                  v145 = *(_DWORD *)(a1 + 8);
                  if ( v145 == 258 )
                  {
                    *(_DWORD *)(a1 + 8) = 0;
                    *(_QWORD *)v137 = 0LL;
                    *(_QWORD *)(a1 + 24) = 0LL;
                  }
                  else if ( v145 == 842 )
                  {
                    *(_QWORD *)v137 = 0LL;
                    *(_QWORD *)(a1 + 24) = 0LL;
                  }
                }
              }
            }
          }
          v24 = (unsigned int)a5;
LABEL_370:
          if ( ((a5 & 1) == 0 || !v202 || !*(_QWORD *)(v138 + 1304) && !*(_QWORD *)(v138 + 1320)) && !v140 )
          {
            v146 = *(__int64 **)(v138 + 464);
            v143 = *v146;
            if ( ((*(_BYTE *)(v138 + 680) | *(_BYTE *)(*v146 + 16)) & 0x10) != 0 )
              xxxCallHook(0LL, (unsigned int)v24, v132, 3LL);
          }
          v147 = a5 & 1;
          if ( (a5 & 1) != 0 )
          {
            if ( *(_DWORD *)(v138 + 1160) )
            {
              v148 = SGDGetUserSessionState(v143);
              if ( *(_WORD *)(SGDGetUserSessionState(v149) + 16280)
                && *(_QWORD *)(v148 + 16288) == v138
                && *(_DWORD *)(v148 + 16284) == *(_DWORD *)(v138 + 1160) )
              {
                ForceCompletePendingPromotion();
                xxxProcessMousePromotionQueue();
              }
              else
              {
                *(_DWORD *)(v138 + 1160) = 0;
              }
            }
            v150 = a1;
            if ( *(_DWORD *)(a1 + 8) == 583 && _bittest16((const signed __int16 *)(a1 + 18), 0xDu) )
            {
              PointerPromotion::MarkPendingPromotion((PointerPromotion *)v138, (struct tagTHREADINFO *)*v137, v24);
              v150 = a1;
            }
            v151 = 0;
            v152 = *(unsigned int *)(v150 + 8);
            if ( (unsigned int)(v152 - 577) <= 3 )
              goto LABEL_392;
            if ( (unsigned int)(v152 - 581) > 0x12 || (v153 = 1, (_DWORD)v152 == 589) )
              v153 = 0;
            v51 = v153 == 0;
            v154 = 0;
            if ( !v51 )
LABEL_392:
              v154 = 1;
            if ( !v154 || (v155 = 1, (_DWORD)v152 == 595) )
              v155 = 0;
            if ( v155 )
              v151 = *v137;
            v156 = SGDGetUserSessionState(v152);
            CTouchProcessor::UpdateThreadPointerList(
              *(CTouchProcessor **)(v156 + 3424),
              (struct tagTHREADINPUTPOINTERLIST *)(v138 + 1128),
              v151);
            v147 = a5 & 1;
          }
          if ( !v202 )
            goto LABEL_411;
          v157 = *((_DWORD *)v202 + 25);
          if ( (v157 & 0x100) == 0 )
            goto LABEL_411;
          if ( !v147 )
            goto LABEL_410;
          if ( *(_QWORD *)(v138 + 1320) )
          {
            InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v222, "ShellHandwriting Delegation", 0LL);
            InputTraceLogging::Delivery::CallShellHandwritingDelegateThread(v202);
            InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
              &v225,
              "ShellHandwriting DelegationCallout",
              (const struct InputTraceLogging::ThreadLockedPerfRegion *)v222);
            v32 = gptiCurrent;
            v158 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1320LL), a1, *(_QWORD *)(gptiCurrent + 1312LL));
            InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v225);
            if ( (*((_DWORD *)v202 + 25) & 0x20) != 0 )
            {
              v159 = SGDGetUserSessionState(v202);
              TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v159 + 3424));
              CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v234, TouchProcessorLock, v161);
              *((_DWORD *)v202 + 25) &= ~0x100u;
              _HandleShellHandwritingDelegatedInputWorker(gptiCurrent, v158, v202);
              CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v234);
            }
            v34 = 0x20000;
            v196 = 0x20000;
            InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v222);
            v31 = 0LL;
            continue;
          }
          break;
        }
        if ( *(_QWORD *)(v138 + 1304) )
        {
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v213, "Delegation", 0LL);
          EtwTraceBeginDelegateInputCallback(v202, a1);
          InputTraceLogging::Delivery::CallDelegateThread(v202);
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
            &v226,
            "DelegationCallout",
            (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v213);
          v32 = gptiCurrent;
          v162 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1304LL), a1, *(_QWORD *)(gptiCurrent + 1312LL));
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v226);
          EtwTraceEndDelegateInputCallback(v202, a1);
          if ( (*((_DWORD *)v202 + 25) & 0x20) != 0 )
          {
            v163 = SGDGetUserSessionState(v202);
            v164 = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v163 + 3424));
            CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v233, v164, v165);
            *((_DWORD *)v202 + 25) &= ~0x100u;
            _HandleDelegatedInputWorker(gptiCurrent, v162, v202);
            CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v233);
          }
          v34 = 0x20000;
          v196 = 0x20000;
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v213);
          v31 = 0LL;
          continue;
        }
        break;
      }
LABEL_410:
      *((_DWORD *)v202 + 25) = v157 & 0xFFFFFEFF;
LABEL_411:
      if ( v140 )
      {
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v227, "PTPDownleveling", 0LL);
        xxxClientCallDefaultInputHandler(a1);
        memset(&v232[3], 0, 48);
        *(_OWORD *)a1 = 0LL;
        *(_OWORD *)(a1 + 16) = 0LL;
        *(_OWORD *)(a1 + 32) = 0LL;
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v227);
        v32 = gptiCurrent;
        v31 = 0LL;
        continue;
      }
      break;
    }
    v22 = *(_QWORD *)v137;
    v166 = a1;
    m = *(unsigned int *)(a1 + 8);
    if ( (unsigned int)(m - 577) <= 3
      || ((unsigned int)(m - 581) > 0x12 || (_DWORD)m == 589 ? (_QWORD *)(v31 = 0LL, v167 = 0) : (v167 = 1, v31 = 0LL),
          v167) )
    {
      v168 = 1;
      v31 = 0LL;
    }
    else
    {
      v168 = 0;
    }
    if ( v168 )
    {
      v169 = 0;
LABEL_428:
      LOBYTE(v169) = (_WORD)v22 == 1;
      goto LABEL_429;
    }
    if ( (_DWORD)m != 528 || (v170 = 1, (_WORD)v22 != 582) )
      v170 = 0;
    v51 = v170 == 0;
    v169 = 0;
    if ( !v51 )
    {
      v22 >>= 16;
      goto LABEL_428;
    }
LABEL_429:
    if ( v169 )
    {
      v171 = HMValidateHandleNoSecure(*(_QWORD *)a1, 1);
      if ( v171 )
      {
        if ( !(unsigned int)IsMiPEnabledForWindow(v171) )
        {
          if ( (unsigned int)dword_1C0354098 > 5 )
          {
            v216 = v147;
            v217[0] = *(_DWORD *)(a1 + 8);
            v228 = v25;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              m,
              (int)&unk_1C031C437,
              v24,
              (__int64)v25,
              (__int64)&v228,
              (__int64)v217,
              (__int64)&v216);
          }
          if ( v147 )
            xxxClientCallDefWindowProc(a1);
          memset(&v232[6], 0, 48);
          *(_OWORD *)a1 = 0LL;
          *(_OWORD *)(a1 + 16) = 0LL;
          *(_OWORD *)(a1 + 32) = 0LL;
          v32 = gptiCurrent;
          continue;
        }
      }
    }
    break;
  }
  if ( a6 && *(_DWORD *)(a1 + 8) == 18 )
  {
    v50 |= 0x40000u;
    goto LABEL_478;
  }
  if ( v147 )
  {
    v174 = *(_QWORD *)(v138 + 1104);
    if ( v174 )
    {
      v175 = (char *)HMValidateHandleNoRip(v174, 18);
      if ( v175 )
        FreeHidData(v175);
      *(_QWORD *)(v138 + 1104) = 0LL;
    }
    v176 = *(_QWORD *)(v138 + 1112);
    if ( v176 )
    {
      FreeTouchInputInfo(v176, 1LL);
      *(_QWORD *)(v138 + 1112) = 0LL;
    }
    m = *(_QWORD *)(v138 + 1120);
    if ( m )
    {
      FreeGestureInfo(m, 1LL);
      *(_QWORD *)(v138 + 1120) = 0LL;
    }
    v177 = *(_DWORD *)(a1 + 8);
    if ( v177 == 255 )
    {
      if ( *(_QWORD *)v137 <= 1uLL )
        *(_QWORD *)(v138 + 1104) = *(_QWORD *)(a1 + 24);
    }
    else if ( v177 == 576 && HMValidateHandle(*(_QWORD *)(a1 + 24), 0x14u) )
    {
      *(_QWORD *)(v138 + 1112) = *(_QWORD *)(a1 + 24);
    }
    else if ( ((*(_DWORD *)(a1 + 8) - 281) & 0xFFFFFFFD) == 0 && HMValidateHandle(*(_QWORD *)(a1 + 24), 0x15u) )
    {
      *(_QWORD *)(v138 + 1120) = *(_QWORD *)(a1 + 24);
    }
  }
LABEL_479:
  if ( v206 )
    ThreadUnlock1(m, v22, v24);
  if ( !(unsigned int)HandleProcessSpinning() )
  {
    v136 = 0;
LABEL_490:
    if ( v136 )
    {
      *(_QWORD *)(v138 + 1224) = *(_QWORD *)v166;
      *(_DWORD *)(v138 + 1232) = *(_DWORD *)(v166 + 8);
      *(_QWORD *)(v138 + 1240) = *(_QWORD *)v137;
      v184 = *(_QWORD *)v166;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v184 < *(_QWORD *)(gpsi + 8LL)
        && ((v186 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v184,
             v189 = (struct tagWND **)HMPkheFromPhe(v186),
             LOWORD(v184) = WORD1(v184) & 0x7FFF,
             (WORD1(v184) & 0x7FFF) == *(_WORD *)(v186 + 26))
         || (_WORD)v184 == 0x7FFF
         || !(_WORD)v184 && PsGetCurrentProcessWow64Process(v188, v187, v190))
        && (*(_BYTE *)(v186 + 25) & 1) == 0
        && *(_BYTE *)(v186 + 24) == 1 )
      {
        v191 = *v189;
      }
      else
      {
        v191 = 0LL;
      }
      InputTraceLogging::Delivery::GetMessageW(
        (const struct tagMSG *)v166,
        (const struct tagTHREADINFO *)v138,
        v191,
        v185,
        v201);
    }
    goto LABEL_501;
  }
  if ( v136 )
  {
    if ( *(_DWORD *)(v166 + 8) == 512 && (*(_DWORD *)(v138 + 1272) & 0x40000) != 0 )
    {
      v183 = *(_DWORD **)(v138 + 672);
      if ( v183 )
      {
        if ( (v183[50] & 0x80000) != 0 && v183[69] )
        {
          v183[70] += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v183[69];
          ++v183[71];
          v183[69] = 0;
        }
      }
    }
    goto LABEL_490;
  }
LABEL_501:
  EtwTraceBeginAppMessageProcessing(a6, v50, v166);
  return v136;
}
