/*
 * XREFs of _dynamic_initializer_for__winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData__ @ 0x18000A950
 * Callers:
 *     <none>
 * Callees:
 *     ??$single_threaded_vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@winrt@@YA?AU?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@0@$$QEAV?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x1800DB3E0 (--$single_threaded_vector@URegistrationData@Shell@Internal@Windows@winrt@@V-$allocator@URegistra.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAURegistrationData@Shell@Internal@Windows@winrt@@QEAU12345@AEAV?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1801C61D0 (--$_Destroy_range@V-$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPE.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall dynamic_initializer_for__winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData__(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::RegistrationData *v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  *(_OWORD *)v2 = 0LL;
  v3 = 0LL;
  winrt::single_threaded_vector<winrt::Windows::Internal::Shell::RegistrationData,std::allocator<winrt::Windows::Internal::Shell::RegistrationData>>(
    a1,
    v2);
  if ( v2[0] )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::RegistrationData>>(v2[0]);
    std::_Deallocate<16,0>(v2[0], (v3 - (unsigned __int64)v2[0]) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData__);
}
