/*
 * XREFs of ??1?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801B700C
 * Callers:
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1802C99D8 (--1CLegacySwapChain@@MEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801B7030 (-clear@-$vector_facade@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

int __fastcall detail::vector_facade<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,3,1,detail::liberal_expansion_policy>>::~vector_facade<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,3,1,detail::liberal_expansion_policy>>(
        void **a1)
{
  detail::vector_facade<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,3,1,detail::liberal_expansion_policy>>::clear(a1);
  return detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(a1);
}
