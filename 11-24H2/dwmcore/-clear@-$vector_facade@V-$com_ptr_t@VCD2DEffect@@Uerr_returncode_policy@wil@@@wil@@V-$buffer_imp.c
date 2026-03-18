/*
 * XREFs of ?clear@?$vector_facade@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18024A24C
 * Callers:
 *     ??1?$vector_facade@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18024A228 (--1-$vector_facade@V-$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl@V-.c)
 *     ??1?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAA@XZ @ 0x180274F28 (--1-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18024B3C0 (-clear_region@-$vector_facade@V-$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V-$buf.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( (__int64)(a1[1] - *a1) >> 3 )
    return detail::vector_facade<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL);
  return result;
}
