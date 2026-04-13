/*
 * XREFs of _lambda_986e623d0ce256a5f32fdc507965e6c2_::__lambda_986e623d0ce256a5f32fdc507965e6c2_ @ 0x18004B5C4
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows::Internal::CNoResult_::_COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows::Internal::CNoResult_ @ 0x18004BFB4 (Windows--Internal--COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows--Inte.c)
 *     ?ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x180056E90 (-ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAP.c)
 *     _Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_986e623d0ce256a5f32fdc507965e6c2____::_1_::dtor$2 @ 0x1800B8499 (_Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_986e623d0ce256a5f32fdc50.c)
 *     _ContentManagement::ContentManagementService::ResolveLayoutBindingsAsync_::_1_::dtor$2 @ 0x1800B8C64 (_ContentManagement--ContentManagementService--ResolveLayoutBindingsAsync_--_1_--dtor$2.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18002A9D0 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180044E80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 */

void __fastcall lambda_986e623d0ce256a5f32fdc507965e6c2_::__lambda_986e623d0ce256a5f32fdc507965e6c2_(__int64 a1)
{
  __int64 v2; // rcx

  Windows::Internal::String::~String((HSTRING *)(a1 + 8));
  v2 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v2);
  }
}
