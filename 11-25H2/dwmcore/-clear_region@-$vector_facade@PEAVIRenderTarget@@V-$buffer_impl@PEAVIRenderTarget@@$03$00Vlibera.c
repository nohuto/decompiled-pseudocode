/*
 * XREFs of ?clear_region@?$vector_facade@PEAVIRenderTarget@@V?$buffer_impl@PEAVIRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18013EE28
 * Callers:
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x18013F210 (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x18013FC00 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x180225DF8 (-RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 *     ??1?$vector_facade@PEAVIRenderTarget@@V?$buffer_impl@PEAVIRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180264CA4 (--1-$vector_facade@PEAVIRenderTarget@@V-$buffer_impl@PEAVIRenderTarget@@$03$00Vliberal_expansion.c)
 * Callees:
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x18013CFC4 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 */

void __fastcall detail::vector_facade<IRenderTarget *,detail::buffer_impl<IRenderTarget *,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  bool v9; // zf
  _QWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v6 = a2;
  v7 = (a1[1] - *a1) >> 3;
  v8 = a2 + a3;
  v9 = a2 + a3 == v7;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  if ( !v9 )
  {
    if ( v6 && (!v3 || v6 < 0 || v7 < v6) )
      _invalid_parameter_noinfo_noreturn();
    v10[1] = v7;
    v10[2] = v6;
    v10[0] = v3;
    std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
      (__int64)v11,
      (const void *)(v3 + 8 * v8),
      v3 + 8 * v7,
      v10);
  }
  a1[1] += -8 * a3;
}
