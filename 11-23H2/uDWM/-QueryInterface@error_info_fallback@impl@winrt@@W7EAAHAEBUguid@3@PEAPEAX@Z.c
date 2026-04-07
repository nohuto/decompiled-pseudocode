/*
 * XREFs of ?QueryInterface@error_info_fallback@impl@winrt@@W7EAAHAEBUguid@3@PEAPEAX@Z @ 0x1800663E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::error_info_fallback::QueryInterface(
        __int64 a1,
        const struct winrt::guid *a2,
        void **a3)
{
  return winrt::impl::error_info_fallback::QueryInterface((winrt::impl::error_info_fallback *)(a1 - 8), a2, a3);
}
