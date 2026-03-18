/*
 * XREFs of ?clear_region@?$vector_facade@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180202BD0
 * Callers:
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x1802B43C0 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@EEAAX.c)
 * Callees:
 *     ??$destruct_range@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x180202D04 (--$destruct_range@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@Y.c)
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x180251ABC (--$move@V-$move_iterator@PEAV-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  unsigned __int64 v6; // r10
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 result; // rax
  _QWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 3;
  if ( a2 + a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_10;
  }
  v7 = v3 + 8 * v6;
  if ( a2 + a3 != v6 )
  {
    if ( !a2 || v3 && a2 >= 0 && v6 >= a2 )
    {
      v10[2] = a2;
      v10[0] = v3;
      v10[1] = v6;
      ((void (__fastcall *)(_BYTE *, __int64, unsigned __int64, _QWORD *))std::move<std::move_iterator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy> *>>)(
        v11,
        v3 + 8 * (a2 + a3),
        v3 + 8 * v6,
        v10);
      goto LABEL_3;
    }
LABEL_10:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_3:
  v8 = 8 * a3;
  result = detail::destruct_range<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>(v7 - v8, v7);
  a1[1] -= v8;
  return result;
}
