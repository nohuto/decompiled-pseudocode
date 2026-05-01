/*
 * XREFs of ?put_IsImmersiveModeSupported@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAH_N@Z @ 0x18065DA50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18065AD7C (-IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::put_IsImmersiveModeSupported(
        __int64 a1,
        unsigned __int8 a2)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsImmersiveModeSupported(
    (RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0)),
    a2);
  return 0LL;
}
