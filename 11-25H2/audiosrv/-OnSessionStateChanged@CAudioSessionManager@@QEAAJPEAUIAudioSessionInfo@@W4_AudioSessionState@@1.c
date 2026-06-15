/*
 * XREFs of ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002AE58
 * Callers:
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18002AA90 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800C70C4 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800181E4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??$?RVCAudioSessionInstanceId@@@?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@QEBA_KAEBVCAudioSessionInstanceId@@@Z @ 0x18001A720 (--$-RVCAudioSessionInstanceId@@@-$_Uhash_compare@VCAudioSessionInstanceId@@U-$hash@VCAudioSessio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Find_last@VCAudioSessionInstanceId@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBVCAudioSessionInstanceId@@_K@Z @ 0x18001BF10 (--$_Find_last@VCAudioSessionInstanceId@@@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$co.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$emplace@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800223B4 (--$emplace@AEAVCAudioSessionInstanceId@@AEAV-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@w.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x18002B380 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18002B978 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ??0CAudioSessionInstanceId@@QEAA@AEBV0@@Z @ 0x18002C47C (--0CAudioSessionInstanceId@@QEAA@AEBV0@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180041978 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@_K@Z @ 0x180067138 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Ue.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@QEAU32@@Z @ 0x180067178 (-_Unchecked_erase@-$list@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr.c)
 *     ?UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@@@Z @ 0x180085FFC (-UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1800C1670 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800C17A4 (WPP_SF_S.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     WPP_SF_Sd @ 0x1800C4424 (WPP_SF_Sd.c)
 *     WPP_SF_SS @ 0x1800C5D00 (WPP_SF_SS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CAudioSessionManager::OnSessionStateChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        unsigned int a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  bool v11; // r8
  const char *v12; // r9
  unsigned int v13; // ebx
  _QWORD *v14; // rcx
  __int64 result; // rax
  char *v16; // rsi
  void *v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // r9d
  struct CAudioSession *v23; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD *v24; // [rsp+38h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v26[3]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v27[8]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v28[8]; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v29[8]; // [rsp+70h] [rbp-78h] BYREF
  __int128 v30; // [rsp+78h] [rbp-70h]
  _BYTE v31[8]; // [rsp+88h] [rbp-60h] BYREF
  int v32; // [rsp+90h] [rbp-58h]
  __int64 v33; // [rsp+98h] [rbp-50h]
  int v34; // [rsp+A0h] [rbp-48h]
  __int64 v35; // [rsp+A8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  try
  {
    v24 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(struct IAudioSessionInfo *, GUID *, _QWORD **))a2)(
           a2,
           &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a,
           &v24);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x256,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v7);
      if ( v24 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v24 + 16LL))(v24, *v24);
      result = v8;
    }
    else
    {
      v23 = 0LL;
      v9 = *v24;
      v23 = 0LL;
      v10 = (*(__int64 (__fastcall **)(_QWORD *, struct CAudioSession **))(v9 + 24))(v24, &v23);
      v13 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x259,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v10);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
        result = v13;
      }
      else
      {
        v14 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            19,
            (unsigned int)&WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids,
            0,
            a4);
          v14 = WPP_GLOBAL_Control;
        }
        if ( a3 == AudioSessionStateExpired )
        {
          if ( v14 != &WPP_GLOBAL_Control && (*((_BYTE *)v14 + 28) & 0x40) != 0 && *((_BYTE *)v14 + 25) >= 4u )
            WPP_SF_d(v14[2], 20LL, &WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids, a4);
          CAudioSessionInstanceId::CAudioSessionInstanceId(
            (CAudioSessionInstanceId *)v27,
            (struct CAudioSession *)((char *)v23 + 584));
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
          v25 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_SS(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              21,
              (unsigned int)&WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids,
              0,
              v35);
          }
          std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::emplace<CAudioSessionInstanceId &,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy> &>(
            (_QWORD *)this + 6,
            (__int64)v26,
            (__int64)v27,
            (__int64)&v23);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v25);
          CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v27);
          v14 = WPP_GLOBAL_Control;
        }
        if ( a4 == 1 )
        {
          CAudioSessionManager::NotifyActiveSession(this, v23, v11);
        }
        else if ( a4 == 2 )
        {
          if ( v14 != &WPP_GLOBAL_Control && (*((_BYTE *)v14 + 28) & 0x40) != 0 && *((_BYTE *)v14 + 25) >= 4u )
            WPP_SF_S(v14[2], 22LL, &WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids);
          v16 = (char *)v23 + 584;
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            v27,
            (char *)v23 + 584);
          v25 = (struct _RTL_CRITICAL_SECTION *)v28;
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            v28,
            v16 + 8);
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            v29,
            v16 + 16);
          v30 = *(_OWORD *)(v16 + 24);
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            v31,
            v16 + 40);
          v32 = *((_DWORD *)v16 + 12);
          v33 = *((_QWORD *)v16 + 7);
          v34 = *((_DWORD *)v16 + 16);
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            &v35,
            v16 + 72);
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
          v17 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_SS(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              23,
              (unsigned int)&WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids,
              0,
              v35);
          }
          v18 = std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId>(
                  (__int64)v17,
                  (__int64)v27);
          v19 = std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Find_last<CAudioSessionInstanceId>(
                  (_QWORD *)this + 6,
                  v26,
                  (__int64)v27,
                  v18)[1];
          if ( v19 )
          {
            std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Erase_bucket(
              (char *)this + 48,
              v19,
              v18 & *((_QWORD *)this + 12));
            std::list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>::_Unchecked_erase((char *)this + 56);
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids);
            }
            CAudioSessionManager::UnregisterInternalAudioSessionNotificationClients(this, v23);
            v20 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
            if ( *(_DWORD *)v20 > 4u
              && (*(_DWORD *)(v20 + 16) & 0x200LL) != 0
              && (*(_QWORD *)(v20 + 24) & 0x200LL) == *(_QWORD *)(v20 + 24) )
            {
              v25 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v23 + 82);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                v20,
                (unsigned int)&unk_18019FF7B,
                v21,
                v22,
                (__int64)&v25);
            }
          }
          else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                 && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids);
          }
          if ( this != (CAudioSessionManager *)-8LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
          CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v27);
        }
        if ( v23 )
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v23 + 16LL))(v23);
        if ( v24 )
          (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
        result = 0LL;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2A6,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                           v12);
  }
  return result;
}
