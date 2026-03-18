/*
 * XREFs of ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8
 * Callers:
 *     ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167D6C (-xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004B6E8 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1400636A0 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x14006E488 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x14007F440 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     SfnDWORD @ 0x14007F9E0 (SfnDWORD.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     FreeHidData @ 0x140082EF0 (FreeHidData.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x14008490C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     SfnOUTCBOXSTRING @ 0x140089680 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x140089810 (SfnOUTLBOXSTRING.c)
 *     SfnINCBOXSTRING @ 0x14008A380 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x14008A6D0 (SfnINLBOXSTRING.c)
 *     SfnINSTRING @ 0x14008A860 (SfnINSTRING.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14009D200 (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     FreeDelayedHooks @ 0x14011B7C0 (FreeDelayedHooks.c)
 *     ?ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z @ 0x14011B890 (-ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z.c)
 *     SfnCOPYDATA @ 0x14012BE50 (SfnCOPYDATA.c)
 *     UnlinkSendListSms @ 0x14016F544 (UnlinkSendListSms.c)
 *     SfnINSTRINGNULL @ 0x14016FBA0 (SfnINSTRINGNULL.c)
 *     SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x140170920 (SfnOPTOUTLPDWORDOPTOUTLPDWORD.c)
 *     SfnINDEVICECHANGE @ 0x140174A40 (SfnINDEVICECHANGE.c)
 *     SfnOUTSTRING @ 0x140176180 (SfnOUTSTRING.c)
 *     SfnINOUTLPWINDOWPOS @ 0x1401777D0 (SfnINOUTLPWINDOWPOS.c)
 *     SfnDWORDOPTINLPMSG @ 0x140178390 (SfnDWORDOPTINLPMSG.c)
 *     ?UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017AEB4 (-UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     SfnINOUTNCCALCSIZE @ 0x14017DAE0 (SfnINOUTNCCALCSIZE.c)
 *     SfnINLPWINDOWPOS @ 0x14017E180 (SfnINLPWINDOWPOS.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxDesktopWndProc @ 0x14017FEE0 (xxxDesktopWndProc.c)
 *     SfnINOUTSTYLECHANGE @ 0x140182360 (SfnINOUTSTYLECHANGE.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x140184A70 (SfnGETDBCSTEXTLENGTHS.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     SfnNCDESTROY @ 0x14018C190 (SfnNCDESTROY.c)
 *     SfnEMPTY @ 0x14018F5F0 (SfnEMPTY.c)
 *     SfnPOWERBROADCAST @ 0x140198190 (SfnPOWERBROADCAST.c)
 *     SfnINOUTLPPOINT5 @ 0x14019F860 (SfnINOUTLPPOINT5.c)
 *     ?ProcessLowLevelHook@Keyboard@InputTraceLogging@@SAXXZ @ 0x1401A1560 (-ProcessLowLevelHook@Keyboard@InputTraceLogging@@SAXXZ.c)
 *     ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1401A15B0 (-HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ.c)
 *     SfnINOUTLPSCROLLINFO @ 0x1401A5A30 (SfnINOUTLPSCROLLINFO.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1401AC130 (SfnINLPDRAWITEMSTRUCT.c)
 *     SfnOUTLPCOMBOBOXINFO @ 0x1401AE5F0 (SfnOUTLPCOMBOBOXINFO.c)
 *     SfnINOUTLPRECT @ 0x1401B1DE0 (SfnINOUTLPRECT.c)
 *     SfnINLPDELETEITEMSTRUCT @ 0x1401B3C70 (SfnINLPDELETEITEMSTRUCT.c)
 *     SfnINOUTLPMEASUREITEMSTRUCT @ 0x1401C6A60 (SfnINOUTLPMEASUREITEMSTRUCT.c)
 *     SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1401C7640 (SfnSHELLWINDOWMANAGEMENTNOTIFY.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1401CCCE0 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHINITMENU @ 0x1401CF210 (SfnINLPUAHINITMENU.c)
 *     SfnOUTLPRECT @ 0x1401D1D30 (SfnOUTLPRECT.c)
 *     SfnOUTDWORDINDWORD @ 0x1401D4720 (SfnOUTDWORDINDWORD.c)
 *     SfnINLPCOMPAREITEMSTRUCT @ 0x1401D8D10 (SfnINLPCOMPAREITEMSTRUCT.c)
 *     SfnOUTLPTITLEBARINFOEX @ 0x1401D8F70 (SfnOUTLPTITLEBARINFOEX.c)
 *     SfnSHELLSYNCDISPLAYCHANGED @ 0x1401DB1F0 (SfnSHELLSYNCDISPLAYCHANGED.c)
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1401DDB20 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnIMECONTROL @ 0x1401E57B0 (SfnIMECONTROL.c)
 *     ?LockKernelStack@@YAXPEAU_ETHREAD@@PEAU_TL@@@Z @ 0x1401E6064 (-LockKernelStack@@YAXPEAU_ETHREAD@@PEAU_TL@@@Z.c)
 *     SfnSHELLWINDOWMANAGEMENTCALLOUT @ 0x1401E62E0 (SfnSHELLWINDOWMANAGEMENTCALLOUT.c)
 *     SfnOUTLPSCROLLBARINFO @ 0x1401E7FF0 (SfnOUTLPSCROLLBARINFO.c)
 *     SfnINWPARAMCHAR @ 0x1401E9660 (SfnINWPARAMCHAR.c)
 *     SfnINLPUAHDRAWMENU @ 0x1401ED350 (SfnINLPUAHDRAWMENU.c)
 *     SfnINDESTROYCLIPBRD @ 0x1401F1F90 (SfnINDESTROYCLIPBRD.c)
 *     SfnINCNTOUTSTRING @ 0x1401F4340 (SfnINCNTOUTSTRING.c)
 *     SfnTOUCH @ 0x1401F5D40 (SfnTOUCH.c)
 *     SfnINWPARAMDBCSCHAR @ 0x1401F91F0 (SfnINWPARAMDBCSCHAR.c)
 *     SfnINOUTLPSIZE @ 0x1402000F0 (SfnINOUTLPSIZE.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x140202F70 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 *     SfnCOPYGLOBALDATA @ 0x140203210 (SfnCOPYGLOBALDATA.c)
 *     SfnTOUCHHITTESTING @ 0x1402041C0 (SfnTOUCHHITTESTING.c)
 *     SfnGESTURE @ 0x140209870 (SfnGESTURE.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x140209F80 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPCREATESTRUCT @ 0x1402510A0 (SfnINLPCREATESTRUCT.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x140271D08 (-FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14027251C (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DeBoostHook@@YAXPEAUtagHOOK@@@Z @ 0x1402836F0 (-DeBoostHook@@YAXPEAUtagHOOK@@@Z.c)
 *     SfnGETWINDOWDATA @ 0x1402B88A0 (SfnGETWINDOWDATA.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402B8A10 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHLPSTRUCT @ 0x1402B8E90 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402B91E0 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINOUTDRAG @ 0x1402B9720 (SfnINOUTDRAG.c)
 *     SfnINOUTMENUGETOBJECT @ 0x1402B9A10 (SfnINOUTMENUGETOBJECT.c)
 *     SfnINOUTNEXTMENU @ 0x1402B9D00 (SfnINOUTNEXTMENU.c)
 *     SfnINPAINTCLIPBRD @ 0x1402B9FC0 (SfnINPAINTCLIPBRD.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1402BA2C0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINSIZECLIPBRD @ 0x1402BA610 (SfnINSIZECLIPBRD.c)
 *     SfnINTERCEPTEDWINDOWACTION @ 0x1402BA8A0 (SfnINTERCEPTEDWINDOWACTION.c)
 *     SfnPOPTINLPUINT @ 0x1402BAB30 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1402BAED0 (SfnPOUTLPINT.c)
 *     SfnSENTDDEMSG @ 0x1402BB320 (SfnSENTDDEMSG.c)
 *     xxxEventWndProc @ 0x1402DBD80 (xxxEventWndProc.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall xxxReceiveMessage(struct tagTHREADINFO *a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rdi
  __int64 *v4; // rcx
  __int64 **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int *v10; // rbx
  PVOID *v11; // r12
  bool v12; // cf
  _QWORD *v13; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  int v18; // eax
  struct tagTHREADINFO *v19; // r14
  _DWORD *v20; // rdx
  int v21; // r12d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 (__fastcall *v26)(int, int, int, int, __int64, __int64); // rbx
  __int64 v27; // rax
  unsigned int *v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 *v31; // rax
  __int64 v32; // rcx
  _DWORD *v33; // rax
  __int64 v34; // rcx
  struct tagSMS *v35; // r15
  __int64 *v36; // r12
  __int64 v37; // r15
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  const struct tagUIPI_INFO *v44; // r8
  const struct tagUIPI_INFO *v45; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 *v49; // r9
  __int64 v50; // rcx
  struct tagHOOK *v51; // rdx
  char v52; // r12
  bool v53; // r13
  int v54; // ebx
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  int v58; // ebx
  int v59; // ebx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r9
  int v65; // ecx
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r8
  struct tagTHREADINFO *v69; // rdx
  unsigned int *v70; // rcx
  unsigned int v71; // eax
  unsigned int v72; // eax
  int v73; // r13d
  int v74; // ebx
  __int64 v75; // rdx
  __int64 v76; // rcx
  _QWORD *v77; // rax
  __int64 v78; // rcx
  __int64 *v79; // rax
  ULONG_PTR v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rcx
  unsigned int v86; // r15d
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // rdx
  char v91; // r15
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v95; // rcx
  unsigned __int64 v96; // rax
  __int64 v97; // rax
  struct tagSMS *v98; // r15
  __int64 v99; // rdx
  __int64 v100; // rcx
  int *v101; // rcx
  int v102; // ebx
  __int64 v103; // rdx
  struct tagTHREADINFO *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  _DWORD *v107; // rcx
  int v108; // ebx
  __int64 v109; // rdx
  struct tagTHREADINFO *v110; // rax
  __int64 v111; // rdx
  _QWORD *v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  unsigned int *v115; // rcx
  unsigned int v116; // eax
  unsigned int v117; // eax
  __int64 v118; // rdx
  __int64 v119; // rax
  struct tagHIDDATA *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rdx
  struct tagHOOK *v123; // r14
  char v124; // r15
  bool v125; // r12
  int v126; // ebx
  __int64 UserSessionState; // rax
  int v128; // r8d
  int v129; // edx
  struct tagSMS *v130; // rbx
  __int64 v131; // r8
  __int64 v132; // r9
  char v133; // [rsp+50h] [rbp-168h]
  bool v134; // [rsp+51h] [rbp-167h]
  __int64 v135; // [rsp+58h] [rbp-160h] BYREF
  PVOID *v136; // [rsp+60h] [rbp-158h]
  __int64 v137; // [rsp+68h] [rbp-150h]
  struct tagTHREADINFO *v138; // [rsp+70h] [rbp-148h]
  struct tagHOOK *v139; // [rsp+78h] [rbp-140h]
  __int64 *v140; // [rsp+80h] [rbp-138h]
  struct tagSMS *v141; // [rsp+88h] [rbp-130h]
  int v142; // [rsp+90h] [rbp-128h]
  __int64 v143; // [rsp+98h] [rbp-120h]
  __int64 v144; // [rsp+A0h] [rbp-118h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+A8h] [rbp-110h] BYREF
  ULONG_PTR v146[2]; // [rsp+B8h] [rbp-100h] BYREF
  __int64 v147; // [rsp+C8h] [rbp-F0h]
  __int128 v148; // [rsp+D8h] [rbp-E0h] BYREF
  __int64 v149; // [rsp+E8h] [rbp-D0h]
  int v150; // [rsp+F0h] [rbp-C8h]
  __int64 v151; // [rsp+F8h] [rbp-C0h]
  struct tagTHREADINFO *v152; // [rsp+100h] [rbp-B8h]
  ULONG_PTR v153[2]; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v154[2]; // [rsp+120h] [rbp-98h] BYREF
  __int128 v155; // [rsp+130h] [rbp-88h]
  __int128 v156; // [rsp+140h] [rbp-78h]
  _BYTE v157[56]; // [rsp+150h] [rbp-68h] BYREF

  v138 = a1;
  v152 = a1;
  v135 = 0LL;
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  v3 = (__int64 *)*((_QWORD *)a1 + 70);
  v140 = v3;
  if ( v3 == (__int64 *)((char *)a1 + 560) )
  {
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 61) + 8LL), 0xFFFFFFBF);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 61) + 4LL), 0xFFFFFFBF);
    goto LABEL_3;
  }
  v141 = (struct tagSMS *)(v3 - 2);
  --*((_DWORD *)a1 + 144);
  v4 = (__int64 *)*v3;
  v5 = (__int64 **)v3[1];
  if ( *(__int64 **)(*v3 + 8) != v3 || *v5 != v3 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = (__int64)v5;
  *v3 = 0LL;
  EtwTraceBeginRetrieveSendMessage(v3 - 2);
  v10 = (int *)v3 + 17;
  v143 = (__int64)v3 + 68;
  *((_DWORD *)v3 + 17) |= 0x4010u;
  if ( *((struct tagTHREADINFO **)a1 + 70) == (struct tagTHREADINFO *)((char *)a1 + 560) )
  {
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 61) + 8LL), 0xFFFFFFBF);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 61) + 4LL), 0xFFFFFFBF);
  }
  v11 = (PVOID *)v3[2];
  v136 = v11;
  v139 = (struct tagHOOK *)v11;
  if ( v11 )
  {
    v12 = (_InterlockedCompareExchange((volatile signed __int32 *)v11 + 132, 0, 0) & 0x100) != 0;
    v13 = (_QWORD *)*((_QWORD *)a1 + 65);
    if ( v12 )
      *v13 |= 0x1000uLL;
    else
      *v13 &= ~0x1000uLL;
  }
  IsEnabledDeviceUsageNoInline = Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline(
                                   v7,
                                   v6,
                                   v8,
                                   v9);
  v16 = 512LL;
  if ( IsEnabledDeviceUsageNoInline && *((_DWORD *)v3 + 22) == 255 && (*v10 & 0x200) == 0 )
  {
    v17 = PtiCurrent(512LL, v15);
    FlushPostedRawInput(v17);
    v16 = 512LL;
  }
  v18 = *v10;
  if ( (*v10 & 0x200) == 0 )
  {
    if ( (v18 & 7) != 0 )
    {
      if ( (v18 & 0x20004) == 0x20004 )
      {
        LOBYTE(v15) = 5;
        v121 = HMValidateHandleNoSecure(v3[13], v15);
        v123 = (struct tagHOOK *)v121;
        if ( v121 )
        {
          if ( (*(_DWORD *)(v121 + 64) & 0x2000) != 0 )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
              || (v124 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v124 = 0;
            }
            v125 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v124 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v126 = *(_DWORD *)(v121 + 48);
              UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v122);
              LOBYTE(v128) = v125;
              LOBYTE(v129) = v124;
              WPP_RECORDER_AND_TRACE_SF_d(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v129,
                v128,
                *(_QWORD *)(UserSessionState + 69416),
                4,
                5,
                12,
                (__int64)&WPP_45eb214c783f3d45e2f167060f0951f6_Traceguids,
                v126);
            }
            DeBoostHook(v123);
          }
        }
      }
      goto LABEL_166;
    }
    v33 = (_DWORD *)*((_QWORD *)a1 + 61);
    LODWORD(v143) = *v33 & 8;
    v34 = *((_QWORD *)a1 + 69);
    v151 = v34;
    v35 = v141;
    *((_QWORD *)a1 + 69) = v141;
    *v33 |= 2u;
    **((_DWORD **)a1 + 61) |= 8u;
    if ( !v11 )
      Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, v3[12]);
    if ( *((_DWORD *)v3 + 22) != 788 )
    {
      v73 = *((_DWORD *)PtiCurrent(v34, 2LL) + 401);
      v74 = *((_DWORD *)v3 + 28);
      *((_DWORD *)PtiCurrent(v76, v75) + 401) = v74;
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v157);
      if ( ShouldCallWndProcHook(a1, 32, *((_DWORD *)v3 + 22), (struct tagWND *)v3[12]) )
      {
        DWORD1(v155) = 0;
        v77 = (_QWORD *)v3[12];
        if ( v77 )
          *((_QWORD *)&v155 + 1) = *v77;
        else
          *((_QWORD *)&v155 + 1) = 0LL;
        LODWORD(v155) = *((_DWORD *)v3 + 22);
        v154[1] = v3[9];
        v154[0] = v3[10];
        *(_QWORD *)&v156 = v35;
        xxxCallHook(0LL, 1LL, (__int64)v154, 4);
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v157);
      FreeDelayedHooks();
      if ( (*((_DWORD *)v3 + 17) & 7) != 0 )
        goto LABEL_100;
      v79 = (__int64 *)v3[12];
      if ( !v79 )
        goto LABEL_100;
      v80 = 0LL;
      v144 = 0LL;
      v137 = *v79;
      v150 = (unsigned __int16)v137;
      v82 = *(_QWORD *)(W32GetUserSessionState(v78, v63) + 19928);
      if ( (unsigned __int64)(unsigned __int16)v137 >= *(_QWORD *)(v82 + 8)
        || (v83 = W32GetUserSessionState(v82, v81),
            v86 = *(_DWORD *)(W32GetUserSessionState(v85, v84) + 19952) * (unsigned __int16)v137,
            v80 = v86 + *(_QWORD *)(v83 + 19944),
            v88 = W32GetUserSessionState(v86, v87),
            v89 = v3[12],
            *(_QWORD *)(*(_QWORD *)(v88 + 19888) + 40LL * (unsigned __int16)v137) != v89)
        || *(_BYTE *)(v80 + 24) != 1 )
      {
        KeBugCheckEx(0x197u, 1uLL, v3[12], v80, 1uLL);
      }
      v90 = v3[12];
      if ( (*(_BYTE *)(*(_QWORD *)(v89 + 40) + 18LL) & 4) != 0 )
      {
        v148 = 0LL;
        v149 = 0LL;
        v91 = 0;
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v146, v90);
        v93 = *((unsigned int *)v3 + 22);
        if ( (unsigned int)v93 < 0x400
          && (_bittest16(&MessageTable[v93], 9u) || (_DWORD)v93 == 537 && (v3[9] & 0x8000) != 0) )
        {
          *((_DWORD *)v3 + 17) |= 0x20u;
          if ( v136 )
          {
            v91 = 1;
            LockKernelStack(*v136, (struct _TL *)&v148);
          }
        }
        v95 = v3[12];
        v96 = *(_QWORD *)(*(_QWORD *)(v95 + 40) + 120LL);
        if ( v96 < 4 )
          v97 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))(&gServerHandlers)[v96])(
                  v95,
                  *((unsigned int *)v3 + 22),
                  v3[9],
                  v3[10]);
        else
          v97 = 0LL;
        v135 = v97;
        if ( v91 )
          PopAndFreeW32ThreadLock((__int64)&v148, v92);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v146, v92);
        v98 = v141;
      }
      else
      {
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v146, v90);
        v101 = (int *)*((_QWORD *)PtiCurrent(v100, v99) + 61);
        v102 = *v101;
        v104 = PtiCurrent((__int64)v101, v103);
        **((_DWORD **)v104 + 61) |= 0x10u;
        v98 = v141;
        xxxSendMessageToClient(
          (struct tagWND *)v3[12],
          *((_DWORD *)v3 + 22),
          (HWND)v3[9],
          (struct tagDRAWITEMSTRUCT *)v3[10],
          v141,
          1,
          &v135);
        v107 = (_DWORD *)*((_QWORD *)PtiCurrent(v106, v105) + 61);
        v108 = (*v107 ^ v102) & 0x10;
        v110 = PtiCurrent((__int64)v107, v109);
        **((_DWORD **)v110 + 61) ^= v108;
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v146, v111);
      }
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v157);
      if ( (*((_DWORD *)v3 + 17) & 4) == 0
        && ShouldCallWndProcHook(a1, 0x2000, *((_DWORD *)v3 + 22), (struct tagWND *)v3[12]) )
      {
        HIDWORD(v155) = 0;
        v112 = (_QWORD *)v3[12];
        if ( v112 )
          *(_QWORD *)&v156 = *v112;
        else
          *(_QWORD *)&v156 = 0LL;
        DWORD2(v155) = *((_DWORD *)v3 + 22);
        *(_QWORD *)&v155 = v3[9];
        v154[1] = v3[10];
        v154[0] = v135;
        *((_QWORD *)&v156 + 1) = v98;
        xxxCallHook(0LL, 1LL, (__int64)v154, 12);
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v157);
      FreeDelayedHooks();
      *((_DWORD *)PtiCurrent(v114, v113) + 401) = v73;
LABEL_99:
      v11 = v136;
LABEL_100:
      v65 = *((_DWORD *)v3 + 17);
      if ( (v65 & 0x101) == 0x100 )
      {
        HIDWORD(v154[0]) = 0;
        v156 = 0LL;
        *((_DWORD *)v3 + 17) = v65 | 1;
        if ( (v65 & 4) == 0 )
        {
          v66 = 33;
          if ( (v65 & 0x400) != 0 )
            v66 = 289;
          LODWORD(v154[0]) = v66;
          v154[1] = v3[4];
          *(_QWORD *)&v155 = v3[5];
          *((_QWORD *)&v155 + 1) = v135;
          Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v153, v3[12]);
          xxxInterSendMsgEx(
            (struct tagWND *)v3[12],
            *((_DWORD *)v3 + 22),
            0LL,
            0LL,
            0,
            v3[6],
            (__int64)v154,
            1,
            *((_DWORD *)v3 + 17) & 0x10000);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v153, v67);
        }
      }
      if ( !v11 )
        Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v63);
      v68 = v151;
      *((_QWORD *)a1 + 69) = v151;
      v69 = v152;
      v70 = (unsigned int *)*((_QWORD *)v152 + 61);
      v71 = *v70;
      if ( v68 )
        v72 = v71 | 2;
      else
        v72 = v71 & 0xFFFFFFFD;
      *v70 = v72;
      v115 = (unsigned int *)*((_QWORD *)v69 + 61);
      v116 = *v115;
      if ( (_DWORD)v143 )
        v117 = v116 | 8;
      else
        v117 = v116 & 0xFFFFFFF7;
      *v115 = v117;
      if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline(
                           v115,
                           v69,
                           v68,
                           v64) )
      {
        if ( *((_DWORD *)v3 + 22) == 255 )
        {
          LOBYTE(v118) = 18;
          v119 = HMValidateHandleNoSecure(v3[10], v118);
          if ( v119 )
          {
            if ( *(struct tagTHREADINFO **)(v119 + 16) == a1 )
            {
              v120 = UnlinkHidData(a1, (struct tagHIDDATA *)v119, 0LL);
              if ( v120 )
                FreeHidData((__int64)v120);
            }
            else
            {
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4430LL);
            }
          }
        }
      }
      goto LABEL_166;
    }
    *(_OWORD *)v154 = 0LL;
    v155 = 0LL;
    *(_QWORD *)&v156 = 0LL;
    v138 = 0LL;
    v147 = 0LL;
    v137 = 0LL;
    *(_QWORD *)&v148 = 0LL;
    v36 = (__int64 *)v3[10];
    v140 = v36;
    v37 = v36[2];
    v38 = *(_DWORD *)(*v36 + 48);
    v142 = v38;
    v144 = *((_QWORD *)a1 + 196);
    switch ( v38 )
    {
      case 2:
        goto LABEL_43;
      case 7:
        if ( v37 )
        {
          *(_OWORD *)v154 = *(_OWORD *)v37;
          v155 = *(_OWORD *)(v37 + 16);
          *(_QWORD *)&v156 = *(_QWORD *)(v37 + 32);
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process((unsigned int)(v38 - 7));
          if ( CurrentProcessWin32Process )
            CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          if ( (((unsigned __int16)(*((_DWORD *)v3 + 29) >> 8) ^ (unsigned __int16)(*(_DWORD *)(CurrentProcessWin32Process
                                                                                              + 268) >> 8)) & 0x1FF) != 0 )
          {
            LogicalToPhysicalDPIPoint(v154, v154, *((unsigned int *)v3 + 29), 0LL);
            v48 = PsGetCurrentProcessWin32Process(v47);
            if ( v48 )
              v48 &= -(__int64)(*(_QWORD *)v48 != 0LL);
            PhysicalToLogicalDPIPoint(v154, v154, *(unsigned int *)(v48 + 268), 0LL);
          }
        }
        goto LABEL_44;
      case 10:
        goto LABEL_43;
      case 13:
        InputTraceLogging::Keyboard::ProcessLowLevelHook();
        if ( v37 )
        {
          *(_OWORD *)v154 = *(_OWORD *)v37;
          *(_QWORD *)&v155 = *(_QWORD *)(v37 + 16);
          if ( *((_DWORD *)v36 + 7) != -1
            && !UIPrivilegeIsolation::CheckAccess(
                  (UIPrivilegeIsolation *)((char *)v36 + 28),
                  (const struct tagUIPI_INFO *)(*((_QWORD *)a1 + 58) + 872LL),
                  v45) )
          {
            LODWORD(v154[1]) |= 2u;
          }
        }
        break;
      case 14:
        InputTraceLogging::Mouse::HandleLowLevelHook();
        if ( v37 )
        {
          *(_OWORD *)v154 = *(_OWORD *)v37;
          v155 = *(_OWORD *)(v37 + 16);
          if ( *((_DWORD *)v36 + 7) != -1
            && !UIPrivilegeIsolation::CheckAccess(
                  (UIPrivilegeIsolation *)((char *)v36 + 28),
                  (const struct tagUIPI_INFO *)(*((_QWORD *)a1 + 58) + 872LL),
                  v44) )
          {
            HIDWORD(v154[1]) |= 2u;
          }
        }
        break;
      default:
        UserSetLastError(87);
LABEL_43:
        v37 = 0LL;
LABEL_44:
        v139 = (struct tagHOOK *)*v36;
        Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(v146, (__int64)a1, (__int64)v139);
        if ( (*((_DWORD *)v139 + 16) & 0x2000) != 0 )
        {
          v40 = *(_QWORD *)&WPP_GLOBAL_Control;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
            || (LOBYTE(v40) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            LOBYTE(v40) = 0;
          }
          v133 = v40;
          v134 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v40 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v41 = W32GetUserSessionState(v40, v39);
            LOBYTE(v42) = v134;
            LOBYTE(v43) = v133;
            WPP_RECORDER_AND_TRACE_SF_d(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v43,
              v42,
              *(_QWORD *)(v41 + 69416),
              4,
              5,
              10,
              (__int64)&WPP_45eb214c783f3d45e2f167060f0951f6_Traceguids,
              v38);
          }
        }
        if ( (*((_DWORD *)v3 + 17) & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4132LL);
        v49 = v154;
        if ( !v37 )
          v49 = (__int64 *)v140[2];
        v135 = xxxCallHook2((__int64)v139, *((unsigned int *)v140 + 2), v3[9], (__int64)v49, 0);
        if ( (unsigned int)(v38 - 13) <= 1 )
        {
          *((_QWORD *)a1 + 193) = v147;
          *((_DWORD *)a1 + 388) = (_DWORD)v138;
          *(_QWORD *)((char *)a1 + 1556) = v148;
          *((_DWORD *)a1 + 391) = v137;
          *((_QWORD *)a1 + 196) = v144;
        }
        v50 = 131076LL;
        if ( (*((_DWORD *)v3 + 17) & 0x20004) == 0x20004 )
        {
          v51 = v139;
          if ( (*((_DWORD *)v139 + 16) & 0x2000) != 0 )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
              || (v52 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v52 = 0;
            }
            v53 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v52 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v54 = *((_DWORD *)v139 + 12);
              v55 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v139);
              LOBYTE(v56) = v53;
              LOBYTE(v57) = v52;
              WPP_RECORDER_AND_TRACE_SF_d(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v57,
                v56,
                *(_QWORD *)(v55 + 69416),
                4,
                5,
                11,
                (__int64)&WPP_45eb214c783f3d45e2f167060f0951f6_Traceguids,
                v54);
              v38 = v142;
              v51 = v139;
            }
            DeBoostHook(v51);
          }
        }
        if ( (*((_DWORD *)v3 + 17) & 5) == 0 && v37 )
        {
          v58 = v38 - 7;
          if ( v58 )
          {
            v59 = v58 - 6;
            if ( v59 )
            {
              if ( v59 == 1 )
              {
                *(_OWORD *)v37 = *(_OWORD *)v154;
                *(_OWORD *)(v37 + 16) = v155;
              }
            }
            else
            {
              *(_OWORD *)v37 = *(_OWORD *)v154;
              *(_QWORD *)(v37 + 16) = v155;
            }
          }
          else
          {
            v60 = PsGetCurrentProcessWin32Process(v50);
            if ( v60 )
              v60 &= -(__int64)(*(_QWORD *)v60 != 0LL);
            v61 = *(_DWORD *)(v60 + 268) >> 8;
            LOWORD(v61) = (*((_DWORD *)v3 + 29) >> 8) ^ v61;
            if ( (v61 & 0x1FF) != 0 )
            {
              v62 = PsGetCurrentProcessWin32Process(v61);
              if ( v62 )
                v62 &= -(__int64)(*(_QWORD *)v62 != 0LL);
              LogicalToPhysicalDPIPoint(v154, v154, *(unsigned int *)(v62 + 268), 0LL);
              PhysicalToLogicalDPIPoint(v154, v154, *((unsigned int *)v3 + 29), 0LL);
            }
            *(_OWORD *)v37 = *(_OWORD *)v154;
            *(_OWORD *)(v37 + 16) = v155;
            *(_QWORD *)(v37 + 32) = v156;
          }
        }
        Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>((ULONG_PTR)v146);
        goto LABEL_99;
    }
    v147 = *((_QWORD *)a1 + 193);
    LODWORD(v138) = *((_DWORD *)a1 + 388);
    *(_QWORD *)&v148 = *(_QWORD *)((char *)a1 + 1556);
    LODWORD(v137) = *((_DWORD *)a1 + 391);
    *((_QWORD *)a1 + 193) = *(__int64 *)((char *)v36 + 28);
    *((_DWORD *)a1 + 388) = *((_DWORD *)v36 + 9);
    *(_QWORD *)((char *)a1 + 1556) = v36[5];
    *((_DWORD *)a1 + 391) = *((_DWORD *)v36 + 12);
    *((_QWORD *)a1 + 196) = v154;
    goto LABEL_44;
  }
  if ( !v11 )
    Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, v3[12]);
  if ( (*v10 & 0x400) != 0 )
  {
    v19 = PtiCurrent(v16, v15);
    v20 = (_DWORD *)*((_QWORD *)v19 + 61);
    v21 = *v20 & 8;
    *v20 |= 4u;
    **((_DWORD **)v19 + 61) |= 8u;
    v22 = *((unsigned int *)v3 + 22);
    if ( (_DWORD)v22 == 576 || (_DWORD)v22 == 281 )
    {
      v25 = (unsigned __int8)MessageTable[(unsigned __int16)v22];
      v26 = gapfnScSendMessage[v25];
      v27 = W32GetUserSessionState(v25, v20);
      ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, _QWORD, int, _QWORD))v26)(
        v3[12],
        *((unsigned int *)v3 + 22),
        v3[5],
        v3[7],
        v3[4],
        *(_QWORD *)(*(_QWORD *)(v27 + 19928) + 752LL),
        1,
        0LL);
    }
    else
    {
      v23 = W32GetUserSessionState(v22, v20);
      SfnDWORD(
        (__int64 *)v3[12],
        *((unsigned int *)v3 + 22),
        v3[5],
        v3[7],
        v3[4],
        *(_QWORD *)(*(_QWORD *)(v23 + 19928) + 752LL));
    }
    **((_DWORD **)v19 + 61) &= ~4u;
    v28 = (unsigned int *)*((_QWORD *)v19 + 61);
    v29 = *v28;
    if ( v21 )
      v30 = v29 | 8;
    else
      v30 = v29 & 0xFFFFFFF7;
    *v28 = v30;
    v11 = v136;
  }
  else
  {
    v31 = (__int64 *)v3[12];
    v32 = 0LL;
    if ( v31 )
      v32 = *v31;
    ((void (__fastcall *)(__int64, _QWORD, __int64, __int64))v3[4])(v32, *((unsigned int *)v3 + 22), v3[5], v3[7]);
  }
  if ( !v11 )
    Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v24);
LABEL_166:
  v130 = v141;
  EtwTraceEndRetrieveSendMessage(v141);
  v2 = *((unsigned int *)v3 + 17);
  LODWORD(v2) = v2 & 0xFFFFBFFF;
  *((_DWORD *)v3 + 17) = v2;
  if ( (v2 & 8) != 0 )
  {
    UnlinkSendListSms(v130, v2, v131, v132);
  }
  else if ( (v2 & 1) == 0 )
  {
    v3[7] = v135;
    v2 = (unsigned int)v2 | 1;
    *((_DWORD *)v3 + 17) = v2;
    if ( v136 )
      SetWakeBit((__int64)v136, 512LL);
  }
LABEL_3:
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v2);
}
