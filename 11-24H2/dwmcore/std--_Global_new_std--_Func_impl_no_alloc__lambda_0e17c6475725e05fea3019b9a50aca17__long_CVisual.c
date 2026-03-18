/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_0e17c6475725e05fea3019b9a50aca17__long_CVisual___CVisualTree_____lambda_0e17c6475725e05fea3019b9a50aca17___ @ 0x180281ECC
 * Callers:
 *     ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802364E0 (-RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_0e17c6475725e05fea3019b9a50aca17__long_CVisual___CVisualTree_____lambda_0e17c6475725e05fea3019b9a50aca17____::_2_::_Guard_type::__Guard_type @ 0x180281F7C (_std--_Global_new_std--_Func_impl_no_alloc__lambda_0e17c6475725e05fea3019b9a50aca17__long_CVisua.c)
 */

__int64 __fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_0e17c6475725e05fea3019b9a50aca17__long_CVisual___CVisualTree_____lambda_0e17c6475725e05fea3019b9a50aca17___(
        _OWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  v5 = 0LL;
  v3 = v2;
  *(_QWORD *)v2 = &off_180307F50;
  *(_OWORD *)(v2 + 8) = *a1;
  *(_OWORD *)(v2 + 24) = a1[1];
  *(_OWORD *)(v2 + 40) = a1[2];
  *(_OWORD *)(v2 + 56) = a1[3];
  std::_Global_new_std::_Func_impl_no_alloc__lambda_0e17c6475725e05fea3019b9a50aca17__long_CVisual___CVisualTree_____lambda_0e17c6475725e05fea3019b9a50aca17____::_2_::_Guard_type::__Guard_type(&v5);
  return v3;
}
