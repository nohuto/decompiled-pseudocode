/*
 * XREFs of _winrt::to_hresult_::_1_::catch$17 @ 0x1801D4399
 * Callers:
 *     <none>
 * Callees:
 *     ??$to_hstring@PEBD$0A@@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1800A6D10 (--$to_hstring@PEBD$0A@@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@AEBUslim_source_location@impl@1@@Z @ 0x1800A6F68 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1hresult_error@winrt@@QEAA@XZ @ 0x1800A7440 (--1hresult_error@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800A7B28 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1800A8268 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::to_hresult_::_1_::catch_17(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  *(_DWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 168) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 136) + 8LL))(*(_QWORD *)(a2 + 136));
  *(_QWORD *)(a2 + 80) = *winrt::to_hstring<char const *,0>(
                            (struct winrt::impl::shared_hstring_header **)(a2 + 176),
                            (const CHAR **)(a2 + 168));
  v3 = winrt::hresult_error::hresult_error(a2 + 56, 2147500037LL, (_QWORD *)(a2 + 80));
  winrt::hresult_error::to_abi(v3, *(_DWORD **)(a2 + 160));
  winrt::hresult_error::~hresult_error((winrt::hresult_error *)(a2 + 56));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 176));
  return 0LL;
}
