/*
 * XREFs of ?EnableStartMenuSystemPaneSuggestionsAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18004EB20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180044CA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::EnableStartMenuSystemPaneSuggestionsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x1800474B8 (Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncAction_Windows--Found_ea_1800474B8.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_42fbd5d3fb16a796ab83ae5a767075fb___ @ 0x180047710 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_42fbd5d3fb16a796ab83ae5a7.c)
 *     ?InternalAddRef@?$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x180053084 (-InternalAddRef@-$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync(
        ContentManagement::ContentManagementService *this,
        __int64 a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  char *v4; // rbx
  char v5; // r10
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int started; // edi
  _DWORD v11[4]; // [rsp+30h] [rbp-28h] BYREF
  char *v12; // [rsp+40h] [rbp-18h] BYREF
  char v13; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char *v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = (char *)this - 64;
  v15 = (char *)this - 64;
  Microsoft::WRL::ComPtr<ContentManagement::ContentManagementService>::InternalAddRef(&v15);
  v12 = v4;
  Microsoft::WRL::ComPtr<ContentManagement::ContentManagementService>::InternalAddRef(&v12);
  v13 = v5;
  v11[0] = 3;
  v11[1] = 128;
  v11[2] = 0;
  v6 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_42fbd5d3fb16a796ab83ae5a767075fb___(&v12);
  started = Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::EnableStartMenuSystemPaneSuggestionsOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
              (__int64 *)a3,
              (__int64)v11,
              v7,
              v8,
              (void (__fastcall ***)(_QWORD, __int64))v6);
  if ( v12 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release((__int64)v12);
  if ( started < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x240,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)started);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release((__int64)v4);
  return (unsigned int)started;
}
