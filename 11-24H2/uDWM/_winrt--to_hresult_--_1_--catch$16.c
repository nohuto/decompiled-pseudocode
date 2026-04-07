/*
 * XREFs of _winrt::to_hresult_::_1_::catch$16 @ 0x1800F8847
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009A53C (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1800A0C24 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 *     ??$to_hstring@PEBD$0A@@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1800DE43C (--$to_hstring@PEBD$0A@@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@AEBUslim_source_location@impl@1@@Z @ 0x1800DE594 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1hresult_error@winrt@@QEAA@XZ @ 0x1800DE644 (--1hresult_error@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::to_hresult_::_1_::catch_16(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 168) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 128) + 8LL))(*(_QWORD *)(a2 + 128));
  *(_QWORD *)(a2 + 80) = *winrt::to_hstring<char const *,0>(
                            (struct winrt::impl::shared_hstring_header **)(a2 + 176),
                            (const CHAR **)(a2 + 168));
  winrt::hresult_error::hresult_error(a2 + 56, winrt::impl::error_invalid_argument, (_QWORD *)(a2 + 80));
  winrt::hresult_error::to_abi(a2 + 56, *(_DWORD **)(a2 + 160));
  winrt::hresult_error::~hresult_error((OLECHAR **)(a2 + 56));
  winrt::handle_type<winrt::impl::hstring_traits>::close((void **)(a2 + 176));
  return 0LL;
}
