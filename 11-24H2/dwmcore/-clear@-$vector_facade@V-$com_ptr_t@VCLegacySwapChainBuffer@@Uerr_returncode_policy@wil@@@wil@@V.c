/*
 * XREFs of ?clear@?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801B7030
 * Callers:
 *     ?ResetBuffers@CLegacySwapChain@@MEAAJXZ @ 0x1801B6390 (-ResetBuffers@CLegacySwapChain@@MEAAJXZ.c)
 *     ??1?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801B700C (--1-$vector_facade@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 * Callees:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801B62F4 (-clear_region@-$vector_facade@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,3,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax

  v2 = (a1[1] - *a1) >> 3;
  if ( v2 )
    return detail::vector_facade<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,3,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             a2,
             v2);
  return result;
}
