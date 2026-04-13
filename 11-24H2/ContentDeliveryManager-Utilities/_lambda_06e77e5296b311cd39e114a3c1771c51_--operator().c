/*
 * XREFs of _lambda_06e77e5296b311cd39e114a3c1771c51_::operator() @ 0x180083FD8
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_06e77e5296b311cd39e114a3c1771c51__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180088050 (std--_Func_impl_std--_Callable_obj__lambda_06e77e5296b311cd39e114a3c1771c51__0__std_ea_180088050.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180059B44 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentTriggerState@1234@PEB_W@Z @ 0x180082098 (-ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA-AW4TargetedContentTri.c)
 *     std::function_bool___cdecl(HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState)_::function_bool___cdecl(HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState)___lambda_69a92d371a2c7508f1f4ce514cd8b1f7___ @ 0x1800827C4 (std--function_bool___cdecl(HSTRING_____enum_Windows--Services--TargetedContent--Internal--Target.c)
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x1800855B4 (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x180085B80 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall lambda_06e77e5296b311cd39e114a3c1771c51_::operator()(
        _QWORD *a1,
        __int64 a2,
        Windows::Services::TargetedContent::Internal *a3)
{
  HSTRING *v6; // r9
  HSTRING *v7; // r9
  const WCHAR *StringRawBuffer; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  PCWSTR v12; // rax
  std::_Ref_count_base *v13; // rcx
  HSTRING string; // [rsp+20h] [rbp-29h] BYREF
  HSTRING v16[2]; // [rsp+28h] [rbp-21h] BYREF
  _BYTE v17[32]; // [rsp+38h] [rbp-11h] BYREF
  __int128 v18; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+68h] [rbp+1Fh]
  Windows::Services::TargetedContent::Internal *v20; // [rsp+70h] [rbp+27h]
  __int64 v21; // [rsp+78h] [rbp+2Fh]
  __int64 v22; // [rsp+80h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  int v24; // [rsp+C8h] [rbp+7Fh] BYREF

  WindowsDeleteString(0LL);
  string = 0LL;
  if ( Windows::Services::TargetedContent::Internal::GetStringValue(
         a3,
         (struct CreativeFramework::Triggers::PropertySetHelper *)L"StateTransitions",
         (const wchar_t *)&string,
         v6) )
  {
    v16[0] = 0LL;
    WindowsDeleteString(0LL);
    v16[0] = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            a3,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"triggerState",
            (const wchar_t *)v16,
            v7) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x23F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL,
        (int)string);
    StringRawBuffer = WindowsGetStringRawBuffer(v16[0], 0LL);
    v24 = Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(StringRawBuffer);
    v9 = a1[2];
    v10 = a1[1];
    *(_QWORD *)&v18 = *a1;
    *((_QWORD *)&v18 + 1) = &v24;
    v19 = v10;
    v20 = a3;
    v21 = v9;
    v22 = a2;
    v11 = std::function_bool___cdecl_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState__::function_bool___cdecl_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState____lambda_69a92d371a2c7508f1f4ce514cd8b1f7___(
            (__int64)v17,
            &v18);
    v12 = WindowsGetStringRawBuffer(string, 0LL);
    Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions(v12, v11);
    WindowsDeleteString(v16[0]);
    v16[0] = 0LL;
    WindowsDeleteString(string);
    string = 0LL;
  }
  else
  {
    WindowsDeleteString(string);
    string = 0LL;
  }
  v13 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  return 1;
}
