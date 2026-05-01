/*
 * XREFs of ?UpdateHotkeyRegistrations@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801EE79C
 * Callers:
 *     ?RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18023E718 (-RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b82422c86d7ccda9967e06660bac40e9___::Run @ 0x180359C10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b82422c86d7ccda9967e06660bac40e9___--Run.c)
 * Callees:
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18029F300 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     CreationThreadDispatcher::RunAsync__lambda_e4eb6362e1cdc9e778b44101f989de9d___ @ 0x180342C8C (CreationThreadDispatcher--RunAsync__lambda_e4eb6362e1cdc9e778b44101f989de9d___.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::UpdateHotkeyRegistrations(
        GamingOverlayExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // r8
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 125);
  if ( v4 )
  {
    v5 = (_QWORD *)winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                     &v8,
                     this,
                     v4,
                     a4);
    CreationThreadDispatcher::RunAsync__lambda_e4eb6362e1cdc9e778b44101f989de9d___(v6, *v5);
  }
  return 0LL;
}
