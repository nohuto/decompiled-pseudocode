/*
 * XREFs of ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009DD18
 * Callers:
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x18009DE70 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800D65EC (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1800D687C (--1hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     _winrt::to_hresult_::_1_::catch$21 @ 0x1800EEA81 (_winrt--to_hresult_--_1_--catch$21.c)
 *     _winrt::to_hresult_::_1_::catch$22 @ 0x1800EEB24 (_winrt--to_hresult_--_1_--catch$22.c)
 *     _winrt::to_hresult_::_1_::catch$23 @ 0x1800EEBC7 (_winrt--to_hresult_--_1_--catch$23.c)
 * Callees:
 *     WINRT_IMPL_SysFreeString @ 0x18005E835 (WINRT_IMPL_SysFreeString.c)
 */

void __fastcall winrt::handle_type<winrt::impl::bstr_traits>::close(OLECHAR **a1)
{
  OLECHAR *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    WINRT_IMPL_SysFreeString(v2);
    *a1 = 0LL;
  }
}
