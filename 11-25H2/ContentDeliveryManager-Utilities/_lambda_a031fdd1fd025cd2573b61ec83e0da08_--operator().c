/*
 * XREFs of _lambda_a031fdd1fd025cd2573b61ec83e0da08_::operator() @ 0x180083F34
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_a031fdd1fd025cd2573b61ec83e0da08__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180087C80 (std--_Func_impl_std--_Callable_obj__lambda_a031fdd1fd025cd2573b61ec83e0da08__0__std_ea_180087C80.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@V12345@AEAPEAUHSTRING__@@AEAW4TargetedContentTriggerState@2345@AEAW472345@@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@AEAPEAUHSTRING__@@AEAW4TargetedContentTriggerState@4567@2@Z @ 0x180076920 (--$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedCo_ea_180076920.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_a031fdd1fd025cd2573b61ec83e0da08_::operator()(
        __int64 **a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  int v8; // eax
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF
  unsigned int v19; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+48h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  v19 = a4;
  v20 = a3;
  v16 = a2;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl,Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl,HSTRING__ * &,enum Windows::Services::TargetedContent::Internal::TargetedContentTriggerState &,enum Windows::Services::TargetedContent::Internal::TargetedContentTriggerState &>(
         &v18,
         &v16,
         &v20,
         &v19);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v8,
      v15);
  v9 = v18;
  v18 = 0LL;
  v15 = v9;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  v10 = *a1;
  v11 = **a1;
  v12 = v15;
  v15 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v11 + 104))(v10, v12);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x158,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v13,
      v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  return 1;
}
