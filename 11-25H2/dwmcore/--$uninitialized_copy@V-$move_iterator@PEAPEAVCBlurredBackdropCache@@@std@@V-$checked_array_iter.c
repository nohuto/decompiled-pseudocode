/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x18013CFC4
 * Callers:
 *     ?push_back@?$vector_facade@PEBVCVisualTree@@V?$buffer_impl@PEBVCVisualTree@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEBVCVisualTree@@@Z @ 0x1800207A0 (-push_back@-$vector_facade@PEBVCVisualTree@@V-$buffer_impl@PEBVCVisualTree@@$07$00Vliberal_expan.c)
 *     ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800405F8 (-clear_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBack.c)
 *     ??$insert@V?$span_iterator@PEAVCOverlayContext@@@details@gsl@@X@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@1@V?$basic_iterator@QEAVCOverlayContext@@@1@V?$span_iterator@PEAVCOverlayContext@@@details@gsl@@1@Z @ 0x18013D0F0 (--$insert@V-$span_iterator@PEAVCOverlayContext@@@details@gsl@@X@-$vector_facade@PEAVCOverlayCont.c)
 *     ?push_back@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCOverlayContext@@@Z @ 0x18013D3B4 (-push_back@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00Vliber.c)
 *     ?insert@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@AEBQEAVCOverlayContext@@@Z @ 0x18013D540 (-insert@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_.c)
 *     ?insert@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@AEBQEAVCOverlayContext@@@Z @ 0x18013D6E4 (-insert@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x18013D890 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ?clear_region@?$vector_facade@PEAVIRenderTarget@@V?$buffer_impl@PEAVIRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18013EE28 (-clear_region@-$vector_facade@PEAVIRenderTarget@@V-$buffer_impl@PEAVIRenderTarget@@$03$00Vlibera.c)
 *     std::_Func_impl_no_alloc__lambda_bf05f3608ca87f48c2ec569075cf1e18__void_CVisualTree___::_Do_call @ 0x180196020 (std--_Func_impl_no_alloc__lambda_bf05f3608ca87f48c2ec569075cf1e18__void_CVisualTree___--_Do_call.c)
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x1801C8990 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$0.c)
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_K@Z @ 0x1801F8300 (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x1800C33AC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v5; // rsi
  void *v8; // rdi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v8 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
                 a4,
                 (a3 - (__int64)a2) >> 3);
  memmove_0(v8, a2, v5);
  result = a1;
  a4[2] = (__int64)((__int64)v8 + v5 - *a4) >> 3;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
