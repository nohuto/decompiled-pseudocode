/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_c97e64c4f30df1a9790a17330dc1441c__Windows::Internal::CNoResult_::_COperationLambdaVar_0__lambda_c97e64c4f30df1a9790a17330dc1441c__Windows::Internal::CNoResult_ @ 0x18004BF68
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_c97e64c4f30df1a9790a17330dc1441c__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x18004D650 (Windows--Internal--COperationLambdaVar_0__lambda_c97e64c4f30df1a9790a17330dc1441c___ea_18004D650.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800224C8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180044E80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 */

void **__fastcall Windows::Internal::COperationLambdaVar_0__lambda_c97e64c4f30df1a9790a17330dc1441c__Windows::Internal::CNoResult_::_COperationLambdaVar_0__lambda_c97e64c4f30df1a9790a17330dc1441c__Windows::Internal::CNoResult_(
        _QWORD *a1)
{
  __int64 v2; // rcx
  void **result; // rax

  `eh vector destructor iterator'(
    a1 + 4,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  v2 = a1[1];
  if ( v2 )
  {
    a1[1] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v2);
  }
  result = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  return result;
}
