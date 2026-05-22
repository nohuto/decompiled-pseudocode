/*
 * XREFs of _lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::operator() @ 0x1801C30F8
 * Callers:
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_c6db7401cba5f9fe705df5cb0dba3b7a___ @ 0x1801C246C (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_Microsoft--WRL--ComPtr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

char __fastcall lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::operator()(__int64 a1, __int64 *a2)
{
  char v3; // bl

  if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) == *(_QWORD *)(*a2 + 24)
    && *(_DWORD *)(*(_QWORD *)a1 + 32LL) == *(_DWORD *)(*a2 + 32) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v3;
}
