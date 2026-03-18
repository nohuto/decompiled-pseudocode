/*
 * XREFs of ??$destruct_range@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1801C6794
 * Callers:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801C5DB4 (-clear_region@-$vector_facade@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801C6530 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801C67CC (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_polic.c)
 * Callees:
 *     ??1?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801C6714 (--1-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall detail::destruct_range<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>::~com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
