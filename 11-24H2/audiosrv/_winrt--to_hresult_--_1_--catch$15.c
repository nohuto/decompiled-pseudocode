/*
 * XREFs of _winrt::to_hresult_::_1_::catch$15 @ 0x18016F45E
 * Callers:
 *     <none>
 * Callees:
 *     ??$to_hstring@PEBD$0A@@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1800E3750 (--$to_hstring@PEBD$0A@@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@AEBUslim_source_location@impl@1@@Z @ 0x1800E3A0C (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1hresult_error@winrt@@QEAA@XZ @ 0x1800E4144 (--1hresult_error@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800E7CA0 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1800E8AE8 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::to_hresult_::_1_::catch_15(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 56) = 0;
  *(_OWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 168) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 120) + 8LL))(*(_QWORD *)(a2 + 120));
  *(_QWORD *)(a2 + 80) = *winrt::to_hstring<char const *,0>(
                            (struct winrt::impl::shared_hstring_header **)(a2 + 176),
                            (const CHAR **)(a2 + 168));
  winrt::hresult_error::hresult_error(a2 + 32, winrt::impl::error_out_of_bounds, (_QWORD *)(a2 + 80));
  winrt::hresult_error::to_abi(a2 + 32, *(_DWORD **)(a2 + 160));
  winrt::hresult_error::~hresult_error((winrt::hresult_error *)(a2 + 32));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 176));
  return 0LL;
}
