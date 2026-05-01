/*
 * XREFs of ?find_interface@?$implements@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@URegistrationData@Shell@Internal@Windows@winrt@@@5673@U?$IIterable@URegistrationData@Shell@Internal@Windows@winrt@@@5673@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180643020
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IVectorView@URegistrationData@Shell@Internal@Windows@winrt@@@2345@U?$IIterable@URegistrationData@Shell@Internal@Windows@winrt@@@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@@12@@Z @ 0x18063CAD8 (--$find@U-$find_iid_traits@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$vec.c)
 */

__int64 __fastcall winrt::implements<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Internal::Shell::RegistrationData>>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Internal::Shell::RegistrationData>>::find<winrt::impl::find_iid_traits<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>>>(v3);
}
