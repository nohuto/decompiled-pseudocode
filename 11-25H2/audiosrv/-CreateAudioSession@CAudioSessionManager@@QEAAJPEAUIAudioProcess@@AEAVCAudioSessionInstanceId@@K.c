/*
 * XREFs of ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001AF40
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180017A90 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800187A0 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800197F0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180048C00 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180019540 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ??$?RVCAudioSessionInstanceId@@@?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@QEBA_KAEBVCAudioSessionInstanceId@@@Z @ 0x18001A720 (--$-RVCAudioSessionInstanceId@@@-$_Uhash_compare@VCAudioSessionInstanceId@@U-$hash@VCAudioSessio.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001AAE0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001AC20 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x18001C6D8 (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$emplace@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800223B4 (--$emplace@AEAVCAudioSessionInstanceId@@AEAV-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@w.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180028C90 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x18002B380 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ??$Make@VCPerStreamVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPerStreamVolumeAudioSession@@@12@XZ @ 0x18002E1A8 (--$Make@VCPerStreamVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPerStreamVolum.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x18002E90C (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIAudioSessionPolicyControl@@UIAudioSessionInfo@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioSessionInfoInternal@@UIAudioSessionDuckingControl@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004EA70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18005DF54 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@_K@Z @ 0x180067138 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Ue.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@QEAU32@@Z @ 0x180067178 (-_Unchecked_erase@-$list@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr.c)
 *     ?UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@@@Z @ 0x180085FFC (-UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@.c)
 *     ??$Make@VCPerEndpointVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPerEndpointVolumeAudioSession@@@12@XZ @ 0x180086FEC (--$Make@VCPerEndpointVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPerEndpointV.c)
 *     ??$?0$00X@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z @ 0x1800A370C (--$-0$00X@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     WPP_SF_SS @ 0x1800C5D00 (WPP_SF_SS.c)
 *     wil::init_once__lambda_f00ad828a2d515e855b0de47f172bf9e___ @ 0x1800C6614 (wil--init_once__lambda_f00ad828a2d515e855b0de47f172bf9e___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CAudioSessionManager::CreateAudioSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        struct CAudioSession **a7)
{
  struct CAudioSession *v7; // r13
  struct _RTL_CRITICAL_SECTION *v8; // r12
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  struct CAudioSession *v10; // rdi
  CAudioSession *v11; // rbx
  int v12; // eax
  _WORD *v13; // rbx
  __int64 v14; // rdi
  _QWORD *v15; // rdx
  unsigned int v16; // r14d
  unsigned __int16 i; // ax
  CAudioSessionManager *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // r13
  struct CAudioSession *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  int v29; // r12d
  _QWORD *v30; // r14
  _QWORD *v31; // r15
  const char *v32; // r9
  __int64 result; // rax
  __int64 v34; // rcx
  _QWORD *v35; // r13
  _QWORD *v36; // rax
  int v37; // eax
  struct CAudioSession *v38; // rsi
  DWORD LastError; // ebx
  int v40; // r14d
  struct CAudioSession **v41; // rax
  struct CAudioSession *v42; // rdx
  struct CAudioSession *v43; // rcx
  GUID v44; // xmm6
  struct IAudioProcess *v45; // rbx
  __int64 v46; // rax
  union _RTL_RUN_ONCE *v47; // rdi
  int v48; // eax
  unsigned int v49; // ebx
  DWORD v50; // r14d
  int v51; // eax
  struct CAudioSession **v52; // rax
  struct CAudioSession *v53; // rdx
  struct CAudioSession *v54; // rcx
  bool v55; // r8
  _QWORD *j; // rbx
  int v57; // eax
  unsigned int v58; // r14d
  struct CAudioSession *v59; // rbx
  __int64 v60; // rbx
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // r8d
  int v65; // r9d
  int v66; // eax
  unsigned int v67; // esi
  int v68; // eax
  unsigned int v69; // ebx
  struct CAudioSession *v70; // [rsp+50h] [rbp-128h] BYREF
  char v71; // [rsp+58h] [rbp-120h]
  struct CAudioSession *v72; // [rsp+60h] [rbp-118h] BYREF
  _WORD *v73; // [rsp+68h] [rbp-110h] BYREF
  int v74; // [rsp+70h] [rbp-108h]
  struct IAudioProcess *v75; // [rsp+78h] [rbp-100h]
  CAudioSessionManager *v76; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v77; // [rsp+88h] [rbp-F0h] BYREF
  CAudioSession *v78; // [rsp+90h] [rbp-E8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+98h] [rbp-E0h]
  int v80; // [rsp+A0h] [rbp-D8h]
  _QWORD *v81; // [rsp+A8h] [rbp-D0h] BYREF
  struct CAudioSession **v82; // [rsp+B0h] [rbp-C8h]
  GUID v83; // [rsp+C0h] [rbp-B8h] BYREF
  _QWORD v84[3]; // [rsp+D0h] [rbp-A8h] BYREF
  char v85; // [rsp+E8h] [rbp-90h]
  char *v86; // [rsp+F0h] [rbp-88h]
  _QWORD v87[2]; // [rsp+F8h] [rbp-80h] BYREF
  _QWORD v88[2]; // [rsp+108h] [rbp-70h] BYREF
  char v89; // [rsp+118h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v74 = a4;
  v7 = a3;
  v70 = a3;
  v75 = a2;
  v76 = this;
  v82 = a7;
  v71 = 1;
  *a7 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v9 = v8;
  lpCriticalSection = v8;
  v10 = 0LL;
  v72 = 0LL;
  v11 = 0LL;
  v78 = 0LL;
  EnterCriticalSection(v8);
  v73 = (_WORD *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v12 = CAudioSessionInstanceId::ToString((__int64)v7, (__int64 *)&v73);
  try
  {
    if ( v12 < 0 )
    {
      ATL::CStringData::Release((ATL::CStringData *)(v73 - 12));
      v16 = 0;
    }
    else
    {
      v13 = v73;
      v14 = *((int *)v73 - 4);
      if ( ((1 - *((_DWORD *)v73 - 2)) | (*((_DWORD *)v73 - 3) - (int)v14)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v73, v14);
        v13 = v73;
      }
      _o__wcsupr_s(v13, (int)v14 + 1);
      if ( (int)v14 < 0 || (v15 = v13 - 12, (int)v14 > *((_DWORD *)v13 - 3)) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v15 + 2) = v14;
      v13[v14] = 0;
      if ( !v13 )
        ATL::AtlThrowImpl(-2147467259);
      v16 = 0;
      for ( i = *v13; *v13; i = *v13 )
      {
        v16 = i + 33 * v16;
        ++v13;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 8LL))(*v15);
      v9 = lpCriticalSection;
      v10 = v72;
      v11 = v78;
    }
    v18 = v76;
    v19 = 2 * (v16 & *((_QWORD *)v76 + 12));
    v20 = *((_QWORD *)v76 + 9);
    v21 = *(_QWORD *)(v20 + 16 * (v16 & *((_QWORD *)v76 + 12)) + 8);
    if ( v21 != *((_QWORD *)v76 + 7) )
    {
      v22 = *(_QWORD *)(v20 + 8 * v19);
      v23 = v70;
      while ( 1 )
      {
        v24 = _o__wcsicmp(*(_QWORD *)v23);
        v23 = v70;
        if ( !v24 )
        {
          v25 = *((_DWORD *)v70 + 16);
          if ( v25 == *(_DWORD *)(v21 + 80) && (v25 || *((_DWORD *)v70 + 14) == *(_DWORD *)(v21 + 72)) )
          {
            v26 = *((_DWORD *)v70 + 12);
            if ( v26 == *(_DWORD *)(v21 + 64) )
            {
              if ( v26 || (v51 = _o__wcsicmp(*((_QWORD *)v70 + 1)), v23 = v70, !v51) )
              {
                v27 = *((_QWORD *)v23 + 3) - *(_QWORD *)(v21 + 40);
                if ( !v27 )
                  v27 = *((_QWORD *)v23 + 4) - *(_QWORD *)(v21 + 48);
                if ( !v27 )
                {
                  v7 = v70;
                  v18 = v76;
                  goto LABEL_28;
                }
              }
            }
          }
        }
        if ( v21 == v22 )
          break;
        v21 = *(_QWORD *)(v21 + 8);
      }
      v7 = v70;
      v18 = v76;
    }
    v21 = 0LL;
LABEL_28:
    if ( v21 && v21 != *((_QWORD *)v18 + 7) )
    {
      v34 = *(_QWORD *)(v21 + 96);
      if ( v34 )
      {
        v78 = *(CAudioSession **)(v21 + 96);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
      }
      else
      {
        v78 = 0LL;
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10,
          (unsigned int)&WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids,
          0,
          *((_QWORD *)v7 + 9));
      }
      if ( v8 )
        LeaveCriticalSection(v8);
      v28 = 0;
      v11 = v78;
    }
    else
    {
      if ( v8 )
        LeaveCriticalSection(v8);
      v28 = -2147024894;
    }
    if ( v28 < 0 )
    {
LABEL_34:
      if ( v11 )
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v10 )
      {
        if ( (v74 & 0x20) != 0 )
          *((_DWORD *)v10 + 102) = 1;
LABEL_39:
        v29 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v75 + 40LL))(v75);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 664));
        v84[0] = (char *)v10 + 664;
        v30 = (_QWORD *)*((_QWORD *)v10 + 88);
        v31 = (_QWORD *)*((_QWORD *)v10 + 89);
        while ( v30 != v31 )
        {
          if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v30 + 40LL))(*v30) == v29 )
          {
            if ( v10 != (struct CAudioSession *)-664LL )
              LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 664));
LABEL_45:
            if ( v71 )
              (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v10 + 184LL))(v10);
            *v82 = v10;
            if ( v9 )
              LeaveCriticalSection(v9);
            return 0LL;
          }
          ++v30;
        }
        if ( v10 != (struct CAudioSession *)-664LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 664));
        v68 = CAudioSession::RegisterOwnerProcess(v10, v75);
        v69 = v68;
        if ( v68 >= 0 )
          goto LABEL_45;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15B,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v68);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v72);
        if ( v9 )
          LeaveCriticalSection(v9);
        return v69;
      }
      if ( v9 )
      {
        LastError = GetLastError();
        LeaveCriticalSection(v9);
        SetLastError(LastError);
      }
      v9 = 0LL;
      lpCriticalSection = 0LL;
      v70 = 0LL;
      v40 = v74;
      if ( (v74 & 8) != 0 )
      {
        v41 = (struct CAudioSession **)Microsoft::WRL::Details::Make<CPerStreamVolumeAudioSession,>(&v77);
        v42 = *v41;
        *v41 = 0LL;
        v43 = v70;
        v70 = v42;
        if ( v43 )
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v43 + 16LL))(v43);
        if ( !v77 )
          goto LABEL_73;
      }
      else
      {
        v52 = (struct CAudioSession **)Microsoft::WRL::Details::Make<CPerEndpointVolumeAudioSession,>(&v77);
        v53 = *v52;
        *v52 = 0LL;
        v54 = v70;
        v70 = v53;
        if ( v54 )
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v54 + 16LL))(v54);
        if ( !v77 )
          goto LABEL_73;
      }
      v77 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::Release();
LABEL_73:
      if ( !v70 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x101,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)0x8007000ELL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v70);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v72);
        return 2147942414LL;
      }
      v44 = GUID_00000000_0000_0000_0000_000000000000;
      v45 = v75;
      if ( (v40 & 4) == 0 && !(*(unsigned __int8 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v75 + 448LL))(v75) )
        v44 = *(GUID *)(*(__int64 (__fastcall **)(struct IAudioProcess *, _QWORD *, __int64))(*(_QWORD *)v45 + 464LL))(
                         v45,
                         v88,
                         (__int64)v7 + 24);
      v46 = *(_QWORD *)v70;
      v83 = v44;
      v47 = (union _RTL_RUN_ONCE *)v76;
      v48 = (*(__int64 (__fastcall **)(struct CAudioSession *, CAudioSessionManager *, struct IAudioProcess *, struct CAudioSession *, int, unsigned int, unsigned int, GUID *))(v46 + 168))(
              v70,
              v76,
              v45,
              v7,
              v40,
              a5,
              a6,
              &v83);
      v49 = v48;
      if ( v48 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x119,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v48);
        (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v70 + 16LL))(v70);
        return v49;
      }
      EnterCriticalSection(v8);
      *(_QWORD *)&v83.Data1 = v8;
      v72 = 0LL;
      if ( (int)CAudioSessionManager::FindAudioSession((CAudioSessionManager *)v47, v7, &v72) < 0 )
      {
        std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::emplace<CAudioSessionInstanceId &,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy> &>(
          &v47[6],
          v87,
          v7,
          &v70);
        v84[1] = v47;
        v84[2] = v87;
        v85 = 1;
        v88[0] = v47;
        v88[1] = &v70;
        v89 = 1;
        wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(v84, v47);
        wil::init_once__lambda_f00ad828a2d515e855b0de47f172bf9e___(v47 + 37);
        for ( j = v47[36].Ptr; j; j = (_QWORD *)*j )
        {
          v57 = (*(__int64 (__fastcall **)(struct CAudioSession *, _QWORD))(*(_QWORD *)v70 + 152LL))(v70, j[1]);
          v58 = v57;
          if ( v57 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x12B,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)v57);
            CAudioSessionManager::UnregisterInternalAudioSessionNotificationClients((CAudioSessionManager *)v47, v70);
            v61 = v87[0];
            v63 = std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId>(
                    v62,
                    v87[0] + 16LL);
            std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Erase_bucket(
              &v47[6],
              v61,
              (__int64)v47[12].Ptr & v63);
            std::list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>::_Unchecked_erase(&v47[7]);
            if ( v8 )
              LeaveCriticalSection(v8);
            if ( v70 )
              (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v70 + 16LL))(v70);
            if ( v72 )
              (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v72 + 16LL))(v72);
            return v58;
          }
        }
        CAudioSessionManager::NotifyActiveSession((CAudioSessionManager *)v47, v70, v55);
        v59 = v72;
        v10 = v70;
        v72 = v70;
        if ( v70 )
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v70 + 8LL))(v70);
        if ( v59 )
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v59 + 16LL))(v59);
        v71 = 0;
        v89 = 0;
        v85 = 0;
        v60 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
        if ( *(_DWORD *)v60 > 4u
          && (*(_DWORD *)(v60 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v60 + 24) & 0x200LL) == *(_QWORD *)(v60 + 24) )
        {
          LODWORD(v76) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v75 + 40LL))(v75);
          LODWORD(v73) = v74;
          v81 = (_QWORD *)*((_QWORD *)v10 + 82);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v60,
            (unsigned int)&unk_18019FFAC,
            v64,
            v65,
            (__int64)&v81,
            (__int64)&v73,
            (__int64)&v76);
        }
      }
      else
      {
        v10 = v72;
      }
      if ( v8 )
        LeaveCriticalSection(v8);
      if ( v70 )
        (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v70 + 16LL))(v70);
      goto LABEL_39;
    }
    if ( v9 )
    {
      v50 = GetLastError();
      LeaveCriticalSection(v9);
      SetLastError(v50);
    }
    lpCriticalSection = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v11 + 544));
    v86 = (char *)v11 + 544;
    if ( (*(unsigned int (__fastcall **)(__int64))(*((_QWORD *)v11 + 1) + 32LL))((__int64)v11 + 8) == 2 )
    {
LABEL_64:
      if ( v11 != (CAudioSession *)-544LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v11 + 544));
      v9 = v8;
      EnterCriticalSection(v8);
      lpCriticalSection = v8;
      goto LABEL_34;
    }
    v80 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v75 + 40LL))(v75);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v11 + 664));
    *(_QWORD *)&v83.Data1 = (char *)v11 + 664;
    v35 = (_QWORD *)*((_QWORD *)v11 + 88);
    v36 = (_QWORD *)*((_QWORD *)v11 + 89);
    v81 = v36;
    while ( v35 != v36 )
    {
      v37 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v35 + 40LL))(*v35);
      if ( v37 == v80 )
      {
        if ( v11 != (CAudioSession *)-664LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v11 + 664));
LABEL_61:
        *((_QWORD *)v11 + 40) = GetTickCount64();
        CAudioSession::StartInactiveTimer(v11);
        v38 = v10;
        v10 = v11;
        v72 = v11;
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v11 + 8LL))(v11);
        if ( v38 )
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v38 + 16LL))(v38);
        v7 = v70;
        goto LABEL_64;
      }
      ++v35;
      v36 = v81;
    }
    if ( v11 != (CAudioSession *)-664LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v11 + 664));
    v66 = CAudioSession::RegisterOwnerProcess(v11, v75);
    v67 = v66;
    if ( v66 >= 0 )
      goto LABEL_61;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v66);
    if ( v11 != (CAudioSession *)-544LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v11 + 544));
    if ( v11 )
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v10 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v10 + 16LL))(v10);
    result = v67;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x172,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                           v32);
  }
  return result;
}
