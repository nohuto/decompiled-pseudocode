/*
 * XREFs of ??0hresult_changed_state@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E87CC
 * Callers:
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x1800EABAC (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800E87F4 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 */

winrt::hresult_changed_state *__fastcall winrt::hresult_changed_state::hresult_changed_state(
        winrt::hresult_changed_state *this,
        const struct winrt::impl::slim_source_location *a2)
{
  winrt::hresult_error::hresult_error(this, winrt::impl::error_changed_state, a2);
  return this;
}
