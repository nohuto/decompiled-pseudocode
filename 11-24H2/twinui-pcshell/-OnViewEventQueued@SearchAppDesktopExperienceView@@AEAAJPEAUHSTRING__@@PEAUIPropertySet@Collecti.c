/*
 * XREFs of ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803D14BC
 * Callers:
 *     ?OnViewEvent@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x1803D13D0 (-OnViewEvent@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x1800274B0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180165044 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$Start@PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@SA?AV01@$$QEAPEBG@Z @ 0x180379068 (--$Start@PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@SA-AV01@$$QEAPEB.c)
 *     ??1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180379E44 (--1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18037DB04 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ?DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CF0AC (-DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?FocusNavigate@SearchAppDesktopExperienceView@@AEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1803CF31C (-FocusNavigate@SearchAppDesktopExperienceView@@AEAAJW4FocusNavigateDirection@Experience@Shell@In.c)
 *     ?SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x1803D2DE4 (-SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     ?SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x1803D2E50 (-SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803D3104 (-ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SearchAppDesktopExperienceView::OnViewEventQueued(
        SearchAppDesktopExperienceView *this,
        Microsoft::WRL::Wrappers::Details *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  HSTRING v8; // r8
  unsigned int v9; // r8d
  HSTRING_HEADER *v10; // rax
  HSTRING v11; // r8
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  HSTRING v14; // r8
  unsigned int v15; // r8d
  HSTRING_HEADER *v16; // rax
  HSTRING v17; // r8
  unsigned int v18; // r8d
  HSTRING_HEADER *v19; // rax
  HSTRING v20; // r8
  unsigned int v21; // r8d
  int v22; // eax
  int v23; // ebx
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  HSTRING_HEADER *v26; // rax
  HSTRING v27; // r8
  unsigned int v28; // r8d
  void (*v29)(void); // rax
  HSTRING_HEADER *v30; // rax
  HSTRING v31; // r8
  unsigned int v32; // r8d
  HSTRING_HEADER *v33; // rax
  HSTRING v34; // r8
  unsigned int v35; // r8d
  HSTRING_HEADER *v36; // rax
  HSTRING v37; // r8
  unsigned int v38; // r8d
  HSTRING_HEADER *v39; // rax
  HSTRING v40; // r8
  unsigned int v41; // r8d
  HSTRING_HEADER *v42; // rax
  HSTRING v43; // r8
  unsigned int v44; // r8d
  int v45; // eax
  HSTRING_HEADER *v46; // rax
  HSTRING v47; // r8
  Windows::Internal::ShellHelpers::PropertySetHelper *v48; // rbx
  unsigned int v49; // r8d
  HSTRING_HEADER *v50; // rax
  __int64 v51; // r8
  unsigned __int8 v53[8]; // [rsp+20h] [rbp-E0h] BYREF
  PCWSTR StringRawBuffer; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING_HEADER v55; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v56; // [rsp+48h] [rbp-B8h]
  __int64 v57[42]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a2, 0LL);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::Start<unsigned short const *>(
    (CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v57,
    &StringRawBuffer);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)&off_18075D2D0, v6);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, (HSTRING)v7[1].Reserved.Reserved1, v8)
    || (v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)&off_18075D2E0, v9),
        !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a2,
                         (HSTRING)v10[1].Reserved.Reserved1,
                         v11))
    || (v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)&off_18075D2D8, v12),
        !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a2,
                         (HSTRING)v13[1].Reserved.Reserved1,
                         v14))
    || (v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)&off_18075D278, v15),
        !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a2,
                         (HSTRING)v16[1].Reserved.Reserved1,
                         v17)) )
  {
    SearchAppDesktopExperienceView::FocusNavigate((__int64)this);
    goto LABEL_28;
  }
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)&off_18075D270, v18);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v19[1].Reserved.Reserved1,
                        v20) )
  {
    v22 = SearchAppDesktopExperienceView::DismissCortanaApp(this);
    v23 = v22;
    if ( v22 >= 0 )
      goto LABEL_28;
    v24 = (unsigned int)v22;
    v25 = 834LL;
    goto LABEL_26;
  }
  v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)&off_18075D288, v21);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v26[1].Reserved.Reserved1,
                        v27) )
  {
    SearchAppDesktopExperienceView::SetExplicitDismissEnabled(this, 0);
    v29 = *(void (**)(void))(**((_QWORD **)this + 10) + 112LL);
LABEL_15:
    v29();
    goto LABEL_28;
  }
  v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)&off_18075D258, v28);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v30[1].Reserved.Reserved1,
                        v31) )
  {
    *((_BYTE *)this + 196) = 1;
    v29 = *(void (**)(void))(**((_QWORD **)this + 10) + 40LL);
    goto LABEL_15;
  }
  v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)&off_18075D250, v32);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v33[1].Reserved.Reserved1,
                        v34) )
  {
    *((_BYTE *)this + 196) = 0;
    v29 = *(void (**)(void))(**((_QWORD **)this + 10) + 48LL);
    goto LABEL_15;
  }
  v36 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)&off_18075D268, v35);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v36[1].Reserved.Reserved1,
                        v37) )
  {
LABEL_19:
    SearchAppDesktopExperienceView::ShowBorder(this, 0LL);
    goto LABEL_28;
  }
  v39 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)&off_18075D260, v38);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v39[1].Reserved.Reserved1,
                        v40) )
  {
    *((_BYTE *)this + 203) = 0;
    goto LABEL_19;
  }
  v42 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)&off_18075D2B8, v41);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v42[1].Reserved.Reserved1,
                        v43) )
  {
    v45 = SearchAppDesktopExperienceView::SetZBand(this);
    if ( v45 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3E1,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v45);
    goto LABEL_28;
  }
  v46 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)&off_18075D280, v44);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       a2,
                       (HSTRING)v46[1].Reserved.Reserved1,
                       v47) )
  {
LABEL_28:
    wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v57);
    v23 = 0;
    goto LABEL_29;
  }
  v53[0] = 0;
  v48 = Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&StringRawBuffer,
          a3);
  v50 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)&off_18075D2B0, v49);
  v23 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v48,
          (__int64)v50[1].Reserved.Reserved1,
          v51,
          v53);
  v56 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&StringRawBuffer);
  if ( v23 >= 0 )
  {
    SearchAppDesktopExperienceView::SetExplicitDismissEnabled(this, v53[0]);
    goto LABEL_28;
  }
  v24 = (unsigned int)v23;
  v25 = 868LL;
LABEL_26:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)v24);
LABEL_29:
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::~CortanaExperienceManager_OnEventQueued((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v57);
  return (unsigned int)v23;
}
