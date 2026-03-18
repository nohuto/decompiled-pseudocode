/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1800692D4
 * Callers:
 *     ??$emplace@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@1@V?$basic_iterator@$$CBV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@1@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180043CEC (--$emplace@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@-$vector_facade@V-$.c)
 *     ?reserve_region@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@_K0@Z @ 0x1800FD288 (-reserve_region@-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$defau.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801B69D4 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_polic.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801FDD9C (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18021D99C (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18022EBD0 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x180069194 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *v4; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v4 = a2;
  v8 = (_QWORD *)std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
                   a4,
                   a3 - a2);
  while ( v4 != a3 )
  {
    v9 = *v4;
    *v4 = 0LL;
    *v8++ = v9;
    ++v4;
  }
  a4[2] = ((__int64)v8 - *a4) >> 3;
  result = a1;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
