/*
 * XREFs of ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180012380
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180011B50 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180012D30 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180013A10 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x18007A4B0 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ??0CAudioSession@@IEAA@XZ @ 0x18000AFE8 (--0CAudioSession@@IEAA@XZ.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x18000C300 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800122A4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180013760 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ??$?RVCAudioSessionInstanceId@@@?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@QEBA_KAEBVCAudioSessionInstanceId@@@Z @ 0x180014940 (--$-RVCAudioSessionInstanceId@@@-$_Uhash_compare@VCAudioSessionInstanceId@@U-$hash@VCAudioSessio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x18001D850 (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x180026DC8 (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ??$emplace@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18002A934 (--$emplace@AEAVCAudioSessionInstanceId@@AEAV-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@w.c)
 *     ?IsLinkedToProcess@CAudioSession@@QEAA_NK@Z @ 0x180048000 (-IsLinkedToProcess@CAudioSession@@QEAA_NK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180048630 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18004F790 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C00A0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh@@@details@wil@@QEAA_NXZ @ 0x1800C3030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPrope.c)
 *     _lambda_66d1f1fb806334d7e1fc2b7285da9724_::operator() @ 0x1800C5E14 (_lambda_66d1f1fb806334d7e1fc2b7285da9724_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CAudioSessionManager::CreateAudioSession(
        union _RTL_RUN_ONCE *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        struct CAudioSession **a7)
{
  struct _RTL_CRITICAL_SECTION *v10; // r14
  struct _RTL_CRITICAL_SECTION *v11; // rdi
  CAudioSession *v12; // rbx
  int AudioSession; // eax
  DWORD LastError; // edi
  CAudioSession *v15; // rsi
  struct _RTL_CRITICAL_SECTION *v16; // rdi
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  const char *v20; // r9
  __int64 result; // rax
  DWORD v22; // ebx
  int v23; // esi
  char *v24; // rax
  char *v25; // rbx
  char *v26; // rax
  struct CAudioSession *v27; // rcx
  bool v28; // zf
  GUID v29; // xmm6
  __int64 v30; // rax
  int v31; // eax
  unsigned int v32; // ebx
  void *v33; // rdx
  unsigned int v34; // r8d
  const char *v35; // r9
  _QWORD *i; // rbx
  int v37; // eax
  unsigned int v38; // r12d
  __int64 v39; // rcx
  struct CAudioSession *v40; // rsi
  _QWORD *j; // rbx
  PVOID *v42; // rbx
  union _RTL_RUN_ONCE *v43; // rdx
  PVOID *Ptr; // rax
  union _RTL_RUN_ONCE v45; // rax
  _QWORD *v46; // rcx
  PVOID v47; // rcx
  struct CAudioSession *v48; // rsi
  __int64 v49; // rsi
  int v50; // r8d
  int v51; // r9d
  unsigned int v52; // eax
  int v53; // eax
  unsigned int v54; // esi
  int v55; // [rsp+20h] [rbp-138h]
  char v56; // [rsp+50h] [rbp-108h]
  struct CAudioSession *v57; // [rsp+58h] [rbp-100h] BYREF
  int v58; // [rsp+60h] [rbp-F8h]
  CAudioSession *v59; // [rsp+68h] [rbp-F0h] BYREF
  struct CAudioSession *v60; // [rsp+70h] [rbp-E8h] BYREF
  WINBOOL fPending; // [rsp+78h] [rbp-E0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-D8h] BYREF
  CAudioSessionManager *v63; // [rsp+88h] [rbp-D0h] BYREF
  int v64; // [rsp+90h] [rbp-C8h] BYREF
  struct CAudioSession **v65; // [rsp+98h] [rbp-C0h]
  _QWORD v66[4]; // [rsp+A0h] [rbp-B8h] BYREF
  char v67; // [rsp+C0h] [rbp-98h]
  CAudioSessionManager *v68; // [rsp+C8h] [rbp-90h]
  _QWORD *v69; // [rsp+D0h] [rbp-88h]
  char v70; // [rsp+D8h] [rbp-80h]
  union _RTL_RUN_ONCE *v71; // [rsp+E0h] [rbp-78h]
  int v72; // [rsp+E8h] [rbp-70h]
  GUID v73; // [rsp+F0h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v58 = a4;
  v65 = a7;
  v56 = 1;
  *a7 = 0LL;
  v10 = (struct _RTL_CRITICAL_SECTION *)&this[1];
  EnterCriticalSection((LPCRITICAL_SECTION)&this[1]);
  v11 = v10;
  lpCriticalSection = v10;
  v12 = 0LL;
  v60 = 0LL;
  v59 = 0LL;
  AudioSession = CAudioSessionManager::FindAudioSession((CAudioSessionManager *)this, a3, &v59);
  try
  {
    if ( AudioSession < 0 )
    {
      v15 = v59;
    }
    else
    {
      if ( v10 )
      {
        LastError = GetLastError();
        LeaveCriticalSection(v10);
        SetLastError(LastError);
      }
      lpCriticalSection = 0LL;
      v15 = v59;
      v16 = (struct _RTL_CRITICAL_SECTION *)((char *)v59 + 544);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v59 + 544));
      v63 = (CAudioSessionManager *)v16;
      if ( (*(unsigned int (__fastcall **)(__int64))(*((_QWORD *)v15 + 1) + 32LL))((__int64)v15 + 8) != 2 )
      {
        v17 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
        if ( !CAudioSession::IsLinkedToProcess(v15, v17) )
        {
          v18 = CAudioSession::RegisterOwnerProcess(v15, a2);
          v19 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xC7,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)v18,
              v55);
            if ( v16 )
              LeaveCriticalSection(v16);
            if ( v15 )
              (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v15 + 16LL))(v15);
            return v19;
          }
        }
        *((_QWORD *)v15 + 40) = GetTickCount64();
        CAudioSession::StartInactiveTimer(v15);
        v12 = v15;
        v60 = v15;
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v15 + 8LL))(v15);
      }
      if ( v16 )
        LeaveCriticalSection(v16);
      EnterCriticalSection(v10);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
        &lpCriticalSection,
        v10);
      v11 = lpCriticalSection;
    }
    if ( v15 )
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v12 )
    {
      if ( (v58 & 0x20) != 0 )
        *((_DWORD *)v12 + 102) = 1;
    }
    else
    {
      if ( v11 )
      {
        v22 = GetLastError();
        LeaveCriticalSection(v11);
        SetLastError(v22);
      }
      v11 = 0LL;
      lpCriticalSection = 0LL;
      v57 = 0LL;
      v23 = v58;
      if ( (v58 & 8) != 0 )
      {
        v24 = (char *)operator new(0x3E0uLL, (const struct std::nothrow_t *)&std::nothrow);
        v25 = v24;
        if ( v24 )
        {
          memset_0(v24, 0, 0x3E0uLL);
          CAudioSession::CAudioSession((CAudioSession *)v25);
          *(_QWORD *)v25 = &CPerStreamVolumeAudioSession::`vftable'{for `IInspectable'};
          *((_QWORD *)v25 + 1) = &CAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWeakReferenceSource,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>'};
          *((_QWORD *)v25 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::`vftable'{for `IWeakReferenceSource'};
          *((_QWORD *)v25 + 3) = &CAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>'};
          *((_QWORD *)v25 + 4) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
          *((_QWORD *)v25 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
          v25[920] = 1;
          *((_QWORD *)v25 + 116) = 0LL;
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v25 + 936), 0, 0);
          *((_DWORD *)v25 + 244) = 0;
          *((_QWORD *)v25 + 123) = 0LL;
        }
        else
        {
          v25 = 0LL;
        }
      }
      else
      {
        v26 = (char *)operator new(0x3D0uLL, (const struct std::nothrow_t *)&std::nothrow);
        v25 = v26;
        if ( v26 )
        {
          memset_0(v26, 0, 0x3D0uLL);
          CAudioSession::CAudioSession((CAudioSession *)v25);
          *(_QWORD *)v25 = &CPerEndpointVolumeAudioSession::`vftable'{for `IInspectable'};
          *((_QWORD *)v25 + 1) = &CPerEndpointVolumeAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWeakReferenceSource,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>'};
          *((_QWORD *)v25 + 2) = &CPerEndpointVolumeAudioSession::`vftable'{for `IWeakReferenceSource'};
          *((_QWORD *)v25 + 3) = &CPerEndpointVolumeAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>'};
          *((_QWORD *)v25 + 4) = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
          *((_QWORD *)v25 + 5) = &CPerEndpointVolumeAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
          *((_QWORD *)v25 + 115) = &CPerEndpointVolumeAudioSession::`vftable';
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v25 + 928), 0, 0);
          *((_QWORD *)v25 + 121) = 0LL;
        }
        else
        {
          v25 = 0LL;
        }
      }
      v27 = v57;
      v28 = v57 == 0LL;
      v57 = (struct CAudioSession *)v25;
      if ( !v28 )
        (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v27 + 16LL))(v27);
      if ( !v57 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x101,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)0x8007000ELL,
          v55);
        return 2147942414LL;
      }
      v29 = GUID_00000000_0000_0000_0000_000000000000;
      if ( (v23 & 4) == 0 && !(*(unsigned __int8 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 448LL))(a2) )
        v29 = *(GUID *)(*(__int64 (__fastcall **)(struct IAudioProcess *, GUID *, char *))(*(_QWORD *)a2 + 464LL))(
                         a2,
                         &v73,
                         (char *)a3 + 24);
      v30 = *(_QWORD *)v57;
      v73 = v29;
      v55 = v23;
      v31 = (*(__int64 (__fastcall **)(struct CAudioSession *, union _RTL_RUN_ONCE *, struct IAudioProcess *, struct CAudioSessionInstanceId *))(v30 + 168))(
              v57,
              this,
              a2,
              a3);
      v32 = v31;
      if ( v31 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x119,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v31,
          v23);
        (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v57 + 16LL))(v57);
        return v32;
      }
      EnterCriticalSection(v10);
      *(_QWORD *)&v73.Data1 = v10;
      v60 = 0LL;
      if ( (int)CAudioSessionManager::FindAudioSession((CAudioSessionManager *)this, a3, &v60) >= 0 )
      {
        v12 = v60;
      }
      else
      {
        std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::emplace<CAudioSessionInstanceId &,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy> &>(
          &this[6],
          v66,
          a3,
          &v57);
        v68 = (CAudioSessionManager *)this;
        v69 = v66;
        v70 = 1;
        v66[2] = this;
        v66[3] = &v57;
        v67 = 1;
        v63 = (CAudioSessionManager *)this;
        fPending = 0;
        if ( !InitOnceBeginInitialize(this + 37, 0, &fPending, 0LL) )
          wil::details::in1diag3::_Throw_GetLastError(retaddr, v33, v34, v35);
        if ( fPending )
        {
          v71 = this + 37;
          v72 = 4;
          lambda_66d1f1fb806334d7e1fc2b7285da9724_::operator()(&v63);
          InitOnceComplete(this + 37, 0, 0LL);
        }
        for ( i = this[36].Ptr; i; i = (_QWORD *)*i )
        {
          v37 = (*(__int64 (__fastcall **)(struct CAudioSession *, _QWORD))(*(_QWORD *)v57 + 152LL))(v57, i[1]);
          v38 = v37;
          if ( v37 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x12B,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)v37,
              v23);
            v40 = v57;
            for ( j = this[36].Ptr; j; j = (_QWORD *)*j )
              (*(void (__fastcall **)(struct CAudioSession *, _QWORD))(*(_QWORD *)v40 + 160LL))(v40, j[1]);
            v42 = (PVOID *)v66[0];
            v43 = (union _RTL_RUN_ONCE *)((char *)this[9].Ptr
                                        + 16
                                        * ((__int64)this[12].Ptr & std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId>(
                                                                     v39,
                                                                     v66[0] + 16LL)));
            Ptr = (PVOID *)v43->Ptr;
            if ( v43[1].Ptr == v42 )
            {
              if ( Ptr == v42 )
              {
                v45.Ptr = this[7].Ptr;
                v43->Ptr = v45.Ptr;
              }
              else
              {
                v45.Ptr = v42[1];
              }
              v43[1].Ptr = v45.Ptr;
            }
            else if ( Ptr == v42 )
            {
              v43->Ptr = *v42;
            }
            v46 = *v42;
            --this[8].Ptr;
            *(_QWORD *)v42[1] = v46;
            v46[1] = v42[1];
            v47 = v42[12];
            if ( v47 )
              (*(void (__fastcall **)(PVOID))(*(_QWORD *)v47 + 16LL))(v47);
            CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)(v42 + 2));
            operator delete(v42, (const struct std::nothrow_t *)0x68);
            if ( v10 )
              LeaveCriticalSection(v10);
            if ( v57 )
              (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v57 + 16LL))(v57);
            if ( v60 )
              (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v60 + 16LL))(v60);
            return v38;
          }
        }
        CAudioSessionManager::NotifyActiveSession((CAudioSessionManager *)this, v57);
        v48 = v60;
        v12 = v57;
        v60 = v57;
        if ( v57 )
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v57 + 8LL))(v57);
        if ( v48 )
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v48 + 16LL))(v48);
        v56 = 0;
        v67 = 0;
        v70 = 0;
        v49 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
        if ( *(_DWORD *)v49 > 4u
          && (*(_DWORD *)(v49 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v49 + 24) & 0x200LL) == *(_QWORD *)(v49 + 24) )
        {
          v64 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
          LODWORD(v59) = v58;
          v63 = (CAudioSessionManager *)*((_QWORD *)v12 + 82);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v49,
            (unsigned int)&unk_1801AAA5B,
            v50,
            v51,
            (__int64)&v63,
            (__int64)&v59,
            (__int64)&v64);
        }
      }
      if ( v10 )
        LeaveCriticalSection(v10);
      if ( v57 )
        (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v57 + 16LL))(v57);
    }
    v52 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
    if ( CAudioSession::IsLinkedToProcess(v12, v52)
      || (v53 = CAudioSession::RegisterOwnerProcess(v12, a2), v54 = v53, v53 >= 0) )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh>::GetImpl'::`2'::impl) )
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v12 + 416LL))(v12);
      if ( v56 )
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v12 + 184LL))(v12);
      *v65 = v12;
      if ( v11 )
        LeaveCriticalSection(v11);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15B,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v53,
        v55);
      if ( v12 )
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v11 )
        LeaveCriticalSection(v11);
      result = v54;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x17F,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                           v20);
  }
  return result;
}
