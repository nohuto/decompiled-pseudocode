/*
 * XREFs of ?RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801C2728
 * Callers:
 *     _lambda_c5b63f338e787c1dc9ce32ee8c9a5927_::operator() @ 0x18046ECA4 (_lambda_c5b63f338e787c1dc9ce32ee8c9a5927_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x180056964 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008317C (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18019541C (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1801DE8A0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@VTouchKeyboardExperienceManager@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@01@PEAVTouchKeyboardExperienceManager@@P83@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@5678@@Z@Z @ 0x180468818 (--$Callback@U-$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Interna_ea_180468818.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::RegisterForViewEvents(__int64 a1, _QWORD *a2)
{
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD *, _QWORD, _QWORD, __int64); // rdi
  const unsigned __int16 *v13; // rax
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-38h] BYREF
  int v18[4]; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( *(_DWORD *)TouchKeyboardExperienceTraceLogging::Provider() > 5u )
  {
    v17 = std::wstring::c_str(a2);
    *(_QWORD *)v18 = "RegisterForViewEvents";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      v4,
      (unsigned int)&unk_1807FC782,
      v4,
      v5,
      (__int64)v18,
      (__int64)&v17);
  }
  v16 = 0LL;
  v6 = *(_QWORD *)(a1 + 336);
  v7 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  v8 = v7(v6, &SID_ViewEventDispatcher, &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e, &v16);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *(_QWORD *)v18 = TouchKeyboardExperienceManager::OnViewEvent;
    v18[2] = 0;
    Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,TouchKeyboardExperienceManager,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>(
      &v17,
      a1,
      v18);
    v11 = v16;
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD, __int64))(*(_QWORD *)v16 + 48LL);
    v13 = (const unsigned __int16 *)std::wstring::c_str(a2);
    Windows::Internal::StringReference::_ConstructorHelper((Windows::Internal::StringReference *)v18, v13);
    v14 = v12(v11, v17, *(_QWORD *)v18, 0LL, a1 + 272);
    v9 = v14;
    if ( v14 >= 0 )
      v9 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1063,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return v9;
}
