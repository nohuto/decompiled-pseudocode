/*
 * XREFs of ?ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ @ 0x18058D188
 * Callers:
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18058D2A8 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 * Callees:
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18029F300 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     _lambda_0d6ddfb9cb28f2ff155e4d8a1128ccbc_::operator() @ 0x18058C7E8 (_lambda_0d6ddfb9cb28f2ff155e4d8a1128ccbc_--operator().c)
 *     _lambda_3f008998f07e239b518a74c6a95e8a8e_::operator() @ 0x18058CA58 (_lambda_3f008998f07e239b518a74c6a95e8a8e_--operator().c)
 *     _lambda_498a005a5cf0d6ec0722f3aba4e990a2_::operator() @ 0x18058CBFC (_lambda_498a005a5cf0d6ec0722f3aba4e990a2_--operator().c)
 *     _lambda_a52ede4a43d16daf4adcd8b06664ad67_::operator() @ 0x18058CD00 (_lambda_a52ede4a43d16daf4adcd8b06664ad67_--operator().c)
 */

char __fastcall TouchEdgeGestureManager::ShouldStartGesture(TouchEdgeGestureManager *this)
{
  __int64 v1; // rdx
  char v2; // bl
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
    &v4,
    (__int64)this);
  v5 = v1;
  winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
    &v6,
    v1);
  v2 = 0;
  if ( !lambda_498a005a5cf0d6ec0722f3aba4e990a2_::operator()()
    && !lambda_a52ede4a43d16daf4adcd8b06664ad67_::operator()((__int64)&v4)
    && !lambda_3f008998f07e239b518a74c6a95e8a8e_::operator()(&v5) )
  {
    return !lambda_0d6ddfb9cb28f2ff155e4d8a1128ccbc_::operator()(&v6);
  }
  return v2;
}
