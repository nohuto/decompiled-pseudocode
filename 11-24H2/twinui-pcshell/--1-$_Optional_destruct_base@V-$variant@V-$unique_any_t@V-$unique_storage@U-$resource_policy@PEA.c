/*
 * XREFs of ??1?$_Optional_destruct_base@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@$0A@@std@@QEAA@XZ @ 0x1805E3364
 * Callers:
 *     ??1?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1805E34EC (--1-$optional@V-$variant@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6A.c)
 *     ??1?$tuple@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x1805E3534 (--1-$tuple@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$optional@V-$variant@.c)
 *     ??1PinConsentPromptContent@@QEAA@XZ @ 0x1805E36A8 (--1PinConsentPromptContent@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetPinRequestPromptContent @ 0x1805E6520 (_anonymous_namespace_--GetPinRequestPromptContent.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1805EB6E0 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 *     _anonymous_namespace_::TryGetTargetDisplayInformation @ 0x1805EBB04 (_anonymous_namespace_--TryGetTargetDisplayInformation.c)
 * Callees:
 *     ?_Destroy@?$_Variant_base@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@QEAAXXZ @ 0x1805EC290 (-_Destroy@-$_Variant_base@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6.c)
 */

__int64 __fastcall std::_Optional_destruct_base<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>,0>::~_Optional_destruct_base<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>,0>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return std::_Variant_base<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>::_Destroy(a1);
  return result;
}
