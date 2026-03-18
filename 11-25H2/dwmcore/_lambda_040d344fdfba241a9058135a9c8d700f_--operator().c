/*
 * XREFs of _lambda_040d344fdfba241a9058135a9c8d700f_::operator() @ 0x18028CD34
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_040d344fdfba241a9058135a9c8d700f__long_CVisual___CVisualTree___::_Do_call @ 0x18028E1F0 (std--_Func_impl_no_alloc__lambda_040d344fdfba241a9058135a9c8d700f__long_CVisual___C_ea_18028E1F0.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800B74B0 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?AddDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C3E90 (-AddDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_040d344fdfba241a9058135a9c8d700f_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rcx
  const struct D2D_RECT_F *v8; // rdx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF

  v2 = *a1;
  if ( !CVisualTree::_IsInTree(*(_QWORD *)(*a1 + 112LL), a2, 0) )
  {
    v5 = (__int64 *)a1[1];
    if ( CVisualTree::_IsInTree(*v5, a2, 0) )
    {
      v6 = *v5;
      v7 = a1[2];
      v10 = 0LL;
      v8 = (const struct D2D_RECT_F *)(v6 + 80);
      if ( a2 != *(_QWORD *)(v6 + 72) )
        v8 = (const struct D2D_RECT_F *)(a2 + 152);
      CMILMatrix::Transform2DBoundsHelper<0>(v7, v8, (float *)&v10);
      CTargetDirtyBase<8>::AddDirtyRect(v2 + 320, (float *)&v10);
    }
  }
  return 0LL;
}
