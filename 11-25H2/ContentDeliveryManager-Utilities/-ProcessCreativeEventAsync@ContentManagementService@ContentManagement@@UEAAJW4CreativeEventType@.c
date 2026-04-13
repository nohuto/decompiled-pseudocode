/*
 * XREFs of ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180054E30
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180055190 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18002AA00 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18002ED8C (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180033D08 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180044CA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x180047580 (Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncAction_Windows--Found_ea_180047580.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_cdeb3b86346b203bd3e87afbcbd1e510___ @ 0x180047A54 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_cdeb3b86346b203bd3e87afbc.c)
 *     _lambda_cdeb3b86346b203bd3e87afbcbd1e510_::__lambda_cdeb3b86346b203bd3e87afbcbd1e510_ @ 0x18004B3F0 (_lambda_cdeb3b86346b203bd3e87afbcbd1e510_--__lambda_cdeb3b86346b203bd3e87afbcbd1e510_.c)
 *     ?GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z @ 0x18005163C (-GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x180053084 (-InternalAddRef@-$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        HSTRING a6,
        __int64 a7,
        int a8,
        __int64 *a9)
{
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  HSTRING v15; // rsi
  int v16; // eax
  HSTRING v17; // r14
  int v18; // eax
  HSTRING v19; // r15
  ContentManagement *StringRawBuffer; // rax
  struct ContentManagement::ICreativeEventReportedCache **v21; // r8
  int EventCacheIfNeeded; // eax
  __int64 v23; // rdi
  _DWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // esi
  HSTRING string; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h]
  HSTRING v31; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B8h]
  HSTRING v33; // [rsp+58h] [rbp-B0h] BYREF
  char v34; // [rsp+60h] [rbp-A8h]
  HSTRING v35; // [rsp+78h] [rbp-90h] BYREF
  char v36; // [rsp+80h] [rbp-88h]
  int v37; // [rsp+88h] [rbp-80h] BYREF
  __int64 v38; // [rsp+8Ch] [rbp-7Ch]
  __int64 v39; // [rsp+98h] [rbp-70h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-58h] BYREF
  int v43; // [rsp+B8h] [rbp-50h]
  HSTRING v44; // [rsp+C0h] [rbp-48h]
  char v45; // [rsp+C8h] [rbp-40h]
  HSTRING v46; // [rsp+D0h] [rbp-38h]
  char v47; // [rsp+D8h] [rbp-30h]
  HSTRING v48; // [rsp+E0h] [rbp-28h]
  char v49; // [rsp+E8h] [rbp-20h]
  HSTRING v50; // [rsp+F0h] [rbp-18h]
  char v51; // [rsp+F8h] [rbp-10h]
  __int64 v52[2]; // [rsp+100h] [rbp-8h] BYREF
  HSTRING v53; // [rsp+110h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]
  __int64 v55; // [rsp+178h] [rbp+70h] BYREF

  v35 = 0LL;
  v36 = 0;
  v33 = a3;
  v12 = Windows::Internal::String::Initialize(&v35, &v33);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_27;
  }
  string = 0LL;
  LOBYTE(v30) = 0;
  v33 = a4;
  v14 = Windows::Internal::String::Initialize(&string, &v33);
  v13 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x153,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v14);
LABEL_5:
    Windows::Internal::String::~String(&string);
    goto LABEL_27;
  }
  v15 = 0LL;
  v31 = 0LL;
  LOBYTE(v32) = 0;
  if ( a5 )
  {
    v33 = a5;
    v16 = Windows::Internal::String::Initialize(&v31, &v33);
    v13 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x158,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v16);
LABEL_9:
      Windows::Internal::String::~String(&v31);
      goto LABEL_5;
    }
    v15 = v31;
  }
  v17 = 0LL;
  v33 = 0LL;
  v34 = 0;
  if ( a6 )
  {
    v53 = a6;
    v18 = Windows::Internal::String::Initialize(&v33, &v53);
    v13 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v18);
LABEL_14:
      Windows::Internal::String::~String(&v33);
      goto LABEL_9;
    }
    v17 = v33;
  }
  v55 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
  v19 = string;
  StringRawBuffer = (ContentManagement *)WindowsGetStringRawBuffer(string, 0LL);
  EventCacheIfNeeded = ContentManagement::GetEventCacheIfNeeded(StringRawBuffer, (unsigned __int16 *)&v55, v21);
  v13 = EventCacheIfNeeded;
  if ( EventCacheIfNeeded < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x162,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)EventCacheIfNeeded);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
    goto LABEL_14;
  }
  v23 = a7;
  v39 = a7;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v39);
  v40 = a1 - 48;
  Microsoft::WRL::ComPtr<ContentManagement::ContentManagementService>::InternalAddRef(&v40);
  v41 = a1 - 48;
  v42 = a1 - 48;
  Microsoft::WRL::ComPtr<ContentManagement::ContentManagementService>::InternalAddRef(&v42);
  v43 = a2;
  v44 = v35;
  v35 = 0LL;
  v45 = 0;
  v36 = 1;
  v46 = v19;
  string = 0LL;
  v47 = 0;
  LOBYTE(v30) = 1;
  v48 = v15;
  v31 = 0LL;
  v49 = 0;
  LOBYTE(v32) = 1;
  v50 = v17;
  v33 = 0LL;
  v51 = 0;
  v34 = 1;
  v52[0] = v23;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v52);
  v52[1] = v55;
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 8LL))(v55);
  v37 = 3;
  v38 = 130LL;
  v24 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_cdeb3b86346b203bd3e87afbcbd1e510___((__int64)&v41);
  v27 = Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ProcessCreativeEventOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
          a9,
          (__int64)&v37,
          v25,
          v26,
          (void (__fastcall ***)(_QWORD, __int64))v24);
  lambda_cdeb3b86346b203bd3e87afbcbd1e510_::__lambda_cdeb3b86346b203bd3e87afbcbd1e510_((__int64)&v41);
  if ( v27 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x176,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v27);
  if ( a1 != 48 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(a1 - 48);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
  Windows::Internal::String::~String(&v33);
  Windows::Internal::String::~String(&v31);
  Windows::Internal::String::~String(&string);
  v13 = v27;
LABEL_27:
  Windows::Internal::String::~String(&v35);
  return v13;
}
