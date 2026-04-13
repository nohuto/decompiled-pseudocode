/*
 * XREFs of _lambda_c4c3923748e77b314a455aaed0b87e40_::operator() @ 0x180084010
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_c4c3923748e77b314a455aaed0b87e40__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180087CC0 (std--_Func_impl_std--_Callable_obj__lambda_c4c3923748e77b314a455aaed0b87e40__0__std_ea_180087CC0.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180004780 (-_Xbad_function_call@std@@YAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800596A4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x180085750 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall lambda_c4c3923748e77b314a455aaed0b87e40_::operator()(
        __int64 a1,
        __int64 a2,
        Windows::Services::TargetedContent::Internal *a3)
{
  HSTRING *v6; // r9
  const WCHAR *StringRawBuffer; // rax
  __int64 v8; // rcx
  std::_Ref_count_base *v9; // rcx
  HSTRING string; // [rsp+58h] [rbp+20h] BYREF

  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( Windows::Services::TargetedContent::Internal::GetStringValue(
         a3,
         (struct CreativeFramework::Triggers::PropertySetHelper *)L"triggerState",
         (const wchar_t *)&string,
         v6) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    if ( CompareStringOrdinal(**(LPCWCH **)a1, -1, StringRawBuffer, -1, 1) == 2 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
      if ( !v8 )
        std::_Xbad_function_call();
      (*(void (__fastcall **)(__int64, Windows::Services::TargetedContent::Internal *))(*(_QWORD *)v8 + 16LL))(v8, a3);
    }
  }
  WindowsDeleteString(string);
  string = 0LL;
  v9 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return 1;
}
