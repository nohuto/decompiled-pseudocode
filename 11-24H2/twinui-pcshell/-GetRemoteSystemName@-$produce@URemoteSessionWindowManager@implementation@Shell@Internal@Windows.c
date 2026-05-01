/*
 * XREFs of ?GetRemoteSystemName@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18065A7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetRemoteSystemName@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBA?AUhstring@6@XZ @ 0x18065A7F4 (-GetRemoteSystemName@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEB.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::GetRemoteSystemName(
        volatile signed __int32 *a1,
        _QWORD *a2)
{
  __int64 *RemoteSystemName; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  *a2 = 0LL;
  try
  {
    RemoteSystemName = (__int64 *)winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::GetRemoteSystemName();
    v4 = *RemoteSystemName;
    *RemoteSystemName = 0LL;
    *a2 = v4;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
