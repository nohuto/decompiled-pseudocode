/*
 * XREFs of ?ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x1800569F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18002AA00 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18002ED8C (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180044CA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x180047648 (Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncAction_Windows--Found_ea_180047648.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_986e623d0ce256a5f32fdc507965e6c2___ @ 0x180047858 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_986e623d0ce256a5f32fdc507.c)
 *     _lambda_986e623d0ce256a5f32fdc507965e6c2_::__lambda_986e623d0ce256a5f32fdc507965e6c2_ @ 0x18004B3C0 (_lambda_986e623d0ce256a5f32fdc507965e6c2_--__lambda_986e623d0ce256a5f32fdc507965e6c2_.c)
 *     ?InternalAddRef@?$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x180053084 (-InternalAddRef@-$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@IEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementService::ResolveLayoutBindingsAsync(
        ContentManagement::ContentManagementService *this,
        HSTRING a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edi
  _DWORD v12[4]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING v13; // [rsp+40h] [rbp-30h] BYREF
  char v14; // [rsp+48h] [rbp-28h]
  HSTRING v15[2]; // [rsp+50h] [rbp-20h] BYREF
  char v16; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  __int64 v18; // [rsp+88h] [rbp+18h] BYREF

  v13 = 0LL;
  v14 = 0;
  v15[0] = a2;
  v5 = Windows::Internal::String::Initialize(&v13, v15);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v18 = (__int64)this - 80;
    Microsoft::WRL::ComPtr<ContentManagement::ContentManagementService>::InternalAddRef(&v18);
    v15[0] = (HSTRING)((char *)this - 80);
    Microsoft::WRL::ComPtr<ContentManagement::ContentManagementService>::InternalAddRef((__int64 *)v15);
    v15[1] = v13;
    v13 = 0LL;
    v16 = 0;
    v14 = 1;
    v12[0] = 3;
    v12[1] = 128;
    v12[2] = 0;
    v7 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_986e623d0ce256a5f32fdc507965e6c2___(v15);
    v10 = Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ResolveLayoutBindingsOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
            (__int64 *)a3,
            (__int64)v12,
            v8,
            v9,
            (void (__fastcall ***)(_QWORD, __int64))v7);
    lambda_986e623d0ce256a5f32fdc507965e6c2_::__lambda_986e623d0ce256a5f32fdc507965e6c2_((__int64)v15);
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x260,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v10);
    if ( this != (ContentManagement::ContentManagementService *)80 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release((__int64)this - 80);
    v6 = v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x255,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v5);
  }
  Windows::Internal::String::~String(&v13);
  return v6;
}
