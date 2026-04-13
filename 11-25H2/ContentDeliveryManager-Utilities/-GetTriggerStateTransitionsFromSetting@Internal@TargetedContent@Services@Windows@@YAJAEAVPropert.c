/*
 * XREFs of ?GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180086050
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180084470 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateExternalObjectVector@VTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@$0A@@2Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@$0A@@1234@@Z @ 0x1800764D8 (--$CreateExternalObjectVector@VTargetedContentTriggerStateTransition@Internal@TargetedContent@Se.c)
 *     std::_Func_impl_std::_Callable_obj__lambda_a031fdd1fd025cd2573b61ec83e0da08__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Func_impl_std::_Callable_obj__lambda_a031fdd1fd025cd2573b61ec83e0da08__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_ @ 0x180083528 (std--_Func_impl_std--_Callable_obj__lambda_a031fdd1fd025cd2573b61ec83e0da08__0__std--allocator_s.c)
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x180085184 (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x180085750 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a3)
{
  HSTRING *v5; // r9
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned int v9; // r8d
  int v10; // eax
  PCWSTR StringRawBuffer; // rax
  int v12; // eax
  int v13[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[3]; // [rsp+28h] [rbp-30h] BYREF
  _QWORD *v15; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF
  HSTRING string; // [rsp+78h] [rbp+20h] BYREF

  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  try
  {
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"StateTransitions",
           (const wchar_t *)&string,
           v5) )
    {
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
      v10 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition,Windows::Foundation::Collections::Internal::AgileVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,0>>(
              v8,
              &v17,
              v9);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x152,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v10,
          v13[0]);
      *(_QWORD *)v13 = v17;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v15 = 0LL;
      v15 = std::_Func_impl_std::_Callable_obj__lambda_a031fdd1fd025cd2573b61ec83e0da08__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Func_impl_std::_Callable_obj__lambda_a031fdd1fd025cd2573b61ec83e0da08__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_(
              v14,
              v13);
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions(
        (__int64)StringRawBuffer,
        (__int64)v14);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v13);
      v12 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, __int64))(*(_QWORD *)a2 + 328LL))(
              a2,
              v17);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x15C,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v12,
          v13[0]);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
      WindowsDeleteString(string);
      result = 0LL;
    }
    else
    {
      WindowsDeleteString(string);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v17) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x15F,
                     (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                     v6);
    return (unsigned int)v17;
  }
  return result;
}
