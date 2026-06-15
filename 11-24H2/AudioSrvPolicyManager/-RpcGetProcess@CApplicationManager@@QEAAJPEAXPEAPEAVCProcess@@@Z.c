/*
 * XREFs of ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0
 * Callers:
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x180004960 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180005A00 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180005FC0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     PbmGetSoundLevel @ 0x180019300 (PbmGetSoundLevel.c)
 *     PbmRegisterAppManagerNotification @ 0x18001A200 (PbmRegisterAppManagerNotification.c)
 *     PbmCastingAppStateChanged @ 0x18003B190 (PbmCastingAppStateChanged.c)
 *     PbmIsPlaying @ 0x18003B2F0 (PbmIsPlaying.c)
 *     PbmPlayToStreamStateChanged @ 0x18003B450 (PbmPlayToStreamStateChanged.c)
 *     PbmRegisterAppClosureNotification @ 0x18003B560 (PbmRegisterAppClosureNotification.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x18003B5D0 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmSetScreenReaderState @ 0x18003B870 (PbmSetScreenReaderState.c)
 *     PbmSetSmtcSubscriptionState @ 0x18003B960 (PbmSetSmtcSubscriptionState.c)
 *     PbmUnregisterAppClosureNotification @ 0x18003BB10 (PbmUnregisterAppClosureNotification.c)
 *     PbmUnregisterAppManagerNotification @ 0x18003BBC0 (PbmUnregisterAppManagerNotification.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x18003BC20 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x180005660 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008660 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008880 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A130 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000DA10 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180013630 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x180013F3C (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180014C90 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800176E0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180018D34 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180019404 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001B9E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001BB58 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     GetAssignedAccessTypeForUser @ 0x18001BFB4 (GetAssignedAccessTypeForUser.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001D798 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001E180 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001F850 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset @ 0x18001F958 (wil--details--lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___--reset.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206BC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800212A8 (memset_0.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 *     ??0CProcess@@QEAA@XZ @ 0x180036168 (--0CProcess@@QEAA@XZ.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180036580 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     ?ReadBackgroundAudioPlaybackCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x1800389AC (-ReadBackgroundAudioPlaybackCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x180038A58 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x180038BD4 (-ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x180038C6C (-ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?ReadVoipCallCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x180038D08 (-ReadVoipCallCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180039390 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180039B14 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CApplicationManager::RpcGetProcess(CApplicationManager *this, void *a2, struct CProcess **a3)
{
  struct CProcess **v3; // r14
  CApplicationManager *v5; // rsi
  PSID v6; // r15
  RPC_STATUS v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  signed __int32 *v11; // rdx
  signed __int32 i; // eax
  struct _RTL_CRITICAL_SECTION *v14; // r12
  unsigned int v15; // ebx
  _QWORD *v16; // rcx
  signed __int32 *v17; // rdx
  signed __int32 j; // eax
  unsigned int v19; // eax
  HANDLE CurrentThread; // rax
  const char *v21; // r9
  unsigned int v22; // eax
  char *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _WORD *v26; // rsi
  void *v27; // rdi
  HLOCAL v28; // r14
  int InformationProcess; // eax
  signed int v30; // eax
  signed int v31; // r13d
  bool v32; // r15
  int v33; // r13d
  HANDLE v34; // r14
  const char *v35; // r9
  unsigned int v36; // r14d
  unsigned __int16 *v37; // r13
  HLOCAL v38; // r14
  int AssignedAccessTypeForUser; // eax
  const char *v40; // r9
  unsigned int v41; // r15d
  PSID *v42; // r15
  int v43; // r13d
  const char *v44; // r9
  signed int v45; // eax
  bool v46; // sf
  signed int v47; // eax
  bool v48; // sf
  CProcess *v49; // rax
  int LastError; // ebx
  HLOCAL v51; // rcx
  HLOCAL v52; // rcx
  HANDLE v53; // rax
  const char *v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 v57; // r9
  unsigned __int16 **v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rcx
  _WORD *v61; // rax
  DWORD v62; // r15d
  int v63; // eax
  unsigned int PackageClaims; // eax
  CApplicationManager *v65; // rcx
  unsigned int v66; // eax
  int v67; // eax
  CApplicationManager *v68; // rcx
  unsigned int v69; // r14d
  int v70; // eax
  CApplicationManager *v71; // rcx
  HLOCAL v72; // rcx
  int v73; // eax
  CApplicationManager *v74; // rcx
  HLOCAL v75; // rcx
  int v76; // eax
  LONG v77; // eax
  bool v78; // sf
  DWORD v79; // r14d
  const char *v80; // r9
  int v81; // eax
  unsigned int v82; // r15d
  const char *v83; // r9
  HLOCAL v84; // rcx
  CProcess *v85; // r15
  volatile int *v86; // rdx
  ATL::CAtlException *v87; // r13
  int v88; // eax
  RTL_SRWLOCK *v89; // r15
  volatile int *v90; // rdx
  ATL::CAtlException *v91; // rbx
  __int64 v92; // [rsp+0h] [rbp-328h] BYREF
  PDWORD ReturnLength; // [rsp+20h] [rbp-308h]
  unsigned __int16 *p_Sid; // [rsp+28h] [rbp-300h]
  HANDLE TargetHandle; // [rsp+30h] [rbp-2F8h]
  unsigned __int16 *v96; // [rsp+38h] [rbp-2F0h]
  char v97; // [rsp+B0h] [rbp-278h] BYREF
  char v98; // [rsp+B1h] [rbp-277h]
  struct CProcess *v99; // [rsp+B8h] [rbp-270h] BYREF
  bool v100; // [rsp+C0h] [rbp-268h]
  void *TokenHandle; // [rsp+C8h] [rbp-260h] BYREF
  HLOCAL v102; // [rsp+D0h] [rbp-258h] BYREF
  HANDLE hObject; // [rsp+D8h] [rbp-250h] BYREF
  PSID Sid; // [rsp+E0h] [rbp-248h] BYREF
  int v105; // [rsp+E8h] [rbp-240h] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+ECh] [rbp-23Ch] BYREF
  char *v107; // [rsp+F0h] [rbp-238h] BYREF
  ULONG TokenInformationLength[2]; // [rsp+F8h] [rbp-230h] BYREF
  HLOCAL SidSubAuthorityCount; // [rsp+100h] [rbp-228h] BYREF
  unsigned int Pid; // [rsp+108h] [rbp-220h] BYREF
  HLOCAL v111; // [rsp+110h] [rbp-218h] BYREF
  int v112; // [rsp+118h] [rbp-210h] BYREF
  unsigned int v113; // [rsp+11Ch] [rbp-20Ch] BYREF
  HLOCAL hMem; // [rsp+120h] [rbp-208h]
  int TokenInformation; // [rsp+128h] [rbp-200h] BYREF
  int v116; // [rsp+12Ch] [rbp-1FCh] BYREF
  BOOL v117; // [rsp+130h] [rbp-1F8h]
  int v118; // [rsp+134h] [rbp-1F4h] BYREF
  int v119; // [rsp+138h] [rbp-1F0h] BYREF
  unsigned int v120; // [rsp+13Ch] [rbp-1ECh] BYREF
  BOOL v121; // [rsp+140h] [rbp-1E8h]
  DWORD v122; // [rsp+144h] [rbp-1E4h] BYREF
  unsigned __int16 *v123; // [rsp+148h] [rbp-1E0h]
  PSRWLOCK SRWLock; // [rsp+150h] [rbp-1D8h] BYREF
  HLOCAL v125; // [rsp+158h] [rbp-1D0h]
  _WORD *v126; // [rsp+160h] [rbp-1C8h]
  struct CProcess **v127; // [rsp+168h] [rbp-1C0h]
  HANDLE v128; // [rsp+170h] [rbp-1B8h] BYREF
  CApplicationManager *v129; // [rsp+178h] [rbp-1B0h]
  void *v130; // [rsp+180h] [rbp-1A8h]
  struct _RTL_CRITICAL_SECTION *v131; // [rsp+188h] [rbp-1A0h]
  CApplicationManager *v132; // [rsp+190h] [rbp-198h]
  struct CProcess **v133; // [rsp+198h] [rbp-190h]
  char *v134; // [rsp+1A0h] [rbp-188h]
  CProcess *v135; // [rsp+1A8h] [rbp-180h]
  ATL::CAtlException *v136[3]; // [rsp+1B0h] [rbp-178h] BYREF
  char v137; // [rsp+1C8h] [rbp-160h]
  WCHAR packageFamilyName[2]; // [rsp+1D0h] [rbp-158h] BYREF
  char v139[140]; // [rsp+1D4h] [rbp-154h] BYREF
  WCHAR packageRelativeApplicationId[2]; // [rsp+260h] [rbp-C8h] BYREF
  char v141[140]; // [rsp+264h] [rbp-C4h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+328h] [rbp+0h]

  v3 = a3;
  v127 = a3;
  v133 = a3;
  v5 = g_ApplicationManager;
  v129 = g_ApplicationManager;
  v132 = g_ApplicationManager;
  v6 = 0LL;
  *a3 = 0LL;
  Pid = 0;
  v7 = I_RpcBindingInqLocalClientPID(a2, &Pid);
  v8 = v7;
  if ( v7 > 0 )
    v8 = (unsigned __int16)v7 | 0x80070000;
  if ( (v8 & 0x80000000) != 0 )
  {
    if ( v8 == -2147023171 )
      return 2147944125LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x317,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)v8);
    return v8;
  }
  v9 = Pid;
  v99 = 0LL;
  SRWLock = (PSRWLOCK)((char *)v5 + 120);
  AcquireSRWLockShared((PSRWLOCK)v5 + 15);
  v10 = (_QWORD *)*((_QWORD *)v5 + 16);
  while ( v10 )
  {
    v11 = (signed __int32 *)v10[2];
    v10 = (_QWORD *)*v10;
    if ( !v11[104] && v11[40] == v9 )
    {
      for ( i = v11[5]; i != 0x7FFFFFFF; i = v11[5] )
      {
        if ( i == _InterlockedCompareExchange(v11 + 5, i + 1, i) )
          break;
      }
      v99 = (struct CProcess *)v11;
      break;
    }
  }
  if ( v5 != (CApplicationManager *)-120LL )
    ReleaseSRWLockShared((PSRWLOCK)v5 + 15);
  if ( v99 )
    goto LABEL_14;
  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 32);
  v131 = (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 32));
  v134 = (char *)v5 + 32;
  v15 = Pid;
  v99 = 0LL;
  AcquireSRWLockShared((PSRWLOCK)v5 + 15);
  v16 = (_QWORD *)*((_QWORD *)v5 + 16);
  while ( v16 )
  {
    v17 = (signed __int32 *)v16[2];
    v16 = (_QWORD *)*v16;
    if ( !v17[104] && v17[40] == v15 )
    {
      for ( j = v17[5]; j != 0x7FFFFFFF; j = v17[5] )
      {
        if ( j == _InterlockedCompareExchange(v17 + 5, j + 1, j) )
          break;
      }
      v99 = (struct CProcess *)v17;
      break;
    }
  }
  if ( v5 != (CApplicationManager *)-120LL )
    ReleaseSRWLockShared((PSRWLOCK)v5 + 15);
  if ( v99 )
    goto LABEL_295;
  v19 = RpcImpersonateClient(a2);
  if ( v19 )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x328,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  (const char *)v19,
                  (unsigned int)ReturnLength);
    if ( v5 == (CApplicationManager *)-32LL )
    {
LABEL_150:
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v99);
      return (unsigned int)LastError;
    }
LABEL_149:
    LeaveCriticalSection(v14);
    goto LABEL_150;
  }
  v98 = 1;
  TokenHandle = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x32C,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v21);
    goto LABEL_153;
  }
  v113 = 0;
  v120 = 0;
  v102 = 0LL;
  v111 = 0LL;
  v22 = GetTokenInformation(TokenHandle, &v111, &v113, &v102, &v120);
  if ( v22 )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x332,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  (const char *)v22,
                  (unsigned int)ReturnLength);
    v51 = v102;
    if ( !v102 )
      goto LABEL_157;
    goto LABEL_156;
  }
  v23 = (char *)OpenProcess(0x101000u, 0, Pid);
  v107 = v23;
  if ( !v23 && GetLastError() == 5 )
  {
    v53 = OpenProcess(0x100400u, 0, Pid);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v107,
      v53);
    v23 = v107;
    if ( (unsigned __int64)(v107 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x342,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        v54);
  }
  v121 = 0;
  TokenInformation = 0;
  v122 = 0;
  if ( GetTokenInformation(TokenHandle, TokenUIAccess, &TokenInformation, 4u, &v122) )
    v121 = TokenInformation != 0;
  v128 = (HANDLE)-1LL;
  v26 = 0LL;
  v126 = 0LL;
  v27 = 0LL;
  v125 = 0LL;
  TokenInformationLength[0] = 0;
  hMem = 0LL;
  v28 = 0LL;
  SidSubAuthorityCount = 0LL;
  Sid = 0LL;
  if ( !v23 )
    goto LABEL_165;
  InformationProcess = NtQueryInformationProcess(v23, ProcessImageFileName, 0LL, 0, TokenInformationLength);
  if ( (int)(InformationProcess + 0x80000000) >= 0 && InformationProcess != -1073741820 )
    goto LABEL_34;
  v37 = (unsigned __int16 *)LocalAlloc(0x40u, TokenInformationLength[0]);
  hMem = v37;
  if ( !v37 )
  {
    v31 = -2147024882;
    CoTaskMemFree(0LL);
    CoTaskMemFree(0LL);
    LocalFree(hMem);
LABEL_64:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids,
        (unsigned int)v31);
    }
    AudPolicyLogError("GetProcessModuleNameAndAppId", 352, v31);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x358,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v31);
    if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v23);
    if ( v102 )
      LocalFree(v102);
    if ( v111 )
      LocalFree(v111);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    RpcRevertToSelf();
    if ( v14 )
      LeaveCriticalSection(v14);
    return (unsigned int)v31;
  }
  InformationProcess = NtQueryInformationProcess(
                         v23,
                         ProcessImageFileName,
                         v37,
                         TokenInformationLength[0],
                         TokenInformationLength);
  if ( InformationProcess < 0 )
  {
LABEL_34:
    RtlSetLastWin32ErrorAndNtStatusFromNtStatus(InformationProcess);
    v30 = GetLastError();
    v31 = v30;
    if ( v30 > 0 )
      v31 = (unsigned __int16)v30 | 0x80070000;
    goto LABEL_36;
  }
  v57 = (unsigned __int64)v37[1] >> 1;
  p_Sid = (unsigned __int16 *)&SidSubAuthorityCount;
  v31 = _AllocStringWorker<CTCoAllocPolicy>(v56, v55, *((_QWORD *)v37 + 1), v57);
  if ( v31 < 0 )
    goto LABEL_172;
  v28 = SidSubAuthorityCount;
  if ( !SidSubAuthorityCount )
  {
LABEL_165:
    p_Sid = (unsigned __int16 *)&SidSubAuthorityCount;
    v31 = _AllocStringWorker<CTCoAllocPolicy>(v25, v24, &unk_1800537F0, 0LL);
    if ( v31 >= 0 )
    {
      v28 = SidSubAuthorityCount;
      goto LABEL_167;
    }
LABEL_172:
    v28 = SidSubAuthorityCount;
    goto LABEL_36;
  }
LABEL_167:
  CallerIdentity::GetProcessAppId(v23, &Sid, v58);
  v61 = Sid;
  if ( Sid )
  {
LABEL_170:
    v27 = v28;
    v125 = v28;
    v26 = v61;
    v126 = v61;
    CoTaskMemFree(0LL);
    CoTaskMemFree(0LL);
    LocalFree(hMem);
    goto LABEL_37;
  }
  p_Sid = (unsigned __int16 *)&Sid;
  v31 = _AllocStringWorker<CTCoAllocPolicy>(v60, v59, &unk_1800537F0, 0LL);
  if ( v31 >= 0 )
  {
    v61 = Sid;
    goto LABEL_170;
  }
  v6 = Sid;
LABEL_36:
  CoTaskMemFree(v28);
  CoTaskMemFree(v6);
  LocalFree(hMem);
  if ( v31 < 0 )
    goto LABEL_64;
LABEL_37:
  v105 = 0;
  hObject = 0LL;
  Sid = 0LL;
  SidSubAuthorityCount = 0LL;
  if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 1LL, &v105, &SidSubAuthorityCount, &Sid) < 0
    || (LODWORD(hMem) = 1, (unsigned int)(v105 - 65537) > 1) )
  {
    LODWORD(hMem) = 0;
  }
  v105 = 0;
  Sid = 0LL;
  SidSubAuthorityCount = 0LL;
  v32 = (int)AppModelPolicy_GetPolicy_Internal(-6LL, 14LL, &v105, &SidSubAuthorityCount, &Sid) >= 0 && v105 == 917505;
  v100 = v32;
  v33 = 0;
  TokenInformationLength[0] = 0;
  v112 = 0;
  v105 = 0;
  v119 = 0;
  v118 = 0;
  LOBYTE(v117) = 0;
  if ( *v26 )
  {
    v34 = hObject;
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      v62 = GetLastError();
      CloseHandle(v34);
      SetLastError(v62);
      v32 = v100;
    }
    hObject = 0LL;
    if ( !OpenProcessToken(v23, 8u, &hObject) )
    {
      v36 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x374,
              (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
              v35);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      CoTaskMemFree(v26);
      if ( v27 )
        CoTaskMemFree(v27);
      if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v23);
      if ( v102 )
        LocalFree(v102);
      if ( v111 )
        LocalFree(v111);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      RpcRevertToSelf();
      if ( v14 )
        LeaveCriticalSection(v14);
      return v36;
    }
    v63 = RtlQueryTokenHostIdAsUlong64(hObject, &v128);
    if ( v63 < 0 )
    {
      LastError = wil::details::in1diag3::Return_NtStatus(
                    retaddr,
                    (void *)0x375,
                    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                    (const char *)(unsigned int)v63,
                    (int)ReturnLength);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v26);
      if ( !v27 )
        goto LABEL_180;
      goto LABEL_179;
    }
  }
  if ( v32 && v113 )
  {
    Sid = 0LL;
    v96 = 0LL;
    TargetHandle = &Sid;
    p_Sid = 0LL;
    ReturnLength = 0LL;
    PackageClaims = RtlQueryPackageClaims(-6LL, 0LL, 0LL, 0LL);
    if ( PackageClaims )
    {
      LastError = wil::details::in1diag3::Return_Win32(
                    retaddr,
                    (void *)0x37C,
                    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                    (const char *)PackageClaims,
                    (unsigned int)ReturnLength);
      goto LABEL_185;
    }
    v66 = (unsigned int)Sid >> 4;
    LOBYTE(v66) = ((unsigned __int8)Sid & 0x10) != 0;
    v117 = v66;
    v67 = CApplicationManager::ReadVoipCallCapability(v65, (void *)0xFFFFFFFFFFFFFFFALL, (int *)TokenInformationLength);
    v69 = v67;
    if ( v67 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x381,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v67);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v26);
      if ( v27 )
        CoTaskMemFree(v27);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v107);
      if ( v102 )
        LocalFree(v102);
      if ( v111 )
        LocalFree(v111);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
      wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v97);
      if ( !v14 )
        goto LABEL_196;
LABEL_195:
      LeaveCriticalSection(v14);
LABEL_196:
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v99);
      return v69;
    }
    v70 = CApplicationManager::ReadBackgroundAudioPlaybackCapability(v68, (void *)0xFFFFFFFFFFFFFFFALL, &v112, &v105);
    v69 = v70;
    if ( v70 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x386,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v70);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v26);
      if ( v27 )
        CoTaskMemFree(v27);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v107);
      if ( v102 )
        LocalFree(v102);
      v72 = v111;
      if ( v111 )
        goto LABEL_203;
      goto LABEL_204;
    }
    v73 = CApplicationManager::ReadBackgroundMediaRecordingCapability(v71, (void *)0xFFFFFFFFFFFFFFFALL, &v119);
    v69 = v73;
    if ( v73 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38A,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v73);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v26);
      if ( v27 )
        CoTaskMemFree(v27);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v107);
      v75 = v102;
      if ( v102 )
LABEL_210:
        LocalFree(v75);
LABEL_211:
      v72 = v111;
      if ( v111 )
LABEL_203:
        LocalFree(v72);
LABEL_204:
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
      wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v97);
      if ( !v14 )
        goto LABEL_196;
      goto LABEL_195;
    }
    v76 = CApplicationManager::ReadUserSigninSupportCapability(v74, (void *)0xFFFFFFFFFFFFFFFALL, &v118);
    v69 = v76;
    if ( v76 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38E,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v76);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v26);
      if ( v27 )
        CoTaskMemFree(v27);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v107);
      v75 = v102;
      if ( v102 )
        goto LABEL_210;
      goto LABEL_211;
    }
    v33 = TokenInformationLength[0];
  }
  if ( !v102 )
  {
    *(_DWORD *)packageFamilyName = 0;
    memset_0(v139, 0, 0x7EuLL);
    *(_DWORD *)packageRelativeApplicationId = 0;
    memset_0(v141, 0, 0x80uLL);
    TokenInformationLength[0] = 65;
    packageRelativeApplicationIdLength = 66;
    v77 = ParseApplicationUserModelId(
            v26,
            TokenInformationLength,
            packageFamilyName,
            &packageRelativeApplicationIdLength,
            packageRelativeApplicationId);
    v78 = v77 < 0;
    if ( v77 > 0 )
      v78 = 1;
    if ( !v78 )
    {
      Sid = 0LL;
      if ( (int)AppContainerDeriveSidFromMoniker(packageFamilyName, &Sid) >= 0 )
      {
        SidSubAuthorityCount = v102;
        if ( v102 )
        {
          v79 = GetLastError();
          LocalFree(SidSubAuthorityCount);
          SetLastError(v79);
        }
        v102 = 0LL;
        if ( !ConvertSidToStringSidW(Sid, (LPWSTR *)&v102) )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x39D,
                        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                        v80);
          if ( Sid )
            RtlFreeSid(Sid);
LABEL_185:
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
          CoTaskMemFree(v26);
          if ( !v27 )
          {
LABEL_180:
            wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v107);
            v51 = v102;
            if ( !v102 )
            {
LABEL_157:
              v52 = v111;
              if ( v111 )
                goto LABEL_152;
              goto LABEL_153;
            }
LABEL_156:
            LocalFree(v51);
            goto LABEL_157;
          }
LABEL_179:
          CoTaskMemFree(v27);
          goto LABEL_180;
        }
      }
      if ( Sid )
        RtlFreeSid(Sid);
    }
  }
  v98 = 0;
  RpcRevertToSelf();
  v38 = v111;
  AssignedAccessTypeForUser = GetAssignedAccessTypeForUser((unsigned __int16 *)v111);
  LODWORD(Sid) = AssignedAccessTypeForUser == 1;
  if ( !v32 || v112 )
  {
    v112 = 1;
  }
  else
  {
    v81 = CApplicationManager::ReadBackgroundAudioTaskCapability(
            (CApplicationManager *)(AssignedAccessTypeForUser == 1),
            hObject,
            &v112,
            &v105);
    v82 = v81;
    if ( v81 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B3,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v81);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v26);
      if ( v27 )
        CoTaskMemFree(v27);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v107);
      if ( v102 )
        LocalFree(v102);
      if ( v38 )
        LocalFree(v38);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
      wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v97);
      if ( v14 )
        LeaveCriticalSection(v14);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v99);
      return v82;
    }
  }
  v116 = 0;
  if ( v113 && !(unsigned int)CheckTokenCapability(TokenHandle, *((_QWORD *)v129 + 2), &v116) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3BF,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v83);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    CoTaskMemFree(v26);
    if ( v27 )
      CoTaskMemFree(v27);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v107);
    v84 = v102;
    if ( v102 )
      goto LABEL_245;
    goto LABEL_246;
  }
  TokenInformationLength[0] = 0;
  GetTokenInformation(TokenHandle, TokenIntegrityLevel, 0LL, 0, TokenInformationLength);
  if ( GetLastError() != 122 )
  {
    v41 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x3C7,
            (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
            v40);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    CoTaskMemFree(v26);
    if ( v27 )
      CoTaskMemFree(v27);
    if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v23);
    if ( v102 )
      LocalFree(v102);
    if ( v38 )
      LocalFree(v38);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    if ( v14 )
      LeaveCriticalSection(v14);
    return v41;
  }
  v42 = (PSID *)LocalAlloc(0x40u, TokenInformationLength[0]);
  if ( !v42 )
  {
    v43 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CA,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)0x8007000ELL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    CoTaskMemFree(v26);
    if ( v27 )
      CoTaskMemFree(v27);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v107);
    if ( v102 )
      LocalFree(v102);
    if ( v38 )
      LocalFree(v38);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
    wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v97);
    if ( !v14 )
      goto LABEL_131;
    goto LABEL_130;
  }
  if ( !GetTokenInformation(TokenHandle, TokenIntegrityLevel, v42, TokenInformationLength[0], TokenInformationLength) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3CC,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v44);
    LocalFree(v42);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    CoTaskMemFree(v26);
    if ( !v27 )
      goto LABEL_250;
    goto LABEL_249;
  }
  SidSubAuthorityCount = GetSidSubAuthorityCount(*v42);
  v45 = GetLastError();
  packageRelativeApplicationIdLength = v45;
  v46 = v45 < 0;
  if ( v45 > 0 )
  {
    v45 = (unsigned __int16)v45 | 0x80070000;
    packageRelativeApplicationIdLength = v45;
    v46 = v45 < 0;
  }
  if ( v46 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D1,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v45);
    LocalFree(v42);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    CoTaskMemFree(v26);
    if ( v27 )
      CoTaskMemFree(v27);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v107);
    if ( v102 )
      LocalFree(v102);
    if ( v38 )
      LocalFree(v38);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
    wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v97);
    if ( !v14 )
      goto LABEL_260;
    goto LABEL_259;
  }
  if ( SidSubAuthorityCount && *(_BYTE *)SidSubAuthorityCount )
  {
    LODWORD(SidSubAuthorityCount) = *GetSidSubAuthority(*v42, (unsigned __int8)(*(_BYTE *)SidSubAuthorityCount - 1));
    v47 = GetLastError();
    packageRelativeApplicationIdLength = v47;
    v48 = v47 < 0;
    if ( v47 > 0 )
    {
      v47 = (unsigned __int16)v47 | 0x80070000;
      packageRelativeApplicationIdLength = v47;
      v48 = v47 < 0;
    }
    if ( !v48 )
    {
      LODWORD(SidSubAuthorityCount) = (unsigned int)SidSubAuthorityCount < 0x2000;
      LocalFree(v42);
      v123 = (unsigned __int16 *)v102;
      packageRelativeApplicationIdLength = v113 != 0;
      v99 = 0LL;
      v49 = (CProcess *)operator new(0x318uLL, (const struct std::nothrow_t *)&std::nothrow);
      *(_QWORD *)TokenInformationLength = v49;
      v135 = v49;
      if ( !v49 )
      {
        v43 = -2147024882;
        goto LABEL_137;
      }
      v130 = v49;
      v85 = CProcess::CProcess(v49);
      v130 = v85;
      *(_QWORD *)TokenInformationLength = 0LL;
      v43 = CProcess::RuntimeClassInitialize(
              v85,
              v23,
              Pid,
              v120,
              (const unsigned __int16 *)v27,
              v26,
              v128,
              (const unsigned __int16 *)v38,
              packageRelativeApplicationIdLength,
              v123,
              (int)hMem,
              v100,
              v33,
              v112,
              v105,
              v119,
              v118,
              (int)Sid,
              v117,
              v116,
              (int)SidSubAuthorityCount);
      if ( v43 < 0 )
      {
        if ( v85 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v85);
        Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(TokenInformationLength);
LABEL_137:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F0,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)v43);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        CoTaskMemFree(v26);
        if ( v27 )
          CoTaskMemFree(v27);
        if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v23);
        if ( v102 )
          LocalFree(v102);
        if ( v38 )
          LocalFree(v38);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        if ( !v14 )
          goto LABEL_131;
LABEL_130:
        LeaveCriticalSection(v14);
LABEL_131:
        wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v99);
        return (unsigned int)v43;
      }
      if ( v85 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CProcess *)((char *)v85 + 20), v86);
      v99 = v85;
      if ( v85 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v85);
      Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(TokenInformationLength);
      *((_DWORD *)v99 + 115) = v121;
      v87 = v129;
      v88 = CApplicationManager::Register(v129, v99);
      LastError = v88;
      if ( v88 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F4,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)v88);
        goto LABEL_282;
      }
      v136[1] = v87;
      v136[2] = (ATL::CAtlException *)&v99;
      v137 = 1;
      v89 = SRWLock;
      v123 = (unsigned __int16 *)SRWLock;
      AcquireSRWLockExclusive(SRWLock);
      try
      {
        v130 = v89;
        SRWLock = (PSRWLOCK)v99;
        ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
          (char *)v87 + 128,
          &SRWLock);
        LastError = 0;
      }
      catch ( ATL::CAtlException *v136 )
      {
        v90 = (volatile int *)&v92;
        v91 = v136[0];
        if ( *(_DWORD *)v136[0] == -1073741571 )
          _o__resetstkoflw();
        LODWORD(Sid) = *(_DWORD *)v91;
        v38 = v111;
        v27 = v125;
        v26 = v126;
        LastError = (int)Sid;
        v14 = v131;
        v89 = (RTL_SRWLOCK *)v123;
        v87 = v132;
        v127 = v133;
      }
      if ( v89 )
        ReleaseSRWLockExclusive(v89);
      if ( LastError < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3FD,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)LastError);
        CApplicationManager::Unregister(v87, v99);
LABEL_282:
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
        CoTaskMemFree(v26);
        if ( !v27 )
        {
LABEL_250:
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v107);
          v84 = v102;
          if ( v102 )
LABEL_245:
            LocalFree(v84);
LABEL_246:
          if ( v38 )
          {
            v52 = v38;
LABEL_152:
            LocalFree(v52);
          }
LABEL_153:
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
          wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v97);
          if ( !v14 )
            goto LABEL_150;
          goto LABEL_149;
        }
LABEL_249:
        CoTaskMemFree(v27);
        goto LABEL_250;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((struct CProcess *)((char *)v99 + 20), v90);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v26);
      if ( v27 )
        CoTaskMemFree(v27);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v107);
      if ( v102 )
        LocalFree(v102);
      if ( v38 )
        LocalFree(v38);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
      wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v97);
      v3 = v127;
LABEL_295:
      if ( v14 )
        LeaveCriticalSection(v14);
LABEL_14:
      *v3 = v99;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D7,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v47);
    LocalFree(v42);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    CoTaskMemFree(v26);
    if ( v27 )
      CoTaskMemFree(v27);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v107);
    if ( v102 )
      LocalFree(v102);
    if ( v38 )
      LocalFree(v38);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
    wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v97);
    if ( !v14 )
    {
LABEL_260:
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v99);
      return packageRelativeApplicationIdLength;
    }
LABEL_259:
    LeaveCriticalSection(v14);
    goto LABEL_260;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3D2,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
    (const char *)0x8000FFFFLL);
  LocalFree(v42);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
  CoTaskMemFree(v26);
  if ( v27 )
    CoTaskMemFree(v27);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v107);
  if ( v102 )
    LocalFree(v102);
  if ( v38 )
    LocalFree(v38);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
  wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v97);
  if ( v14 )
    LeaveCriticalSection(v14);
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v99);
  return 2147549183LL;
}
