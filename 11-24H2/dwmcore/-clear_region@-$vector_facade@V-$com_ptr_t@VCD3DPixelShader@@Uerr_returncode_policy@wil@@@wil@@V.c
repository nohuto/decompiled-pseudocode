/*
 * XREFs of ?clear_region@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18006907C
 * Callers:
 *     ?ReleaseResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@AEAAXPEBVIDeviceResource@@@Z @ 0x180068FB4 (-ReleaseResource@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@AEAAXPEBVIDeviceReso.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180069054 (-clear@-$vector_facade@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V-$buffe.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x180069194 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800691E0 (--4-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 *v4; // r15
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  bool v10; // zf
  __int64 *v11; // rdi
  __int64 *v12; // rsi
  __int64 *v13; // rbx
  __int64 v14; // rsi
  __int64 result; // rax
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *a1;
  v4 = a1 + 1;
  v6 = a1[1] - *a1;
  v7 = a2 + a3;
  v8 = v6 >> 3;
  v10 = a2 + a3 == v8;
  if ( a2 + a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v11 = (__int64 *)(v3 + 8 * v8);
  v12 = v4;
  if ( !v10 )
  {
    if ( a2 && (!v3 || a2 < 0 || v8 < a2) )
      _invalid_parameter_noinfo_noreturn();
    v16[2] = a2;
    v13 = (__int64 *)(v3 + 8 * v7);
    v16[0] = v3;
    v16[1] = v8;
    v14 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
            v16,
            v11 - v13)
        - (_QWORD)v13;
    while ( v13 != v11 )
    {
      wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=((char *)v13 + v14, v13);
      ++v13;
    }
    v12 = a1 + 1;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
    &v11[-a3],
    v11);
  result = *v4 - 8 * a3;
  *v12 = result;
  return result;
}
