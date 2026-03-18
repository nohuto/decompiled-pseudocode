/*
 * XREFs of ?clear_region@?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801B62F4
 * Callers:
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801B7030 (-clear@-$vector_facade@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V.c)
 * Callees:
 *     ??$destruct_range@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1801B699C (--$destruct_range@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@detai.c)
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1802C9474 (--$move@V-$move_iterator@PEAV-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@w.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,3,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 result; // rax
  _QWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v5 = (a1[1] - *a1) >> 3;
  v6 = a3 == v5;
  if ( a3 > v5 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v7 = v3 + 8 * v5;
  v8 = 8 * a3;
  if ( !v6 )
  {
    v10[2] = 0LL;
    v10[0] = v3;
    v10[1] = v5;
    ((void (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move<std::move_iterator<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy> *>>)(
      v11,
      v8 + v3,
      v7,
      v10);
  }
  result = detail::destruct_range<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>>(v7 - v8, v7);
  a1[1] -= v8;
  return result;
}
