/*
 * XREFs of ?InitializeViewDependent@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@6@@impl@winrt@@UEAAHHHPEAX_N@Z @ 0x18004F6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18004FA8C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 */

__int64 winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>::InitializeViewDependent(
        __int64 a1,
        int a2,
        __int64 a3,
        ...)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, a3);
  v4 = a1 + 76;
  if ( !a1 )
    v4 = 116LL;
  *(_DWORD *)v4 = a2;
  v5 = a1 + 80;
  if ( !a1 )
    v5 = 120LL;
  winrt::Windows::Foundation::IUnknown::operator=(v5, (__int64 *)va);
  return 0LL;
}
