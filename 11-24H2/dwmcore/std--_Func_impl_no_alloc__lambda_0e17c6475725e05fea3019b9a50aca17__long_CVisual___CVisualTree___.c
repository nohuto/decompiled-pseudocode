/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0e17c6475725e05fea3019b9a50aca17__long_CVisual___CVisualTree___::_Copy @ 0x180282B80
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_0e17c6475725e05fea3019b9a50aca17__long_CVisual___CVisualTree_____lambda_0e17c6475725e05fea3019b9a50aca17____::_2_::_Guard_type::__Guard_type @ 0x180281F7C (_std--_Global_new_std--_Func_impl_no_alloc__lambda_0e17c6475725e05fea3019b9a50aca17__long_CVisua.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_0e17c6475725e05fea3019b9a50aca17__long_CVisual___CVisualTree___::_Copy(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  v5 = 0LL;
  v3 = v2;
  *(_QWORD *)v2 = &off_180307F50;
  *(_OWORD *)(v2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(v2 + 24) = *(_OWORD *)(a1 + 24);
  *(_OWORD *)(v2 + 40) = *(_OWORD *)(a1 + 40);
  *(_OWORD *)(v2 + 56) = *(_OWORD *)(a1 + 56);
  std::_Global_new_std::_Func_impl_no_alloc__lambda_0e17c6475725e05fea3019b9a50aca17__long_CVisual___CVisualTree_____lambda_0e17c6475725e05fea3019b9a50aca17____::_2_::_Guard_type::__Guard_type(&v5);
  return v3;
}
