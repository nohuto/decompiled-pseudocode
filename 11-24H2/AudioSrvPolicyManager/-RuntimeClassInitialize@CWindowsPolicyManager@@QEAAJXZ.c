/*
 * XREFs of ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18002A830
 * Callers:
 *     ??$MakeAndInitialize@VCWindowsPolicyManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCWindowsPolicyManager@@@Z @ 0x180027A9C (--$MakeAndInitialize@VCWindowsPolicyManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCWindowsPol.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001B9E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800212A8 (memset_0.c)
 *     ??$Make@VCPlaybackManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPlaybackManager@@@12@XZ @ 0x18002781C (--$Make@VCPlaybackManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPlaybackManager@@@12@XZ.c)
 *     ??$Make@VCStreamClassPolicyManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCStreamClassPolicyManager@@@12@XZ @ 0x1800278C8 (--$Make@VCStreamClassPolicyManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCStreamClassPolicy.c)
 *     ??$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationManager@@@Z @ 0x18002794C (--$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationM.c)
 *     ??$MakeAndInitialize@VCDuckingManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCDuckingManager@@@Z @ 0x1800279F8 (--$MakeAndInitialize@VCDuckingManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCDuckingManager@@.c)
 *     ??1?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002849C (--1-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1?PolicyManager_FreeGetPolicyData@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180028560 (--1-$unique_storage@U-$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1-PolicyManager_F.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029EE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B05C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18002B08C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?reset@?$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18002B1E0 (-reset@-$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18003EA74 (-TS_ServiceStart@@YAXXZ.c)
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x180047EB4 (-InitializeAudioThreadpool@@YAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowsPolicyManager::RuntimeClassInitialize(CWindowsPolicyManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  const char *v4; // r9
  __int64 v5; // rdx
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  volatile int **v14; // rax
  volatile int *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  CApplicationManager *v19; // rax
  DWORD v20; // eax
  int Policy; // eax
  DWORD dwCreationFlags; // [rsp+20h] [rbp-59h]
  CApplicationManager *v23; // [rsp+30h] [rbp-49h] BYREF
  _QWORD Recipient[2]; // [rsp+38h] [rbp-41h] BYREF
  __int64 v25; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v26[4]; // [rsp+50h] [rbp-29h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+60h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = InitializeAudioThreadpool();
  v3 = v2;
  if ( v2 >= 0 )
  {
    g_WorkerEventPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
    if ( !g_WorkerEventPort )
    {
      v5 = 312LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v5,
               (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
               v4);
    }
    g_EventWorkerThreadHandle = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)EventWorkerThread, 0LL, 0, 0LL);
    if ( !g_EventWorkerThreadHandle )
    {
      v5 = 315LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v5,
               (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
               v4);
    }
    TS_ServiceStart();
    v23 = 0LL;
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CApplicationManager,CApplicationManager,>(&v23);
    v3 = v7;
    if ( v7 < 0 )
    {
      v8 = (unsigned int)v7;
      v9 = 320LL;
      goto LABEL_17;
    }
    v10 = Microsoft::WRL::Details::Make<CStreamClassPolicyManager,>(Recipient);
    v11 = *v10;
    *v10 = 0LL;
    v12 = g_StreamClassPolicyManager;
    g_StreamClassPolicyManager = v11;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = Recipient[0];
    if ( Recipient[0] )
    {
      Recipient[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( g_StreamClassPolicyManager )
    {
      v14 = (volatile int **)Microsoft::WRL::Details::Make<CPlaybackManager,>(Recipient);
      v15 = *v14;
      *v14 = 0LL;
      v16 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 4) = v15;
      if ( v16 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(
          v16,
          v15);
      v17 = Recipient[0];
      if ( Recipient[0] )
      {
        Recipient[0] = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(
          v17,
          v15);
      }
      if ( *((_QWORD *)this + 4) )
      {
        wil::com_ptr_t<CDuckingManager,wil::err_returncode_policy>::reset((char *)this + 40);
        v18 = Microsoft::WRL::Details::MakeAndInitialize<CDuckingManager,CDuckingManager,>((CDuckingManager **)this + 5);
        v3 = v18;
        if ( v18 >= 0 )
        {
          g_DuckingManager = (struct CDuckingManager *)*((_QWORD *)this + 5);
          v19 = v23;
          v23 = 0LL;
          g_ApplicationManager = v19;
          g_PlaybackManager = (struct CPlaybackManager *)*((_QWORD *)this + 4);
          memset_0(&spc, 0, sizeof(spc));
          if ( GetPwrCapabilities(&spc) && spc.spare2[2] )
          {
            g_bIsAoAcSystem = 1;
            Recipient[0] = LowPowerEpochNotificationCallback;
            Recipient[1] = 0LL;
            v20 = PowerSettingRegisterNotification(
                    &GUID_LOW_POWER_EPOCH,
                    2u,
                    Recipient,
                    &g_hLowPowerEpochNotificationHandle);
            if ( v20 )
              wil::details::in1diag3::_Log_Win32(
                retaddr,
                (void *)0x159,
                (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                (const char *)v20,
                dwCreationFlags);
          }
          else
          {
            g_bIsAoAcSystem = 0;
          }
          v26[0] = 1;
          v26[1] = 2;
          v25 = 0LL;
          Policy = PolicyManager_GetPolicy(L"AboveLock", L"ConfigureAudioOnLockScreen", v26, &v25);
          if ( Policy >= 0 )
          {
            if ( *(_DWORD *)(v25 + 8) == 1 )
            {
              if ( *(_DWORD *)(v25 + 16) == 1 )
              {
                *((_DWORD *)this + 13) |= 1u;
              }
              else if ( *(_DWORD *)(v25 + 16) == 2 )
              {
                *((_DWORD *)this + 13) |= 3u;
              }
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x15F,
              (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
              (const char *)(unsigned int)Policy,
              dwCreationFlags);
          }
          wil::details::unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>(&v25);
          v3 = 0;
          goto LABEL_39;
        }
        v8 = (unsigned int)v18;
        v9 = 328LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
          (const char *)v8);
LABEL_39:
        wil::com_ptr_t<CApplication,wil::err_returncode_policy>::~com_ptr_t<CApplication,wil::err_returncode_policy>((__int64 *)&v23);
        return v3;
      }
      v9 = 326LL;
    }
    else
    {
      v9 = 323LL;
    }
    v3 = -2147024882;
    v8 = 2147942414LL;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x135,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
