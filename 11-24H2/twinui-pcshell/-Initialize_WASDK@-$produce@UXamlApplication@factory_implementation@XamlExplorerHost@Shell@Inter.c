/*
 * XREFs of ?Initialize_WASDK@?$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplicationStatics@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18044F460
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize_WASDK@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@XZ @ 0x18044F498 (-Initialize_WASDK@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>::Initialize_WASDK(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  *a2 = 0LL;
  try
  {
    winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::Initialize_WASDK();
    *a2 = v4;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
