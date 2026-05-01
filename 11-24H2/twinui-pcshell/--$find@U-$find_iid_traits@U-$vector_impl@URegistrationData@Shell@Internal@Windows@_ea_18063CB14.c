/*
 * XREFs of ??$find@U?$find_iid_traits@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IVectorView@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IIterable@URegistrationData@Shell@Internal@Windows@winrt@@@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@@12@@Z @ 0x18063CB14
 * Callers:
 *     ??$find@U?$find_iid_traits@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IVectorView@URegistrationData@Shell@Internal@Windows@winrt@@@2345@U?$IIterable@URegistrationData@Shell@Internal@Windows@winrt@@@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@@12@@Z @ 0x18063CAD8 (--$find@U-$find_iid_traits@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$vec.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Internal::Shell::RegistrationData>>::find<winrt::impl::find_iid_traits<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::RegistrationData>>
    && v1[1] == 0x30C7424FE326C9ALL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Internal::Shell::RegistrationData>>
    && v1[1] == 0x59329F59ACAB9497LL )
  {
    v2 = *a1;
    v3 = *a1 + 32;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
