/*
 * XREFs of ??0hresult_out_of_bounds@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1800E0504
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800E3994 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1800E0268 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 */

__int64 __fastcall winrt::hresult_out_of_bounds::hresult_out_of_bounds(__int64 a1, __int64 a2, unsigned int *a3)
{
  winrt::hresult_error::hresult_error(a1, winrt::impl::error_out_of_bounds, (__int64)a3, a3);
  return a1;
}
