/*
 * XREFs of _lambda_53641cc0248bed3c554431816cb37efe_::operator() @ 0x18008415C
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180088080 (std--_Func_impl_std--_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std_ea_180088080.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800848A0 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_53641cc0248bed3c554431816cb37efe_::operator()(
        __int64 **a1,
        Windows::Services::TargetedContent::Internal *a2)
{
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **v4; // r8
  int TriggerRegistrationFromSetting; // eax
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  TriggerRegistrationFromSetting = Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
                                     a2,
                                     (struct CreativeFramework::Triggers::PropertySetHelper *)&v13,
                                     v4);
  if ( TriggerRegistrationFromSetting < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)TriggerRegistrationFromSetting,
      v11);
  v6 = *a1;
  v7 = **a1;
  v8 = v13;
  v13 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v7 + 104))(v6, v8);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v9,
      v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  return 1;
}
